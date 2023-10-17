using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class CPUImages : MonoBehaviour
{
    public RawImage CameraRawImage;

    private ARCameraManager _cameraManager;
    private Texture2D _cameraTexture;
    private XRCpuImage _lastCpuImage;

    public void Start()
    {
        _cameraManager.frameReceived += OnFrameReceived;
    }

    private void OnFrameReceived(ARCameraFrameEventArgs args)
    {
        _lastCpuImage = new XRCpuImage();
        if (!_cameraManager.TryAcquireLatestCpuImage(out _lastCpuImage))
        {
            return;
        }

        UpdateCameraTexture(_lastCpuImage);
    }

    private unsafe void UpdateCameraTexture(XRCpuImage image)
    {
        var format = TextureFormat.RGBA32;

        if (_cameraTexture == null || _cameraTexture.width != image.width || _cameraTexture.height != image.height)
        {
            _cameraTexture = new Texture2D(image.width, image.height, format, false);
        }

        var conversionParams = new XRCpuImage.ConversionParams(image, format);
        var rawTextureData = _cameraTexture.GetRawTextureData<byte>();

        try
        {
            image.Convert(conversionParams, new IntPtr(rawTextureData.GetUnsafePtr()), rawTextureData.Length);
        }
        finally
        {
            image.Dispose();
        }

        _cameraTexture.Apply();
        CameraRawImage.texture = _cameraTexture;
    }
}
