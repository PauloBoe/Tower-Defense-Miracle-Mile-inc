// /******************************************************************************
//  * File: DistalInteractorsManager.cs
//  * Copyright (c) 2023 Qualcomm Technologies, Inc. and/or its subsidiaries. All rights reserved.
//  *
//  *
//  ******************************************************************************/

using QCHT.Interactions.Distal;
using UnityEngine;

namespace QCHT.Samples.Menu
{
    public class DistalInteractorsManager : MonoBehaviour
    {
        [SerializeField] private XrDistalInteractorType StartingDistalInteractor = XrDistalInteractorType.Pointer;
        [SerializeField] private GameObject _xrPointerLeft, _xrPointerRight;
        [SerializeField] private GameObject _xrGaze;

        private void Start()
        {
            SwitchTo(StartingDistalInteractor);
        }

        public void SwitchTo(XrDistalInteractorType distalInteractor)
        {
            if (distalInteractor == XrDistalInteractorType.None) return;
            _xrPointerLeft.SetActive(distalInteractor == XrDistalInteractorType.Pointer);
            _xrPointerRight.SetActive(distalInteractor == XrDistalInteractorType.Pointer);
            _xrGaze.SetActive(distalInteractor == XrDistalInteractorType.Gaze);
        }
    }
}