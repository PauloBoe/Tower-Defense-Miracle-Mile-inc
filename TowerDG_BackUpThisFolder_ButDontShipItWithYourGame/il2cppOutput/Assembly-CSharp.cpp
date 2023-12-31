﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single>
struct Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single>
struct Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter>
struct ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct HashSetList_1_tC1DD99D75EB047082BD9E0C1091C02E0C288AA9D;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable>
struct HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>
struct HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.Transform[]>
struct List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<System.Data.DataColumn>
struct List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785;
// System.Collections.Generic.List`1<System.Data.DataView>
struct List_1_t1CDDD861715A83BE1EF98CE75870A483BB5ECC93;
// System.Collections.Generic.List`1<System.Data.DataViewListener>
struct List_1_t73C786BB01E05FA7B2ACAA21DA57002B4503C95F;
// System.Collections.Generic.List`1<Enemy>
struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B;
// System.Collections.Generic.List`1<EnemySpawnInfo>
struct List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Data.Index>
struct List_1_tD455920B93EB13CDFF946088629D287A8D3CA973;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.Transform[][]
struct TransformU5BU5DU5BU5D_t625BB417C40FB7670C7151BE6A8F2712DAED95E0;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA;
// System.Data.DataRelation[]
struct DataRelationU5BU5D_t1640C9372BDC91DAE0359E08BE1E91AE48924FF0;
// System.Data.DataRow[]
struct DataRowU5BU5D_t2A0D4483B27757FE7345A2E7FE5727C7F77DE5D4;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Enemy[]
struct EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F;
// EnemySpawnInfo[]
struct EnemySpawnInfoU5BU5D_t69261B6AA9BED0D02A4B56ADDD444CB4CF899BC6;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Data.IndexField[]
struct IndexFieldU5BU5D_t2E1FE07C5E6C8080FCF4908199FFDFEBA1EECA3E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.Mathematics.float3[]
struct float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// ARCursor
struct ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Base
struct Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// BasicTower
struct BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Blueprint
struct Blueprint_t4D325CBE4D5D4EDDCF658390415CB75DCCA813C5;
// BuildTower
struct BuildTower_t7DA92A53D8D4D593759E7C86168099769CA97601;
// BuildingSlot
struct BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E;
// CPUHealth
struct CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A;
// CPU_HP_Bar
struct CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CircleSpawner
struct CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Data.ConstraintCollection
struct ConstraintCollection_tE6135623B0068FD56F0D15E13FFA1882D36BDD40;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Data.DataColumn
struct DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959;
// System.Data.DataColumnCollection
struct DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E;
// System.Data.DataExpression
struct DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6;
// System.Data.DataRelationCollection
struct DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956;
// System.Data.DataRowBuilder
struct DataRowBuilder_t8EFCEBE1AE55392AAE53DA15D2B334C56BB14566;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF;
// System.Data.DataRowCollection
struct DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738;
// System.Data.DataSet
struct DataSet_t1F72E9737C995EBFDCF793C87CAC3196EA02411B;
// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07;
// System.Data.DataTableClearEventHandler
struct DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t874CE0332A55E1F8A8CF67458AF71CE73975D827;
// System.Data.DataView
struct DataView_t882C19B1455AFCE770D60A43A690096801824A50;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBDB6D2EF6F0141DD2C828725F439100C72FF9AA2;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyData
struct EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD;
// EnemyManager
struct EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7;
// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C;
// EnemyPoof
struct EnemyPoof_tF8C408EABC29D4D45DD2087D042AD8B2D7C213A2;
// EnemySpawnInfo
struct EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671;
// Entity
struct Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent
struct FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90;
// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent
struct FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D;
// GizmoTest
struct GizmoTest_tEA5B922C06F03C88038FD7F11A7FAFB4AF882827;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Health
struct Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Assets.Scripts.IDamageable
struct IDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// System.Data.Index
struct Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LazerTower
struct LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MissileTower
struct MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveTable
struct MoveTable_tE26FD4C69D771531282866DF51A522086B597906;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t71FD3DF944E5F7393991C5281505C3EB294681B3;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t74372AEBDD5049CA2AEE7BCA7AB100669B7225AD;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane
struct PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019;
// PointManager
struct PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9;
// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.Data.PropertyCollection
struct PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_tC4C2FA51126BD032E2E9A0472995F7FCAC6E70DE;
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906;
// System.Data.RecordManager
struct RecordManager_t5525269209BE5391607F8C811470AC2EC5C8FA4A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache
struct RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RotationScript
struct RotationScript_tA34053DCE5A737D7E5655C37319E797668554E43;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TableCanvas
struct TableCanvas_t092E97967B20B5C52670DD8E51DC3F352A3BC7AE;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// TileManager
struct TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5;
// Tower
struct Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6;
// TowerBase
struct TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE;
// TowerEvolutions
struct TowerEvolutions_t9B575A547B4192112C671D2BA526899015FB76A4;
// TowerUI
struct TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent
struct UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298;
// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent
struct UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B;
// System.Data.UniqueConstraint
struct UniqueConstraint_tE48A79D2F7DE0EA4A3F1BF5BB322C383E60465F6;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController
struct XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17;
// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable
struct XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79;
// BasicTower/<FireCoroutine>d__8
struct U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245;
// CPUHealth/<>c
struct U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// CircleSpawner/<SpawnWaves>d__18
struct U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017;
// Health/HealthChangeHandler
struct HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D;
// Health/OnHealthZero
struct OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F;
// LazerTower/<FireCoroutine>d__4
struct U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MissileTower/<FireCoroutine>d__5
struct U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199;
// MoveTable/<StartTableMove>d__9
struct U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2;
// PointManager/<DisplayError>d__10
struct U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d
struct U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51;
// TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d
struct U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E1603D9553C96473C8E3BB5B90B23959EEA231;
IL2CPP_EXTERN_C String_t* _stringLiteral0401F9A31E5178BAA799AD64639505600D3C1F41;
IL2CPP_EXTERN_C String_t* _stringLiteral04A5D0CE80F901F4369E22D6735CE10348854F99;
IL2CPP_EXTERN_C String_t* _stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A;
IL2CPP_EXTERN_C String_t* _stringLiteral05D3939439D3A37A5199882D1923E467EA10FD21;
IL2CPP_EXTERN_C String_t* _stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7;
IL2CPP_EXTERN_C String_t* _stringLiteral0A9CFAD0743A28D26A28D8AB048D74415726C04C;
IL2CPP_EXTERN_C String_t* _stringLiteral0AE3E8F405EE8D97738F6731F686F87FFB976637;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD73D4462951E55D648FF70D2790485FB3AA006;
IL2CPP_EXTERN_C String_t* _stringLiteral12498721016E27B3ADAA935618DCC691C087329B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral3153B68FFA558BA249E3E22F1978F6474164B08D;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral40294F43391005F33D34B4D374DA5A59AD11ACB6;
IL2CPP_EXTERN_C String_t* _stringLiteral40512FD4C6B22E651FFC0EFF479EB08E7B146127;
IL2CPP_EXTERN_C String_t* _stringLiteral448561667CB65F3BB53EB198C15E4F84041D4C78;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4E38CBB93EA6D0F9E03A4C20355AFB8FAE481C44;
IL2CPP_EXTERN_C String_t* _stringLiteral56252775316C3B42323C8B339331F64D8144886F;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC9E039324DDB82B6801B1846C1987DF1F4AFCC;
IL2CPP_EXTERN_C String_t* _stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4;
IL2CPP_EXTERN_C String_t* _stringLiteral5F23787A74D6E043D27739EFE52B3B1094EBA744;
IL2CPP_EXTERN_C String_t* _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral7798021C4CB89EF713D43E7F79D9A934FD6A532C;
IL2CPP_EXTERN_C String_t* _stringLiteral78148FAF9CBB6A9DFE9F2656F14ED37612629E37;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7E78D40E30531AB61F88EFDD4F0E346BFEA737EB;
IL2CPP_EXTERN_C String_t* _stringLiteral87ED58E5539A34BD8452C78BCE0DFBE4FC531CF6;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA1700BA65B7D42C6475C682FCE5E4A3B0B9119;
IL2CPP_EXTERN_C String_t* _stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5A371DDF962DC30CAEC43208F86C6956AD22A0;
IL2CPP_EXTERN_C String_t* _stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392;
IL2CPP_EXTERN_C String_t* _stringLiteralB5A2D14572900DEBC60EA4427921354FBEC2A9AF;
IL2CPP_EXTERN_C String_t* _stringLiteralB5CAA1FD22433D767BB1756512BA9BEB7DFE2789;
IL2CPP_EXTERN_C String_t* _stringLiteralC741F0DF4B5067DBEBA84E21CAB091AEBCB9C83F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE822EA2EB86923ED192DBD6B53475B57B91D3E6;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D070A744FB1A80E3B846C9498FDE3DC2E69E2E;
IL2CPP_EXTERN_C String_t* _stringLiteralD86072660D36169D57F3DBFF16C289D4EAD57856;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8;
IL2CPP_EXTERN_C String_t* _stringLiteralDDFB472E0AF31358F6926D492F1141D32C0AE7FD;
IL2CPP_EXTERN_C String_t* _stringLiteralE40D612F754E084439D9C4A7DCA12C14FF612F18;
IL2CPP_EXTERN_C String_t* _stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4;
IL2CPP_EXTERN_C String_t* _stringLiteralF21700510B497B89FEE85DE675D6E241730F23A7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9368F04BED6FFEC3153A4D4D02F508005AFE43B;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CPU_HP_Bar_EvaluateHealthBar_mCEC85F47BCEE2BFB9CF4650B517B38EC00205E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CPU_HP_Bar_OnCPUPositionMoved_mA7AF950A6DC15F26DAD84D11A52C291426C65451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBase_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_m6E52D4C0084CC74A321DA4E3BDE2901806DDCBAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m14EFF6A1CFB486084313526C03D96BC0FBECBC87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m9F12EB59D8AE998A7A00E444979EA9AEE901C91C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m406436B9880CB839FEDFE181454BA264EFDCDA5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9B53C3D04EDC545CD4D52D8F65FA2321BD32FB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC641817940F1C4B295872ED7EB776AEF65043B67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA5B7D20652BEAEAD9CD56E1D3D29CC97527F99A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF19A0C6189F7B91B8CCD0DDC457D66F2A161BA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1AF923779EA798B6D54040FA67531B1F5F1EC323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B9B1A747080AB8D9CC87B61C1FA40EFDEFFDDBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m69BC7F46EBDC34A6B391254C18CC3ED56CA43D6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF339CC78F2107267AD248D1D5678D8DFC786D482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E_m52075F1521A5FE8E76708B700A9B19189BC4EBDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3_mF68E94BD983723041747CF9977E3AD1393FD99B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m8AE607A96672ADD12291B4FE0CAF25D5733471A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_m2FCA4C9367EB0BEAF6F57C992A266D8EE27964CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_mB3889B31D5E3778CC59FAE8A210D08F1FCCD2DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameOver_ShowGameOverCanvas_m7DD5F9A6FE8702EF372F4B2E5320277AE16820D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0A8258727C1434280EB076545170B0CC4F0904C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9003AF9B54BE295F92A0C82D835F2283BA678186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC5870D0A89C1865160880889C9F7BA3B0B3F9453_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m709F11AA4127C251BFFF6D852ADF299B29B0D469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TowerBase_Init_m811250826A313FC3EEF56863EED78C898E21DBD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisplayErrorU3Ed__10_System_Collections_IEnumerator_Reset_mD08A03EF4EE02BAE5CD579185FBDDC23E1074F34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mD5383C105E604029243B0B26AE45DA33ADB9602A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m1E93E670EECB78780A24F55EDD778288EC7DBBE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireCoroutineU3Ed__8_System_Collections_IEnumerator_Reset_m3D68B3120E87FA99F4D5F827A7748CD6BFCE186A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnWavesU3Ed__18_System_Collections_IEnumerator_Reset_mD0539B00594486A4F283EE9540D0F0D0CE9C9A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartTableMoveU3Ed__9_System_Collections_IEnumerator_Reset_mB5EF08BAB6E10CBDEC6EB6960083D9B4CB8E2D02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_System_Collections_IEnumerator_Reset_m98C4FABF0888F8910BA1C9D8E8F5E288724CF0DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_System_Collections_IEnumerator_Reset_mCB5F0E4CFFFEE954918D7C6943876CBCA3DE90C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__12_0_m6A6FAB6FABA38FEF34178B3CC7ED42605A4933F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__12_1_m92E5321ED57006BED90322573D83693D8EB6F4DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__12_2_m2EE3A853DA2804FEA6B8C2CF9145A83F537351B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m3A62F3E5102AAC7BC79F38556732E155D55FF716_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<UnityEngine.Transform[]>
struct List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5DU5BU5D_t625BB417C40FB7670C7151BE6A8F2712DAED95E0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Enemy>
struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<EnemySpawnInfo>
struct List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EnemySpawnInfoU5BU5D_t69261B6AA9BED0D02A4B56ADDD444CB4CF899BC6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// EnemySpawnInfo
struct EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671  : public RuntimeObject
{
	// EnemyData EnemySpawnInfo::enemyType
	EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* ___enemyType_0;
	// System.Int32 EnemySpawnInfo::enemyCount
	int32_t ___enemyCount_1;
};

// System.ComponentModel.MarshalByValueComponent
struct MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA  : public RuntimeObject
{
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::_site
	RuntimeObject* ____site_1;
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::_events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ____events_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// RigidbodyExtentions
struct RigidbodyExtentions_t5534CB8638060A5EB30D67D8895D4EFCCCFFB71E  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// BasicTower/<FireCoroutine>d__8
struct U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245  : public RuntimeObject
{
	// System.Int32 BasicTower/<FireCoroutine>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BasicTower/<FireCoroutine>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BasicTower BasicTower/<FireCoroutine>d__8::<>4__this
	BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* ___U3CU3E4__this_2;
};

// CPUHealth/<>c
struct U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D  : public RuntimeObject
{
};

// CircleSpawner/<SpawnWaves>d__18
struct U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017  : public RuntimeObject
{
	// System.Int32 CircleSpawner/<SpawnWaves>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CircleSpawner/<SpawnWaves>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CircleSpawner CircleSpawner/<SpawnWaves>d__18::<>4__this
	CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* ___U3CU3E4__this_2;
};

// LazerTower/<FireCoroutine>d__4
struct U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591  : public RuntimeObject
{
	// System.Int32 LazerTower/<FireCoroutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LazerTower/<FireCoroutine>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LazerTower LazerTower/<FireCoroutine>d__4::<>4__this
	LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* ___U3CU3E4__this_2;
	// UnityEngine.GameObject LazerTower/<FireCoroutine>d__4::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_3;
};

// MissileTower/<FireCoroutine>d__5
struct U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199  : public RuntimeObject
{
	// System.Int32 MissileTower/<FireCoroutine>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MissileTower/<FireCoroutine>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MissileTower MissileTower/<FireCoroutine>d__5::<>4__this
	MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* ___U3CU3E4__this_2;
	// UnityEngine.GameObject MissileTower/<FireCoroutine>d__5::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_3;
};

// MoveTable/<StartTableMove>d__9
struct U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2  : public RuntimeObject
{
	// System.Int32 MoveTable/<StartTableMove>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MoveTable/<StartTableMove>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MoveTable MoveTable/<StartTableMove>d__9::<>4__this
	MoveTable_tE26FD4C69D771531282866DF51A522086B597906* ___U3CU3E4__this_2;
};

// PointManager/<DisplayError>d__10
struct U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2  : public RuntimeObject
{
	// System.Int32 PointManager/<DisplayError>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PointManager/<DisplayError>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PointManager PointManager/<DisplayError>d__10::<>4__this
	PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* ___U3CU3E4__this_2;
};

// TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d
struct U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51  : public RuntimeObject
{
	// System.Int32 TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TowerBase TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::<>4__this
	TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* ___U3CU3E4__this_2;
	// System.Int32 TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d
struct U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C  : public RuntimeObject
{
	// System.Int32 TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TowerBase TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::<>4__this
	TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* ___U3CU3E4__this_2;
	// System.Int32 TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// System.Collections.Generic.List`1/Enumerator<Enemy>
struct Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<EnemySpawnInfo>
struct Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.ValueTuple`2<UnityEngine.GameObject,System.Single>
struct ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 
{
	// T1 System.ValueTuple`2::Item1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	float ___Item2_1;
};

// System.ValueTuple`2<System.Object,System.Single>
struct ValueTuple_2_t9E1CBCEC084647867B410B3732DA4AF1A958BC33 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	float ___Item2_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tBDB6D2EF6F0141DD2C828725F439100C72FF9AA2  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t71FD3DF944E5F7393991C5281505C3EB294681B3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t74372AEBDD5049CA2AEE7BCA7AB100669B7225AD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07  : public MarshalByValueComponent_t19E5966D1CE2F9ED341EB16C060BA573F63AEDAA
{
	// System.Data.DataSet System.Data.DataTable::_dataSet
	DataSet_t1F72E9737C995EBFDCF793C87CAC3196EA02411B* ____dataSet_3;
	// System.Data.DataView System.Data.DataTable::_defaultView
	DataView_t882C19B1455AFCE770D60A43A690096801824A50* ____defaultView_4;
	// System.Int64 System.Data.DataTable::_nextRowID
	int64_t ____nextRowID_5;
	// System.Data.DataRowCollection System.Data.DataTable::_rowCollection
	DataRowCollection_t77048F68C7B973AFF280E6C540CE321E242FF738* ____rowCollection_6;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t8F6538DA2E98DED6F9FBD06C4C475533A548630E* ____columnCollection_7;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_tE6135623B0068FD56F0D15E13FFA1882D36BDD40* ____constraintCollection_8;
	// System.Int32 System.Data.DataTable::_elementColumnCount
	int32_t ____elementColumnCount_9;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelationsCollection
	DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956* ____parentRelationsCollection_10;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelationsCollection
	DataRelationCollection_tA8655ADC9860DD89FDC0317E38C95CB740BC2956* ____childRelationsCollection_11;
	// System.Data.RecordManager System.Data.DataTable::_recordManager
	RecordManager_t5525269209BE5391607F8C811470AC2EC5C8FA4A* ____recordManager_12;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_indexes
	List_1_tD455920B93EB13CDFF946088629D287A8D3CA973* ____indexes_13;
	// System.Collections.Generic.List`1<System.Data.Index> System.Data.DataTable::_shadowIndexes
	List_1_tD455920B93EB13CDFF946088629D287A8D3CA973* ____shadowIndexes_14;
	// System.Int32 System.Data.DataTable::_shadowCount
	int32_t ____shadowCount_15;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t531D3CA9714C3D7818C1B1C139A9C4F04B73EE7C* ____extendedProperties_16;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_17;
	// System.String System.Data.DataTable::_tableNamespace
	String_t* ____tableNamespace_18;
	// System.String System.Data.DataTable::_tablePrefix
	String_t* ____tablePrefix_19;
	// System.Data.DataExpression System.Data.DataTable::_displayExpression
	DataExpression_t8B426B55556F5C9CD0AADB61EA0AE306F9AD72C6* ____displayExpression_20;
	// System.Boolean System.Data.DataTable::_fNestedInDataset
	bool ____fNestedInDataset_21;
	// System.Globalization.CultureInfo System.Data.DataTable::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_22;
	// System.Boolean System.Data.DataTable::_cultureUserSet
	bool ____cultureUserSet_23;
	// System.Globalization.CompareInfo System.Data.DataTable::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_24;
	// System.Globalization.CompareOptions System.Data.DataTable::_compareFlags
	int32_t ____compareFlags_25;
	// System.IFormatProvider System.Data.DataTable::_formatProvider
	RuntimeObject* ____formatProvider_26;
	// System.StringComparer System.Data.DataTable::_hashCodeProvider
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ____hashCodeProvider_27;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_28;
	// System.Boolean System.Data.DataTable::_caseSensitiveUserSet
	bool ____caseSensitiveUserSet_29;
	// System.String System.Data.DataTable::_encodedTableName
	String_t* ____encodedTableName_30;
	// System.Data.DataColumn System.Data.DataTable::_xmlText
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____xmlText_31;
	// System.Data.DataColumn System.Data.DataTable::_colUnique
	DataColumn_t07796C0DD83AD590E7C821E08FE04A38FE8B1A66* ____colUnique_32;
	// System.Decimal System.Data.DataTable::_minOccurs
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ____minOccurs_33;
	// System.Decimal System.Data.DataTable::_maxOccurs
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ____maxOccurs_34;
	// System.Boolean System.Data.DataTable::_repeatableElement
	bool ____repeatableElement_35;
	// System.Object System.Data.DataTable::_typeName
	RuntimeObject* ____typeName_36;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKey
	UniqueConstraint_tE48A79D2F7DE0EA4A3F1BF5BB322C383E60465F6* ____primaryKey_37;
	// System.Data.IndexField[] System.Data.DataTable::_primaryIndex
	IndexFieldU5BU5D_t2E1FE07C5E6C8080FCF4908199FFDFEBA1EECA3E* ____primaryIndex_38;
	// System.Data.DataColumn[] System.Data.DataTable::_delayedSetPrimaryKey
	DataColumnU5BU5D_t4600ECA5C95E7699298FCD6D677AEAD7D9F5F0CA* ____delayedSetPrimaryKey_39;
	// System.Data.Index System.Data.DataTable::_loadIndex
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndex_40;
	// System.Data.Index System.Data.DataTable::_loadIndexwithOriginalAdded
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndexwithOriginalAdded_41;
	// System.Data.Index System.Data.DataTable::_loadIndexwithCurrentDeleted
	Index_tB35755A4A90336B5A005AD1320AAF1219DEE2483* ____loadIndexwithCurrentDeleted_42;
	// System.Int32 System.Data.DataTable::_suspendIndexEvents
	int32_t ____suspendIndexEvents_43;
	// System.Boolean System.Data.DataTable::_inDataLoad
	bool ____inDataLoad_44;
	// System.Boolean System.Data.DataTable::_schemaLoading
	bool ____schemaLoading_45;
	// System.Boolean System.Data.DataTable::_enforceConstraints
	bool ____enforceConstraints_46;
	// System.Boolean System.Data.DataTable::_suspendEnforceConstraints
	bool ____suspendEnforceConstraints_47;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_48;
	// System.Boolean System.Data.DataTable::_inLoad
	bool ____inLoad_49;
	// System.Boolean System.Data.DataTable::_fInLoadDiffgram
	bool ____fInLoadDiffgram_50;
	// System.Byte System.Data.DataTable::_isTypedDataTable
	uint8_t ____isTypedDataTable_51;
	// System.Data.DataRow[] System.Data.DataTable::_emptyDataRowArray
	DataRowU5BU5D_t2A0D4483B27757FE7345A2E7FE5727C7F77DE5D4* ____emptyDataRowArray_52;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorCollectionCache
	PropertyDescriptorCollection_tC4C2FA51126BD032E2E9A0472995F7FCAC6E70DE* ____propertyDescriptorCollectionCache_53;
	// System.Data.DataRelation[] System.Data.DataTable::_nestedParentRelations
	DataRelationU5BU5D_t1640C9372BDC91DAE0359E08BE1E91AE48924FF0* ____nestedParentRelations_54;
	// System.Collections.Generic.List`1<System.Data.DataColumn> System.Data.DataTable::_dependentColumns
	List_1_t3F99226F0C691927C5B70A8B7FD8B4ACA817A785* ____dependentColumns_55;
	// System.Boolean System.Data.DataTable::_mergingData
	bool ____mergingData_56;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangedDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowChangedDelegate_57;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowChangingDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowChangingDelegate_58;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletingDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowDeletingDelegate_59;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::_onRowDeletedDelegate
	DataRowChangeEventHandler_t2F295C9D2283CBF4D109CBDFCD141EF2A58B24BF* ____onRowDeletedDelegate_60;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangedDelegate
	DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959* ____onColumnChangedDelegate_61;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::_onColumnChangingDelegate
	DataColumnChangeEventHandler_t666070D5D5C9A6CF6E9FA12E6FC15B7DB20C8959* ____onColumnChangingDelegate_62;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearingDelegate
	DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B* ____onTableClearingDelegate_63;
	// System.Data.DataTableClearEventHandler System.Data.DataTable::_onTableClearedDelegate
	DataTableClearEventHandler_tE15A0F0DEDDCCACFBD4F9F19F462C1FE90746B1B* ____onTableClearedDelegate_64;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::_onTableNewRowDelegate
	DataTableNewRowEventHandler_t874CE0332A55E1F8A8CF67458AF71CE73975D827* ____onTableNewRowDelegate_65;
	// System.ComponentModel.PropertyChangedEventHandler System.Data.DataTable::_onPropertyChangingDelegate
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ____onPropertyChangingDelegate_66;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t8EFCEBE1AE55392AAE53DA15D2B334C56BB14566* ____rowBuilder_67;
	// System.Collections.Generic.List`1<System.Data.DataView> System.Data.DataTable::_delayedViews
	List_1_t1CDDD861715A83BE1EF98CE75870A483BB5ECC93* ____delayedViews_68;
	// System.Collections.Generic.List`1<System.Data.DataViewListener> System.Data.DataTable::_dataViewListeners
	List_1_t73C786BB01E05FA7B2ACAA21DA57002B4503C95F* ____dataViewListeners_69;
	// System.Collections.Hashtable System.Data.DataTable::_rowDiffId
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____rowDiffId_70;
	// System.Threading.ReaderWriterLockSlim System.Data.DataTable::_indexesLock
	ReaderWriterLockSlim_t3BF29C18C9FC0EE07209EDD54D938EA473FB3906* ____indexesLock_71;
	// System.Int32 System.Data.DataTable::_ukColumnPositionForInference
	int32_t ____ukColumnPositionForInference_72;
	// System.Data.SerializationFormat System.Data.DataTable::_remotingFormat
	int32_t ____remotingFormat_73;
	// System.Int32 System.Data.DataTable::_objectID
	int32_t ____objectID_75;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// System.Nullable`1<UnityEngine.RaycastHit>
struct Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___value_1;
};

// System.Nullable`1<UnityEngine.EventSystems.RaycastResult>
struct Nullable_1_t0344856814F10DA4D2BF15C9E0134D43CB1BA382 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

// System.Action`1<UnityEngine.Vector3>
struct Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// EnemyData
struct EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.GameObject EnemyData::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_4;
	// System.Int32 EnemyData::health
	int32_t ___health_5;
	// System.Int32 EnemyData::spawnableInWave
	int32_t ___spawnableInWave_6;
	// System.Int32 EnemyData::pointValue
	int32_t ___pointValue_7;
	// System.Int32 EnemyData::damageValue
	int32_t ___damageValue_8;
	// System.Single EnemyData::moveSpeed
	float ___moveSpeed_9;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Health/HealthChangeHandler
struct HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D  : public MulticastDelegate_t
{
};

// Health/OnHealthZero
struct OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

// ARCursor
struct ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARCursor::cursorChildObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cursorChildObject_4;
	// UnityEngine.GameObject ARCursor::objectToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToPlace_5;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARCursor::raycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___raycastManager_6;
	// System.Boolean ARCursor::useCursor
	bool ___useCursor_7;
};

// BasicTower
struct BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BasicTower::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_4;
	// System.Single BasicTower::projectileSpeed
	float ___projectileSpeed_5;
	// System.Single BasicTower::fireRate
	float ___fireRate_6;
	// System.Single BasicTower::maxTargetRange
	float ___maxTargetRange_7;
	// UnityEngine.Transform BasicTower::currentTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currentTarget_8;
};

// Blueprint
struct Blueprint_t4D325CBE4D5D4EDDCF658390415CB75DCCA813C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.RaycastHit Blueprint::_hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ____hit_4;
	// UnityEngine.Vector3 Blueprint::_movePoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____movePoint_5;
	// UnityEngine.GameObject Blueprint::_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefab_6;
	// System.Boolean Blueprint::_isPlaceable
	bool ____isPlaceable_7;
	// UnityEngine.Camera Blueprint::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_8;
	// BuildingSlot Blueprint::slot
	BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* ___slot_9;
};

// BuildTower
struct BuildTower_t7DA92A53D8D4D593759E7C86168099769CA97601  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// BuildingSlot
struct BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean BuildingSlot::_isFilled
	bool ____isFilled_4;
};

// CPUHealth
struct CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 CPUHealth::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 CPUHealth::health
	int32_t ___health_5;
	// System.Boolean CPUHealth::shouldInvokeChangedPositionEvent
	bool ___shouldInvokeChangedPositionEvent_6;
	// UnityEngine.Material CPUHealth::deadMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___deadMaterial_7;
};

// CPU_HP_Bar
struct CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CPU_HP_Bar::sliderBase
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sliderBase_4;
	// UnityEngine.RectTransform CPU_HP_Bar::sliderBar
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___sliderBar_5;
	// UnityEngine.UI.Image CPU_HP_Bar::imageOfSliderBar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageOfSliderBar_6;
	// UnityEngine.Transform CPU_HP_Bar::mainCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCamera_7;
	// System.Single CPU_HP_Bar::barMaxFilled
	float ___barMaxFilled_8;
};

// CircleSpawner
struct CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CircleSpawner::spawnedEnemies
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___spawnedEnemies_4;
	// System.Collections.Generic.List`1<EnemySpawnInfo> CircleSpawner::enemySpawnInfoList
	List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5* ___enemySpawnInfoList_5;
	// System.Int32 CircleSpawner::initialWaveSize
	int32_t ___initialWaveSize_6;
	// System.Int32 CircleSpawner::waveSize
	int32_t ___waveSize_7;
	// System.Single CircleSpawner::outerRadius
	float ___outerRadius_8;
	// System.Single CircleSpawner::innerRadius
	float ___innerRadius_9;
	// System.Single CircleSpawner::timeBetweenWaves
	float ___timeBetweenWaves_10;
	// System.Single CircleSpawner::timeBetweenSpawns
	float ___timeBetweenSpawns_11;
	// System.Single CircleSpawner::waveSizeMultiplier
	float ___waveSizeMultiplier_12;
	// UnityEngine.Coroutine CircleSpawner::spawnCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___spawnCoroutine_13;
	// System.Boolean CircleSpawner::isSpawningWave
	bool ___isSpawningWave_14;
	// System.Int32 CircleSpawner::currentWave
	int32_t ___currentWave_15;
	// UnityEngine.GameObject CircleSpawner::attackPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attackPoint_16;
	// UnityEngine.GameObject CircleSpawner::playButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playButton_17;
	// UnityEngine.GameObject CircleSpawner::buildButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buildButton_18;
	// TMPro.TMP_Text CircleSpawner::waveText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___waveText_19;
};

// EnemyManager
struct EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EnemyManager::table
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___table_4;
	// UnityEngine.Transform[] EnemyManager::spawnTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnTransforms_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform[]> EnemyManager::nodes
	List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* ___nodes_6;
	// UnityEngine.Transform[] EnemyManager::nodes1
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___nodes1_7;
	// UnityEngine.Transform[] EnemyManager::nodes2
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___nodes2_8;
	// UnityEngine.Transform[] EnemyManager::nodes3
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___nodes3_9;
	// UnityEngine.Transform[] EnemyManager::nodes4
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___nodes4_10;
	// UnityEngine.Transform[] EnemyManager::nodes5
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___nodes5_11;
	// UnityEngine.GameObject[] EnemyManager::enemyPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyPrefabs_12;
	// System.Single[] EnemyManager::enemyAmounts
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___enemyAmounts_13;
	// System.Int32[] EnemyManager::enemyAmountsRounded
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___enemyAmountsRounded_14;
	// System.Single EnemyManager::time
	float ___time_15;
	// System.Single EnemyManager::spawnTime
	float ___spawnTime_16;
	// System.Single EnemyManager::spawnDelay
	float ___spawnDelay_17;
	// System.Single EnemyManager::waveDelay
	float ___waveDelay_18;
	// System.Single EnemyManager::enemyMultiplier
	float ___enemyMultiplier_19;
	// TMPro.TMP_Text EnemyManager::waveText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___waveText_21;
	// TMPro.TMP_Text EnemyManager::scoreText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___scoreText_22;
	// TMPro.TMP_Text EnemyManager::pointsText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___pointsText_23;
	// System.Boolean EnemyManager::hasGameStarted
	bool ___hasGameStarted_26;
	// UnityEngine.GameObject EnemyManager::playButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playButton_27;
	// UnityEngine.GameObject EnemyManager::moveTable
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moveTable_28;
	// UnityEngine.GameObject EnemyManager::towerCostText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___towerCostText_29;
	// UnityEngine.UI.Image EnemyManager::moveTableHelp
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___moveTableHelp_30;
};

// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EnemyMovement::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_4;
	// System.Single EnemyMovement::movementSpeed
	float ___movementSpeed_5;
};

// EnemyPoof
struct EnemyPoof_tF8C408EABC29D4D45DD2087D042AD8B2D7C213A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem EnemyPoof::system
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___system_4;
};

// Entity
struct Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Health Entity::healthComponent
	Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* ___healthComponent_4;
	// PointManager Entity::pointManager
	PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* ___pointManager_5;
	// System.Int32 Entity::pointAmount
	int32_t ___pointAmount_6;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera GameManager::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_4;
	// PointManager GameManager::pointManager
	PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* ___pointManager_5;
	// CircleSpawner GameManager::spawner
	CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* ___spawner_6;
	// UnityEngine.UI.Image GameManager::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_7;
	// UnityEngine.GameObject GameManager::leftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftHand_8;
	// UnityEngine.GameObject GameManager::rightHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightHand_9;
	// UnityEngine.GameObject GameManager::_prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefab_10;
	// UnityEngine.GameObject GameManager::_prefabBp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____prefabBp_11;
	// UnityEngine.GameObject GameManager::currentCell
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentCell_12;
	// UnityEngine.GameObject GameManager::previousCell
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___previousCell_13;
	// UnityEngine.Material GameManager::previewMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___previewMat_14;
	// UnityEngine.Material GameManager::normalMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___normalMat_15;
	// UnityEngine.Material GameManager::blockedMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___blockedMat_16;
	// UnityEngine.UI.Text GameManager::debugText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___debugText_17;
	// System.Boolean GameManager::isBuilding
	bool ___isBuilding_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::adjecentcells
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___adjecentcells_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManager::outerCells
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___outerCells_20;
};

// GameOver
struct GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text GameOver::scoreText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___scoreText_4;
	// TMPro.TMP_Text GameOver::waveText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___waveText_5;
	// TMPro.TMP_Text GameOver::highscoreText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___highscoreText_6;
	// TMPro.TMP_Text GameOver::endPoints
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___endPoints_7;
	// UnityEngine.Canvas GameOver::deathCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___deathCanvas_8;
};

// GizmoTest
struct GizmoTest_tEA5B922C06F03C88038FD7F11A7FAFB4AF882827  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Health
struct Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Health/HealthChangeHandler Health::OnHealthChanged
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* ___OnHealthChanged_4;
	// System.Int32 Health::maxHealth
	int32_t ___maxHealth_5;
	// System.Int32 Health::currentHealth
	int32_t ___currentHealth_6;
	// Health/OnHealthZero Health::onHealthZero
	OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* ___onHealthZero_7;
};

// MoveTable
struct MoveTable_tE26FD4C69D771531282866DF51A522086B597906  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MoveTable::moveTable
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___moveTable_4;
	// UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane MoveTable::pop
	PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* ___pop_5;
	// UnityEngine.GameObject MoveTable::actualTable
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___actualTable_6;
	// UnityEngine.Vector3 MoveTable::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_7;
	// System.Boolean MoveTable::useSwitchStatement
	bool ___useSwitchStatement_8;
	// System.Boolean MoveTable::clickedButton
	bool ___clickedButton_9;
};

// UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane
struct PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::m_PlacedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlacedPrefab_4;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::<spawnedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CspawnedObjectU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::m_Pressed
	bool ___m_Pressed_6;
	// System.Boolean UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::isMoving
	bool ___isMoving_7;
	// UnityEngine.XR.ARFoundation.ARRaycastManager UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_9;
};

// PointManager
struct PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PointManager::points
	int32_t ___points_4;
	// UnityEngine.UI.Text PointManager::pointsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___pointsText_5;
	// UnityEngine.UI.Text PointManager::ErrorText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ErrorText_6;
	// System.Single PointManager::counter
	float ___counter_7;
};

// Projectile
struct Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Projectile::damage
	int32_t ___damage_4;
	// UnityEngine.Transform Projectile::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// System.Single Projectile::speed
	float ___speed_6;
};

// RotationScript
struct RotationScript_tA34053DCE5A737D7E5655C37319E797668554E43  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 RotationScript::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_4;
};

// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneLoader::sceneMainArScene
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sceneMainArScene_4;
};

// TableCanvas
struct TableCanvas_t092E97967B20B5C52670DD8E51DC3F352A3BC7AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas TableCanvas::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_4;
	// UnityEngine.GameObject TableCanvas::towerCostText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___towerCostText_5;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider Tile::collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___collider_4;
	// System.Boolean Tile::isBlocked
	bool ___isBlocked_5;
};

// TileManager
struct TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TileManager::gridTilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gridTilePrefab_4;
	// System.Single TileManager::spacing
	float ___spacing_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> TileManager::tiles
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___tiles_6;
};

// Tower
struct Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Tower::fireRate
	float ___fireRate_4;
	// System.Single Tower::range
	float ___range_5;
	// System.Int32 Tower::damagePerTick
	int32_t ___damagePerTick_6;
	// System.Int32 Tower::gridSize
	int32_t ___gridSize_7;
	// System.Single Tower::fireCooldown
	float ___fireCooldown_8;
	// Assets.Scripts.IDamageable Tower::targetEnemy
	RuntimeObject* ___targetEnemy_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Tower::collidersInRange
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___collidersInRange_10;
	// System.Collections.Generic.List`1<Enemy> Tower::enemiesInRange
	List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* ___enemiesInRange_11;
	// UnityEngine.Transform Tower::pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pivot_12;
	// UnityEngine.Animator Tower::animation
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animation_13;
};

// TowerBase
struct TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TowerBase::damage
	float ___damage_4;
	// System.Single TowerBase::firePower
	float ___firePower_5;
	// System.Single TowerBase::range
	float ___range_6;
	// System.Single TowerBase::fireRate
	float ___fireRate_7;
	// System.Int32 TowerBase::upgradeSlots
	int32_t ___upgradeSlots_8;
	// UnityEngine.Transform TowerBase::rotationPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rotationPoint_9;
	// UnityEngine.ParticleSystem TowerBase::ShploofParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___ShploofParticleSystem_10;
	// System.Int32 TowerBase::ParticleCount
	int32_t ___ParticleCount_11;
	// System.Single TowerBase::ParticleEmitDelay
	float ___ParticleEmitDelay_12;
	// System.Boolean TowerBase::isShooting
	bool ___isShooting_13;
	// TMPro.TMP_Text TowerBase::damageUpgradeCount
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___damageUpgradeCount_14;
	// TMPro.TMP_Text TowerBase::rangeUpgradeCount
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___rangeUpgradeCount_15;
	// TMPro.TMP_Text TowerBase::fireRateUpgradeCount
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___fireRateUpgradeCount_16;
	// EnemyManager TowerBase::enemyManager
	EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* ___enemyManager_17;
	// UnityEngine.Transform TowerBase::InhabitingTowerSlot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___InhabitingTowerSlot_18;
	// System.Int32 TowerBase::upgradeCost
	int32_t ___upgradeCost_19;
};

// TowerEvolutions
struct TowerEvolutions_t9B575A547B4192112C671D2BA526899015FB76A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TowerEvolutions::mainTower
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainTower_4;
	// UnityEngine.GameObject TowerEvolutions::laserTower
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___laserTower_5;
	// UnityEngine.GameObject TowerEvolutions::rocketTower
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rocketTower_6;
	// UnityEngine.GameObject TowerEvolutions::sniperTower
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sniperTower_7;
	// System.Int32 TowerEvolutions::laserTowerCost
	int32_t ___laserTowerCost_8;
	// System.Int32 TowerEvolutions::rocketTowerCost
	int32_t ___rocketTowerCost_9;
	// System.Int32 TowerEvolutions::sniperTowerCost
	int32_t ___sniperTowerCost_10;
	// EnemyManager TowerEvolutions::em
	EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* ___em_11;
};

// TowerUI
struct TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas TowerUI::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_4;
	// UnityEngine.Camera TowerUI::_cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____cam_5;
	// UnityEngine.Vector3 TowerUI::_movePoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____movePoint_6;
	// UnityEngine.Vector3 TowerUI::_canvasPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____canvasPosition_7;
	// UnityEngine.RaycastHit TowerUI::_hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ____hit_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_7;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_8;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_10;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_12;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractableFocusMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FocusMode
	int32_t ___m_FocusMode_15;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_16;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeInteraction
	bool ___m_AllowGazeInteraction_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeSelect
	bool ___m_AllowGazeSelect_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideGazeTimeToSelect
	bool ___m_OverrideGazeTimeToSelect_19;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_GazeTimeToSelect
	float ___m_GazeTimeToSelect_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OverrideTimeToAutoDeselectGaze
	bool ___m_OverrideTimeToAutoDeselectGaze_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_TimeToAutoDeselectGaze
	float ___m_TimeToAutoDeselectGaze_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AllowGazeAssistance
	bool ___m_AllowGazeAssistance_23;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_24;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_25;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_26;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_27;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_28;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_29;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_30;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_31;
	// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstFocusEntered
	FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90* ___m_FirstFocusEntered_32;
	// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastFocusExited
	FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE* ___m_LastFocusExited_33;
	// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FocusEntered
	FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90* ___m_FocusEntered_34;
	// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FocusExited
	FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE* ___m_FocusExited_35;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_36;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_37;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsHovering
	HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE* ___m_InteractorsHovering_38;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractorsSelecting
	HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B* ___m_InteractorsSelecting_39;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_40;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionGroupsFocusing
	HashSetList_1_tC1DD99D75EB047082BD9E0C1091C02E0C288AA9D* ___m_InteractionGroupsFocusing_41;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractionGroupFocusing>k__BackingField
	RuntimeObject* ___U3CfirstInteractionGroupFocusingU3Ek__BackingField_42;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_43;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_44;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_45;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_46;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingInteractionStrengthFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingInteractionStrengthFilters_47;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengthFilters
	ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B* ___m_InteractionStrengthFilters_48;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_49;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_50;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_51;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_52;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_VariableSelectInteractors
	HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5* ___m_VariableSelectInteractors_53;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionStrengths
	Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61* ___m_InteractionStrengths_54;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_59;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_60;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_61;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_62;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_63;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_64;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_65;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_66;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_6;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_7;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_8;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<containingGroup>k__BackingField
	RuntimeObject* ___U3CcontainingGroupU3Ek__BackingField_9;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_10;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_11;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DisableVisualsWhenBlockedInGroup
	bool ___m_DisableVisualsWhenBlockedInGroup_14;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_15;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_17;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_20;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_22;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_24;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesHovered
	HashSetList_1_tC521CA1513DA32AFAD8144C7529793E24EA52945* ___m_InteractablesHovered_25;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractablesSelected
	HashSetList_1_t4D485A2E14AF33326E4D8B5E60BEDD0E47CEE3F0* ___m_InteractablesSelected_26;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_27;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<isInteractingWithUI>k__BackingField
	bool ___U3CisInteractingWithUIU3Ek__BackingField_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_30;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_31;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_32;
	// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LargestInteractionStrength
	BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C* ___m_LargestInteractionStrength_33;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_34;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_35;
	// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionStrengthInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengthInteractables
	HashSetList_1_tC1867B681AE7023306C341F97E7483BB3C8532B2* ___m_InteractionStrengthInteractables_36;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,System.Single> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionStrengths
	Dictionary_2_tEABA4693399BB94F9F9031F041277F4D01CA9BB2* ___m_InteractionStrengths_37;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_39;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<useAttachPointVelocity>k__BackingField
	bool ___U3CuseAttachPointVelocityU3Ek__BackingField_41;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointVelocity_42;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPointAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AttachPointAngularVelocity_43;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_XROrigin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_XROrigin_44;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HasXROrigin
	bool ___m_HasXROrigin_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FailedToFindXROrigin
	bool ___m_FailedToFindXROrigin_46;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_47;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_48;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_DeltaTimeStart
	float ___m_DeltaTimeStart_49;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_FrameOn
	int32_t ___m_FrameOn_51;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityPositionsCache_52;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsCache
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_VelocityNormalsCache_53;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityPositionsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityPositionsSum_54;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_VelocityNormalsSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_VelocityNormalsSum_55;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_56;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_57;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_58;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_59;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_60;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<origin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CoriginU3Ek__BackingField_8;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___U3CsessionOriginU3Ek__BackingField_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_11;
};

// Base
struct Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB  : public Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC
{
	// System.Int32 Base::healthPoints
	int32_t ___healthPoints_7;
	// UnityEngine.GameObject Base::gameOverButtons
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverButtons_8;
	// UnityEngine.GameObject Base::playButtons
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playButtons_9;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC
{
	// EnemyMovement Enemy::enemyMovement
	EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* ___enemyMovement_7;
	// System.Int32 Enemy::damage
	int32_t ___damage_8;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// LazerTower
struct LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89  : public TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE
{
	// UnityEngine.LineRenderer LazerTower::lazer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___lazer_20;
	// UnityEngine.Transform LazerTower::shootingPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shootingPoint_21;
};

// MissileTower
struct MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB  : public TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE
{
	// Projectile MissileTower::projectilePrefab
	Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* ___projectilePrefab_20;
	// UnityEngine.GameObject MissileTower::shootingPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___shootingPoint_21;
	// UnityEngine.Animator MissileTower::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_22;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_62;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_63;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_65;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_66;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_67;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_69;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_71;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_73;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_74;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_75;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_78;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_81;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_82;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_84;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_87;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_89;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_90;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_91;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_95;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_97;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_98;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_99;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_100;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_102;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_104;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_105;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_106;
};

// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable
struct XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_15;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_18;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_111;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_112;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_113;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_114;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_117;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_118;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_119;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_120;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_121;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_122;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_123;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_124;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_125;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_126;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_127;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_128;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/QuerySnapVolumeInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastSnapVolumeInteraction
	int32_t ___m_RaycastSnapVolumeInteraction_129;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_130;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_131;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_132;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AutoDeselect
	bool ___m_AutoDeselect_133;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TimeToAutoDeselect
	float ___m_TimeToAutoDeselect_134;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_135;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_136;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_137;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_138;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_139;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_140;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_141;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIHoverEntered
	UIHoverEnterEvent_t4C957A3405A5D9CB867C5EC446620BB4BA7E7298* ___m_UIHoverEntered_142;
	// UnityEngine.XR.Interaction.Toolkit.UI.UIHoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIHoverExited
	UIHoverExitEvent_t63E5E9C921AFB8E2CB9CA4D32882DD4F62CD509B* ___m_UIHoverExited_143;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableARRaycasting
	bool ___m_EnableARRaycasting_144;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_OccludeARHitsWith3DObjects
	bool ___m_OccludeARHitsWith3DObjects_145;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_OccludeARHitsWith2DObjects
	bool ___m_OccludeARHitsWith2DObjects_146;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TrackableType
	int32_t ___m_TrackableType_147;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<currentNearestValidTarget>k__BackingField
	RuntimeObject* ___U3CcurrentNearestValidTargetU3Ek__BackingField_148;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<rayEndPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CrayEndPointU3Ek__BackingField_149;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::<rayEndTransform>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CrayEndTransformU3Ek__BackingField_150;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HasRayOriginTransform
	bool ___m_HasRayOriginTransform_151;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HasReferenceFrame
	bool ___m_HasReferenceFrame_152;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_153;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_154;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_155;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeAutoSelected
	float ___m_LastTimeAutoSelected_156;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedTimeToAutoDeselect
	bool ___m_PassedTimeToAutoDeselect_157;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastUIObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LastUIObject_158;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredUIChanged
	float ___m_LastTimeHoveredUIChanged_159;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverUISelectActive
	bool ___m_HoverUISelectActive_160;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlockUIAutoDeselect
	bool ___m_BlockUIAutoDeselect_161;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_162;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_163;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_164;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHitEndpointIndex
	int32_t ___m_ARRaycastHitEndpointIndex_165;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___m_ARRaycastHits_166;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHitsCount
	int32_t ___m_ARRaycastHitsCount_167;
	// UnityEngine.XR.ARFoundation.ARRaycastManager UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_ARRaycastManager_168;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_169;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_170;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_171;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_172;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___m_ControlPoints_173;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___m_HitChordControlPoints_174;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_177;
	// UnityEngine.XR.Interaction.Toolkit.UI.RegisteredUIInteractorCache UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredUIInteractorCache
	RegisteredUIInteractorCache_t81419313AA113B206AF3FF94CD9D3B64A09CE413* ___m_RegisteredUIInteractorCache_178;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitOccurred
	bool ___m_RaycastHitOccurred_179;
	// UnityEngine.RaycastHit UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___m_RaycastHit_180;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHit
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___m_UIRaycastHit_181;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsUIHitClosest
	bool ___m_IsUIHitClosest_182;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastInteractable
	RuntimeObject* ___m_RaycastInteractable_183;
	// UnityEngine.XR.ARFoundation.ARRaycastHit UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ARRaycastHit
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 ___m_ARRaycastHit_184;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsARHitClosest
	bool ___m_IsARHitClosest_185;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ActionBasedController
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___m_ActionBasedController_186;
	// UnityEngine.XR.Interaction.Toolkit.XRController UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_DeviceBasedController
	XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* ___m_DeviceBasedController_187;
	// UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ScreenSpaceController
	XRScreenSpaceController_t046F18C2FE01EB347832DB82D42C84131771FF17* ___m_ScreenSpaceController_188;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsActionBasedController
	bool ___m_IsActionBasedController_189;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsDeviceBasedController
	bool ___m_IsDeviceBasedController_190;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_IsScreenSpaceController
	bool ___m_IsScreenSpaceController_191;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Transform[]>
struct List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5DU5BU5D_t625BB417C40FB7670C7151BE6A8F2712DAED95E0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform[]>

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>

// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Collider>

// System.Collections.Generic.List`1<Enemy>
struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Enemy>

// System.Collections.Generic.List`1<EnemySpawnInfo>
struct List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EnemySpawnInfoU5BU5D_t69261B6AA9BED0D02A4B56ADDD444CB4CF899BC6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<EnemySpawnInfo>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Attribute

// System.Attribute

// EnemySpawnInfo

// EnemySpawnInfo

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// RigidbodyExtentions

// RigidbodyExtentions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// BasicTower/<FireCoroutine>d__8

// BasicTower/<FireCoroutine>d__8

// CPUHealth/<>c
struct U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_StaticFields
{
	// CPUHealth/<>c CPUHealth/<>c::<>9
	U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* ___U3CU3E9_0;
};

// CPUHealth/<>c

// CircleSpawner/<SpawnWaves>d__18

// CircleSpawner/<SpawnWaves>d__18

// LazerTower/<FireCoroutine>d__4

// LazerTower/<FireCoroutine>d__4

// MissileTower/<FireCoroutine>d__5

// MissileTower/<FireCoroutine>d__5

// MoveTable/<StartTableMove>d__9

// MoveTable/<StartTableMove>d__9

// PointManager/<DisplayError>d__10

// PointManager/<DisplayError>d__10

// TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d

// TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d

// TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d

// TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d

// System.Collections.Generic.List`1/Enumerator<Enemy>

// System.Collections.Generic.List`1/Enumerator<Enemy>

// System.Collections.Generic.List`1/Enumerator<EnemySpawnInfo>

// System.Collections.Generic.List`1/Enumerator<EnemySpawnInfo>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.ValueTuple`2<UnityEngine.GameObject,System.Single>

// System.ValueTuple`2<UnityEngine.GameObject,System.Single>

// System.ValueTuple`2<System.Object,System.Single>

// System.ValueTuple`2<System.Object,System.Single>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Data.DataTable
struct DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_StaticFields
{
	// System.Int32 System.Data.DataTable::s_objectTypeCount
	int32_t ___s_objectTypeCount_74;
};

// System.Data.DataTable

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Pose

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Touch

// UnityEngine.Touch

// System.Nullable`1<UnityEngine.RaycastHit>

// System.Nullable`1<UnityEngine.RaycastHit>

// System.Nullable`1<UnityEngine.EventSystems.RaycastResult>

// System.Nullable`1<UnityEngine.EventSystems.RaycastResult>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<UnityEngine.Vector3>

// System.Action`1<UnityEngine.Vector3>

// System.Action`2<System.Int32,System.Int32>

// System.Action`2<System.Int32,System.Int32>

// UnityEngine.XR.ARFoundation.ARRaycastHit

// UnityEngine.XR.ARFoundation.ARRaycastHit

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// EnemyData

// EnemyData

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// Health/HealthChangeHandler

// Health/HealthChangeHandler

// Health/OnHealthZero

// Health/OnHealthZero

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// ARCursor

// ARCursor

// BasicTower

// BasicTower

// Blueprint

// Blueprint

// BuildTower

// BuildTower

// BuildingSlot

// BuildingSlot

// CPUHealth
struct CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields
{
	// System.Action CPUHealth::OnCPUDeath
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnCPUDeath_8;
	// System.Action`2<System.Int32,System.Int32> CPUHealth::OnCPUDamage
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___OnCPUDamage_9;
	// System.Action`1<UnityEngine.Vector3> CPUHealth::OnCPUPositionMoved
	Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* ___OnCPUPositionMoved_10;
};

// CPUHealth

// CPU_HP_Bar

// CPU_HP_Bar

// CircleSpawner

// CircleSpawner

// EnemyManager
struct EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields
{
	// System.Int32 EnemyManager::currentWave
	int32_t ___currentWave_20;
	// System.Int32 EnemyManager::score
	int32_t ___score_24;
	// System.Int32 EnemyManager::points
	int32_t ___points_25;
};

// EnemyManager

// EnemyMovement

// EnemyMovement

// EnemyPoof

// EnemyPoof

// Entity

// Entity

// GameManager

// GameManager

// GameOver

// GameOver

// GizmoTest

// GizmoTest

// Health

// Health

// MoveTable

// MoveTable

// UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane
struct PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_8;
};

// UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane

// PointManager

// PointManager

// Projectile

// Projectile

// RotationScript

// RotationScript

// SceneLoader

// SceneLoader

// TableCanvas

// TableCanvas

// Tile

// Tile

// TileManager

// TileManager

// Tower

// Tower

// TowerBase

// TowerBase

// TowerEvolutions

// TowerEvolutions

// TowerUI

// TowerUI

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_56;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable

// Base

// Base

// Enemy

// Enemy

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// LazerTower

// LazerTower

// MissileTower

// MissileTower

// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable

// UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_16;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_17;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_107;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_175;
	// Unity.Mathematics.float3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	float3U5BU5D_t94C1DF28FA7E0FA017D0C77B720D9FF3519E0D45* ___s_ScratchControlPoints_176;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Object,System.Single>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCA5577EBD6924758A7043C48D54BAE515194B0A1_gshared (ValueTuple_2_t9E1CBCEC084647867B410B3732DA4AF1A958BC33* __this, RuntimeObject* ___0_item1, float ___1_item2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_gshared_inline (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, int32_t ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C_gshared (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.RaycastHit>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_gshared_inline (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.RaycastHit>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_gshared (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ARCursor::UpdateCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_UpdateCursor_mF10A97A53652C882FD9FFEE7DD963F3990861CDA (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___1_hitResults, int32_t ___2_trackableTypes, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___0_index, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void Entity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Awake_mF01FDE5A22DD07BB6AC9A5CC7AA32E6AB6516848 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Void Entity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Start_m785A7202A0E07323349F9619F42DC602AA2A00DC (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Void Health::Initialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Initialize_m39B03650AFB625281F07A58A29A622AF9F70AA97 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) ;
// System.Void Entity::HandleHealthChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_HandleHealthChange_m9649A6EFF5E2922ED7818AC9D4007841DD7A71B8 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) ;
// System.Void Base::ShowGameOverScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_ShowGameOverScreen_m1CD053079889974F70AAD1C29D87F8FBF4DA466C (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void Entity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity__ctor_mDD0E6C26C6E893C850C7D6B504C72DD4C9977B87 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyManager>()
inline EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.ValueTuple`2<UnityEngine.GameObject,System.Single> TowerBase::CheckTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 TowerBase_CheckTargets_m5BFBA251E74EDE6B48C47C0E01681F8884FDE306 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<UnityEngine.GameObject,System.Single>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m3A62F3E5102AAC7BC79F38556732E155D55FF716 (ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item1, float ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, float, const RuntimeMethod*))ValueTuple_2__ctor_mCA5577EBD6924758A7043C48D54BAE515194B0A1_gshared)(__this, ___0_item1, ___1_item2, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyManager::DeductPoinstIfSufficient(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, int32_t ___0_amount, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TowerBase::<ShploofEffect>g__EmitParticles|26_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerBase_U3CShploofEffectU3Eg__EmitParticlesU7C26_0_mA2A2BCCA713A1A4A4197422AC4E2D36C3947F100 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TowerBase::<NewTurretEffect>g__EmitParticles|27_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerBase_U3CNewTurretEffectU3Eg__EmitParticlesU7C27_0_m07E10C4A1DB3A1484829F8B387D5A568F1997EE3 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Void TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed__ctor_m6692DA5206EF4426E22697F0F6823EAF98F3DF3D (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed__ctor_m9DA4C8925556CAEC7854731C997FA023D836BB73 (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void BasicTower::FindNearestTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicTower_FindNearestTarget_m459615075A691E6E41C2F5C30F3DDF7EB1C5CC86 (BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void BasicTower/<FireCoroutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__8__ctor_m979A7C4430F600D4322EFCE8EBB5D5777167158E (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<BuildingSlot>()
inline BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* GameObject_GetComponent_TisBuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E_m52075F1521A5FE8E76708B700A9B19189BC4EBDD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Blueprint::PlaceTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blueprint_PlaceTower_m2F4368483A681D4FB3D9226412D76D717541AC2E (Blueprint_t4D325CBE4D5D4EDDCF658390415CB75DCCA813C5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Boolean BuildingSlot::TowerBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingSlot_TowerBuild_m5302B29A2A0F17A814040028EF1833CE3C30A82C (BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CircleSpawner::SpawnWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CircleSpawner_SpawnWaves_mAF4C23BA8C170D080ABB74E1C388D193C555C0AF (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) ;
// System.Void CircleSpawner/<SpawnWaves>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWavesU3Ed__18__ctor_m2406C3754699E8FDDE1D35A1EE81D79E333EEF7C (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// Health Entity::get_HealthComponent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* Entity_get_HealthComponent_m9086F947E2AB968A8BD1941247BB83E85A47E138_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Health>()
inline Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 EnemyData::get_Health()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_Health_m4BE8EDA44B25E4BC8559D5675BB86FF54C380B30_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) ;
// EnemyMovement Enemy::get_EnemyMovement()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* Enemy_get_EnemyMovement_mE4E2238C24E3E8D3A91040ECC3354A9E9AE4BB7D_inline (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<EnemyMovement>()
inline EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* Component_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m14EFF6A1CFB486084313526C03D96BC0FBECBC87 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single EnemyData::get_MoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyData_get_MoveSpeed_m823E91AE93F5E4C8880580E3B610BFB235C73936_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) ;
// System.Void EnemyMovement::SetMovement(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_SetMovement_mB7F34E4265BC257785A7A0B3DEACCCFF2481F87C (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, float ___1_speed, const RuntimeMethod* method) ;
// System.Int32 EnemyData::get_PointValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_PointValue_mE1AA76EF8C2E969CE1F4D675879ADA2FC1281686_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) ;
// System.Void Entity::set_PointAmount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Entity_set_PointAmount_mEBE4A4A160019F349F86F97DC3BFB948062C0D63_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 EnemyData::get_DamageValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_DamageValue_mF624CB7076921093FC0D1C4B7871A62A4C87BCF2_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) ;
// System.Void Enemy::set_Damage(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enemy_set_Damage_mCFA5474176D907BE22C2A24EEAF3E69E36596D64_inline (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<EnemySpawnInfo>::GetEnumerator()
inline Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D List_1_GetEnumerator_m9003AF9B54BE295F92A0C82D835F2283BA678186 (List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D (*) (List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<EnemySpawnInfo>::Dispose()
inline void Enumerator_Dispose_mC641817940F1C4B295872ED7EB776AEF65043B67 (Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<EnemySpawnInfo>::get_Current()
inline EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* Enumerator_get_Current_m9B9B1A747080AB8D9CC87B61C1FA40EFDEFFDDBD_inline (Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D* __this, const RuntimeMethod* method)
{
	return ((  EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* (*) (Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Int32 EnemyData::get_SpawnableInWave()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_SpawnableInWave_mFF47A83CB1EC5D958ED79C8D3F1AC17D570DBC0E_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject EnemyData::get_Model()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyData_get_Model_m4D969E803BF64193744C4D42AEAEBB83CA4226EA_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject CircleSpawner::LoadData(UnityEngine.GameObject,EnemySpawnInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CircleSpawner_LoadData_m929F1AAC840914D56C6EC543A20719F91DBAB836 (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_enemy, EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* ___1_spawnInfo, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<EnemySpawnInfo>::MoveNext()
inline bool Enumerator_MoveNext_mA5B7D20652BEAEAD9CD56E1D3D29CC97527F99A8 (Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean CircleSpawner::AllEnemiesEliminated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CircleSpawner_AllEnemiesEliminated_m77B9C1F1901960F5C9C7AA2946064737C7176D1F (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Vector3>::Invoke(T)
inline void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline)(__this, ___0_obj, method);
}
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::Invoke(T1,T2)
inline void Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_inline (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, int32_t ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*, int32_t, int32_t, const RuntimeMethod*))Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927 (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void CPUHealth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m573DA91A42ADB7886126B7A78224EB2887E46200 (U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m406436B9880CB839FEDFE181454BA264EFDCDA5A (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___0_source, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Single CPU_HP_Bar::GetPersentage(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CPU_HP_Bar_GetPersentage_m7C4081D6D93FA8B4DC7A92779F00E0213BBFE8EE (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, int32_t ___0_current, int32_t ___1_max, int32_t ___2_precision, const RuntimeMethod* method) ;
// System.Single CPU_HP_Bar::GetValueOfPersentage(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CPU_HP_Bar_GetValueOfPersentage_mE0E742BC8CF66273485D7A59733966F78EABCFF1 (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, float ___0_persentage, float ___1_max, int32_t ___2_precision, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, int32_t ___0_axis, float ___1_size, const RuntimeMethod* method) ;
// System.Void System.Data.DataTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataTable__ctor_m6217DD991E5E66260E640EAC3ABE0A3F127660A8 (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Object System.Data.DataTable::Compute(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataTable_Compute_mF80F1B5CCB5BEDC1FAE83615C7BC6386BC78D8CF (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* __this, String_t* ___0_expression, String_t* ___1_filter, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Single System.MathF::Round(System.Single,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MathF_Round_m5DD772CDC5F86606281DE7886A23FB44BFB577E7_inline (float ___0_x, int32_t ___1_digits, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<EnemyMovement>()
inline EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* GameObject_AddComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m69BC7F46EBDC34A6B391254C18CC3ED56CA43D6B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Enemy::set_EnemyMovement(EnemyMovement)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enemy_set_EnemyMovement_m3D4206FEBAC81725FEFBC7A885C8EBDB3E37821D_inline (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* ___0_value, const RuntimeMethod* method) ;
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_mE3035165EFABE5FD2A294473FB427DB5737B89EB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// PointManager Entity::get_PointManager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* Entity_get_PointManager_m3382ADEBB89B441043D1F2ADA52A5BD9E8450A83_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) ;
// System.Void PointManager::AddPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointManager_AddPoints_m3AED58DC08C349B7A0B51A57253788E211F38EE5 (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, int32_t ___0_amount, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Base>()
inline Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* Component_GetComponent_TisBase_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_m6E52D4C0084CC74A321DA4E3BDE2901806DDCBAD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___0_amount, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform[]>::Add(T)
inline void List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_inline (List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6*, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921 (const RuntimeMethod* method) ;
// System.Void EnemyManager::WaveManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_WaveManager_m7F8E1354325D129A7DEB12F91D10302DD56DE873 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// T UnityEngine.GameObject::GetComponent<EnemyMovement>()
inline EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean EnemyManager::SpawnableEnemiesLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyManager_SpawnableEnemiesLeft_m690A099112BC14C79819DE3BACEC36B0ADAD4FF8 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) ;
// System.Void EnemyManager::SpawnEnemy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_SpawnEnemy_m8D77CB052509663CB7A51F49FCA2C2EFFAFB3634 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, int32_t ___0_enemyIndex, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform[]>::.ctor()
inline void List_1__ctor_mC5870D0A89C1865160880889C9F7BA3B0B3F9453 (List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void EnemyMovement::set_Target(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyMovement_set_Target_mCD0271AF9EE7503A08E39D5AC3EEC15C680AEF80_inline (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Health>()
inline Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* GameObject_AddComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF339CC78F2107267AD248D1D5678D8DFC786D482 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Entity::set_HealthComponent(Health)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Entity_set_HealthComponent_m00C355AED2887ED341BDDA63A10377613BAAF23E_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PointManager>()
inline PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Entity::set_PointManager(PointManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Entity_set_PointManager_m72701FB2DED4A49EC2D753FB3FB1B0DC0D7B6B8D_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* ___0_value, const RuntimeMethod* method) ;
// System.Void Health/HealthChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler__ctor_m5D2D0F0CDA97070C00FD4BC95E3FEE5AAD871F48 (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Health::add_OnHealthChanged(Health/HealthChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_add_OnHealthChanged_m1C2885C6F1014673C97BB42958886A3951267A53 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CircleSpawner>()
inline CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* GameObject_GetComponent_TisCircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3_mF68E94BD983723041747CF9977E3AD1393FD99B0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManager::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Hide_m8B9993BD9BE1BECB767B8D1F8EAD8AFBA20390B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Show_m3BC1A636A08ADFA6DC1D1BFB282F44DB3352D8F4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean GameManager::CheckTileSelection(UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_CheckTileSelection_m5A2140B2DA666A02AE1BC9816C6CD63781974CEF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___0_selectedTile, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRSimpleInteractable>()
inline XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* GameObject_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_mB3889B31D5E3778CC59FAE8A210D08F1FCCD2DF1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GameManager::ColorSurroundingCells(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ColorSurroundingCells_m0EC110ED6C4B49C33417C06802CC597EEA2FACA0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_selectedCell, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_isSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Boolean PointManager::DeductPoinstIfSufficient(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointManager_DeductPoinstIfSufficient_m702E42AF0EC0BD35F02FFFA07217FF771A37C4DB (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, int32_t ___0_amount, const RuntimeMethod* method) ;
// System.Void GameManager::RevertState(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RevertState_mB605C56B1A30B36918E9217E48F77621AF0D25B1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___0_cells, const RuntimeMethod* method) ;
// System.Void GameManager::EndBuilding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndBuilding_mB9666539D7703F0DBE4D3FFFD7FDDD12641A01A5 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::DisableSurroundingCells(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableSurroundingCells_mCBF5C9549A508A6E3DE3205C80588B646B2DACE4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___0_cells, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, const RuntimeMethod* method) ;
// System.Void GameManager::DisableSurroundingCells(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Material,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableSurroundingCells_mA979768C40DFA076E1A7579D286B293BAC6FFD0B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___0_cells, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_mat, bool ___2_skip, bool ___3_blocked, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Tile>()
inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor>()
inline XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::TryGetCurrentRaycast(System.Nullable`1<UnityEngine.RaycastHit>&,System.Int32&,System.Nullable`1<UnityEngine.EventSystems.RaycastResult>&,System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRayInteractor_TryGetCurrentRaycast_mF6C0E3DE22A6CF5FD8777CC2837C3F79E215E5F3 (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* ___0_raycastHit, int32_t* ___1_raycastHitIndex, Nullable_1_t0344856814F10DA4D2BF15C9E0134D43CB1BA382* ___2_uiRaycastHit, int32_t* ___3_uiRaycastHitIndex, bool* ___4_isUIHitClosest, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.RaycastHit>::get_HasValue()
inline bool Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_inline (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326*, const RuntimeMethod*))Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.RaycastHit>::get_Value()
inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method)
{
	return ((  RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 (*) (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326*, const RuntimeMethod*))Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3[] GameManager::Calc3x3(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GameManager_Calc3x3_m7DD019D5E72242DAEF6F116AFE1162D3635D9269 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_cellScale, int32_t ___1_gridSize, const RuntimeMethod* method) ;
// UnityEngine.GameObject GameManager::GetCellAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameManager_GetCellAtPosition_m3109CB74F344AA41EFE33FA2DB5A7DD7E9627159 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void GameManager::ColorCell(UnityEngine.GameObject,UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ColorCell_mA2896BE72463EF6EE612E889203E5033D036BAC0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_cell, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_mat, bool ___2_skip, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] GameManager::Calc5x5(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GameManager_Calc5x5_mBDDF454A14FB1E9994F95E24E7AF904FD2BB6B28 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_cellScale, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Tile>()
inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void GameManager::ColorCell(UnityEngine.GameObject,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ColorCell_mF2F81467EC37558745B064CF2D05CF6B05850317 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_cell, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_mat, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<Tile>()
inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void Tile::set_IsBlocked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tile_set_IsBlocked_m3ED8E4A0204EACE6767879FF57ED9322C9115080_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Tile::get_IsBlocked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tile_get_IsBlocked_mFFDAEE04A40F57002CF726ED57CAA14835940802_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void GameOver::RestartAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_RestartAndroid_m273209EB1060BF561BD050B8CCF24F7A6057B232 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 Health::get_MaxHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Health_get_MaxHealth_mFC8DC66E7B04FC3F11271C147ED01A27962A8969_inline (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void Health/HealthChangeHandler::Invoke(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_inline (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) ;
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_m58653B13F506A59CDA3DFE478A332B457B2F0F03 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) ;
// System.Void TowerBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_Init_m811250826A313FC3EEF56863EED78C898E21DBD4 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void TowerBase::AquireTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_AquireTarget_m5F599744CB65E75376EDAA1E58923FD0E6A8E759 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) ;
// System.Void LazerTower/<FireCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__4__ctor_m7246EF3D4FA4F03B7D6198D79D0CD343D8FAA6C5 (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TowerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase__ctor_mFE13E924E01A706E3E99F4A17E05E221433A201A (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Health>()
inline Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void MissileTower/<FireCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__5__ctor_mA05EEB175DB2E7BE1F8102C9B0D7FC4724B42620 (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<Projectile>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* Object_Instantiate_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m709F11AA4127C251BFFF6D852ADF299B29B0D469 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* (*) (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void Projectile::SetTarget(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Projectile_SetTarget_mACB48D5F35C5F84437519140618CE1F5F0877E0E_inline (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void TowerBase::ShploofEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_ShploofEffect_m62577C66E43372A771C9BDBA4405475B7D263850 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane>()
inline PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* GameObject_GetComponent_TisPlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_m2FCA4C9367EB0BEAF6F57C992A266D8EE27964CE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MoveTable::StartTableMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveTable_StartTableMove_m406747B8D05A5290AF4D219EEF19387E8517D351 (MoveTable_tE26FD4C69D771531282866DF51A522086B597906* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void MoveTable/<StartTableMove>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTableMoveU3Ed__9__ctor_mF7FE68A5583647BF90DF355625AA3D8E9B066957 (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 PointManager::get_Points()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, const RuntimeMethod* method) ;
// System.Void PointManager::set_Points(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointManager_set_Points_m4ABEC3FE50A10E278BFBBE604266A16E3E7FBD0D_inline (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void PointManager/<DisplayError>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayErrorU3Ed__10__ctor_mF1847F6D9B24F1CE2857A62AA59A722DC8C80DFE (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.UnityObjectUtility::IsDestroyed(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectUtility_IsDestroyed_mAAB5E43F3ACCE27DC1D187B7CB91499F9D173F81 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Tile::set_Collider(UnityEngine.Collider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tile_set_Collider_m962EEE124B83D3B8C9687228F59DADDC18AC4989_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Transform> TileManager::get_Tiles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* TileManager_get_Tiles_mFA97F0D16DB1169DE563ABB691C967230B85ED6B_inline (TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.GameObject Tower::FindClosestEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tower_FindClosestEnemy_mDB0D8FEA33FF86E62951A183870CEEEAB0EAE0E5 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Assets.Scripts.IDamageable>()
inline RuntimeObject* GameObject_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m8AE607A96672ADD12291B4FE0CAF25D5733471A2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Tower::Attack(Assets.Scripts.IDamageable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_Attack_m373D1ECFDE34B0B5695991C3387C8FFAC6E57E86 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, RuntimeObject* ___0_enemy, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Enemy>::GetEnumerator()
inline Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8 List_1_GetEnumerator_m0A8258727C1434280EB076545170B0CC4F0904C9 (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8 (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Enemy>::Dispose()
inline void Enumerator_Dispose_m9B53C3D04EDC545CD4D52D8F65FA2321BD32FB45 (Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Enemy>::get_Current()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* Enumerator_get_Current_m1AF923779EA798B6D54040FA67531B1F5F1EC323_inline (Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T UnityEngine.Component::GetComponent<Assets.Scripts.IDamageable>()
inline RuntimeObject* Component_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m9F12EB59D8AE998A7A00E444979EA9AEE901C91C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Enemy>::MoveNext()
inline bool Enumerator_MoveNext_mF19A0C6189F7B91B8CCD0DDC457D66F2A161BA18 (Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Enemy>::Add(T)
inline void List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_inline (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<Enemy>::Remove(T)
inline bool List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4 (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Collider>::.ctor()
inline void List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void TowerUI::IsTowerSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI_IsTowerSelected_m7F548FA693C4CAC66AEE5D33B632874624D05121 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) ;
// System.Void TowerUI::RotateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI_RotateUI_m1F2A4587908903AAF4708BB185FD646F686FCEE7 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceOnPlane_TryGetTouchPosition_m4B93C9635CCEAF3E5EB5CAB294AF08BE2BC8F9CC (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_touchPosition, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::get_spawnedObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedObject_mB3DAD65252D2D50E31C27D69BAC2F4BC7DEC18F6_inline (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::set_spawnedObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedObject_m9369CCAEA1F5D013EF7B236C4B5A3F103373D356_inline (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Single System.MathF::Round(System.Single,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathF_Round_m25DAB628E94E0D50E9E5DAE40420CCBD07D370F9 (float ___0_x, int32_t ___1_digits, int32_t ___2_mode, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m68CAD82666F0FF415043D7DC217986AA2D3133D1 (EmbeddedAttribute_tBDB6D2EF6F0141DD2C828725F439100C72FF9AA2* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m771BA0E8EFE1DD8AAAE9E2B867CCF4D3AE8834C7 (NullableAttribute_t71FD3DF944E5F7393991C5281505C3EB294681B3* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_mA329224BEC75C65B8E9B5D81D7F5E769E22790E2 (NullableAttribute_t71FD3DF944E5F7393991C5281505C3EB294681B3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		__this->___NullableFlags_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m3F94BA00FB614574AC19D78E61DC0CA0AE15FCAC (NullableContextAttribute_t74372AEBDD5049CA2AEE7BCA7AB100669B7225AD* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RotationScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationScript_FixedUpdate_m22F62A79EA4CFCADDD70193AE4D93D278D1880F6 (RotationScript_tA34053DCE5A737D7E5655C37319E797668554E43* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___rotation_4;
		NullCheck(L_0);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void RotationScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotationScript__ctor_mFC2425AC8C36AC75FF897CC45CAECD45E1109B63 (RotationScript_tA34053DCE5A737D7E5655C37319E797668554E43* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARCursor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_Start_mF861EF07BBBDEA10481F7F4AC557740AE0B182B1 (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	{
		// cursorChildObject.SetActive(useCursor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cursorChildObject_4;
		bool L_1 = __this->___useCursor_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARCursor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_Update_m156A232086B1784C1125D3A9F1141FEE78055443 (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	{
		// if (useCursor)
		bool L_0 = __this->___useCursor_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateCursor();
		ARCursor_UpdateCursor_mF10A97A53652C882FD9FFEE7DD963F3990861CDA(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void ARCursor::UpdateCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_UpdateCursor_mF10A97A53652C882FD9FFEE7DD963F3990861CDA (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 screenPosition = Camera.main.ViewportToScreenPoint(new Vector2(0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_1, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		V_0 = L_4;
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_5, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_5;
		// raycastManager.Raycast(screenPosition, hits, UnityEngine.XR.ARSubsystems.TrackableType.Planes);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_6 = __this->___raycastManager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = V_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_6, L_7, L_8, ((int32_t)15), NULL);
		// if (hits.Count > 0)
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_10, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// transform.position = hits[0].pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_13 = V_1;
		NullCheck(L_13);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_14;
		L_14 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_13, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_14;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_16, NULL);
		// transform.rotation = hits[0].pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_18 = V_1;
		NullCheck(L_18);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_19;
		L_19 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_18, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_19;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20;
		L_20 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20.___rotation_1;
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_21, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void ARCursor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor__ctor_m137F0AE7E4CBAB2E1D72B1ED04AEC5E1315980EB (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	{
		// public bool useCursor = true;
		__this->___useCursor_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Base::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_Awake_m6C7BF185DCCF4DAEF75A69569EF1382A07AD8250 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	{
		// base.Awake();
		Entity_Awake_mF01FDE5A22DD07BB6AC9A5CC7AA32E6AB6516848(__this, NULL);
		// }
		return;
	}
}
// System.Void Base::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_Start_m2781D1A42FF3D2AC2ADEC016934B4A584C9A7B98 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Entity_Start_m785A7202A0E07323349F9619F42DC602AA2A00DC(__this, NULL);
		// healthComponent.Initialize(20, 20);
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_0 = ((Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC*)__this)->___healthComponent_4;
		NullCheck(L_0);
		Health_Initialize_m39B03650AFB625281F07A58A29A622AF9F70AA97(L_0, ((int32_t)20), ((int32_t)20), NULL);
		// }
		return;
	}
}
// System.Void Base::HandleHealthChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_HandleHealthChange_m10924B2E3F7E36C8630EB041D2626FC939E67434 (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) 
{
	{
		// base.HandleHealthChange(currentHealth, maxHealth);
		int32_t L_0 = ___0_currentHealth;
		int32_t L_1 = ___1_maxHealth;
		Entity_HandleHealthChange_m9649A6EFF5E2922ED7818AC9D4007841DD7A71B8(__this, L_0, L_1, NULL);
		// if (currentHealth <= 0) {
		int32_t L_2 = ___0_currentHealth;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// ShowGameOverScreen();
		Base_ShowGameOverScreen_m1CD053079889974F70AAD1C29D87F8FBF4DA466C(__this, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Base::ShowGameOverScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base_ShowGameOverScreen_m1CD053079889974F70AAD1C29D87F8FBF4DA466C (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameOverButtons != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameOverButtons_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// gameOverButtons.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameOverButtons_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// playButtons.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playButtons_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Base::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Base__ctor_mC57B9F9C97AA047E435B7CF01763ACB24805AB5B (Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* __this, const RuntimeMethod* method) 
{
	{
		// private int healthPoints = 10;
		__this->___healthPoints_7 = ((int32_t)10);
		Entity__ctor_mDD0E6C26C6E893C850C7D6B504C72DD4C9977B87(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type TowerBase::get_TowerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TowerBase_get_TowerType_m57B221D929C4C6A910A901B6CBFA2193B5BFA817 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	{
		// get { return GetType(); }
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		return L_0;
	}
}
// System.Void TowerBase::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_Init_m811250826A313FC3EEF56863EED78C898E21DBD4 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40512FD4C6B22E651FFC0EFF479EB08E7B146127);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemyManager = GameObject.FindGameObjectWithTag("EnemyManager").GetComponent<EnemyManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral40512FD4C6B22E651FFC0EFF479EB08E7B146127, NULL);
		NullCheck(L_0);
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_1;
		L_1 = GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B(L_0, GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B_RuntimeMethod_var);
		__this->___enemyManager_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyManager_17), (void*)L_1);
		// if (enemyManager == null)
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_2 = __this->___enemyManager_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// throw new Exception("fuck you enemy manager was not found >:( in tower type: " + GetType().Name);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8FA1700BA65B7D42C6475C682FCE5E4A3B0B9119)), L_5, NULL);
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TowerBase_Init_m811250826A313FC3EEF56863EED78C898E21DBD4_RuntimeMethod_var)));
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void TowerBase::AquireTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_AquireTarget_m5F599744CB65E75376EDAA1E58923FD0E6A8E759 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var data = CheckTargets();
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_0;
		L_0 = TowerBase_CheckTargets_m5BFBA251E74EDE6B48C47C0E01681F8884FDE306(__this, NULL);
		V_0 = L_0;
		// if (data.target != null)
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_1 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1.___Item1_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0078;
		}
	}
	{
		// if (rotationPoint != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___rotationPoint_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// rotationPoint.LookAt(data.target.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___rotationPoint_9;
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7.___Item1_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_6);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_6, L_9, NULL);
	}

IL_0039:
	{
		// if (data.distance <= range)
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_10 = V_0;
		float L_11 = L_10.___Item2_1;
		float L_12 = __this->___range_6;
		if ((!(((float)L_11) <= ((float)L_12))))
		{
			goto IL_0078;
		}
	}
	{
		// var newtarget = CheckTargets();
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_13;
		L_13 = TowerBase_CheckTargets_m5BFBA251E74EDE6B48C47C0E01681F8884FDE306(__this, NULL);
		V_1 = L_13;
		// if (isShooting)
		bool L_14 = __this->___isShooting_13;
		if (!L_14)
		{
			goto IL_0057;
		}
	}
	{
		// return;
		return;
	}

IL_0057:
	{
		// if (newtarget.target != null)
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_15 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15.___Item1_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		// StartCoroutine(FireCoroutine(newtarget.target));
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_18 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = L_18.___Item1_0;
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker1< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(4 /* System.Collections.IEnumerator TowerBase::FireCoroutine(UnityEngine.GameObject) */, __this, L_19);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_21;
		L_21 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_20, NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.ValueTuple`2<UnityEngine.GameObject,System.Single> TowerBase::CheckTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 TowerBase_CheckTargets_m5BFBA251E74EDE6B48C47C0E01681F8884FDE306 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m3A62F3E5102AAC7BC79F38556732E155D55FF716_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	{
		// totalEnemies = GameObject.FindGameObjectsWithTag("Enemy");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		V_0 = L_0;
		// GameObject? closestEnemy = null;
		V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// if (totalEnemies.Length == 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001d;
		}
	}
	{
		// return (null, 0);
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_m3A62F3E5102AAC7BC79F38556732E155D55FF716((&L_2), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (0.0f), /*hidden argument*/ValueTuple_2__ctor_m3A62F3E5102AAC7BC79F38556732E155D55FF716_RuntimeMethod_var);
		return L_2;
	}

IL_001d:
	{
		// float distance = Mathf.Infinity;
		V_2 = (std::numeric_limits<float>::infinity());
		// Vector3 towerPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_3 = L_4;
		// foreach (GameObject enemy in totalEnemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = V_0;
		V_4 = L_5;
		V_5 = 0;
		goto IL_006c;
	}

IL_0037:
	{
		// foreach (GameObject enemy in totalEnemies)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_6 = L_9;
		// Vector3 diffrence = enemy.transform.position - towerPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_7 = L_14;
		// float curDistance = diffrence.sqrMagnitude;
		float L_15;
		L_15 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_7), NULL);
		V_8 = L_15;
		// if (curDistance <= distance)
		float L_16 = V_8;
		float L_17 = V_2;
		if ((!(((float)L_16) <= ((float)L_17))))
		{
			goto IL_0066;
		}
	}
	{
		// closestEnemy = enemy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_6;
		V_1 = L_18;
		// distance = curDistance;
		float L_19 = V_8;
		V_2 = L_19;
	}

IL_0066:
	{
		int32_t L_20 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006c:
	{
		// foreach (GameObject enemy in totalEnemies)
		int32_t L_21 = V_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_22 = V_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		// return (closestEnemy, distance);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_1;
		float L_24 = V_2;
		ValueTuple_2_t11C2D7E818159F5111241C204D63D24C238FB278 L_25;
		memset((&L_25), 0, sizeof(L_25));
		ValueTuple_2__ctor_m3A62F3E5102AAC7BC79F38556732E155D55FF716((&L_25), L_23, L_24, /*hidden argument*/ValueTuple_2__ctor_m3A62F3E5102AAC7BC79F38556732E155D55FF716_RuntimeMethod_var);
		return L_25;
	}
}
// System.Void TowerBase::RangeUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_RangeUpgrade_mF01BEBAAFBABE5B99C3A6271A3493688D00AB51D (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F23787A74D6E043D27739EFE52B3B1094EBA744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7798021C4CB89EF713D43E7F79D9A934FD6A532C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9368F04BED6FFEC3153A4D4D02F508005AFE43B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (upgradeSlots == 5)
		int32_t L_0 = __this->___upgradeSlots_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (!enemyManager.DeductPoinstIfSufficient(upgradeCost))
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_1 = __this->___enemyManager_17;
		int32_t L_2 = __this->___upgradeCost_19;
		NullCheck(L_1);
		bool L_3;
		L_3 = EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_004d;
		}
	}
	{
		// rangeUpgradeCount.text = "Upgrade:\r\n" + upgradeSlots + "/5";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___rangeUpgradeCount_15;
		int32_t* L_5 = (&__this->___upgradeSlots_8);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7798021C4CB89EF713D43E7F79D9A934FD6A532C, L_6, _stringLiteral5F23787A74D6E043D27739EFE52B3B1094EBA744, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// Debug.Log("RangeUpgrade ++");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF9368F04BED6FFEC3153A4D4D02F508005AFE43B, NULL);
		// return;
		return;
	}

IL_004d:
	{
		// upgradeSlots++;
		int32_t L_8 = __this->___upgradeSlots_8;
		__this->___upgradeSlots_8 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// range += 0.04f;
		float L_9 = __this->___range_6;
		__this->___range_6 = ((float)il2cpp_codegen_add(L_9, (0.0399999991f)));
		// }
		return;
	}
}
// System.Void TowerBase::DamageUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_DamageUpgrade_m958CF3D8C38CDBA990EF48E75854DD90590CDC9A (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56252775316C3B42323C8B339331F64D8144886F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F23787A74D6E043D27739EFE52B3B1094EBA744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7798021C4CB89EF713D43E7F79D9A934FD6A532C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (upgradeSlots == 5)
		int32_t L_0 = __this->___upgradeSlots_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (!enemyManager.DeductPoinstIfSufficient(upgradeCost))
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_1 = __this->___enemyManager_17;
		int32_t L_2 = __this->___upgradeCost_19;
		NullCheck(L_1);
		bool L_3;
		L_3 = EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_004d;
		}
	}
	{
		// damageUpgradeCount.text = "Upgrade:\r\n" + upgradeSlots + "/5";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___damageUpgradeCount_14;
		int32_t* L_5 = (&__this->___upgradeSlots_8);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7798021C4CB89EF713D43E7F79D9A934FD6A532C, L_6, _stringLiteral5F23787A74D6E043D27739EFE52B3B1094EBA744, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// Debug.Log("DamageUpgrade ++");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral56252775316C3B42323C8B339331F64D8144886F, NULL);
		// return;
		return;
	}

IL_004d:
	{
		// upgradeSlots++;
		int32_t L_8 = __this->___upgradeSlots_8;
		__this->___upgradeSlots_8 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// damage += 1f;
		float L_9 = __this->___damage_4;
		__this->___damage_4 = ((float)il2cpp_codegen_add(L_9, (1.0f)));
		// }
		return;
	}
}
// System.Void TowerBase::FireRateUpgrade()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_FireRateUpgrade_m02731328FDCFADB9AC39E8415C6A13DCF6556FFD (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12498721016E27B3ADAA935618DCC691C087329B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F23787A74D6E043D27739EFE52B3B1094EBA744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7798021C4CB89EF713D43E7F79D9A934FD6A532C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (upgradeSlots == 5)
		int32_t L_0 = __this->___upgradeSlots_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (!enemyManager.DeductPoinstIfSufficient(upgradeCost))
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_1 = __this->___enemyManager_17;
		int32_t L_2 = __this->___upgradeCost_19;
		NullCheck(L_1);
		bool L_3;
		L_3 = EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_004d;
		}
	}
	{
		// fireRateUpgradeCount.text = "Upgrade:\r\n" + upgradeSlots + "/5";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___fireRateUpgradeCount_16;
		int32_t* L_5 = (&__this->___upgradeSlots_8);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7798021C4CB89EF713D43E7F79D9A934FD6A532C, L_6, _stringLiteral5F23787A74D6E043D27739EFE52B3B1094EBA744, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// Debug.Log("FireRateUpgrade ++");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral12498721016E27B3ADAA935618DCC691C087329B, NULL);
		// return;
		return;
	}

IL_004d:
	{
		// upgradeSlots++;
		int32_t L_8 = __this->___upgradeSlots_8;
		__this->___upgradeSlots_8 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// fireRate += 0.2f;
		float L_9 = __this->___fireRate_7;
		__this->___fireRate_7 = ((float)il2cpp_codegen_add(L_9, (0.200000003f)));
		// }
		return;
	}
}
// System.Void TowerBase::DestroyTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_DestroyTower_mD1A6CBA2AB98C101174BF5502754D13D992306B0 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void TowerBase::ShploofEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_ShploofEffect_m62577C66E43372A771C9BDBA4405475B7D263850 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ShploofParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___ShploofParticleSystem_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine(EmitParticles());
		RuntimeObject* L_2;
		L_2 = TowerBase_U3CShploofEffectU3Eg__EmitParticlesU7C26_0_mA2A2BCCA713A1A4A4197422AC4E2D36C3947F100(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void TowerBase::NewTurretEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_NewTurretEffect_m66DCF71B3482FD34611B928DE4845C4A7E0C0875 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ShploofParticleSystem != null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___ShploofParticleSystem_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine(EmitParticles());
		RuntimeObject* L_2;
		L_2 = TowerBase_U3CNewTurretEffectU3Eg__EmitParticlesU7C27_0_m07E10C4A1DB3A1484829F8B387D5A568F1997EE3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void TowerBase::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase_OnDrawGizmos_mBBB6F770F392CD78AF30492B3E17C7608FC18423 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = new Color(1, 0, 0, 0.1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (0.100000001f), /*hidden argument*/NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawSphere(transform.position, range);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___range_6;
		Gizmos_DrawSphere_mC7B2862BBDB3141A63B83F0F1E56E30101D4F472(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TowerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerBase__ctor_mFE13E924E01A706E3E99F4A17E05E221433A201A (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] protected float damage = 1f;
		__this->___damage_4 = (1.0f);
		// [SerializeField] protected float firePower = 50f;
		__this->___firePower_5 = (50.0f);
		// [SerializeField] protected float range = 0.40f;
		__this->___range_6 = (0.400000006f);
		// [SerializeField] protected float fireRate = 0.5f;
		__this->___fireRate_7 = (0.5f);
		// [SerializeField] private int ParticleCount = 500;
		__this->___ParticleCount_11 = ((int32_t)500);
		// [SerializeField, Range(0.00001f, 0.01f)] private float ParticleEmitDelay = 500;
		__this->___ParticleEmitDelay_12 = (500.0f);
		// public int upgradeCost = 50;
		__this->___upgradeCost_19 = ((int32_t)50);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Collections.IEnumerator TowerBase::<ShploofEffect>g__EmitParticles|26_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerBase_U3CShploofEffectU3Eg__EmitParticlesU7C26_0_mA2A2BCCA713A1A4A4197422AC4E2D36C3947F100 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* L_0 = (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C*)il2cpp_codegen_object_new(U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed__ctor_m6692DA5206EF4426E22697F0F6823EAF98F3DF3D(L_0, 0, NULL);
		U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TowerBase::<NewTurretEffect>g__EmitParticles|27_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TowerBase_U3CNewTurretEffectU3Eg__EmitParticlesU7C27_0_m07E10C4A1DB3A1484829F8B387D5A568F1997EE3 (TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* L_0 = (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51*)il2cpp_codegen_object_new(U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed__ctor_m9DA4C8925556CAEC7854731C997FA023D836BB73(L_0, 0, NULL);
		U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed__ctor_m6692DA5206EF4426E22697F0F6823EAF98F3DF3D (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_System_IDisposable_Dispose_m4A8F74D31D396772C80ADD81439B544B60640F6B (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_MoveNext_m496ED642F5BBA4259BBFC988DE767804F31923F7 (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < ParticleCount; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0064;
	}

IL_0027:
	{
		// ShploofParticleSystem.Emit(1);
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_4 = V_1;
		NullCheck(L_4);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = L_4->___ShploofParticleSystem_10;
		NullCheck(L_5);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_5, 1, NULL);
		// yield return new WaitForSeconds(ParticleEmitDelay);
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___ParticleEmitDelay_12;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < ParticleCount; i++)
		int32_t L_9 = __this->___U3CiU3E5__2_3;
		V_2 = L_9;
		int32_t L_10 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0064:
	{
		// for (int i = 0; i < ParticleCount; i++)
		int32_t L_11 = __this->___U3CiU3E5__2_3;
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___ParticleCount_11;
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF0C750C107736E48B0C6B8F8AE8FFE026798C195 (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_System_Collections_IEnumerator_Reset_mCB5F0E4CFFFEE954918D7C6943876CBCA3DE90C7 (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_System_Collections_IEnumerator_Reset_mCB5F0E4CFFFEE954918D7C6943876CBCA3DE90C7_RuntimeMethod_var)));
	}
}
// System.Object TowerBase/<<ShploofEffect>g__EmitParticles|26_0>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_System_Collections_IEnumerator_get_Current_m0316C098ED37B5114215DD33D2A8807858B852C4 (U3CU3CShploofEffectU3Eg__EmitParticlesU7C26_0U3Ed_tC7E5DD43A65C4828B1BB43B3A80CC7FEEEE6CE3C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed__ctor_m9DA4C8925556CAEC7854731C997FA023D836BB73 (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_System_IDisposable_Dispose_mB243B2AE9146B9A3FD75853C42903A2ADFD23CA5 (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_MoveNext_m56FE1575555632A7A9B70CE557914812EAF4A105 (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < ParticleCount; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0064;
	}

IL_0027:
	{
		// ShploofParticleSystem.Emit(1);
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_4 = V_1;
		NullCheck(L_4);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = L_4->___ShploofParticleSystem_10;
		NullCheck(L_5);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_5, 1, NULL);
		// yield return new WaitForSeconds(ParticleEmitDelay);
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___ParticleEmitDelay_12;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < ParticleCount; i++)
		int32_t L_9 = __this->___U3CiU3E5__2_3;
		V_2 = L_9;
		int32_t L_10 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0064:
	{
		// for (int i = 0; i < ParticleCount; i++)
		int32_t L_11 = __this->___U3CiU3E5__2_3;
		TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___ParticleCount_11;
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0027;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D745E99F36C0C255382C47DCC61506585D1957E (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_System_Collections_IEnumerator_Reset_m98C4FABF0888F8910BA1C9D8E8F5E288724CF0DA (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_System_Collections_IEnumerator_Reset_m98C4FABF0888F8910BA1C9D8E8F5E288724CF0DA_RuntimeMethod_var)));
	}
}
// System.Object TowerBase/<<NewTurretEffect>g__EmitParticles|27_0>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_System_Collections_IEnumerator_get_Current_m214E43966920D13CB0956FA9E22F50AE299EDC0B (U3CU3CNewTurretEffectU3Eg__EmitParticlesU7C27_0U3Ed_t090447C37BAA0C1444485898BEC22C6F618DCA51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BasicTower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicTower_Start_mC4D4FD092718E76524AD0023779E876252E020B7 (BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FireCoroutine());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.IEnumerator BasicTower::FireCoroutine() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BasicTower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicTower_Update_m94E99F1F27B7EF297955EA109E283AC9B1D4A50F (BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* __this, const RuntimeMethod* method) 
{
	{
		// FindNearestTarget();
		BasicTower_FindNearestTarget_m459615075A691E6E41C2F5C30F3DDF7EB1C5CC86(__this, NULL);
		// }
		return;
	}
}
// System.Void BasicTower::FindNearestTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicTower_FindNearestTarget_m459615075A691E6E41C2F5C30F3DDF7EB1C5CC86 (BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_2 = NULL;
	int32_t V_3 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	float V_6 = 0.0f;
	{
		// Collider[] colliders = Physics.OverlapSphere(transform.position, maxTargetRange);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = __this->___maxTargetRange_7;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = Physics_OverlapSphere_mCFA1C44458F8548C911C16F82077DA4C35D43F69(L_1, L_2, NULL);
		// float closestDistance = Mathf.Infinity;
		V_0 = (std::numeric_limits<float>::infinity());
		// Transform closestTarget = null;
		V_1 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		// foreach (Collider collider in colliders)
		V_2 = L_3;
		V_3 = 0;
		goto IL_0067;
	}

IL_0023:
	{
		// foreach (Collider collider in colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (collider.CompareTag("Enemy")) // Change "Enemy" to the appropriate tag for your targets
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = V_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_8, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// Transform targetTransform = collider.transform;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = V_4;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		V_5 = L_11;
		// float distance = Vector3.Distance(transform.position, targetTransform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_5;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16;
		L_16 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_13, L_15, NULL);
		V_6 = L_16;
		// if (distance < closestDistance)
		float L_17 = V_6;
		float L_18 = V_0;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_0063;
		}
	}
	{
		// closestDistance = distance;
		float L_19 = V_6;
		V_0 = L_19;
		// closestTarget = targetTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_5;
		V_1 = L_20;
	}

IL_0063:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0067:
	{
		// foreach (Collider collider in colliders)
		int32_t L_22 = V_3;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_23 = V_2;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// currentTarget = closestTarget;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_1;
		__this->___currentTarget_8 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentTarget_8), (void*)L_24);
		// }
		return;
	}
}
// System.Collections.IEnumerator BasicTower::FireCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BasicTower_FireCoroutine_m4900480BABEFE2A3AE013AA80DA29944B65B9B8B (BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* L_0 = (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245*)il2cpp_codegen_object_new(U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFireCoroutineU3Ed__8__ctor_m979A7C4430F600D4322EFCE8EBB5D5777167158E(L_0, 0, NULL);
		U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BasicTower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicTower__ctor_m32961CCCC4DE0A870BEFA3655757655C9BC55383 (BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* __this, const RuntimeMethod* method) 
{
	{
		// public float projectileSpeed = 10.0f;
		__this->___projectileSpeed_5 = (10.0f);
		// public float fireRate = 1.0f;
		__this->___fireRate_6 = (1.0f);
		// public float maxTargetRange = 10.0f;
		__this->___maxTargetRange_7 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BasicTower/<FireCoroutine>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__8__ctor_m979A7C4430F600D4322EFCE8EBB5D5777167158E (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BasicTower/<FireCoroutine>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__8_System_IDisposable_Dispose_mD87710E130E77805FB3521E90726C03A19A1EA6D (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BasicTower/<FireCoroutine>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireCoroutineU3Ed__8_MoveNext_m4AAA407BD3F67D79AD352C2142617A9BC438903D (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B7_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// if (currentTarget != null)
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4->___currentTarget_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_009f;
		}
	}
	{
		// Vector3 targetDirection = currentTarget.position - transform.position;
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___currentTarget_8;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_12, NULL);
		V_2 = L_13;
		// float timeOfFlight = targetDirection.magnitude / projectileSpeed;
		float L_14;
		L_14 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___projectileSpeed_5;
		V_3 = ((float)(L_14/L_16));
		// Vector3 initialVelocity = targetDirection / timeOfFlight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		float L_18 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_17, L_18, NULL);
		V_4 = L_19;
		// GameObject projectile = Instantiate(projectilePrefab, transform.position, Quaternion.identity);
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___projectilePrefab_4;
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_22 = V_1;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_21, L_24, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Rigidbody projectileRigidbody = projectile.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26;
		NullCheck(L_27);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28;
		L_28 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_27, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_5 = L_28;
		// if (projectileRigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_29 = V_5;
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B6_0 = L_27;
		if (!L_30)
		{
			G_B7_0 = L_27;
			goto IL_0099;
		}
	}
	{
		// projectileRigidbody.velocity = initialVelocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_31 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		NullCheck(L_31);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_31, L_32, NULL);
		G_B7_0 = G_B6_0;
	}

IL_0099:
	{
		// Destroy(projectile, timeOfFlight);
		float L_33 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(G_B7_0, L_33, NULL);
	}

IL_009f:
	{
		// yield return new WaitForSeconds(1.0f / fireRate);
		BasicTower_t6270D9A6FDDFC28D18C2E8D347E5E990E8896151* L_34 = V_1;
		NullCheck(L_34);
		float L_35 = L_34->___fireRate_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_36 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_36, ((float)((1.0f)/L_35)), NULL);
		__this->___U3CU3E2__current_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_36);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bf:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0021;
	}
}
// System.Object BasicTower/<FireCoroutine>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCoroutineU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDC3437F44ED351AEE98FF1B19B34F3AE5AD71DCD (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BasicTower/<FireCoroutine>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__8_System_Collections_IEnumerator_Reset_m3D68B3120E87FA99F4D5F827A7748CD6BFCE186A (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireCoroutineU3Ed__8_System_Collections_IEnumerator_Reset_m3D68B3120E87FA99F4D5F827A7748CD6BFCE186A_RuntimeMethod_var)));
	}
}
// System.Object BasicTower/<FireCoroutine>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCoroutineU3Ed__8_System_Collections_IEnumerator_get_Current_m56DD16708860FB09410B039725825A6DC60AA390 (U3CFireCoroutineU3Ed__8_t469A2E36FEF6A06175BC7C86A99625CC754A3245* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Blueprint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blueprint_Start_m494BFD59227F1667B6AD7A7802E28DC44B637CBC (Blueprint_t4D325CBE4D5D4EDDCF658390415CB75DCCA813C5* __this, const RuntimeMethod* method) 
{
	{
		// _movePoint = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->____movePoint_5 = L_0;
		// Ray ray = cam.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (Physics.Raycast(ray, out _hit, 500f))
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->____hit_4);
		bool L_5;
		L_5 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_3, L_4, (500.0f), NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// _movePoint = _hit.point;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->____hit_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_6, NULL);
		__this->____movePoint_5 = L_7;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void Blueprint::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blueprint_FixedUpdate_mE49BD0BD2FE53F633E1E467C96B752455F9DD7C1 (Blueprint_t4D325CBE4D5D4EDDCF658390415CB75DCCA813C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E_m52075F1521A5FE8E76708B700A9B19189BC4EBDD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0)) {
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_0073;
		}
	}
	{
		// Ray ray = cam.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_1);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3;
		L_3 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_1, L_2, NULL);
		// if (Physics.Raycast(ray, out _hit, 5000f)) {
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->____hit_4);
		bool L_5;
		L_5 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_3, L_4, (5000.0f), NULL);
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		// transform.position = _hit.point;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_7 = (&__this->____hit_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_7, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_8, NULL);
		// if (_hit.collider is BoxCollider)
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->____hit_4);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
		L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_9, NULL);
		if (!((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_10, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var)))
		{
			goto IL_0073;
		}
	}
	{
		// slot = _hit.collider.gameObject.GetComponent<BuildingSlot>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_11 = (&__this->____hit_4);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12;
		L_12 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* L_14;
		L_14 = GameObject_GetComponent_TisBuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E_m52075F1521A5FE8E76708B700A9B19189BC4EBDD(L_13, GameObject_GetComponent_TisBuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E_m52075F1521A5FE8E76708B700A9B19189BC4EBDD_RuntimeMethod_var);
		__this->___slot_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slot_9), (void*)L_14);
		// PlaceTower();
		Blueprint_PlaceTower_m2F4368483A681D4FB3D9226412D76D717541AC2E(__this, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void Blueprint::PlaceTower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blueprint_PlaceTower_m2F4368483A681D4FB3D9226412D76D717541AC2E (Blueprint_t4D325CBE4D5D4EDDCF658390415CB75DCCA813C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject tower = Instantiate(_prefab, slot.transform.position, slot.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____prefab_6;
		BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* L_1 = __this->___slot_9;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* L_4 = __this->___slot_9;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_3, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// tower.transform.SetParent(slot.transform, true);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* L_9 = __this->___slot_9;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_8);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_8, L_10, (bool)1, NULL);
		// slot.TowerBuild();
		BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* L_11 = __this->___slot_9;
		NullCheck(L_11);
		bool L_12;
		L_12 = BuildingSlot_TowerBuild_m5302B29A2A0F17A814040028EF1833CE3C30A82C(L_11, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
		// }
		return;
	}
}
// System.Void Blueprint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blueprint__ctor_mED715A6115F23D3FEEC1562DC7AF94418767C041 (Blueprint_t4D325CBE4D5D4EDDCF658390415CB75DCCA813C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean BuildingSlot::get_IsFilled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingSlot_get_IsFilled_m49438B231081CFBBB5DEE3DA675F8FED34ABDEE4 (BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isFilled; }
		bool L_0 = __this->____isFilled_4;
		return L_0;
	}
}
// System.Void BuildingSlot::set_IsFilled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSlot_set_IsFilled_m608EF19E20A70562DD17CD37285221028EF0B465 (BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _isFilled = TowerBuild(); }
		bool L_0;
		L_0 = BuildingSlot_TowerBuild_m5302B29A2A0F17A814040028EF1833CE3C30A82C(__this, NULL);
		__this->____isFilled_4 = L_0;
		// set { _isFilled = TowerBuild(); }
		return;
	}
}
// System.Boolean BuildingSlot::TowerBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BuildingSlot_TowerBuild_m5302B29A2A0F17A814040028EF1833CE3C30A82C (BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* __this, const RuntimeMethod* method) 
{
	{
		// _isFilled = true;
		__this->____isFilled_4 = (bool)1;
		// return _isFilled;
		bool L_0 = __this->____isFilled_4;
		return L_0;
	}
}
// System.Void BuildingSlot::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSlot_Reset_m8D5ED586F5F241AAC0C688DDCF51B7D78C7689B2 (BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* __this, const RuntimeMethod* method) 
{
	{
		// _isFilled = false;
		__this->____isFilled_4 = (bool)0;
		// }
		return;
	}
}
// System.Void BuildingSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingSlot__ctor_m938FC2FCBC425CBDE984C841C5859ED645ADBC9E (BuildingSlot_t519E935D4E5D3AEF77FA7CA05E1F8A2467269D2E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BuildTower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildTower__ctor_m5408BBF67F099A836C4D6AFAEDE7757D178A30FC (BuildTower_t7DA92A53D8D4D593759E7C86168099769CA97601* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemySpawnInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawnInfo__ctor_mBC968D010F90C0C3FBFB41C47E8CCCCD7D648913 (EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CircleSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSpawner_Start_m1D07151B48568412B5545DE9AA41E345E840386E (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) 
{
	{
		// waveSize = initialWaveSize;
		int32_t L_0 = __this->___initialWaveSize_6;
		__this->___waveSize_7 = L_0;
		// buildButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___buildButton_18;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CircleSpawner::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSpawner_StartGame_mCCE166A38F4ECC71091AC932B87B6DA52354C6D1 (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) 
{
	{
		// spawnCoroutine = StartCoroutine(SpawnWaves());
		RuntimeObject* L_0;
		L_0 = CircleSpawner_SpawnWaves_mAF4C23BA8C170D080ABB74E1C388D193C555C0AF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		__this->___spawnCoroutine_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnCoroutine_13), (void*)L_1);
		// playButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___playButton_17;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// buildButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___buildButton_18;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CircleSpawner::SpawnWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CircleSpawner_SpawnWaves_mAF4C23BA8C170D080ABB74E1C388D193C555C0AF (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* L_0 = (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017*)il2cpp_codegen_object_new(U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnWavesU3Ed__18__ctor_m2406C3754699E8FDDE1D35A1EE81D79E333EEF7C(L_0, 0, NULL);
		U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// UnityEngine.GameObject CircleSpawner::LoadData(UnityEngine.GameObject,EnemySpawnInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CircleSpawner_LoadData_m929F1AAC840914D56C6EC543A20719F91DBAB836 (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_enemy, EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* ___1_spawnInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m14EFF6A1CFB486084313526C03D96BC0FBECBC87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enemy enemyInstance = enemy.GetComponent<Enemy>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_enemy;
		NullCheck(L_0);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1;
		L_1 = GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F(L_0, GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		// enemyInstance.HealthComponent.GetComponent<Health>().Initialize(spawnInfo.enemyType.Health, spawnInfo.enemyType.Health);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = L_1;
		NullCheck(L_2);
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_3;
		L_3 = Entity_get_HealthComponent_m9086F947E2AB968A8BD1941247BB83E85A47E138_inline(L_2, NULL);
		NullCheck(L_3);
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_4;
		L_4 = Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA(L_3, Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA_RuntimeMethod_var);
		EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_5 = ___1_spawnInfo;
		NullCheck(L_5);
		EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_6 = L_5->___enemyType_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = EnemyData_get_Health_m4BE8EDA44B25E4BC8559D5675BB86FF54C380B30_inline(L_6, NULL);
		EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_8 = ___1_spawnInfo;
		NullCheck(L_8);
		EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_9 = L_8->___enemyType_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = EnemyData_get_Health_m4BE8EDA44B25E4BC8559D5675BB86FF54C380B30_inline(L_9, NULL);
		NullCheck(L_4);
		Health_Initialize_m39B03650AFB625281F07A58A29A622AF9F70AA97(L_4, L_7, L_10, NULL);
		// enemyInstance.EnemyMovement.GetComponent<EnemyMovement>().SetMovement(attackPoint, spawnInfo.enemyType.MoveSpeed);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_11 = L_2;
		NullCheck(L_11);
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_12;
		L_12 = Enemy_get_EnemyMovement_mE4E2238C24E3E8D3A91040ECC3354A9E9AE4BB7D_inline(L_11, NULL);
		NullCheck(L_12);
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_13;
		L_13 = Component_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m14EFF6A1CFB486084313526C03D96BC0FBECBC87(L_12, Component_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m14EFF6A1CFB486084313526C03D96BC0FBECBC87_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___attackPoint_16;
		EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_15 = ___1_spawnInfo;
		NullCheck(L_15);
		EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_16 = L_15->___enemyType_0;
		NullCheck(L_16);
		float L_17;
		L_17 = EnemyData_get_MoveSpeed_m823E91AE93F5E4C8880580E3B610BFB235C73936_inline(L_16, NULL);
		NullCheck(L_13);
		EnemyMovement_SetMovement_mB7F34E4265BC257785A7A0B3DEACCCFF2481F87C(L_13, L_14, L_17, NULL);
		// enemyInstance.PointAmount = spawnInfo.enemyType.PointValue;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_18 = L_11;
		EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_19 = ___1_spawnInfo;
		NullCheck(L_19);
		EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_20 = L_19->___enemyType_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = EnemyData_get_PointValue_mE1AA76EF8C2E969CE1F4D675879ADA2FC1281686_inline(L_20, NULL);
		NullCheck(L_18);
		Entity_set_PointAmount_mEBE4A4A160019F349F86F97DC3BFB948062C0D63_inline(L_18, L_21, NULL);
		// enemyInstance.Damage = spawnInfo.enemyType.DamageValue;
		EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_22 = ___1_spawnInfo;
		NullCheck(L_22);
		EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_23 = L_22->___enemyType_0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = EnemyData_get_DamageValue_mF624CB7076921093FC0D1C4B7871A62A4C87BCF2_inline(L_23, NULL);
		NullCheck(L_18);
		Enemy_set_Damage_mCFA5474176D907BE22C2A24EEAF3E69E36596D64_inline(L_18, L_24, NULL);
		// return enemy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = ___0_enemy;
		return L_25;
	}
}
// System.Boolean CircleSpawner::AllEnemiesEliminated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CircleSpawner_AllEnemiesEliminated_m77B9C1F1901960F5C9C7AA2946064737C7176D1F (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// foreach (var enemy in spawnedEnemies) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___spawnedEnemies_4;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_000e_1:
			{
				// foreach (var enemy in spawnedEnemies) {
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// if (enemy != null) {
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_3;
				L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_3)
				{
					goto IL_0021_1;
				}
			}
			{
				// return false;
				V_1 = (bool)0;
				goto IL_0047;
			}

IL_0021_1:
			{
				// foreach (var enemy in spawnedEnemies) {
				bool L_4;
				L_4 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// spawnedEnemies.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___spawnedEnemies_4;
		NullCheck(L_5);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_5, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0047:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void CircleSpawner::StopSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSpawner_StopSpawning_m1EDB2CB4864130B42C9250DD1F1A964C8E69BA96 (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) 
{
	{
		// if (spawnCoroutine != null) {
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0 = __this->___spawnCoroutine_13;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// StopCoroutine(spawnCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___spawnCoroutine_13;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_1, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void CircleSpawner::StopCurrentWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSpawner_StopCurrentWave_m71BA8CDACEDD1213E0ADC395553F4A7DA2A1F822 (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) 
{
	{
		// isSpawningWave = false;
		__this->___isSpawningWave_14 = (bool)0;
		// }
		return;
	}
}
// System.Void CircleSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSpawner__ctor_m3FA17BA03F2A825A91504F42C2FACC25E534CC9C (CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField]private List<GameObject> spawnedEnemies = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___spawnedEnemies_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedEnemies_4), (void*)L_0);
		// public int initialWaveSize = 5;
		__this->___initialWaveSize_6 = 5;
		// public float outerRadius = 5.0f;
		__this->___outerRadius_8 = (5.0f);
		// public float innerRadius = 2.0f;
		__this->___innerRadius_9 = (2.0f);
		// public float timeBetweenWaves = 5.0f;
		__this->___timeBetweenWaves_10 = (5.0f);
		// public float timeBetweenSpawns = 1.0f;
		__this->___timeBetweenSpawns_11 = (1.0f);
		// public float waveSizeMultiplier = 1.5f;
		__this->___waveSizeMultiplier_12 = (1.5f);
		// private int currentWave = 1;
		__this->___currentWave_15 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CircleSpawner/<SpawnWaves>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWavesU3Ed__18__ctor_m2406C3754699E8FDDE1D35A1EE81D79E333EEF7C (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CircleSpawner/<SpawnWaves>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWavesU3Ed__18_System_IDisposable_Dispose_mFA2033869D42CD5CB273CCB672C0724910EDEEAB (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CircleSpawner/<SpawnWaves>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnWavesU3Ed__18_MoveNext_m5E0854DB73FE09646A283111C1861379DA0B6B96 (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC641817940F1C4B295872ED7EB776AEF65043B67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA5B7D20652BEAEAD9CD56E1D3D29CC97527F99A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B9B1A747080AB8D9CC87B61C1FA40EFDEFFDDBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9003AF9B54BE295F92A0C82D835F2283BA678186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9CFAD0743A28D26A28D8AB048D74415726C04C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* V_2 = NULL;
	Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D V_3;
	memset((&V_3), 0, sizeof(V_3));
	EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* V_11 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_1 = L_0;
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_1 = __this->___U3CU3E4__this_2;
		V_2 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_016f;
			}
			case 3:
			{
				goto IL_0198;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_002d:
	{
		// isSpawningWave = true;
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_3 = V_2;
		NullCheck(L_3);
		L_3->___isSpawningWave_14 = (bool)1;
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var spawnInfo in enemySpawnInfoList) {
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_5 = V_2;
		NullCheck(L_5);
		List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5* L_6 = L_5->___enemySpawnInfoList_5;
		NullCheck(L_6);
		Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D L_7;
		L_7 = List_1_GetEnumerator_m9003AF9B54BE295F92A0C82D835F2283BA678186(L_6, List_1_GetEnumerator_m9003AF9B54BE295F92A0C82D835F2283BA678186_RuntimeMethod_var);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0148:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC641817940F1C4B295872ED7EB776AEF65043B67((&V_3), Enumerator_Dispose_mC641817940F1C4B295872ED7EB776AEF65043B67_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_013a_1;
			}

IL_0065_1:
			{
				// foreach (var spawnInfo in enemySpawnInfoList) {
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_8;
				L_8 = Enumerator_get_Current_m9B9B1A747080AB8D9CC87B61C1FA40EFDEFFDDBD_inline((&V_3), Enumerator_get_Current_m9B9B1A747080AB8D9CC87B61C1FA40EFDEFFDDBD_RuntimeMethod_var);
				V_4 = L_8;
				// for (int i = 0; i < spawnInfo.enemyCount * waveSize; i++) // Increase enemy count based on the current wave
				V_5 = 0;
				goto IL_0125_1;
			}

IL_0076_1:
			{
				// if (!isSpawningWave)
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_9 = V_2;
				NullCheck(L_9);
				bool L_10 = L_9->___isSpawningWave_14;
				if (L_10)
				{
					goto IL_0085_1;
				}
			}
			{
				// yield break; // Stop spawning if the wave was cleared prematurely
				V_0 = (bool)0;
				goto IL_0259;
			}

IL_0085_1:
			{
				// float randomAngle = Random.Range(0f, 360f);
				float L_11;
				L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
				V_6 = L_11;
				// float randomRadius = Random.Range(innerRadius, outerRadius);
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_12 = V_2;
				NullCheck(L_12);
				float L_13 = L_12->___innerRadius_9;
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_14 = V_2;
				NullCheck(L_14);
				float L_15 = L_14->___outerRadius_8;
				float L_16;
				L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_13, L_15, NULL);
				// float x = randomRadius * Mathf.Cos(randomAngle * Mathf.Deg2Rad);
				float L_17 = L_16;
				float L_18 = V_6;
				float L_19;
				L_19 = cosf(((float)il2cpp_codegen_multiply(L_18, (0.0174532924f))));
				V_7 = ((float)il2cpp_codegen_multiply(L_17, L_19));
				// float y = randomRadius * Mathf.Sin(randomAngle * Mathf.Deg2Rad);
				float L_20 = V_6;
				float L_21;
				L_21 = sinf(((float)il2cpp_codegen_multiply(L_20, (0.0174532924f))));
				V_8 = ((float)il2cpp_codegen_multiply(L_17, L_21));
				// Vector3 spawnPosition = new Vector3(x, 0.2f, y);
				float L_22 = V_7;
				float L_23 = V_8;
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), L_22, (0.200000003f), L_23, NULL);
				// if (currentWave >= spawnInfo.enemyType.SpawnableInWave) {
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_24 = V_2;
				NullCheck(L_24);
				int32_t L_25 = L_24->___currentWave_15;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_26 = V_4;
				NullCheck(L_26);
				EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_27 = L_26->___enemyType_0;
				NullCheck(L_27);
				int32_t L_28;
				L_28 = EnemyData_get_SpawnableInWave_mFF47A83CB1EC5D958ED79C8D3F1AC17D570DBC0E_inline(L_27, NULL);
				if ((((int32_t)L_25) < ((int32_t)L_28)))
				{
					goto IL_011f_1;
				}
			}
			{
				// GameObject enemyPrefab = spawnInfo.enemyType.Model;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_29 = V_4;
				NullCheck(L_29);
				EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_30 = L_29->___enemyType_0;
				NullCheck(L_30);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
				L_31 = EnemyData_get_Model_m4D969E803BF64193744C4D42AEAEBB83CA4226EA_inline(L_30, NULL);
				// GameObject spawnedEnemy = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_9;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
				L_33 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
				L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_31, L_32, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
				V_10 = L_34;
				// spawnedEnemy = LoadData(spawnedEnemy, spawnInfo);
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_35 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_10;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_37 = V_4;
				NullCheck(L_35);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
				L_38 = CircleSpawner_LoadData_m929F1AAC840914D56C6EC543A20719F91DBAB836(L_35, L_36, L_37, NULL);
				V_10 = L_38;
				// spawnedEnemies.Add(spawnedEnemy);
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_39 = V_2;
				NullCheck(L_39);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = L_39->___spawnedEnemies_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_10;
				NullCheck(L_40);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_40, L_41, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_011f_1:
			{
				// for (int i = 0; i < spawnInfo.enemyCount * waveSize; i++) // Increase enemy count based on the current wave
				int32_t L_42 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_0125_1:
			{
				// for (int i = 0; i < spawnInfo.enemyCount * waveSize; i++) // Increase enemy count based on the current wave
				int32_t L_43 = V_5;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_44 = V_4;
				NullCheck(L_44);
				int32_t L_45 = L_44->___enemyCount_1;
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_46 = V_2;
				NullCheck(L_46);
				int32_t L_47 = L_46->___waveSize_7;
				if ((((int32_t)L_43) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_45, L_47)))))
				{
					goto IL_0076_1;
				}
			}

IL_013a_1:
			{
				// foreach (var spawnInfo in enemySpawnInfoList) {
				bool L_48;
				L_48 = Enumerator_MoveNext_mA5B7D20652BEAEAD9CD56E1D3D29CC97527F99A8((&V_3), Enumerator_MoveNext_mA5B7D20652BEAEAD9CD56E1D3D29CC97527F99A8_RuntimeMethod_var);
				if (L_48)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_0156;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0156:
	{
		// isSpawningWave = false;
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_49 = V_2;
		NullCheck(L_49);
		L_49->___isSpawningWave_14 = (bool)0;
		goto IL_0176;
	}

IL_015f:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_016f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0176:
	{
		// while (!AllEnemiesEliminated()) {
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_50 = V_2;
		NullCheck(L_50);
		bool L_51;
		L_51 = CircleSpawner_AllEnemiesEliminated_m77B9C1F1901960F5C9C7AA2946064737C7176D1F(L_50, NULL);
		if (!L_51)
		{
			goto IL_015f;
		}
	}
	{
		// yield return new WaitForSeconds(timeBetweenWaves);
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_52 = V_2;
		NullCheck(L_52);
		float L_53 = L_52->___timeBetweenWaves_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_54 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_54, L_53, NULL);
		__this->___U3CU3E2__current_1 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_54);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0198:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentWave++; // Increase the current wave
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_55 = V_2;
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_56 = V_2;
		NullCheck(L_56);
		int32_t L_57 = L_56->___currentWave_15;
		NullCheck(L_55);
		L_55->___currentWave_15 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		// waveText.text = "Wave: " + currentWave.ToString();
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_58 = V_2;
		NullCheck(L_58);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_59 = L_58->___waveText_19;
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_60 = V_2;
		NullCheck(L_60);
		int32_t* L_61 = (&L_60->___currentWave_15);
		String_t* L_62;
		L_62 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_61, NULL);
		String_t* L_63;
		L_63 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0A9CFAD0743A28D26A28D8AB048D74415726C04C, L_62, NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_59, L_63);
		// foreach (EnemySpawnInfo info in enemySpawnInfoList) {
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_64 = V_2;
		NullCheck(L_64);
		List_1_t57CB3782DD3E7B4670228C12621DBD84FFF3D9A5* L_65 = L_64->___enemySpawnInfoList_5;
		NullCheck(L_65);
		Enumerator_t006AAB2EED7DD1DAACCBB329347B23F0B437778D L_66;
		L_66 = List_1_GetEnumerator_m9003AF9B54BE295F92A0C82D835F2283BA678186(L_65, List_1_GetEnumerator_m9003AF9B54BE295F92A0C82D835F2283BA678186_RuntimeMethod_var);
		V_3 = L_66;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_024b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC641817940F1C4B295872ED7EB776AEF65043B67((&V_3), Enumerator_Dispose_mC641817940F1C4B295872ED7EB776AEF65043B67_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_023d_1;
			}

IL_01db_1:
			{
				// foreach (EnemySpawnInfo info in enemySpawnInfoList) {
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_67;
				L_67 = Enumerator_get_Current_m9B9B1A747080AB8D9CC87B61C1FA40EFDEFFDDBD_inline((&V_3), Enumerator_get_Current_m9B9B1A747080AB8D9CC87B61C1FA40EFDEFFDDBD_RuntimeMethod_var);
				V_11 = L_67;
				// int oldEnemyCount = info.enemyCount;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_68 = V_11;
				NullCheck(L_68);
				int32_t L_69 = L_68->___enemyCount_1;
				// info.enemyCount = Mathf.RoundToInt(info.enemyCount * waveSizeMultiplier);
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_70 = V_11;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_71 = V_11;
				NullCheck(L_71);
				int32_t L_72 = L_71->___enemyCount_1;
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_73 = V_2;
				NullCheck(L_73);
				float L_74 = L_73->___waveSizeMultiplier_12;
				int32_t L_75;
				L_75 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)il2cpp_codegen_multiply(((float)L_72), L_74)), NULL);
				NullCheck(L_70);
				L_70->___enemyCount_1 = L_75;
				// if (oldEnemyCount == info.enemyCount) {
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_76 = V_11;
				NullCheck(L_76);
				int32_t L_77 = L_76->___enemyCount_1;
				if ((!(((uint32_t)L_69) == ((uint32_t)L_77))))
				{
					goto IL_0232_1;
				}
			}
			{
				// if(currentWave >= info.enemyType.SpawnableInWave)
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_78 = V_2;
				NullCheck(L_78);
				int32_t L_79 = L_78->___currentWave_15;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_80 = V_11;
				NullCheck(L_80);
				EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* L_81 = L_80->___enemyType_0;
				NullCheck(L_81);
				int32_t L_82;
				L_82 = EnemyData_get_SpawnableInWave_mFF47A83CB1EC5D958ED79C8D3F1AC17D570DBC0E_inline(L_81, NULL);
				if ((((int32_t)L_79) < ((int32_t)L_82)))
				{
					goto IL_0232_1;
				}
			}
			{
				// info.enemyCount++;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_83 = V_11;
				EnemySpawnInfo_t7CEE2A1F9FDF286E70649A04DA7344D77A6FB671* L_84 = L_83;
				NullCheck(L_84);
				int32_t L_85 = L_84->___enemyCount_1;
				NullCheck(L_84);
				L_84->___enemyCount_1 = ((int32_t)il2cpp_codegen_add(L_85, 1));
			}

IL_0232_1:
			{
				// spawnedEnemies.Clear();
				CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_86 = V_2;
				NullCheck(L_86);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_87 = L_86->___spawnedEnemies_4;
				NullCheck(L_87);
				List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_87, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
			}

IL_023d_1:
			{
				// foreach (EnemySpawnInfo info in enemySpawnInfoList) {
				bool L_88;
				L_88 = Enumerator_MoveNext_mA5B7D20652BEAEAD9CD56E1D3D29CC97527F99A8((&V_3), Enumerator_MoveNext_mA5B7D20652BEAEAD9CD56E1D3D29CC97527F99A8_RuntimeMethod_var);
				if (L_88)
				{
					goto IL_01db_1;
				}
			}
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0259:
	{
		bool L_89 = V_0;
		return L_89;
	}
}
// System.Object CircleSpawner/<SpawnWaves>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnWavesU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m992BB91A976846ACFAFEE2A14B76D24EB591079A (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CircleSpawner/<SpawnWaves>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnWavesU3Ed__18_System_Collections_IEnumerator_Reset_mD0539B00594486A4F283EE9540D0F0D0CE9C9A04 (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnWavesU3Ed__18_System_Collections_IEnumerator_Reset_mD0539B00594486A4F283EE9540D0F0D0CE9C9A04_RuntimeMethod_var)));
	}
}
// System.Object CircleSpawner/<SpawnWaves>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnWavesU3Ed__18_System_Collections_IEnumerator_get_Current_m734964DA88DEF92FC3ECEF8E7697BBF468F66A69 (U3CSpawnWavesU3Ed__18_t012EB0D77305A139AC297DD2826F07A1412CF017* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CPUHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPUHealth__ctor_mFB1BFA6E9ACBB1618E6009672AF7772D3D5678BF (CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A* __this, const RuntimeMethod* method) 
{
	{
		// public int maxHealth = 1;
		__this->___maxHealth_4 = 1;
		// public int health = 1;
		__this->___health_5 = 1;
		// public CPUHealth()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// }
		return;
	}
}
// System.Void CPUHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPUHealth_Awake_mE63EE8E7FDDCA22223E49B19B5E03F6EC0F05582 (CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CPUHealth::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPUHealth_OnTransformParentChanged_mDDB1DB4F03E1FD0B7B020BE945A6C11292C24155 (CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A* __this, const RuntimeMethod* method) 
{
	{
		// shouldInvokeChangedPositionEvent = true;
		__this->___shouldInvokeChangedPositionEvent_6 = (bool)1;
		// }
		return;
	}
}
// System.Void CPUHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPUHealth_Update_mB7E512C76B525C3F84106129CB6941F948F41C0F (CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (shouldInvokeChangedPositionEvent)
		bool L_0 = __this->___shouldInvokeChangedPositionEvent_6;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// OnCPUPositionMoved(transform.position);
		il2cpp_codegen_runtime_class_init_inline(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_1 = ((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUPositionMoved_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_inline(L_1, L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void CPUHealth::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPUHealth_OnCollisionEnter_m90E1D06127DF1983B6CB4FEA434E8292660423F5 (CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Enemy"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// health--;
		int32_t L_3 = __this->___health_5;
		__this->___health_5 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// OnCPUDamage(health, maxHealth);
		il2cpp_codegen_runtime_class_init_inline(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_4 = ((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDamage_9;
		int32_t L_5 = __this->___health_5;
		int32_t L_6 = __this->___maxHealth_4;
		NullCheck(L_4);
		Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_inline(L_4, L_5, L_6, NULL);
		// if (health <= 0)
		int32_t L_7 = __this->___health_5;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// gameObject.GetComponentInChildren<Renderer>().material = deadMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9;
		L_9 = GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB(L_8, GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___deadMaterial_7;
		NullCheck(L_9);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_9, L_10, NULL);
		// OnCPUDeath();
		il2cpp_codegen_runtime_class_init_inline(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDeath_8;
		NullCheck(L_11);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_11, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void CPUHealth::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPUHealth__cctor_mCAC56281144E63C5115B26F0957FF6D210660C2A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__12_0_m6A6FAB6FABA38FEF34178B3CC7ED42605A4933F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__12_1_m92E5321ED57006BED90322573D83693D8EB6F4DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__12_2_m2EE3A853DA2804FEA6B8C2CF9145A83F537351B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Action OnCPUDeath = delegate { };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var);
		U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* L_0 = ((U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, L_0, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__12_0_m6A6FAB6FABA38FEF34178B3CC7ED42605A4933F8_RuntimeMethod_var), NULL);
		((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDeath_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDeath_8), (void*)L_1);
		// public static Action<int, int> OnCPUDamage = delegate { };
		U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* L_2 = ((U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_3 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__12_1_m92E5321ED57006BED90322573D83693D8EB6F4DF_RuntimeMethod_var), NULL);
		((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDamage_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDamage_9), (void*)L_3);
		// public static Action<Vector3> OnCPUPositionMoved = delegate { };
		U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* L_4 = ((U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_5 = (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)il2cpp_codegen_object_new(Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__12_2_m2EE3A853DA2804FEA6B8C2CF9145A83F537351B0_RuntimeMethod_var), NULL);
		((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUPositionMoved_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUPositionMoved_10), (void*)L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CPUHealth/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB7DB179B450DC27F3B51328AEA64DB0B60E0AD76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* L_0 = (U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D*)il2cpp_codegen_object_new(U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m573DA91A42ADB7886126B7A78224EB2887E46200(L_0, NULL);
		((U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CPUHealth/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m573DA91A42ADB7886126B7A78224EB2887E46200 (U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void CPUHealth/<>c::<.cctor>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__12_0_m6A6FAB6FABA38FEF34178B3CC7ED42605A4933F8 (U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* __this, const RuntimeMethod* method) 
{
	{
		// public static Action OnCPUDeath = delegate { };
		return;
	}
}
// System.Void CPUHealth/<>c::<.cctor>b__12_1(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__12_1_m92E5321ED57006BED90322573D83693D8EB6F4DF (U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* __this, int32_t ___0_U3Cp0U3E, int32_t ___1_U3Cp1U3E, const RuntimeMethod* method) 
{
	{
		// public static Action<int, int> OnCPUDamage = delegate { };
		return;
	}
}
// System.Void CPUHealth/<>c::<.cctor>b__12_2(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__12_2_m2EE3A853DA2804FEA6B8C2CF9145A83F537351B0 (U3CU3Ec_t05E77A34CC516BC9C1EAD29412349378EFCE5A5D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_U3Cp0U3E, const RuntimeMethod* method) 
{
	{
		// public static Action<Vector3> OnCPUPositionMoved = delegate { };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CPU_HP_Bar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPU_HP_Bar_Start_mD5732FD466611970AB3A06F5AF3C6DEC97D67B59 (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CPU_HP_Bar_EvaluateHealthBar_mCEC85F47BCEE2BFB9CF4650B517B38EC00205E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CPU_HP_Bar_OnCPUPositionMoved_mA7AF950A6DC15F26DAD84D11A52C291426C65451_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m406436B9880CB839FEDFE181454BA264EFDCDA5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainCamera = GameObject.FindGameObjectsWithTag("ARCamera").First().transform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m406436B9880CB839FEDFE181454BA264EFDCDA5A((RuntimeObject*)L_0, Enumerable_First_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m406436B9880CB839FEDFE181454BA264EFDCDA5A_RuntimeMethod_var);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___mainCamera_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_7), (void*)L_2);
		// barMaxFilled = 100;
		__this->___barMaxFilled_8 = (100.0f);
		// CPUHealth.OnCPUDamage += EvaluateHealthBar;
		il2cpp_codegen_runtime_class_init_inline(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_3 = ((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDamage_9;
		Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* L_4 = (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)il2cpp_codegen_object_new(Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_2__ctor_m83CEE170A5B9427B596A04F9F50676B044223927(L_4, __this, (intptr_t)((void*)CPU_HP_Bar_EvaluateHealthBar_mCEC85F47BCEE2BFB9CF4650B517B38EC00205E46_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDamage_9 = ((Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)Castclass((RuntimeObject*)L_5, Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDamage_9), (void*)((Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8*)Castclass((RuntimeObject*)L_5, Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8_il2cpp_TypeInfo_var)));
		// CPUHealth.OnCPUPositionMoved += OnCPUPositionMoved;
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_6 = ((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUPositionMoved_10;
		Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* L_7 = (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)il2cpp_codegen_object_new(Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mE9E1859293BB35881CCC94B4A6E0A0E9997E046C(L_7, __this, (intptr_t)((void*)CPU_HP_Bar_OnCPUPositionMoved_mA7AF950A6DC15F26DAD84D11A52C291426C65451_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_6, L_7, NULL);
		((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUPositionMoved_10 = ((Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)Castclass((RuntimeObject*)L_8, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUPositionMoved_10), (void*)((Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2*)Castclass((RuntimeObject*)L_8, Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void CPU_HP_Bar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPU_HP_Bar_Update_m95AC3C416ADB37A19B69EE08C470B3D0EA65DC77 (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, const RuntimeMethod* method) 
{
	{
		// private void Update() => transform.LookAt(mainCamera);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___mainCamera_7;
		NullCheck(L_0);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_1, NULL);
		return;
	}
}
// System.Void CPU_HP_Bar::OnCPUPositionMoved(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPU_HP_Bar_OnCPUPositionMoved_mA7AF950A6DC15F26DAD84D11A52C291426C65451 (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_newPos, const RuntimeMethod* method) 
{
	{
		// private void OnCPUPositionMoved(Vector3 newPos) => transform.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_newPos;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		return;
	}
}
// System.Void CPU_HP_Bar::EvaluateHealthBar(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPU_HP_Bar_EvaluateHealthBar_mCEC85F47BCEE2BFB9CF4650B517B38EC00205E46 (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, int32_t ___0_health, int32_t ___1_maxHealth, const RuntimeMethod* method) 
{
	{
		// sliderBar.SetSizeWithCurrentAnchors(
		//     RectTransform.Axis.Horizontal,
		//     GetValueOfPersentage(
		//         GetPersentage(health, maxHealth, 2),
		//         barMaxFilled, 2));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___sliderBar_5;
		int32_t L_1 = ___0_health;
		int32_t L_2 = ___1_maxHealth;
		float L_3;
		L_3 = CPU_HP_Bar_GetPersentage_m7C4081D6D93FA8B4DC7A92779F00E0213BBFE8EE(__this, L_1, L_2, 2, NULL);
		float L_4 = __this->___barMaxFilled_8;
		float L_5;
		L_5 = CPU_HP_Bar_GetValueOfPersentage_mE0E742BC8CF66273485D7A59733966F78EABCFF1(__this, L_3, L_4, 2, NULL);
		NullCheck(L_0);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_0, 0, L_5, NULL);
		// }
		return;
	}
}
// System.Single CPU_HP_Bar::GetPersentage(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CPU_HP_Bar_GetPersentage_m7C4081D6D93FA8B4DC7A92779F00E0213BBFE8EE (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, int32_t ___0_current, int32_t ___1_max, int32_t ___2_precision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78148FAF9CBB6A9DFE9F2656F14ED37612629E37);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MathF.Round(float.Parse($"{new System.Data.DataTable().Compute($"100 / {max} * {current}", "")}"), precision);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_0 = (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07*)il2cpp_codegen_object_new(DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DataTable__ctor_m6217DD991E5E66260E640EAC3ABE0A3F127660A8(L_0, NULL);
		int32_t L_1 = ___1_max;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		int32_t L_4 = ___0_current;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral78148FAF9CBB6A9DFE9F2656F14ED37612629E37, L_3, L_6, NULL);
		NullCheck(L_0);
		RuntimeObject* L_8;
		L_8 = DataTable_Compute_mF80F1B5CCB5BEDC1FAE83615C7BC6386BC78D8CF(L_0, L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_8, NULL);
		float L_10;
		L_10 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_9, NULL);
		int32_t L_11 = ___2_precision;
		il2cpp_codegen_runtime_class_init_inline(MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = MathF_Round_m5DD772CDC5F86606281DE7886A23FB44BFB577E7_inline(L_10, L_11, NULL);
		return L_12;
	}
}
// System.Single CPU_HP_Bar::GetValueOfPersentage(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CPU_HP_Bar_GetValueOfPersentage_mE0E742BC8CF66273485D7A59733966F78EABCFF1 (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, float ___0_persentage, float ___1_max, int32_t ___2_precision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral448561667CB65F3BB53EB198C15E4F84041D4C78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MathF.Round(float.Parse($"{new System.Data.DataTable().Compute($"{max} / 100 * {persentage}", "")}"), precision);
		DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07* L_0 = (DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07*)il2cpp_codegen_object_new(DataTable_t9240A0D6726299C55832BF4EE085C864A1CCBB07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DataTable__ctor_m6217DD991E5E66260E640EAC3ABE0A3F127660A8(L_0, NULL);
		float L_1 = ___1_max;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = ___0_persentage;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral448561667CB65F3BB53EB198C15E4F84041D4C78, L_3, L_6, NULL);
		NullCheck(L_0);
		RuntimeObject* L_8;
		L_8 = DataTable_Compute_mF80F1B5CCB5BEDC1FAE83615C7BC6386BC78D8CF(L_0, L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_8, NULL);
		float L_10;
		L_10 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_9, NULL);
		int32_t L_11 = ___2_precision;
		il2cpp_codegen_runtime_class_init_inline(MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = MathF_Round_m5DD772CDC5F86606281DE7886A23FB44BFB577E7_inline(L_10, L_11, NULL);
		return L_12;
	}
}
// System.Void CPU_HP_Bar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CPU_HP_Bar__ctor_mE75B35C7C02F1DF7B793588D8382BCB9293FDBAB (CPU_HP_Bar_tDA889D09073755A7049BD95CD2C9CB9B3546CD40* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// EnemyMovement Enemy::get_EnemyMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* Enemy_get_EnemyMovement_mE4E2238C24E3E8D3A91040ECC3354A9E9AE4BB7D (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// public EnemyMovement EnemyMovement { get => enemyMovement; set => enemyMovement = value; }
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_0 = __this->___enemyMovement_7;
		return L_0;
	}
}
// System.Void Enemy::set_EnemyMovement(EnemyMovement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_EnemyMovement_m3D4206FEBAC81725FEFBC7A885C8EBDB3E37821D (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public EnemyMovement EnemyMovement { get => enemyMovement; set => enemyMovement = value; }
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_0 = ___0_value;
		__this->___enemyMovement_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyMovement_7), (void*)L_0);
		return;
	}
}
// System.Int32 Enemy::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enemy_get_Damage_mCC972F96BCE324C46A90ECFBE92B467AF2E3509E (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// public int Damage { get => damage; set => damage = value; }
		int32_t L_0 = __this->___damage_8;
		return L_0;
	}
}
// System.Void Enemy::set_Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_Damage_mCFA5474176D907BE22C2A24EEAF3E69E36596D64 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Damage { get => damage; set => damage = value; }
		int32_t L_0 = ___0_value;
		__this->___damage_8 = L_0;
		return;
	}
}
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mB58E74200229275689E6D9ADCDB6443D4E426624 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m69BC7F46EBDC34A6B391254C18CC3ED56CA43D6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Entity_Awake_mF01FDE5A22DD07BB6AC9A5CC7AA32E6AB6516848(__this, NULL);
		// EnemyMovement = this.gameObject.AddComponent<EnemyMovement>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_1;
		L_1 = GameObject_AddComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m69BC7F46EBDC34A6B391254C18CC3ED56CA43D6B(L_0, GameObject_AddComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_m69BC7F46EBDC34A6B391254C18CC3ED56CA43D6B_RuntimeMethod_var);
		Enemy_set_EnemyMovement_m3D4206FEBAC81725FEFBC7A885C8EBDB3E37821D_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Enemy::HandleHealthChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_HandleHealthChange_mE765FA29285CAE40A237CC594A1993895B2E1941 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) 
{
	{
		// base.HandleHealthChange(currentHealth, maxHealth);
		int32_t L_0 = ___0_currentHealth;
		int32_t L_1 = ___1_maxHealth;
		Entity_HandleHealthChange_m9649A6EFF5E2922ED7818AC9D4007841DD7A71B8(__this, L_0, L_1, NULL);
		// if (currentHealth <= 0) {
		int32_t L_2 = ___0_currentHealth;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// Die();
		Enemy_Die_mE3035165EFABE5FD2A294473FB427DB5737B89EB(__this, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_mE3035165EFABE5FD2A294473FB427DB5737B89EB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PointManager.AddPoints(pointAmount);
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_0;
		L_0 = Entity_get_PointManager_m3382ADEBB89B441043D1F2ADA52A5BD9E8450A83_inline(__this, NULL);
		int32_t L_1 = ((Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC*)__this)->___pointAmount_6;
		NullCheck(L_0);
		PointManager_AddPoints_m3AED58DC08C349B7A0B51A57253788E211F38EE5(L_0, L_1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter_m46AB50D33A3CEA54D6DF6FCF4A5AAFE0C7A60B4B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBase_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_m6E52D4C0084CC74A321DA4E3BDE2901806DDCBAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* V_0 = NULL;
	{
		// Base targetEntity = other.GetComponent<Base>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_1;
		L_1 = Component_GetComponent_TisBase_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_m6E52D4C0084CC74A321DA4E3BDE2901806DDCBAD(L_0, Component_GetComponent_TisBase_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_m6E52D4C0084CC74A321DA4E3BDE2901806DDCBAD_RuntimeMethod_var);
		V_0 = L_1;
		// if (targetEntity != null && targetEntity.GetComponent<Base>() != null) {
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_4 = V_0;
		NullCheck(L_4);
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_5;
		L_5 = Component_GetComponent_TisBase_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_m6E52D4C0084CC74A321DA4E3BDE2901806DDCBAD(L_4, Component_GetComponent_TisBase_tB0E39575E6C88869B432ADD314CBDC55F04FAECB_m6E52D4C0084CC74A321DA4E3BDE2901806DDCBAD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// targetEntity.HealthComponent.TakeDamage(damage);
		Base_tB0E39575E6C88869B432ADD314CBDC55F04FAECB* L_8 = V_0;
		NullCheck(L_8);
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_9;
		L_9 = Entity_get_HealthComponent_m9086F947E2AB968A8BD1941247BB83E85A47E138_inline(L_8, NULL);
		int32_t L_10 = __this->___damage_8;
		NullCheck(L_9);
		Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096(L_9, L_10, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int damage = 1;
		__this->___damage_8 = 1;
		Entity__ctor_mDD0E6C26C6E893C850C7D6B504C72DD4C9977B87(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject EnemyData::get_Model()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyData_get_Model_m4D969E803BF64193744C4D42AEAEBB83CA4226EA (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Model { get => model; set => model = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___model_4;
		return L_0;
	}
}
// System.Void EnemyData::set_Model(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyData_set_Model_m5C93EE2D518B7CE743D7D27D6C57A22A0D52DD8A (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject Model { get => model; set => model = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___model_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_4), (void*)L_0);
		return;
	}
}
// System.Int32 EnemyData::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyData_get_Health_m4BE8EDA44B25E4BC8559D5675BB86FF54C380B30 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int Health { get => health; set => health = value; }
		int32_t L_0 = __this->___health_5;
		return L_0;
	}
}
// System.Void EnemyData::set_Health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyData_set_Health_mDEC9E8E1DB960D1405E07EF8EC113A6930DAB4A8 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Health { get => health; set => health = value; }
		int32_t L_0 = ___0_value;
		__this->___health_5 = L_0;
		return;
	}
}
// System.Int32 EnemyData::get_SpawnableInWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyData_get_SpawnableInWave_mFF47A83CB1EC5D958ED79C8D3F1AC17D570DBC0E (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int SpawnableInWave { get => spawnableInWave; set => spawnableInWave = value; }
		int32_t L_0 = __this->___spawnableInWave_6;
		return L_0;
	}
}
// System.Void EnemyData::set_SpawnableInWave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyData_set_SpawnableInWave_m3E4813FB30591B1315F7949D239E595BFA4478C3 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int SpawnableInWave { get => spawnableInWave; set => spawnableInWave = value; }
		int32_t L_0 = ___0_value;
		__this->___spawnableInWave_6 = L_0;
		return;
	}
}
// System.Int32 EnemyData::get_PointValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyData_get_PointValue_mE1AA76EF8C2E969CE1F4D675879ADA2FC1281686 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int PointValue { get => pointValue; set => pointValue = value; }
		int32_t L_0 = __this->___pointValue_7;
		return L_0;
	}
}
// System.Void EnemyData::set_PointValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyData_set_PointValue_mA9F9D20980C3FDB57F10263128558F68A9634986 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PointValue { get => pointValue; set => pointValue = value; }
		int32_t L_0 = ___0_value;
		__this->___pointValue_7 = L_0;
		return;
	}
}
// System.Int32 EnemyData::get_DamageValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyData_get_DamageValue_mF624CB7076921093FC0D1C4B7871A62A4C87BCF2 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int DamageValue { get => damageValue; set => damageValue = value; }
		int32_t L_0 = __this->___damageValue_8;
		return L_0;
	}
}
// System.Void EnemyData::set_DamageValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyData_set_DamageValue_m811AF78A9E2766E7AE2240552455FC0E77B5C45B (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int DamageValue { get => damageValue; set => damageValue = value; }
		int32_t L_0 = ___0_value;
		__this->___damageValue_8 = L_0;
		return;
	}
}
// System.Single EnemyData::get_MoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyData_get_MoveSpeed_m823E91AE93F5E4C8880580E3B610BFB235C73936 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get => moveSpeed; set => moveSpeed = value; }
		float L_0 = __this->___moveSpeed_9;
		return L_0;
	}
}
// System.Void EnemyData::set_MoveSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyData_set_MoveSpeed_m01AC3E73628D3FCBB9B465071C79DD76495BD93F (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get => moveSpeed; set => moveSpeed = value; }
		float L_0 = ___0_value;
		__this->___moveSpeed_9 = L_0;
		return;
	}
}
// System.Void EnemyData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyData__ctor_m53F7E5EF3A876059B6710A1C0302430C523B26F3 (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 EnemyManager::get_GetPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyManager_get_GetPoints_mAC1C7696CC2606C0DEC72BEF4524B2B4A3E1B9E0 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return points; }
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25;
		return L_0;
	}
}
// System.Void EnemyManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_Start_m4E898795C26B0B8E719BC5C822D09083411C2275 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E78D40E30531AB61F88EFDD4F0E346BFEA737EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5A371DDF962DC30CAEC43208F86C6956AD22A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5CAA1FD22433D767BB1756512BA9BEB7DFE2789);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nodes.Add(nodes1);
		List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* L_0 = __this->___nodes_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___nodes1_7;
		NullCheck(L_0);
		List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_inline(L_0, L_1, List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_RuntimeMethod_var);
		// nodes.Add(nodes2);
		List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* L_2 = __this->___nodes_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___nodes2_8;
		NullCheck(L_2);
		List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_inline(L_2, L_3, List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_RuntimeMethod_var);
		// nodes.Add(nodes3);
		List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* L_4 = __this->___nodes_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___nodes3_9;
		NullCheck(L_4);
		List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_inline(L_4, L_5, List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_RuntimeMethod_var);
		// nodes.Add(nodes4);
		List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* L_6 = __this->___nodes_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = __this->___nodes4_10;
		NullCheck(L_6);
		List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_inline(L_6, L_7, List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_RuntimeMethod_var);
		// nodes.Add(nodes5);
		List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* L_8 = __this->___nodes_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = __this->___nodes5_11;
		NullCheck(L_8);
		List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_inline(L_8, L_9, List_1_Add_m636379CD32C3E3B725A0783B16F9A607FB549780_RuntimeMethod_var);
		// waveText = GameObject.Find("WaveText").GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7E78D40E30531AB61F88EFDD4F0E346BFEA737EB, NULL);
		NullCheck(L_10);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11;
		L_11 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_10, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___waveText_21 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waveText_21), (void*)L_11);
		// scoreText = GameObject.Find("ScoreText").GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9E5A371DDF962DC30CAEC43208F86C6956AD22A0, NULL);
		NullCheck(L_12);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13;
		L_13 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_12, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___scoreText_22 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreText_22), (void*)L_13);
		// pointsText = GameObject.Find("PointsText").GetComponent<TMP_Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB5CAA1FD22433D767BB1756512BA9BEB7DFE2789, NULL);
		NullCheck(L_14);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15;
		L_15 = GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3(L_14, GameObject_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_mA59A63181077B821132B53D44724D7F86C6FECB3_RuntimeMethod_var);
		__this->___pointsText_23 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointsText_23), (void*)L_15);
		// table = transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_16, NULL);
		__this->___table_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___table_4), (void*)L_17);
		// }
		return;
	}
}
// System.Void EnemyManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_Update_m1CCCCA84BC1BEE748F282D858ADA96C08D56F478 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time = Time.timeSinceLevelLoad;
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		__this->___time_15 = L_0;
		// WaveManager();
		EnemyManager_WaveManager_m7F8E1354325D129A7DEB12F91D10302DD56DE873(__this, NULL);
		// pointsText.text = "Points: " + points;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_1 = __this->___pointsText_23;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void EnemyManager::SpawnEnemy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_SpawnEnemy_m8D77CB052509663CB7A51F49FCA2C2EFFAFB3634 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, int32_t ___0_enemyIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// int spawnIndex = Random.Range(0, spawnTransforms.Length);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___spawnTransforms_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		// GameObject enemy = Instantiate(enemyPrefabs[enemyIndex], spawnTransforms[spawnIndex].position, Quaternion.identity, table);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___enemyPrefabs_12;
		int32_t L_3 = ___0_enemyIndex;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___spawnTransforms_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___table_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_5, L_10, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		V_1 = L_13;
		// enemy.GetComponent<EnemyMovement>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
		NullCheck(L_14);
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_15;
		L_15 = GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A(L_14, GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A_RuntimeMethod_var);
		NullCheck(L_15);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)1, NULL);
		// enemy.transform.position += new Vector3(0, enemy.transform.lossyScale.y/2, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_21, NULL);
		float L_23 = L_22.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), ((float)(L_23/(2.0f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_24, NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_25, NULL);
		// }
		return;
	}
}
// System.Void EnemyManager::ClickPlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_ClickPlayButton_mAAF934F39515FF1652D6E81160DC574113364A74 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) 
{
	{
		// hasGameStarted = true;
		__this->___hasGameStarted_26 = (bool)1;
		// }
		return;
	}
}
// System.Void EnemyManager::WaveManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_WaveManager_m7F8E1354325D129A7DEB12F91D10302DD56DE873 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A9CFAD0743A28D26A28D8AB048D74415726C04C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (hasGameStarted == true)
		bool L_0 = __this->___hasGameStarted_26;
		if (!L_0)
		{
			goto IL_01c5;
		}
	}
	{
		// moveTable.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___moveTable_28;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// playButton.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playButton_27;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// towerCostText.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___towerCostText_29;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// moveTableHelp.gameObject.SetActive(false);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___moveTableHelp_30;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// if (SpawnableEnemiesLeft())
		bool L_9;
		L_9 = EnemyManager_SpawnableEnemiesLeft_m690A099112BC14C79819DE3BACEC36B0ADAD4FF8(__this, NULL);
		if (!L_9)
		{
			goto IL_00ad;
		}
	}
	{
		// if (time > spawnTime)
		float L_10 = __this->___time_15;
		float L_11 = __this->___spawnTime_16;
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_01c5;
		}
	}
	{
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_0095;
	}

IL_006c:
	{
		// if (enemyAmountsRounded[i] > 0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___enemyAmountsRounded_14;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		// SpawnEnemy(i);
		int32_t L_16 = V_0;
		EnemyManager_SpawnEnemy_m8D77CB052509663CB7A51F49FCA2C2EFFAFB3634(__this, L_16, NULL);
		// enemyAmountsRounded[i]--;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___enemyAmountsRounded_14;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t* L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)));
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1));
		// break;
		goto IL_0099;
	}

IL_0091:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0095:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) < ((int32_t)5)))
		{
			goto IL_006c;
		}
	}

IL_0099:
	{
		// spawnTime = time + spawnDelay;
		float L_23 = __this->___time_15;
		float L_24 = __this->___spawnDelay_17;
		__this->___spawnTime_16 = ((float)il2cpp_codegen_add(L_23, L_24));
		return;
	}

IL_00ad:
	{
		// else if (!GameObject.FindGameObjectWithTag("Enemy"))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_25, NULL);
		if (L_26)
		{
			goto IL_01c5;
		}
	}
	{
		// currentWave++;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_27 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20;
		((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		// spawnDelay *= 0.99f;
		float L_28 = __this->___spawnDelay_17;
		__this->___spawnDelay_17 = ((float)il2cpp_codegen_multiply(L_28, (0.99000001f)));
		// if (currentWave == 5)
		int32_t L_29 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20;
		if ((!(((uint32_t)L_29) == ((uint32_t)5))))
		{
			goto IL_00fe;
		}
	}
	{
		// enemyAmounts[1]++;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = __this->___enemyAmounts_13;
		NullCheck(L_30);
		float* L_31 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		float L_32 = *((float*)L_31);
		*((float*)L_31) = (float)((float)il2cpp_codegen_add(L_32, (1.0f)));
		goto IL_015c;
	}

IL_00fe:
	{
		// else if (currentWave == 10)
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_33 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_011e;
		}
	}
	{
		// enemyAmounts[2]++;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = __this->___enemyAmounts_13;
		NullCheck(L_34);
		float* L_35 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_36 = *((float*)L_35);
		*((float*)L_35) = (float)((float)il2cpp_codegen_add(L_36, (1.0f)));
		goto IL_015c;
	}

IL_011e:
	{
		// else if (currentWave == 15)
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_37 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_013e;
		}
	}
	{
		// enemyAmounts[3]++;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = __this->___enemyAmounts_13;
		NullCheck(L_38);
		float* L_39 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		float L_40 = *((float*)L_39);
		*((float*)L_39) = (float)((float)il2cpp_codegen_add(L_40, (1.0f)));
		goto IL_015c;
	}

IL_013e:
	{
		// else if (currentWave == 20)
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_41 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_015c;
		}
	}
	{
		// enemyAmounts[4]++;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___enemyAmounts_13;
		NullCheck(L_42);
		float* L_43 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(4)));
		float L_44 = *((float*)L_43);
		*((float*)L_43) = (float)((float)il2cpp_codegen_add(L_44, (1.0f)));
	}

IL_015c:
	{
		// waveText.text = "Wave: " + currentWave;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_45 = __this->___waveText_21;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20), NULL);
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0A9CFAD0743A28D26A28D8AB048D74415726C04C, L_46, NULL);
		NullCheck(L_45);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_45, L_47);
		// for (int i = 0; i < 5; i++)
		V_1 = 0;
		goto IL_01ae;
	}

IL_017f:
	{
		// enemyAmounts[i] *= enemyMultiplier;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = __this->___enemyAmounts_13;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		float* L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)));
		float L_51 = *((float*)L_50);
		float L_52 = __this->___enemyMultiplier_19;
		*((float*)L_50) = (float)((float)il2cpp_codegen_multiply(L_51, L_52));
		// enemyAmountsRounded[i] = Mathf.RoundToInt(enemyAmounts[i]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->___enemyAmountsRounded_14;
		int32_t L_54 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = __this->___enemyAmounts_13;
		int32_t L_56 = V_1;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		float L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59;
		L_59 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(L_58, NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (int32_t)L_59);
		// for (int i = 0; i < 5; i++)
		int32_t L_60 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_01ae:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_61 = V_1;
		if ((((int32_t)L_61) < ((int32_t)5)))
		{
			goto IL_017f;
		}
	}
	{
		// spawnTime = time + waveDelay;
		float L_62 = __this->___time_15;
		float L_63 = __this->___waveDelay_18;
		__this->___spawnTime_16 = ((float)il2cpp_codegen_add(L_62, L_63));
	}

IL_01c5:
	{
		// }
		return;
	}
}
// System.Boolean EnemyManager::SpawnableEnemiesLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyManager_SpawnableEnemiesLeft_m690A099112BC14C79819DE3BACEC36B0ADAD4FF8 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (int enemies in enemyAmountsRounded)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___enemyAmountsRounded_14;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (int enemies in enemyAmountsRounded)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// if (enemies > 0)
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0013:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0017:
	{
		// foreach (int enemies in enemyAmountsRounded)
		int32_t L_6 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void EnemyManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_AddScore_m85BC1DE328B76F976CB4AF44405C7BFC7E84631E (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += amount;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___score_24;
		int32_t L_1 = ___0_amount;
		((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___score_24 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// scoreText.text = "Score: " + score;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___scoreText_22;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___score_24), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void EnemyManager::AddPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_AddPoints_m7201A3AED601CFE0CC92B9756FF2A10FAC1ADFE5 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// points += amount;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25;
		int32_t L_1 = ___0_amount;
		((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// pointsText.text = "Points: " + points;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___pointsText_23;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void EnemyManager::ForceDeductPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager_ForceDeductPoints_m8499100E9829C26B6F16205B2F3AE5FD64F30FFB (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// points -= amount;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25;
		int32_t L_1 = ___0_amount;
		((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// pointsText.text = "Points: " + points;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___pointsText_23;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Boolean EnemyManager::DeductPoinstIfSufficient(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(points > amount)
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25;
		int32_t L_1 = ___0_amount;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0035;
		}
	}
	{
		// points -= amount;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_2 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25;
		int32_t L_3 = ___0_amount;
		((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// pointsText.text = "Points: " + points;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___pointsText_23;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// return true;
		return (bool)1;
	}

IL_0035:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void EnemyManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager__ctor_m76040BEF87B84C8A36D79F1284F479ECE7B8D842 (EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC5870D0A89C1865160880889C9F7BA3B0B3F9453_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Transform[]> nodes = new List<Transform[]>();
		List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6* L_0 = (List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6*)il2cpp_codegen_object_new(List_1_tA82F0377701E6CA64745AAE7BDBC251DA8E438C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC5870D0A89C1865160880889C9F7BA3B0B3F9453(L_0, List_1__ctor_mC5870D0A89C1865160880889C9F7BA3B0B3F9453_RuntimeMethod_var);
		__this->___nodes_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_6), (void*)L_0);
		// private float[] enemyAmounts = new float[] { 3, 0, 0, 0, 0 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(3.0f));
		__this->___enemyAmounts_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyAmounts_13), (void*)L_2);
		// private int[] enemyAmountsRounded = new int[] { 3, 0, 0, 0, 0 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)3);
		__this->___enemyAmountsRounded_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyAmountsRounded_14), (void*)L_4);
		// private float spawnDelay = 1f;
		__this->___spawnDelay_17 = (1.0f);
		// private float waveDelay = 10f;
		__this->___waveDelay_18 = (10.0f);
		// private float enemyMultiplier = 1.2f;
		__this->___enemyMultiplier_19 = (1.20000005f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void EnemyManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyManager__cctor_m0D4927180F8DC77F68AF1C90974A41B0CEFBC8AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int currentWave = 1;
		((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20 = 1;
		// public static int points = 9000;
		((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25 = ((int32_t)9000);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject EnemyMovement::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyMovement_get_Target_m53DACF80808DE6FDC9A3AB68E677EDE98B5019D7 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Target { get => target; set => target = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		return L_0;
	}
}
// System.Void EnemyMovement::set_Target(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_set_Target_mCD0271AF9EE7503A08E39D5AC3EEC15C680AEF80 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject Target { get => target; set => target = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		return;
	}
}
// System.Single EnemyMovement::get_MovementSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyMovement_get_MovementSpeed_mC2FA2FF0988F7D66E587535CBE752E6C1D037B65 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// public float MovementSpeed { get => movementSpeed; set => movementSpeed = value; }
		float L_0 = __this->___movementSpeed_5;
		return L_0;
	}
}
// System.Void EnemyMovement::set_MovementSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_set_MovementSpeed_mFB62D3D5050891A444128EC5658B362D3293212E (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MovementSpeed { get => movementSpeed; set => movementSpeed = value; }
		float L_0 = ___0_value;
		__this->___movementSpeed_5 = L_0;
		return;
	}
}
// System.Void EnemyMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Awake_m8E3589394AF4E557F303AA9B65B201F1781684FD (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_OnCollisionEnter_mF8045397D0C480DA146100359D7E021061D14043 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Update_mE16B0A7E944111B195856D2256F3FF0587224158 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(target != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// gameObject.transform.LookAt(target.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___target_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_3);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_3, L_5, NULL);
		// transform.position += movementSpeed * Time.deltaTime * transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = __this->___movementSpeed_5;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_9, L_10)), L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_13, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_14, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::SetMovement(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_SetMovement_mB7F34E4265BC257785A7A0B3DEACCCFF2481F87C (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, float ___1_speed, const RuntimeMethod* method) 
{
	{
		// Target = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_target;
		EnemyMovement_set_Target_mCD0271AF9EE7503A08E39D5AC3EEC15C680AEF80_inline(__this, L_0, NULL);
		// movementSpeed = speed;
		float L_1 = ___1_speed;
		__this->___movementSpeed_5 = L_1;
		// }
		return;
	}
}
// System.Void EnemyMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement__ctor_mFA5BD794CC67E008E8043CBDB7CDFB437D26180B (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject EnemyPoof::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyPoof_Explode_m339AB047074735BD34EE9F8618261007B8F9F4C8 (EnemyPoof_tF8C408EABC29D4D45DD2087D042AD8B2D7C213A2* __this, const RuntimeMethod* method) 
{
	{
		// system.Emit(100);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___system_4;
		NullCheck(L_0);
		ParticleSystem_Emit_m3E9E6359087607E84E0D4D35844D80D9452AD72D(L_0, ((int32_t)100), NULL);
		// return gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_1;
	}
}
// System.Void EnemyPoof::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyPoof__ctor_m01859439D8BF6D5B492AF134A281A01B3F3B6330 (EnemyPoof_tF8C408EABC29D4D45DD2087D042AD8B2D7C213A2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Health Entity::get_HealthComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* Entity_get_HealthComponent_m9086F947E2AB968A8BD1941247BB83E85A47E138 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// public Health HealthComponent { get => healthComponent; set => healthComponent = value; }
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_0 = __this->___healthComponent_4;
		return L_0;
	}
}
// System.Void Entity::set_HealthComponent(Health)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_set_HealthComponent_m00C355AED2887ED341BDDA63A10377613BAAF23E (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Health HealthComponent { get => healthComponent; set => healthComponent = value; }
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_0 = ___0_value;
		__this->___healthComponent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthComponent_4), (void*)L_0);
		return;
	}
}
// System.Int32 Entity::get_PointAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Entity_get_PointAmount_m4D0E8C1498B58DB18140D4D0CC2B769E9C45FAAF (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// public int PointAmount { get => pointAmount; set => pointAmount = value; }
		int32_t L_0 = __this->___pointAmount_6;
		return L_0;
	}
}
// System.Void Entity::set_PointAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_set_PointAmount_mEBE4A4A160019F349F86F97DC3BFB948062C0D63 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PointAmount { get => pointAmount; set => pointAmount = value; }
		int32_t L_0 = ___0_value;
		__this->___pointAmount_6 = L_0;
		return;
	}
}
// PointManager Entity::get_PointManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* Entity_get_PointManager_m3382ADEBB89B441043D1F2ADA52A5BD9E8450A83 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// public PointManager PointManager { get => pointManager; set => pointManager = value; }
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_0 = __this->___pointManager_5;
		return L_0;
	}
}
// System.Void Entity::set_PointManager(PointManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_set_PointManager_m72701FB2DED4A49EC2D753FB3FB1B0DC0D7B6B8D (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* ___0_value, const RuntimeMethod* method) 
{
	{
		// public PointManager PointManager { get => pointManager; set => pointManager = value; }
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_0 = ___0_value;
		__this->___pointManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointManager_5), (void*)L_0);
		return;
	}
}
// System.Void Entity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Awake_mF01FDE5A22DD07BB6AC9A5CC7AA32E6AB6516848 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF339CC78F2107267AD248D1D5678D8DFC786D482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthComponent = this.gameObject.AddComponent<Health>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_1;
		L_1 = GameObject_AddComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF339CC78F2107267AD248D1D5678D8DFC786D482(L_0, GameObject_AddComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF339CC78F2107267AD248D1D5678D8DFC786D482_RuntimeMethod_var);
		Entity_set_HealthComponent_m00C355AED2887ED341BDDA63A10377613BAAF23E_inline(__this, L_1, NULL);
		// PointManager = GameObject.FindGameObjectWithTag("GameController").GetComponent<PointManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4, NULL);
		NullCheck(L_2);
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_3;
		L_3 = GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7(L_2, GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7_RuntimeMethod_var);
		Entity_set_PointManager_m72701FB2DED4A49EC2D753FB3FB1B0DC0D7B6B8D_inline(__this, L_3, NULL);
		// healthComponent.OnHealthChanged += HandleHealthChange;
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_4 = __this->___healthComponent_4;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_5 = (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)il2cpp_codegen_object_new(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		HealthChangeHandler__ctor_m5D2D0F0CDA97070C00FD4BC95E3FEE5AAD871F48(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_4);
		Health_add_OnHealthChanged_m1C2885C6F1014673C97BB42958886A3951267A53(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Entity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Start_m785A7202A0E07323349F9619F42DC602AA2A00DC (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HealthComponent = GetComponent<Health>();
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_0;
		L_0 = Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA(__this, Component_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mCEEE54C9E873293A79FD2C0DA64049F7B8DC28EA_RuntimeMethod_var);
		Entity_set_HealthComponent_m00C355AED2887ED341BDDA63A10377613BAAF23E_inline(__this, L_0, NULL);
		// healthComponent.OnHealthChanged += HandleHealthChange;
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_1 = __this->___healthComponent_4;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_2 = (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)il2cpp_codegen_object_new(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HealthChangeHandler__ctor_m5D2D0F0CDA97070C00FD4BC95E3FEE5AAD871F48(L_2, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 6)), NULL);
		NullCheck(L_1);
		Health_add_OnHealthChanged_m1C2885C6F1014673C97BB42958886A3951267A53(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Entity::HandleHealthChange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_HandleHealthChange_m9649A6EFF5E2922ED7818AC9D4007841DD7A71B8 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Transform Entity::GetTransfrom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Entity_GetTransfrom_m0321D272174B55F08F39456035EE39839DBD62A1 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// return transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return L_0;
	}
}
// System.Void Entity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity__ctor_mDD0E6C26C6E893C850C7D6B504C72DD4C9977B87 (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3_mF68E94BD983723041747CF9977E3AD1393FD99B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pointManager = gameObject.GetComponent<PointManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_1;
		L_1 = GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7(L_0, GameObject_GetComponent_TisPointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9_m1AA354C3D26666EED3028D5A8B27837D1A721EB7_RuntimeMethod_var);
		__this->___pointManager_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointManager_5), (void*)L_1);
		// spawner = gameObject.GetComponent<CircleSpawner>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		CircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3* L_3;
		L_3 = GameObject_GetComponent_TisCircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3_mF68E94BD983723041747CF9977E3AD1393FD99B0(L_2, GameObject_GetComponent_TisCircleSpawner_t3819C380C2B26A54EF639C32D6D9CFCB7F67C2C3_mF68E94BD983723041747CF9977E3AD1393FD99B0_RuntimeMethod_var);
		__this->___spawner_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawner_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF21700510B497B89FEE85DE675D6E241730F23A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Hide();
		GameManager_Hide_m8B9993BD9BE1BECB767B8D1F8EAD8AFBA20390B7(__this, NULL);
		// debugText.text = "hi";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___debugText_17;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralF21700510B497B89FEE85DE675D6E241730F23A7);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_mB3889B31D5E3778CC59FAE8A210D08F1FCCD2DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* V_3 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (isBuilding) {
		bool L_0 = __this->___isBuilding_18;
		if (!L_0)
		{
			goto IL_0104;
		}
	}
	{
		// Show();
		GameManager_Show_m3BC1A636A08ADFA6DC1D1BFB282F44DB3352D8F4(__this, NULL);
		// bool tileSelected = CheckTileSelection(out selectedTile);
		bool L_1;
		L_1 = GameManager_CheckTileSelection_m5A2140B2DA666A02AE1BC9816C6CD63781974CEF(__this, (&V_0), NULL);
		V_1 = L_1;
		// if (selectedTile != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0104;
		}
	}
	{
		// Vector3 offset = new Vector3(0, 0.17f, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.170000002f), (0.0f), NULL);
		// XRSimpleInteractable interactable = selectedTile.GetComponent<XRSimpleInteractable>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_5;
		L_5 = GameObject_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_mB3889B31D5E3778CC59FAE8A210D08F1FCCD2DF1(L_4, GameObject_GetComponent_TisXRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79_mB3889B31D5E3778CC59FAE8A210D08F1FCCD2DF1_RuntimeMethod_var);
		V_3 = L_5;
		// _prefabBp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____prefabBp_11;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// Vector3 intersection = selectedTile.transform.position + offset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		V_4 = L_11;
		// _prefabBp.transform.position = intersection;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____prefabBp_11;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_4;
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// ColorSurroundingCells(selectedTile);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		GameManager_ColorSurroundingCells_m0EC110ED6C4B49C33417C06802CC597EEA2FACA0(__this, L_15, NULL);
		// if (tileSelected && interactable.isSelected || Input.GetMouseButtonDown(0)) {
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_0086;
		}
	}
	{
		XRSimpleInteractable_t3A9B4306E28507FF98E52F5203CE896262679E79* L_17 = V_3;
		NullCheck(L_17);
		bool L_18;
		L_18 = XRBaseInteractable_get_isSelected_m48487E7F2E3E1EDB6D9B6985FF146020F628B3CE(L_17, NULL);
		if (L_18)
		{
			goto IL_008e;
		}
	}

IL_0086:
	{
		bool L_19;
		L_19 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_19)
		{
			goto IL_0104;
		}
	}

IL_008e:
	{
		// _prefabBp.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____prefabBp_11;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// if (!pointManager.DeductPoinstIfSufficient(50)) {
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_21 = __this->___pointManager_5;
		NullCheck(L_21);
		bool L_22;
		L_22 = PointManager_DeductPoinstIfSufficient_m702E42AF0EC0BD35F02FFFA07217FF771A37C4DB(L_21, ((int32_t)50), NULL);
		if (L_22)
		{
			goto IL_00bc;
		}
	}
	{
		// RevertState(adjecentcells);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = __this->___adjecentcells_19;
		GameManager_RevertState_mB605C56B1A30B36918E9217E48F77621AF0D25B1(__this, L_23, NULL);
		// EndBuilding();
		GameManager_EndBuilding_mB9666539D7703F0DBE4D3FFFD7FDDD12641A01A5(__this, NULL);
		// return;
		return;
	}

IL_00bc:
	{
		// GameObject clone = Instantiate(_prefab, selectedTile.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->____prefab_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_24, L_27, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// DisableSurroundingCells(outerCells, normalMat);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = __this->___outerCells_20;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___normalMat_15;
		GameManager_DisableSurroundingCells_mCBF5C9549A508A6E3DE3205C80588B646B2DACE4(__this, L_30, L_31, NULL);
		// DisableSurroundingCells(adjecentcells, blockedMat, false, true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_32 = __this->___adjecentcells_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___blockedMat_16;
		GameManager_DisableSurroundingCells_mA979768C40DFA076E1A7579D286B293BAC6FFD0B(__this, L_32, L_33, (bool)0, (bool)1, NULL);
		// EndBuilding();
		GameManager_EndBuilding_mB9666539D7703F0DBE4D3FFFD7FDDD12641A01A5(__this, NULL);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void GameManager::StartBulding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartBulding_mCBDBB4851AEFC720B70D97F419368A7BCD878F11 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (image != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___image_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// image.color = Color.green;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
	}

IL_001e:
	{
		// isBuilding = true;
		__this->___isBuilding_18 = (bool)1;
		// }
		return;
	}
}
// UnityEngine.GameObject GameManager::CheckTileSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameManager_CheckTileSelection_m24449A264AC0E2683AC981C47F75AC58D738431E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AE3E8F405EE8D97738F6731F686F87FFB976637);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDFB472E0AF31358F6926D492F1141D32C0AE7FD);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_1 = NULL;
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if (Physics.Raycast(ray, out hit)) {
		bool L_3;
		L_3 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_2, (&V_0), NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// Tile tileComponent = hit.collider.GetComponent<Tile>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4;
		L_4 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_4);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_5;
		L_5 = Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998(L_4, Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
		V_1 = L_5;
		// if (tileComponent != null && tileComponent.enabled == true) {
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_8, NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// return hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
		L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		return L_11;
	}

IL_0043:
	{
		// Debug.Log("Selected a tile outside of the range.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0AE3E8F405EE8D97738F6731F686F87FFB976637, NULL);
		// return null; // Return null to indicate tile selection outside of the range
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_004f:
	{
		// Debug.Log("Clicked on something other than a tile:" + hit.collider.name);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12;
		L_12 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDDFB472E0AF31358F6926D492F1141D32C0AE7FD, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// return null; // Return null for non-tile objects
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}
}
// System.Boolean GameManager::CheckTileSelection(UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameManager_CheckTileSelection_m5A2140B2DA666A02AE1BC9816C6CD63781974CEF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___0_selectedTile, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AE3E8F405EE8D97738F6731F686F87FFB976637);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87ED58E5539A34BD8452C78BCE0DFBE4FC531CF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5A2D14572900DEBC60EA4427921354FBEC2A9AF);
		s_Il2CppMethodInitialized = true;
	}
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_0 = NULL;
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* V_1 = NULL;
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* V_2 = NULL;
	Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Nullable_1_t0344856814F10DA4D2BF15C9E0134D43CB1BA382 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	Nullable_1_t0344856814F10DA4D2BF15C9E0134D43CB1BA382 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	bool V_12 = false;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_13;
	memset((&V_13), 0, sizeof(V_13));
	bool V_14 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		// selectedTile = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = ___0_selectedTile;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// Tile tileComponent = null;
		V_0 = (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*)NULL;
		// XRRayInteractor rightRay = rightHand.GetComponent<XRRayInteractor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___rightHand_9;
		NullCheck(L_1);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_2;
		L_2 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_1, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		V_1 = L_2;
		// XRRayInteractor leftRay = leftHand.GetComponent<XRRayInteractor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___leftHand_8;
		NullCheck(L_3);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_4;
		L_4 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_3, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		V_2 = L_4;
		// RaycastHit? rightRaycastHit = null;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326));
		// RaycastHit? leftRaycastHit = null;
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326));
	}
	try
	{// begin try (depth: 1)
		{
			// if (rightRay.TryGetCurrentRaycast(out rightRaycastHit, out int rightRaycastHitIndex, out RaycastResult? rightUiRaycastHit, out int rightUiRaycastHitIndex, out bool rightIsUIHitClosest) ||
			//     leftRay.TryGetCurrentRaycast(out leftRaycastHit, out int leftRaycastHitIndex, out RaycastResult? leftUiRaycastHit, out int leftUiRaycastHitIndex, out bool leftIsUIHitClosest)) {
			XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_5 = V_1;
			NullCheck(L_5);
			bool L_6;
			L_6 = XRRayInteractor_TryGetCurrentRaycast_mF6C0E3DE22A6CF5FD8777CC2837C3F79E215E5F3(L_5, (&V_3), (&V_5), (&V_6), (&V_7), (&V_8), NULL);
			if (L_6)
			{
				goto IL_0051_1;
			}
		}
		{
			XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_7 = V_2;
			NullCheck(L_7);
			bool L_8;
			L_8 = XRRayInteractor_TryGetCurrentRaycast_mF6C0E3DE22A6CF5FD8777CC2837C3F79E215E5F3(L_7, (&V_4), (&V_9), (&V_10), (&V_11), (&V_12), NULL);
			if (!L_8)
			{
				goto IL_00d0_1;
			}
		}

IL_0051_1:
		{
			// if (rightRaycastHit.HasValue) {
			bool L_9;
			L_9 = Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_inline((&V_3), Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_RuntimeMethod_var);
			if (!L_9)
			{
				goto IL_0075_1;
			}
		}
		try
		{// begin try (depth: 2)
			// tileComponent = rightRaycastHit.Value.collider.GetComponent<Tile>();
			RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_10;
			L_10 = Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC((&V_3), Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var);
			V_13 = L_10;
			Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
			L_11 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_13), NULL);
			NullCheck(L_11);
			Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_12;
			L_12 = Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998(L_11, Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
			V_0 = L_12;
			// }
			goto IL_0099_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0072_1;
			}
			throw e;
		}

CATCH_0072_1:
		{// begin catch(System.Exception)
			// catch (Exception ex) {
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0099_1;
		}// end catch (depth: 2)

IL_0075_1:
		{
			// else if (leftRaycastHit.HasValue) {
			bool L_13;
			L_13 = Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_inline((&V_4), Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_0099_1;
			}
		}
		try
		{// begin try (depth: 2)
			// tileComponent = leftRaycastHit.Value.collider.GetComponent<Tile>();
			RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_14;
			L_14 = Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC((&V_4), Nullable_1_get_Value_mB7FAA9863D5584543E4EAF943E154B93353830CC_RuntimeMethod_var);
			V_13 = L_14;
			Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15;
			L_15 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_13), NULL);
			NullCheck(L_15);
			Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_16;
			L_16 = Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998(L_15, Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
			V_0 = L_16;
			// }
			goto IL_0099_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0096_1;
			}
			throw e;
		}

CATCH_0096_1:
		{// begin catch(System.Exception)
			// catch (Exception ex) {
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0099_1;
		}// end catch (depth: 2)

IL_0099_1:
		{
			// if (tileComponent != null && tileComponent.enabled == true) {
			Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_17 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_18)
			{
				goto IL_00c1_1;
			}
		}
		{
			Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_19 = V_0;
			NullCheck(L_19);
			bool L_20;
			L_20 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_19, NULL);
			if (!L_20)
			{
				goto IL_00c1_1;
			}
		}
		{
			// Debug.Log("Selected a tile within the range.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB5A2D14572900DEBC60EA4427921354FBEC2A9AF, NULL);
			// selectedTile = tileComponent.gameObject;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_21 = ___0_selectedTile;
			Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_22 = V_0;
			NullCheck(L_22);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
			L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
			*((RuntimeObject**)L_21) = (RuntimeObject*)L_23;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_23);
			// return true; // Return true for tile selection within the range
			V_14 = (bool)1;
			goto IL_00e5;
		}

IL_00c1_1:
		{
			// Debug.Log("Selected a tile outside of the range.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0AE3E8F405EE8D97738F6731F686F87FFB976637, NULL);
			// return false; // Return false to indicate tile selection outside of the range
			V_14 = (bool)0;
			goto IL_00e5;
		}

IL_00d0_1:
		{
			// Debug.Log("Clicked on something other than a tile.");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral87ED58E5539A34BD8452C78BCE0DFBE4FC531CF6, NULL);
			// return false; // Return false for non-tile objects
			V_14 = (bool)0;
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00df;
		}
		throw e;
	}

CATCH_00df:
	{// begin catch(System.Exception)
		// catch (Exception ex) {
		// return false;
		V_14 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e5;
	}// end catch (depth: 1)

IL_00e5:
	{
		// }
		bool L_24 = V_14;
		return L_24;
	}
}
// System.Void GameManager::ColorSurroundingCells(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ColorSurroundingCells_m0EC110ED6C4B49C33417C06802CC597EEA2FACA0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_selectedCell, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// if (selectedCell != null) {
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_selectedCell;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_1;
			L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_1)
			{
				goto IL_0245_1;
			}
		}
		{
			// Vector3 selectedPosition = selectedCell.transform.position;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_selectedCell;
			NullCheck(L_2);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
			L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
			NullCheck(L_3);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
			L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
			V_0 = L_4;
			// Vector3 cellScale = selectedCell.transform.localScale;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___0_selectedCell;
			NullCheck(L_5);
			Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
			L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
			NullCheck(L_6);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
			L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
			V_1 = L_7;
			// Vector3[] offsets = new Vector3[]
			// {
			// Vector3.zero, Vector3.zero,                        //Middle
			// new Vector3(cellScale.x + 0.15f, 0, 0),          // Right
			// new Vector3(-(cellScale.x + 0.15f), 0, 0),         // Left
			// new Vector3(0, 0, cellScale.z + 0.15f),          // Up
			// new Vector3(0, 0, -(cellScale.z + 0.15f)),         // Down
			// new Vector3(cellScale.x + 0.15f, 0, cellScale.z + 0.15f), // Diagonal Up-Right
			// new Vector3(-(cellScale.x + 0.15f), 0, cellScale.z + 0.15f),// Diagonal Up-Left
			// new Vector3(cellScale.x + 0.15f, 0, -(cellScale.z + 0.15f)),// Diagonal Down-Right
			// new Vector3(-(cellScale.x + 0.15f), 0, -(cellScale.z + 0.15f))// Diagonal Down-Left
			// };
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = L_8;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
			L_10 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
			NullCheck(L_9);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = L_9;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
			L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
			NullCheck(L_11);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = L_11;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
			float L_15 = L_14.___x_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
			memset((&L_16), 0, sizeof(L_16));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)il2cpp_codegen_add(L_15, (0.150000006f))), (0.0f), (0.0f), /*hidden argument*/NULL);
			NullCheck(L_13);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = L_13;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
			float L_19 = L_18.___x_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
			memset((&L_20), 0, sizeof(L_20));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), ((-((float)il2cpp_codegen_add(L_19, (0.150000006f))))), (0.0f), (0.0f), /*hidden argument*/NULL);
			NullCheck(L_17);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_20);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = L_17;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
			float L_23 = L_22.___z_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
			memset((&L_24), 0, sizeof(L_24));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), (0.0f), (0.0f), ((float)il2cpp_codegen_add(L_23, (0.150000006f))), /*hidden argument*/NULL);
			NullCheck(L_21);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_24);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = L_21;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
			float L_27 = L_26.___z_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
			memset((&L_28), 0, sizeof(L_28));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (0.0f), (0.0f), ((-((float)il2cpp_codegen_add(L_27, (0.150000006f))))), /*hidden argument*/NULL);
			NullCheck(L_25);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = L_25;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_1;
			float L_31 = L_30.___x_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
			float L_33 = L_32.___z_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
			memset((&L_34), 0, sizeof(L_34));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), ((float)il2cpp_codegen_add(L_31, (0.150000006f))), (0.0f), ((float)il2cpp_codegen_add(L_33, (0.150000006f))), /*hidden argument*/NULL);
			NullCheck(L_29);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_34);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = L_29;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
			float L_37 = L_36.___x_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_1;
			float L_39 = L_38.___z_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
			memset((&L_40), 0, sizeof(L_40));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), ((-((float)il2cpp_codegen_add(L_37, (0.150000006f))))), (0.0f), ((float)il2cpp_codegen_add(L_39, (0.150000006f))), /*hidden argument*/NULL);
			NullCheck(L_35);
			(L_35)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_40);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_41 = L_35;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
			float L_43 = L_42.___x_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_1;
			float L_45 = L_44.___z_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
			memset((&L_46), 0, sizeof(L_46));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_46), ((float)il2cpp_codegen_add(L_43, (0.150000006f))), (0.0f), ((-((float)il2cpp_codegen_add(L_45, (0.150000006f))))), /*hidden argument*/NULL);
			NullCheck(L_41);
			(L_41)->SetAt(static_cast<il2cpp_array_size_t>(8), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_46);
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_47 = L_41;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
			float L_49 = L_48.___x_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_1;
			float L_51 = L_50.___z_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
			memset((&L_52), 0, sizeof(L_52));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), ((-((float)il2cpp_codegen_add(L_49, (0.150000006f))))), (0.0f), ((-((float)il2cpp_codegen_add(L_51, (0.150000006f))))), /*hidden argument*/NULL);
			NullCheck(L_47);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_52);
			// RevertState(adjecentcells); //clear new
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_53 = __this->___adjecentcells_19;
			GameManager_RevertState_mB605C56B1A30B36918E9217E48F77621AF0D25B1(__this, L_53, NULL);
			// foreach (Vector3 offset in Calc3x3(cellScale, 3)) {
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_1;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_55;
			L_55 = GameManager_Calc3x3_m7DD019D5E72242DAEF6F116AFE1162D3635D9269(__this, L_54, 3, NULL);
			V_2 = L_55;
			V_3 = 0;
			goto IL_01e6_1;
		}

IL_0190_1:
		{
			// foreach (Vector3 offset in Calc3x3(cellScale, 3)) {
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = V_2;
			int32_t L_57 = V_3;
			NullCheck(L_56);
			int32_t L_58 = L_57;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			V_4 = L_59;
			// Vector3 position = selectedPosition + offset;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_4;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
			L_62 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_60, L_61, NULL);
			V_5 = L_62;
			// GameObject adjacentCell = GetCellAtPosition(position);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_5;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
			L_64 = GameManager_GetCellAtPosition_m3109CB74F344AA41EFE33FA2DB5A7DD7E9627159(__this, L_63, NULL);
			V_6 = L_64;
			// if (adjacentCell != null && !adjecentcells.Contains(adjacentCell)) {
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = V_6;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_66;
			L_66 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_66)
			{
				goto IL_01e2_1;
			}
		}
		{
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_67 = __this->___adjecentcells_19;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = V_6;
			NullCheck(L_67);
			bool L_69;
			L_69 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_67, L_68, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
			if (L_69)
			{
				goto IL_01e2_1;
			}
		}
		{
			// adjecentcells.Add(adjacentCell); //add new
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_70 = __this->___adjecentcells_19;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_6;
			NullCheck(L_70);
			List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_70, L_71, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			// ColorCell(adjacentCell, previewMat, false);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = V_6;
			Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_73 = __this->___previewMat_14;
			GameManager_ColorCell_mA2896BE72463EF6EE612E889203E5033D036BAC0(__this, L_72, L_73, (bool)0, NULL);
		}

IL_01e2_1:
		{
			int32_t L_74 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		}

IL_01e6_1:
		{
			// foreach (Vector3 offset in Calc3x3(cellScale, 3)) {
			int32_t L_75 = V_3;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_76 = V_2;
			NullCheck(L_76);
			if ((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
			{
				goto IL_0190_1;
			}
		}
		{
			// Vector3[] offsets5x5 = Calc5x5(cellScale);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_1;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78;
			L_78 = GameManager_Calc5x5_mBDDF454A14FB1E9994F95E24E7AF904FD2BB6B28(__this, L_77, NULL);
			// foreach (Vector3 offset in offsets5x5) {
			V_2 = L_78;
			V_3 = 0;
			goto IL_023f_1;
		}

IL_01f8_1:
		{
			// foreach (Vector3 offset in offsets5x5) {
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = V_2;
			int32_t L_80 = V_3;
			NullCheck(L_79);
			int32_t L_81 = L_80;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
			V_7 = L_82;
			// Vector3 pos = selectedPosition + offset;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_0;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_7;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
			L_85 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_83, L_84, NULL);
			V_8 = L_85;
			// GameObject adjacentCell = GetCellAtPosition(pos);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_8;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87;
			L_87 = GameManager_GetCellAtPosition_m3109CB74F344AA41EFE33FA2DB5A7DD7E9627159(__this, L_86, NULL);
			V_9 = L_87;
			// if (adjacentCell != null && !outerCells.Contains(adjacentCell)) {
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_9;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_89;
			L_89 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_88, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_89)
			{
				goto IL_023b_1;
			}
		}
		{
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_90 = __this->___outerCells_20;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_9;
			NullCheck(L_90);
			bool L_92;
			L_92 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_90, L_91, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
			if (L_92)
			{
				goto IL_023b_1;
			}
		}
		{
			// outerCells.Add(adjacentCell);
			List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_93 = __this->___outerCells_20;
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = V_9;
			NullCheck(L_93);
			List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_93, L_94, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		}

IL_023b_1:
		{
			int32_t L_95 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		}

IL_023f_1:
		{
			// foreach (Vector3 offset in offsets5x5) {
			int32_t L_96 = V_3;
			Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_97 = V_2;
			NullCheck(L_97);
			if ((((int32_t)L_96) < ((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length)))))
			{
				goto IL_01f8_1;
			}
		}

IL_0245_1:
		{
			// }
			goto IL_024a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0247;
		}
		throw e;
	}

CATCH_0247:
	{// begin catch(System.Exception)
		// catch (Exception e) {
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_024a;
	}// end catch (depth: 1)

IL_024a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3[] GameManager::Calc3x3(UnityEngine.Vector3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GameManager_Calc3x3_m7DD019D5E72242DAEF6F116AFE1162D3635D9269 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_cellScale, int32_t ___1_gridSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float offset = cellScale.x + 0.15f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_cellScale;
		float L_1 = L_0.___x_2;
		V_0 = ((float)il2cpp_codegen_add(L_1, (0.150000006f)));
		// List<Vector3> vectors = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_2, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_1 = L_2;
		// for (int i = 0; i < gridSize; i++) {
		V_2 = 0;
		goto IL_0061;
	}

IL_0017:
	{
		// for (int j = 0; j < gridSize; j++) {
		V_3 = 0;
		goto IL_0059;
	}

IL_001b:
	{
		// float x = i * offset - (gridSize - 1) * offset * 0.5f;
		int32_t L_3 = V_2;
		float L_4 = V_0;
		int32_t L_5 = ___1_gridSize;
		float L_6 = V_0;
		V_4 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_3), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_5, 1))), L_6)), (0.5f)))));
		// float z = j * offset - (gridSize - 1) * offset * 0.5f;
		int32_t L_7 = V_3;
		float L_8 = V_0;
		int32_t L_9 = ___1_gridSize;
		float L_10 = V_0;
		V_5 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_7), L_8)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_subtract(L_9, 1))), L_10)), (0.5f)))));
		// vectors.Add(new Vector3(x, 0, z));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = V_1;
		float L_12 = V_4;
		float L_13 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_12, (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_11, L_14, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int j = 0; j < gridSize; j++) {
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0059:
	{
		// for (int j = 0; j < gridSize; j++) {
		int32_t L_16 = V_3;
		int32_t L_17 = ___1_gridSize;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_001b;
		}
	}
	{
		// for (int i = 0; i < gridSize; i++) {
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < gridSize; i++) {
		int32_t L_19 = V_2;
		int32_t L_20 = ___1_gridSize;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0017;
		}
	}
	{
		// return vectors.ToArray();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_21 = V_1;
		NullCheck(L_21);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22;
		L_22 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_21, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		return L_22;
	}
}
// UnityEngine.Vector3[] GameManager::Calc5x5(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* GameManager_Calc5x5_mBDDF454A14FB1E9994F95E24E7AF904FD2BB6B28 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_cellScale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// List<Vector3> vectors = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// float offset = cellScale.x = 0.15f;
		(&___0_cellScale)->___x_2 = (0.150000006f);
		// for (int i = -1; i <= 1; i += 2) {
		V_1 = (-1);
		goto IL_01a7;
	}

IL_0019:
	{
		// for (int j = -1; j <= 1; j += 2) {
		V_2 = (-1);
		goto IL_019c;
	}

IL_0020:
	{
		// vectors.Add(new Vector3(2 * i * (cellScale.x + 0.15f), 0, 0));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = V_0;
		int32_t L_2 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_cellScale;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_2))), ((float)il2cpp_codegen_add(L_4, (0.150000006f))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_1, L_5, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vectors.Add(new Vector3(0, 0, 2 * j * (cellScale.z + 0.15f)));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = V_0;
		int32_t L_7 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_cellScale;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_7))), ((float)il2cpp_codegen_add(L_9, (0.150000006f))))), /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_6, L_10, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vectors.Add(new Vector3(2 * i * (cellScale.x + 0.15f), 0, j * (cellScale.z + 0.15f)));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = V_0;
		int32_t L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_cellScale;
		float L_14 = L_13.___x_2;
		int32_t L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_cellScale;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_12))), ((float)il2cpp_codegen_add(L_14, (0.150000006f))))), (0.0f), ((float)il2cpp_codegen_multiply(((float)L_15), ((float)il2cpp_codegen_add(L_17, (0.150000006f))))), /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_11, L_18, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vectors.Add(new Vector3(i * (cellScale.x + 0.15f), 0, 2 * j * (cellScale.z + 0.15f)));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = V_0;
		int32_t L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_cellScale;
		float L_22 = L_21.___x_2;
		int32_t L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___0_cellScale;
		float L_25 = L_24.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), ((float)il2cpp_codegen_multiply(((float)L_20), ((float)il2cpp_codegen_add(L_22, (0.150000006f))))), (0.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_23))), ((float)il2cpp_codegen_add(L_25, (0.150000006f))))), /*hidden argument*/NULL);
		NullCheck(L_19);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_19, L_26, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vectors.Add(new Vector3(2 * i * (cellScale.x + 0.15f), 0, 2 * j * (cellScale.z + 0.15f)));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_27 = V_0;
		int32_t L_28 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___0_cellScale;
		float L_30 = L_29.___x_2;
		int32_t L_31 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_cellScale;
		float L_33 = L_32.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_28))), ((float)il2cpp_codegen_add(L_30, (0.150000006f))))), (0.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_31))), ((float)il2cpp_codegen_add(L_33, (0.150000006f))))), /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_27, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vectors.Add(new Vector3(2 * i * (cellScale.x + 0.15f), 0, -2 * j * (cellScale.z + 0.15f)));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_35 = V_0;
		int32_t L_36 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_cellScale;
		float L_38 = L_37.___x_2;
		int32_t L_39 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ___0_cellScale;
		float L_41 = L_40.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_36))), ((float)il2cpp_codegen_add(L_38, (0.150000006f))))), (0.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(((int32_t)-2), L_39))), ((float)il2cpp_codegen_add(L_41, (0.150000006f))))), /*hidden argument*/NULL);
		NullCheck(L_35);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_35, L_42, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vectors.Add(new Vector3(-2 * i * (cellScale.x + 0.15f), 0, 2 * j * (cellScale.z + 0.15f)));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_43 = V_0;
		int32_t L_44 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ___0_cellScale;
		float L_46 = L_45.___x_2;
		int32_t L_47 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ___0_cellScale;
		float L_49 = L_48.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(((int32_t)-2), L_44))), ((float)il2cpp_codegen_add(L_46, (0.150000006f))))), (0.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(2, L_47))), ((float)il2cpp_codegen_add(L_49, (0.150000006f))))), /*hidden argument*/NULL);
		NullCheck(L_43);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_43, L_50, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// vectors.Add(new Vector3(-2 * i * (cellScale.x + 0.15f), 0, -2 * j * (cellScale.z + 0.15f)));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_51 = V_0;
		int32_t L_52 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = ___0_cellScale;
		float L_54 = L_53.___x_2;
		int32_t L_55 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = ___0_cellScale;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(((int32_t)-2), L_52))), ((float)il2cpp_codegen_add(L_54, (0.150000006f))))), (0.0f), ((float)il2cpp_codegen_multiply(((float)((int32_t)il2cpp_codegen_multiply(((int32_t)-2), L_55))), ((float)il2cpp_codegen_add(L_57, (0.150000006f))))), /*hidden argument*/NULL);
		NullCheck(L_51);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_51, L_58, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int j = -1; j <= 1; j += 2) {
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 2));
	}

IL_019c:
	{
		// for (int j = -1; j <= 1; j += 2) {
		int32_t L_60 = V_2;
		if ((((int32_t)L_60) <= ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		// for (int i = -1; i <= 1; i += 2) {
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, 2));
	}

IL_01a7:
	{
		// for (int i = -1; i <= 1; i += 2) {
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) <= ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		// return vectors.ToArray();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_63 = V_0;
		NullCheck(L_63);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_64;
		L_64 = List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3(L_63, List_1_ToArray_mF7A66D08104196EBAE0E29F0DD9BA140656EA5F3_RuntimeMethod_var);
		return L_64;
	}
}
// UnityEngine.GameObject GameManager::GetCellAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameManager_GetCellAtPosition_m3109CB74F344AA41EFE33FA2DB5A7DD7E9627159 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// Ray ray = new Ray(position + new Vector3(0, 10, 0), Vector3.down);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
			memset((&L_1), 0, sizeof(L_1));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (10.0f), (0.0f), /*hidden argument*/NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
			L_2 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_1, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
			L_3 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
			Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
			memset((&L_4), 0, sizeof(L_4));
			Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_4), L_2, L_3, /*hidden argument*/NULL);
			// if (Physics.Raycast(ray, out hit)) {
			bool L_5;
			L_5 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_4, (&V_0), NULL);
			if (!L_5)
			{
				goto IL_0065_1;
			}
		}
		try
		{// begin try (depth: 2)
			{
				// if (hit.collider.gameObject.GetComponent<Tile>() != null)
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6;
				L_6 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
				NullCheck(L_6);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
				NullCheck(L_7);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_8;
				L_8 = GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72(L_7, GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_9)
				{
					goto IL_0055_2;
				}
			}
			{
				// return hit.collider.gameObject;
				Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10;
				L_10 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
				L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
				V_1 = L_11;
				goto IL_007f;
			}

IL_0055_2:
			{
				// return null;
				V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
				goto IL_007f;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0059_1;
			}
			throw e;
		}

CATCH_0059_1:
		{// begin catch(System.Exception)
			// Debug.LogError(e.Message);
			NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
			String_t* L_12;
			L_12 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0065_1;
		}// end catch (depth: 2)

IL_0065_1:
		{
			// return null;
			V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
			goto IL_007f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		// catch (Exception e) {
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// debugText.text = e.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___debugText_17;
		Exception_t* L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// return null;
		V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007f;
	}// end catch (depth: 1)

IL_007f:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		return L_16;
	}
}
// System.Void GameManager::DisableSurroundingCells(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableSurroundingCells_mCBF5C9549A508A6E3DE3205C80588B646B2DACE4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___0_cells, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_material, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (cells != null) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___0_cells;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// foreach (GameObject cell in cells) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = ___0_cells;
		NullCheck(L_1);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_2;
		L_2 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_1, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_000c_1:
			{
				// foreach (GameObject cell in cells) {
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_3;
				// ColorCell(cell, material);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___1_material;
				GameManager_ColorCell_mF2F81467EC37558745B064CF2D05CF6B05850317(__this, L_4, L_5, NULL);
				// cell.GetComponentInChildren<Tile>().enabled = false;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
				NullCheck(L_6);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_7;
				L_7 = GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6(L_6, GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6_RuntimeMethod_var);
				NullCheck(L_7);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
			}

IL_0028_1:
			{
				// foreach (GameObject cell in cells) {
				bool L_8;
				L_8 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000c_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// outerCells.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___outerCells_20;
		NullCheck(L_9);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_9, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void GameManager::DisableSurroundingCells(System.Collections.Generic.List`1<UnityEngine.GameObject>,UnityEngine.Material,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_DisableSurroundingCells_mA979768C40DFA076E1A7579D286B293BAC6FFD0B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___0_cells, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_mat, bool ___2_skip, bool ___3_blocked, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (cells != null) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___0_cells;
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// foreach (GameObject cell in cells) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = ___0_cells;
		NullCheck(L_1);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_2;
		L_2 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_1, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_000c_1:
			{
				// foreach (GameObject cell in cells) {
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_3;
				// cell.GetComponentInChildren<Tile>().enabled = false;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				NullCheck(L_4);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_5;
				L_5 = GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6(L_4, GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6_RuntimeMethod_var);
				NullCheck(L_5);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
				// cell.GetComponentInChildren<Tile>().IsBlocked = blocked;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
				NullCheck(L_6);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_7;
				L_7 = GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6(L_6, GameObject_GetComponentInChildren_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3EB98460A7C72B59E74788070FC5827E9FA7D0E6_RuntimeMethod_var);
				bool L_8 = ___3_blocked;
				NullCheck(L_7);
				Tile_set_IsBlocked_m3ED8E4A0204EACE6767879FF57ED9322C9115080_inline(L_7, L_8, NULL);
				// ColorCell(cell, mat, skip);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = ___1_mat;
				bool L_11 = ___2_skip;
				GameManager_ColorCell_mA2896BE72463EF6EE612E889203E5033D036BAC0(__this, L_9, L_10, L_11, NULL);
			}

IL_0036_1:
			{
				// foreach (GameObject cell in cells) {
				bool L_12;
				L_12 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_000c_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// adjecentcells.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = __this->___adjecentcells_19;
		NullCheck(L_13);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_13, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void GameManager::ColorCell(UnityEngine.GameObject,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ColorCell_mF2F81467EC37558745B064CF2D05CF6B05850317 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_cell, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_mat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		// if (cell != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_cell;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Renderer renderer = cell.GetComponentInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_cell;
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB(L_2, GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		V_0 = L_3;
		// if (cell.GetComponent<Tile>().enabled != false) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_cell;
		NullCheck(L_4);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_5;
		L_5 = GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72(L_4, GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		NullCheck(L_5);
		bool L_6;
		L_6 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_5, NULL);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		// renderer.material = mat;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___1_mat;
		NullCheck(L_7);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_7, L_8, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void GameManager::ColorCell(UnityEngine.GameObject,UnityEngine.Material,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ColorCell_mA2896BE72463EF6EE612E889203E5033D036BAC0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_cell, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___1_mat, bool ___2_skip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	{
		// if (cell != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_cell;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Renderer renderer = cell.GetComponentInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_cell;
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB(L_2, GameObject_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m00AEA903DE8DEC35B61502F098729637D21B6FDB_RuntimeMethod_var);
		V_0 = L_3;
		// if ((skip == false || cell.GetComponent<Tile>().IsBlocked == false)) {
		bool L_4 = ___2_skip;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___0_cell;
		NullCheck(L_5);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_6;
		L_6 = GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72(L_5, GameObject_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m297C8A480F93829939D3C844EF127F9C2C28DF72_RuntimeMethod_var);
		NullCheck(L_6);
		bool L_7;
		L_7 = Tile_get_IsBlocked_mFFDAEE04A40F57002CF726ED57CAA14835940802_inline(L_6, NULL);
		if (L_7)
		{
			goto IL_0027;
		}
	}

IL_0020:
	{
		// renderer.material = mat;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___1_mat;
		NullCheck(L_8);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_8, L_9, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void GameManager::RevertState(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_RevertState_mB605C56B1A30B36918E9217E48F77621AF0D25B1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___0_cells, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (cells != null) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___0_cells;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// foreach (GameObject cell in cells) {
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = ___0_cells;
		NullCheck(L_1);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_2;
		L_2 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_1, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_000c_1:
			{
				// foreach (GameObject cell in cells) {
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_3;
				// ColorCell(cell, normalMat, false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = __this->___normalMat_15;
				GameManager_ColorCell_mA2896BE72463EF6EE612E889203E5033D036BAC0(__this, L_4, L_5, (bool)0, NULL);
			}

IL_0022_1:
			{
				// foreach (GameObject cell in cells) {
				bool L_6;
				L_6 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000c_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// adjecentcells.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___adjecentcells_19;
		NullCheck(L_7);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_7, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// outerCells.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___outerCells_20;
		NullCheck(L_8);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_8, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void GameManager::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Hide_m8B9993BD9BE1BECB767B8D1F8EAD8AFBA20390B7 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC741F0DF4B5067DBEBA84E21CAB091AEBCB9C83F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam.cullingMask &= ~(1 << LayerMask.NameToLayer("GridField"));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralC741F0DF4B5067DBEBA84E21CAB091AEBCB9C83F, NULL);
		NullCheck(L_1);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_1, ((int32_t)(L_2&((~((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Show_m3BC1A636A08ADFA6DC1D1BFB282F44DB3352D8F4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC741F0DF4B5067DBEBA84E21CAB091AEBCB9C83F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam.cullingMask |= 1 << LayerMask.NameToLayer("GridField");
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(L_1, NULL);
		int32_t L_3;
		L_3 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteralC741F0DF4B5067DBEBA84E21CAB091AEBCB9C83F, NULL);
		NullCheck(L_1);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_1, ((int32_t)(L_2|((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))), NULL);
		// }
		return;
	}
}
// System.Void GameManager::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Quit_mD4E439BAC10B04E13E09995F0194D55A519974ED (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void GameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Restart_mCAD4B8EB332D65D94F493AD96956EC1777DC3854 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::EndBuilding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EndBuilding_mB9666539D7703F0DBE4D3FFFD7FDDD12641A01A5 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (image != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___image_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// image.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___image_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
	}

IL_001e:
	{
		// isBuilding = false;
		__this->___isBuilding_18 = (bool)0;
		// Hide();
		GameManager_Hide_m8B9993BD9BE1BECB767B8D1F8EAD8AFBA20390B7(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> adjecentcells = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___adjecentcells_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adjecentcells_19), (void*)L_0);
		// public List<GameObject> outerCells = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___outerCells_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outerCells_20), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Start_m69F2EA72A4C2B7A2292169AECAEE630860C57B89 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOver_ShowGameOverCanvas_m7DD5F9A6FE8702EF372F4B2E5320277AE16820D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// deathCanvas.gameObject.SetActive(false);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___deathCanvas_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// CPUHealth.OnCPUDeath += ShowGameOverCanvas;
		il2cpp_codegen_runtime_class_init_inline(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDeath_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)GameOver_ShowGameOverCanvas_m7DD5F9A6FE8702EF372F4B2E5320277AE16820D2_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDeath_8 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_StaticFields*)il2cpp_codegen_static_fields_for(CPUHealth_t068B5F919CF46E744927A6FACC0D6487A2BE910A_il2cpp_TypeInfo_var))->___OnCPUDeath_8), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void GameOver::ShowGameOverCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_ShowGameOverCanvas_m7DD5F9A6FE8702EF372F4B2E5320277AE16820D2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD73D4462951E55D648FF70D2790485FB3AA006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3153B68FFA558BA249E3E22F1978F6474164B08D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathCanvas.gameObject.SetActive(true);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___deathCanvas_8;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// scoreText.text = "Score: " + EnemyManager.score;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___scoreText_4;
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___score_24), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// waveText.text = "Last Wave is: " + EnemyManager.currentWave;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_5 = __this->___waveText_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___currentWave_20), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0FD73D4462951E55D648FF70D2790485FB3AA006, L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_7);
		// endPoints.text = "End Points: " + EnemyManager.points;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___endPoints_7;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___points_25), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3153B68FFA558BA249E3E22F1978F6474164B08D, L_9, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// int highscore = PlayerPrefs.GetInt("highscore");
		int32_t L_11;
		L_11 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, NULL);
		// if (highscore > EnemyManager.score)
		int32_t L_12 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___score_24;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0098;
		}
	}
	{
		// PlayerPrefs.SetInt("highscore", EnemyManager.score);
		il2cpp_codegen_runtime_class_init_inline(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var);
		int32_t L_13 = ((EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_StaticFields*)il2cpp_codegen_static_fields_for(EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_il2cpp_TypeInfo_var))->___score_24;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, L_13, NULL);
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void GameOver::OnClickRestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_OnClickRestartGame_mF8D16EE6701D884401053E6A7FDFB3F15D6054B7 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RestartAndroid();
		GameOver_RestartAndroid_m273209EB1060BF561BD050B8CCF24F7A6057B232(NULL);
		// return;
		return;
	}
}
// System.Void GameOver::RestartAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_RestartAndroid_m273209EB1060BF561BD050B8CCF24F7A6057B232 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05D3939439D3A37A5199882D1923E467EA10FD21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AC9E039324DDB82B6801B1846C1987DF1F4AFCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE822EA2EB86923ED192DBD6B53475B57B91D3E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7D070A744FB1A80E3B846C9498FDE3DC2E69E2E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (Application.isEditor) return;
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (Application.isEditor) return;
		return;
	}

IL_0008:
	{
		// using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c2:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00cb;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00cb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_0;
			NullCheck(L_4);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_4, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
			V_1 = L_5;
			// var pm = currentActivity.Call<AndroidJavaObject>("getPackageManager");
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
			L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_6);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
			L_8 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_6, _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8, L_7, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			// var intent = pm.Call<AndroidJavaObject>("getLaunchIntentForPackage", Application.identifier);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
			String_t* L_11;
			L_11 = Application_get_identifier_mEA3314E50D44FB3CE2C2E78B336ACF4AD97BA056(NULL);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
			NullCheck(L_8);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12;
			L_12 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_8, _stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882, L_10, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			V_2 = L_12;
			// intent.Call<AndroidJavaObject>("setFlags", kIntent_FLAG_ACTIVITY_NEW_TASK | kIntent_FLAG_ACTIVITY_CLEAR_TASK);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_2;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
			int32_t L_16 = ((int32_t)268468224);
			RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_17);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
			NullCheck(L_13);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18;
			L_18 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_13, _stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A, L_15, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			// currentActivity.Call("startActivity", intent);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = V_2;
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, L_22);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
			NullCheck(L_19);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_19, _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1, L_21, NULL);
			// currentActivity.Call("finish");
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_1;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24;
			L_24 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_23);
			AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_23, _stringLiteral5AC9E039324DDB82B6801B1846C1987DF1F4AFCC, L_24, NULL);
			// var process = new AndroidJavaClass("android.os.Process");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_25 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_25);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_25, _stringLiteralCE822EA2EB86923ED192DBD6B53475B57B91D3E6, NULL);
			// int pid = process.CallStatic<int>("myPid");
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_26 = L_25;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27;
			L_27 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_26);
			int32_t L_28;
			L_28 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_26, _stringLiteralD7D070A744FB1A80E3B846C9498FDE3DC2E69E2E, L_27, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
			V_3 = L_28;
			// process.CallStatic("killProcess", pid);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
			int32_t L_31 = V_3;
			int32_t L_32 = L_31;
			RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_33);
			NullCheck(L_26);
			AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_26, _stringLiteral05D3939439D3A37A5199882D1923E467EA10FD21, L_30, NULL);
			// }
			goto IL_00cc;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_m2D4239F9C4BCE2EBFD1D1D6FAFEBAD05F65399B2 (GameOver_tC0D72A03377DA58EE60B10DE7838DBDC0A75798D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GizmoTest::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmoTest_OnDrawGizmos_m442F5E8E018AD5E5438B2B1B280453F1B7481929 (GizmoTest_tEA5B922C06F03C88038FD7F11A7FAFB4AF882827* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Gizmos.color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Vector3 direction = transform.TransformDirection(Vector3.forward) * 5000;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (5000.0f), NULL);
		V_0 = L_4;
		// Gizmos.DrawRay(transform.position, direction);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Gizmos_DrawRay_m28E5C4618CB5BB572C04D7CED2DDBDD8105FA596(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void GizmoTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmoTest__ctor_m6A7FBE24F0F66D26BFDC4C14ED01BD1A15D54CE9 (GizmoTest_tEA5B922C06F03C88038FD7F11A7FAFB4AF882827* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Health::add_OnHealthChanged(Health/HealthChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_add_OnHealthChanged_m1C2885C6F1014673C97BB42958886A3951267A53 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* V_0 = NULL;
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* V_1 = NULL;
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* V_2 = NULL;
	{
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_0 = __this->___OnHealthChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_1 = V_0;
		V_1 = L_1;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_2 = V_1;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)CastclassSealed((RuntimeObject*)L_4, HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var));
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D** L_5 = (&__this->___OnHealthChanged_4);
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_6 = V_2;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_7 = V_1;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_8;
		L_8 = InterlockedCompareExchangeImpl<HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*>(L_5, L_6, L_7);
		V_0 = L_8;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_9 = V_0;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_10 = V_1;
		if ((!(((RuntimeObject*)(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)L_9) == ((RuntimeObject*)(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Health::remove_OnHealthChanged(Health/HealthChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_remove_OnHealthChanged_m5D6555203BA53B51A21AE6D4AED61CECA1A85DA9 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* V_0 = NULL;
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* V_1 = NULL;
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* V_2 = NULL;
	{
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_0 = __this->___OnHealthChanged_4;
		V_0 = L_0;
	}

IL_0007:
	{
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_1 = V_0;
		V_1 = L_1;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_2 = V_1;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)CastclassSealed((RuntimeObject*)L_4, HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D_il2cpp_TypeInfo_var));
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D** L_5 = (&__this->___OnHealthChanged_4);
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_6 = V_2;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_7 = V_1;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_8;
		L_8 = InterlockedCompareExchangeImpl<HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*>(L_5, L_6, L_7);
		V_0 = L_8;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_9 = V_0;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_10 = V_1;
		if ((!(((RuntimeObject*)(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)L_9) == ((RuntimeObject*)(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Health::add_onHealthZero(Health/OnHealthZero)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_add_onHealthZero_mC6B6A68EA5859D10E09FA7AF7AC5B166464EA7A2 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* V_0 = NULL;
	OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* V_1 = NULL;
	OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* V_2 = NULL;
	{
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_0 = __this->___onHealthZero_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_1 = V_0;
		V_1 = L_1;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_2 = V_1;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*)CastclassSealed((RuntimeObject*)L_4, OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F_il2cpp_TypeInfo_var));
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F** L_5 = (&__this->___onHealthZero_7);
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_6 = V_2;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_7 = V_1;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_9 = V_0;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*)L_9) == ((RuntimeObject*)(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Health::remove_onHealthZero(Health/OnHealthZero)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_remove_onHealthZero_m466B82A018CB0FE1220BB07435BE33A5D9814E20 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* V_0 = NULL;
	OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* V_1 = NULL;
	OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* V_2 = NULL;
	{
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_0 = __this->___onHealthZero_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_1 = V_0;
		V_1 = L_1;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_2 = V_1;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*)CastclassSealed((RuntimeObject*)L_4, OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F_il2cpp_TypeInfo_var));
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F** L_5 = (&__this->___onHealthZero_7);
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_6 = V_2;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_7 = V_1;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_9 = V_0;
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*)L_9) == ((RuntimeObject*)(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 Health::get_MaxHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Health_get_MaxHealth_mFC8DC66E7B04FC3F11271C147ED01A27962A8969 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxHealth { get => maxHealth; set => maxHealth = value; }
		int32_t L_0 = __this->___maxHealth_5;
		return L_0;
	}
}
// System.Void Health::set_MaxHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_set_MaxHealth_m899D00151B8F0D047478452625C804AE673AA02F (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int MaxHealth { get => maxHealth; set => maxHealth = value; }
		int32_t L_0 = ___0_value;
		__this->___maxHealth_5 = L_0;
		return;
	}
}
// System.Int32 Health::get_HealthValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Health_get_HealthValue_mC2B13D97FFD15FE0FA48FC839D92517E72D73220 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// public int HealthValue { get => currentHealth; set => currentHealth = value; }
		int32_t L_0 = __this->___currentHealth_6;
		return L_0;
	}
}
// System.Void Health::set_HealthValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_set_HealthValue_m4FF0F24165BDFC9D20F77C331DE7F8D233B88455 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int HealthValue { get => currentHealth; set => currentHealth = value; }
		int32_t L_0 = ___0_value;
		__this->___currentHealth_6 = L_0;
		return;
	}
}
// System.Void Health::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Update_m404DDAF676CD7C4E0CA907413998FF927E62346E (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* G_B2_0 = NULL;
	HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* G_B1_0 = NULL;
	{
		// currentHealth = Mathf.Clamp(currentHealth - amount, 0, MaxHealth);
		int32_t L_0 = __this->___currentHealth_6;
		int32_t L_1 = ___0_amount;
		int32_t L_2;
		L_2 = Health_get_MaxHealth_mFC8DC66E7B04FC3F11271C147ED01A27962A8969_inline(__this, NULL);
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 0, L_2, NULL);
		__this->___currentHealth_6 = L_3;
		// OnHealthChanged?.Invoke(currentHealth, maxHealth);
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_4 = __this->___OnHealthChanged_4;
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0026;
		}
	}
	{
		goto IL_0037;
	}

IL_0026:
	{
		int32_t L_6 = __this->___currentHealth_6;
		int32_t L_7 = __this->___maxHealth_5;
		NullCheck(G_B2_0);
		HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_inline(G_B2_0, L_6, L_7, NULL);
	}

IL_0037:
	{
		// if (currentHealth <= 0) {
		int32_t L_8 = __this->___currentHealth_6;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// Die();
		Health_Die_m58653B13F506A59CDA3DFE478A332B457B2F0F03(__this, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Health::Initialize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Initialize_m39B03650AFB625281F07A58A29A622AF9F70AA97 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) 
{
	{
		// this.maxHealth = maxHealth;
		int32_t L_0 = ___1_maxHealth;
		__this->___maxHealth_5 = L_0;
		// this.currentHealth = currentHealth;
		int32_t L_1 = ___0_currentHealth;
		__this->___currentHealth_6 = L_1;
		// }
		return;
	}
}
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_m58653B13F506A59CDA3DFE478A332B457B2F0F03 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health__ctor_m949A5A6E53120B1D58481C4A8235D324A8790C37 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_Multicast(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* currentDelegate = reinterpret_cast<HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_currentHealth, ___1_maxHealth, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_OpenInst(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_currentHealth, ___1_maxHealth, method);
}
void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_OpenStatic(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_currentHealth, ___1_maxHealth, method);
}
void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_OpenStaticInvoker(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_currentHealth, ___1_maxHealth);
}
void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_ClosedStaticInvoker(HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_currentHealth, ___1_maxHealth);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_currentHealth, ___1_maxHealth);

}
// System.Void Health/HealthChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler__ctor_m5D2D0F0CDA97070C00FD4BC95E3FEE5AAD871F48 (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_Multicast;
}
// System.Void Health/HealthChangeHandler::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13 (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_currentHealth, ___1_maxHealth, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Health/HealthChangeHandler::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthChangeHandler_BeginInvoke_m980DFA973FDEC110F031DC8F6013CC0922E21693 (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_currentHealth);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_maxHealth);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Health/HealthChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler_EndInvoke_mE9D830AE88932F06FC8F80FE3F53B12984CF9DA9 (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_Multicast(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* currentDelegate = reinterpret_cast<OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_OpenInst(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_OpenStatic(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_OpenStaticInvoker(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_ClosedStaticInvoker(OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F (OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Health/OnHealthZero::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHealthZero__ctor_m228BBED396557E8E4C5C932B6E68032FFE3F5D3D (OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E_Multicast;
}
// System.Void Health/OnHealthZero::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHealthZero_Invoke_m77EAE11287DB289282BEA73A551B593759E1823E (OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Health/OnHealthZero::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnHealthZero_BeginInvoke_mCB54540F77AED64639BC9E62C021E7DF58CEC72C (OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Health/OnHealthZero::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHealthZero_EndInvoke_mA2CE4364417EC187A850A1EA659317828A84B309 (OnHealthZero_t302F025620F15EE314F1E7AE6AB5D724AC0F5A6F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LazerTower::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LazerTower_Awake_mA45BCC60955B579EFFDDDC36668777A8AB692521 (LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Init();
		TowerBase_Init_m811250826A313FC3EEF56863EED78C898E21DBD4(__this, NULL);
		// lazer = gameObject.AddComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1;
		L_1 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_0, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		__this->___lazer_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lazer_20), (void*)L_1);
		// lazer.enabled = false;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___lazer_20;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// lazer.positionCount = 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___lazer_20;
		NullCheck(L_3);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_3, 2, NULL);
		// lazer.SetPosition(0, shootingPoint.position);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_4 = __this->___lazer_20;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___shootingPoint_21;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_4, 0, L_6, NULL);
		// lazer.startWidth = 0.01f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7 = __this->___lazer_20;
		NullCheck(L_7);
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_7, (0.00999999978f), NULL);
		// lazer.endWidth = 0.01f;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8 = __this->___lazer_20;
		NullCheck(L_8);
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_8, (0.00999999978f), NULL);
		// }
		return;
	}
}
// System.Void LazerTower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LazerTower_Update_m67E376709E00EE33F0249405E72B01CD09047A41 (LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* __this, const RuntimeMethod* method) 
{
	{
		// AquireTarget();
		TowerBase_AquireTarget_m5F599744CB65E75376EDAA1E58923FD0E6A8E759(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LazerTower::FireCoroutine(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazerTower_FireCoroutine_m205580E161692A0EE344005A07472CE55FA70A42 (LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* L_0 = (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591*)il2cpp_codegen_object_new(U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFireCoroutineU3Ed__4__ctor_m7246EF3D4FA4F03B7D6198D79D0CD343D8FAA6C5(L_0, 0, NULL);
		U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_target;
		NullCheck(L_2);
		L_2->___target_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___target_3), (void*)L_3);
		return L_2;
	}
}
// System.Void LazerTower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LazerTower__ctor_m76BF277A962FD769F2F4DD16775118589B0848D2 (LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* __this, const RuntimeMethod* method) 
{
	{
		TowerBase__ctor_mFE13E924E01A706E3E99F4A17E05E221433A201A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LazerTower/<FireCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__4__ctor_m7246EF3D4FA4F03B7D6198D79D0CD343D8FAA6C5 (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LazerTower/<FireCoroutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__4_System_IDisposable_Dispose_m134BEA72FD610EC92FFE7DCE0D92388E31748928 (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LazerTower/<FireCoroutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireCoroutineU3Ed__4_MoveNext_m67D34A573C9C2CD90C45F206761A8F4940661CE6 (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0082;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (isShooting)
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = ((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_4)->___isShooting_13;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0028:
	{
		// isShooting = true;
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_6 = V_1;
		NullCheck(L_6);
		((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_6)->___isShooting_13 = (bool)1;
		// lazer.SetPosition(1, target.transform.position);
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_7 = V_1;
		NullCheck(L_7);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8 = L_7->___lazer_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___target_3;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		NullCheck(L_8);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_8, 1, L_11, NULL);
		// lazer.enabled = true;
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_12 = V_1;
		NullCheck(L_12);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = L_12->___lazer_20;
		NullCheck(L_13);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_13, (bool)1, NULL);
		// target.GetComponent<Health>().TakeDamage(1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___target_3;
		NullCheck(L_14);
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_15;
		L_15 = GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798(L_14, GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798_RuntimeMethod_var);
		NullCheck(L_15);
		Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096(L_15, 1, NULL);
		// yield return new WaitForSeconds(fireRate);
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = ((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_16)->___fireRate_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, L_17, NULL);
		__this->___U3CU3E2__current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_18);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0082:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// lazer.enabled = false;
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_19 = V_1;
		NullCheck(L_19);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_20 = L_19->___lazer_20;
		NullCheck(L_20);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_20, (bool)0, NULL);
		// isShooting = false;
		LazerTower_tFFB415153F4823810DBBBB157347342C3A816F89* L_21 = V_1;
		NullCheck(L_21);
		((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_21)->___isShooting_13 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object LazerTower/<FireCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCoroutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m367AAFA08BB68FC2AFD909F837918EE472FE7500 (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LazerTower/<FireCoroutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mD5383C105E604029243B0B26AE45DA33ADB9602A (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_mD5383C105E604029243B0B26AE45DA33ADB9602A_RuntimeMethod_var)));
	}
}
// System.Object LazerTower/<FireCoroutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCoroutineU3Ed__4_System_Collections_IEnumerator_get_Current_mB060592427876C56DE51E60D080BA954B7D51721 (U3CFireCoroutineU3Ed__4_t7B15C3C2257C38B4F8A1CF1685093F261D603591* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MissileTower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileTower_Start_m3F44AB4B02FDA3D4B94BA07B4E8E9AE2E2B4C441 (MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MissileTower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileTower_Update_mB416FF1AB76F1AB875F6B1FF8ED4930EBF39D1D0 (MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* __this, const RuntimeMethod* method) 
{
	{
		// AquireTarget();
		TowerBase_AquireTarget_m5F599744CB65E75376EDAA1E58923FD0E6A8E759(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MissileTower::FireCoroutine(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MissileTower_FireCoroutine_m24A55E9A53D2A40E56835DC5D3A516090268ADE4 (MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* L_0 = (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199*)il2cpp_codegen_object_new(U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFireCoroutineU3Ed__5__ctor_mA05EEB175DB2E7BE1F8102C9B0D7FC4724B42620(L_0, 0, NULL);
		U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_target;
		NullCheck(L_2);
		L_2->___target_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___target_3), (void*)L_3);
		return L_2;
	}
}
// System.Void MissileTower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissileTower__ctor_m566A6F42C197E522912013189F0B4191E555AFA2 (MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* __this, const RuntimeMethod* method) 
{
	{
		TowerBase__ctor_mFE13E924E01A706E3E99F4A17E05E221433A201A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MissileTower/<FireCoroutine>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__5__ctor_mA05EEB175DB2E7BE1F8102C9B0D7FC4724B42620 (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MissileTower/<FireCoroutine>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__5_System_IDisposable_Dispose_mE81A3CF8B8658C21F638735EC5B445208748EBE6 (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MissileTower/<FireCoroutine>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireCoroutineU3Ed__5_MoveNext_m3C8977BE71BEB8A7998722730E6E60A6102DC24C (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m709F11AA4127C251BFFF6D852ADF299B29B0D469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ea;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (isShooting) yield break;
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = ((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_4)->___isShooting_13;
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// if (isShooting) yield break;
		return (bool)0;
	}

IL_002b:
	{
		// isShooting = true;
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_6 = V_1;
		NullCheck(L_6);
		((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_6)->___isShooting_13 = (bool)1;
		// var newBullet = Instantiate(projectilePrefab, shootingPoint.transform.position, transform.rotation);
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_7 = V_1;
		NullCheck(L_7);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_8 = L_7->___projectilePrefab_20;
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___shootingPoint_21;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_16;
		L_16 = Object_Instantiate_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m709F11AA4127C251BFFF6D852ADF299B29B0D469(L_8, L_12, L_15, Object_Instantiate_TisProjectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6_m709F11AA4127C251BFFF6D852ADF299B29B0D469_RuntimeMethod_var);
		// newBullet.damage = (int)damage;
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_17 = L_16;
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = ((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_18)->___damage_4;
		NullCheck(L_17);
		L_17->___damage_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_19);
		// newBullet.SetTarget(target.transform);
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_20 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___target_3;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_20);
		Projectile_SetTarget_mACB48D5F35C5F84437519140618CE1F5F0877E0E_inline(L_20, L_22, NULL);
		// newBullet.speed = firePower;
		Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* L_23 = L_20;
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = ((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_24)->___firePower_5;
		NullCheck(L_23);
		L_23->___speed_6 = L_25;
		// animator.SetTrigger("Shoot");
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_26 = V_1;
		NullCheck(L_26);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = L_26->___animator_22;
		NullCheck(L_27);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_27, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, NULL);
		// ShploofEffect();
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_28 = V_1;
		NullCheck(L_28);
		TowerBase_ShploofEffect_m62577C66E43372A771C9BDBA4405475B7D263850(L_28, NULL);
		// float travelTime = Vector3.Distance(target.transform.position, transform.position) / (firePower * 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___target_3;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_32 = V_1;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35;
		L_35 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_31, L_34, NULL);
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_36 = V_1;
		NullCheck(L_36);
		float L_37 = ((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_36)->___firePower_5;
		// Destroy(newBullet, 2f);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_23, (2.0f), NULL);
		// yield return new WaitForSeconds(fireRate);
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_38 = V_1;
		NullCheck(L_38);
		float L_39 = ((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_38)->___fireRate_7;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_40 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_40, L_39, NULL);
		__this->___U3CU3E2__current_1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_40);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ea:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isShooting = false;
		MissileTower_tE583AA963D38B82A28EE87EB7BFB3515EFA005FB* L_41 = V_1;
		NullCheck(L_41);
		((TowerBase_tDB4F74BD96B20C6386FB44D5089165B56D9B81FE*)L_41)->___isShooting_13 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object MissileTower/<FireCoroutine>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCoroutineU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEAC19BEE64FB0CEC848551EFE342E00BA5511142 (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MissileTower/<FireCoroutine>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m1E93E670EECB78780A24F55EDD778288EC7DBBE8 (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireCoroutineU3Ed__5_System_Collections_IEnumerator_Reset_m1E93E670EECB78780A24F55EDD778288EC7DBBE8_RuntimeMethod_var)));
	}
}
// System.Object MissileTower/<FireCoroutine>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireCoroutineU3Ed__5_System_Collections_IEnumerator_get_Current_m7BD250F0C9293AD5596C6DA4442C21B944BB15D8 (U3CFireCoroutineU3Ed__5_tD5D18BE8291795118CA2EA0423C8FB289E4D1199* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveTable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTable_Awake_m2F7661703FD062B1E807E55B5CD8B4E44930BFF6 (MoveTable_tE26FD4C69D771531282866DF51A522086B597906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_m2FCA4C9367EB0BEAF6F57C992A266D8EE27964CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40294F43391005F33D34B4D374DA5A59AD11ACB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE40D612F754E084439D9C4A7DCA12C14FF612F18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveTable.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___moveTable_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// moveTable = GameObject.FindGameObjectWithTag("MoveTable");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral40294F43391005F33D34B4D374DA5A59AD11ACB6, NULL);
		__this->___moveTable_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveTable_4), (void*)L_2);
		// pop = GameObject.FindGameObjectWithTag("ARSessionOrigin").GetComponent<PlaceOnPlane>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE40D612F754E084439D9C4A7DCA12C14FF612F18, NULL);
		NullCheck(L_3);
		PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* L_4;
		L_4 = GameObject_GetComponent_TisPlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_m2FCA4C9367EB0BEAF6F57C992A266D8EE27964CE(L_3, GameObject_GetComponent_TisPlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_m2FCA4C9367EB0BEAF6F57C992A266D8EE27964CE_RuntimeMethod_var);
		__this->___pop_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pop_5), (void*)L_4);
		// }
		return;
	}
}
// System.Void MoveTable::TableMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTable_TableMove_mCBFF9D83AA70A51C24B4339336A3305440C10DBD (MoveTable_tE26FD4C69D771531282866DF51A522086B597906* __this, const RuntimeMethod* method) 
{
	{
		// moveTable.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___moveTable_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// useSwitchStatement = true;
		__this->___useSwitchStatement_8 = (bool)1;
		// }
		return;
	}
}
// System.Void MoveTable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTable_Update_mF098DD146A7076FC8480C9DEE57B9A95B9E2839F (MoveTable_tE26FD4C69D771531282866DF51A522086B597906* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// if (useSwitchStatement == false)
		bool L_0 = __this->___useSwitchStatement_8;
		if (!L_0)
		{
			goto IL_00e9;
		}
	}
	{
		// else if (useSwitchStatement == true)
		bool L_1 = __this->___useSwitchStatement_8;
		if (!L_1)
		{
			goto IL_00e9;
		}
	}
	{
		// if (clickedButton == false)
		bool L_2 = __this->___clickedButton_9;
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_3;
		// switch (touch.phase)
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0048;
		}
	}
	{
		// pop.isMoving = true;
		PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* L_5 = __this->___pop_5;
		NullCheck(L_5);
		L_5->___isMoving_7 = (bool)1;
		// StartCoroutine(StartTableMove());
		RuntimeObject* L_6;
		L_6 = MoveTable_StartTableMove_m406747B8D05A5290AF4D219EEF19387E8517D351(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
	}

IL_0048:
	{
		// if (clickedButton == true)
		bool L_8 = __this->___clickedButton_9;
		if (!L_8)
		{
			goto IL_00e9;
		}
	}
	{
		// Touch touchPhase2 = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_9;
		L_9 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_9;
		// switch (touchPhase2.phase)
		int32_t L_10;
		L_10 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0079;
			}
			case 1:
			{
				goto IL_0086;
			}
			case 2:
			{
				goto IL_0099;
			}
			case 3:
			{
				goto IL_00ac;
			}
		}
	}
	{
		return;
	}

IL_0079:
	{
		// pop.isMoving = true;
		PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* L_12 = __this->___pop_5;
		NullCheck(L_12);
		L_12->___isMoving_7 = (bool)1;
		// break;
		return;
	}

IL_0086:
	{
		// position = touchPhase2.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		__this->___position_7 = L_14;
		// break;
		return;
	}

IL_0099:
	{
		// position = touchPhase2.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_15, NULL);
		__this->___position_7 = L_16;
		// break;
		return;
	}

IL_00ac:
	{
		// pop.isMoving = false;
		PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* L_17 = __this->___pop_5;
		NullCheck(L_17);
		L_17->___isMoving_7 = (bool)0;
		// position = touchPhase2.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		__this->___position_7 = L_19;
		// moveTable.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___moveTable_4;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// useSwitchStatement = false;
		__this->___useSwitchStatement_8 = (bool)0;
		// clickedButton = false;
		__this->___clickedButton_9 = (bool)0;
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MoveTable::StartTableMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MoveTable_StartTableMove_m406747B8D05A5290AF4D219EEF19387E8517D351 (MoveTable_tE26FD4C69D771531282866DF51A522086B597906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* L_0 = (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2*)il2cpp_codegen_object_new(U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartTableMoveU3Ed__9__ctor_mF7FE68A5583647BF90DF355625AA3D8E9B066957(L_0, 0, NULL);
		U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MoveTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveTable__ctor_mE7F382E7FC2B1FF8F530869AF660879344303C1F (MoveTable_tE26FD4C69D771531282866DF51A522086B597906* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MoveTable/<StartTableMove>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTableMoveU3Ed__9__ctor_mF7FE68A5583647BF90DF355625AA3D8E9B066957 (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MoveTable/<StartTableMove>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTableMoveU3Ed__9_System_IDisposable_Dispose_m54A317BFFE68D5379233B30CE1E83BB1F384331B (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MoveTable/<StartTableMove>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartTableMoveU3Ed__9_MoveNext_mF69188F899451712EC99C2CFDACADE85F4C527B6 (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MoveTable_tE26FD4C69D771531282866DF51A522086B597906* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MoveTable_tE26FD4C69D771531282866DF51A522086B597906* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// clickedButton = true;
		MoveTable_tE26FD4C69D771531282866DF51A522086B597906* L_5 = V_1;
		NullCheck(L_5);
		L_5->___clickedButton_9 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object MoveTable/<StartTableMove>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartTableMoveU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m69021FC0EE88F4998DCF22E4D7EFD2DD4E3FC1C2 (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MoveTable/<StartTableMove>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartTableMoveU3Ed__9_System_Collections_IEnumerator_Reset_mB5EF08BAB6E10CBDEC6EB6960083D9B4CB8E2D02 (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartTableMoveU3Ed__9_System_Collections_IEnumerator_Reset_mB5EF08BAB6E10CBDEC6EB6960083D9B4CB8E2D02_RuntimeMethod_var)));
	}
}
// System.Object MoveTable/<StartTableMove>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartTableMoveU3Ed__9_System_Collections_IEnumerator_get_Current_m611FC86D1608C78C97D9714C65C2593209B19D86 (U3CStartTableMoveU3Ed__9_t185829D4B3184A39E2D4D4E7FAEC6476A19C5BF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 PointManager::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, const RuntimeMethod* method) 
{
	{
		// public int Points { get => points; set => points = value; }
		int32_t L_0 = __this->___points_4;
		return L_0;
	}
}
// System.Void PointManager::set_Points(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointManager_set_Points_m4ABEC3FE50A10E278BFBBE604266A16E3E7FBD0D (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Points { get => points; set => points = value; }
		int32_t L_0 = ___0_value;
		__this->___points_4 = L_0;
		return;
	}
}
// System.Void PointManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointManager_Start_m38BAD072FCFBEB477252162343284F940238B92E (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// pointsText.text = "Points: " + Points.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___pointsText_5;
		int32_t L_1;
		L_1 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_2, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void PointManager::AddPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointManager_AddPoints_m3AED58DC08C349B7A0B51A57253788E211F38EE5 (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Points += amount;
		int32_t L_0;
		L_0 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		int32_t L_1 = ___0_amount;
		PointManager_set_Points_m4ABEC3FE50A10E278BFBBE604266A16E3E7FBD0D_inline(__this, ((int32_t)il2cpp_codegen_add(L_0, L_1)), NULL);
		// pointsText.text = "Points: " + Points.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___pointsText_5;
		int32_t L_3;
		L_3 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Boolean PointManager::DeductPoinstIfSufficient(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointManager_DeductPoinstIfSufficient_m702E42AF0EC0BD35F02FFFA07217FF771A37C4DB (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, int32_t ___0_amount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02E1603D9553C96473C8E3BB5B90B23959EEA231);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Points >= amount) {
		int32_t L_0;
		L_0 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		int32_t L_1 = ___0_amount;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_003c;
		}
	}
	{
		// Points -= amount;
		int32_t L_2;
		L_2 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		int32_t L_3 = ___0_amount;
		PointManager_set_Points_m4ABEC3FE50A10E278BFBBE604266A16E3E7FBD0D_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), NULL);
		// pointsText.text = "Points: " + Points;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___pointsText_5;
		int32_t L_5;
		L_5 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5AE45639C5F7DB8D717ED0292F5AAAFA3666E7D4, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// return true;
		return (bool)1;
	}

IL_003c:
	{
		// StartCoroutine("DisplayError");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral02E1603D9553C96473C8E3BB5B90B23959EEA231, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator PointManager::DisplayError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointManager_DisplayError_m40DFF5E15206744F185F177BB11A4E892110A632 (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* L_0 = (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2*)il2cpp_codegen_object_new(U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDisplayErrorU3Ed__10__ctor_mF1847F6D9B24F1CE2857A62AA59A722DC8C80DFE(L_0, 0, NULL);
		U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean PointManager::CheckSufficientPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointManager_CheckSufficientPoints_m4F2CB807EFB1DC3D4565861AFF34DDFEF7790ED4 (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, const RuntimeMethod* method) 
{
	{
		// if (Points < 50) {
		int32_t L_0;
		L_0 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)50))))
		{
			goto IL_000c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000c:
	{
		// Points -= 50;
		int32_t L_1;
		L_1 = PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline(__this, NULL);
		PointManager_set_Points_m4ABEC3FE50A10E278BFBBE604266A16E3E7FBD0D_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)50))), NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void PointManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointManager__ctor_m3754D93A1953334B75E6F28D636DFBEF54A60A47 (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, const RuntimeMethod* method) 
{
	{
		// private int points = 100;
		__this->___points_4 = ((int32_t)100);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PointManager/<DisplayError>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayErrorU3Ed__10__ctor_mF1847F6D9B24F1CE2857A62AA59A722DC8C80DFE (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PointManager/<DisplayError>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayErrorU3Ed__10_System_IDisposable_Dispose_m716AB652CF01832F514D1DC16DE79D278F4F910B (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PointManager/<DisplayError>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisplayErrorU3Ed__10_MoveNext_m8BEC2D56FF763C71D7893D9ACA8CA62B18BBBFF8 (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0401F9A31E5178BAA799AD64639505600D3C1F41);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_0079;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ErrorText.text = "Insufficient points";
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_3 = V_1;
		NullCheck(L_3);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = L_3->___ErrorText_6;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral0401F9A31E5178BAA799AD64639505600D3C1F41);
		// yield return new WaitForSeconds(3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0052:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ErrorText.text = "";
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_6 = V_1;
		NullCheck(L_6);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = L_6->___ErrorText_6;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0079:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PointManager/<DisplayError>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayErrorU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m607B0373A3F158ED95AF76A5F8CF68BCD01D1FA4 (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PointManager/<DisplayError>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisplayErrorU3Ed__10_System_Collections_IEnumerator_Reset_mD08A03EF4EE02BAE5CD579185FBDDC23E1074F34 (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDisplayErrorU3Ed__10_System_Collections_IEnumerator_Reset_mD08A03EF4EE02BAE5CD579185FBDDC23E1074F34_RuntimeMethod_var)));
	}
}
// System.Object PointManager/<DisplayError>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDisplayErrorU3Ed__10_System_Collections_IEnumerator_get_Current_mE9F1135622437D8B3F91C9AA240B861ACEE0513C (U3CDisplayErrorU3Ed__10_t79818661D9021F9CF1943E7E816DA6DD9E569AD2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Projectile::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_SetTarget_mACB48D5F35C5F84437519140618CE1F5F0877E0E (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) 
{
	{
		// this.target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_target;
		__this->___target_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Projectile::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnTriggerEnter_m2A2C38AF62C6E28ADE0098CD9BB3390C8712C20D (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Enemy"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// other.gameObject.GetComponent<Health>().TakeDamage(damage);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_other;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_5;
		L_5 = GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798(L_4, GameObject_GetComponent_TisHealth_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1_mF6FABE725D426F0C778CFD52707315BCC59CE798_RuntimeMethod_var);
		int32_t L_6 = __this->___damage_4;
		NullCheck(L_5);
		Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096(L_5, L_6, NULL);
	}

IL_0028:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m6E056CDE2DC25EDBA5DA3F4D9B9B9A69EC656737 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null || target.IsDestroyed())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_5;
		bool L_3;
		L_3 = UnityObjectUtility_IsDestroyed_mAAB5E43F3ACCE27DC1D187B7CB91499F9D173F81(L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		return;
	}

IL_0027:
	{
		// transform.LookAt(target.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___target_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_5);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_5, L_7, NULL);
		// transform.position += speed * Time.deltaTime * transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = __this->___speed_6;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_11, L_12)), L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_15, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_16, NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m9CB69FCF9C97712F4578D9686861E9694A270A58 (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1;
		__this->___speed_6 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 RigidbodyExtentions::FuturePosition(EnemyMovement,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RigidbodyExtentions_FuturePosition_mF271783C79EC1D65EB919ABB007EC9EDF402E659 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* ___0_enemy, float ___1_time, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// var predicted = Mathf.Lerp(0, 100000, time);
		float L_0 = ___1_time;
		float L_1;
		L_1 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (100000.0f), L_0, NULL);
		// Vector3 pPos = enemy.transform.position;
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_2 = ___0_enemy;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < time / Time.fixedDeltaTime; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_0021:
	{
		// for (int i = 0; i < time / Time.fixedDeltaTime; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < time / Time.fixedDeltaTime; i++)
		int32_t L_6 = V_1;
		float L_7 = ___1_time;
		float L_8;
		L_8 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		if ((((float)((float)L_6)) < ((float)((float)(L_7/L_8)))))
		{
			goto IL_0021;
		}
	}
	{
		// return pPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLoader::LoadSceneMainArScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadSceneMainArScene_mE8971FDC5C1B01A42BFDD671295C8A6265F07CA7 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A5D0CE80F901F4369E22D6735CE10348854F99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneMainArScene = GameObject.FindGameObjectWithTag("MainArScene");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral04A5D0CE80F901F4369E22D6735CE10348854F99, NULL);
		__this->___sceneMainArScene_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneMainArScene_4), (void*)L_0);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::LoadScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadScene_mC16E50A1DFC02AD725FCD761CE14DE4A59020CEF (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A5D0CE80F901F4369E22D6735CE10348854F99);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sceneMainArScene = GameObject.FindGameObjectWithTag("MainArScene");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral04A5D0CE80F901F4369E22D6735CE10348854F99, NULL);
		__this->___sceneMainArScene_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sceneMainArScene_4), (void*)L_0);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m2248766DF38AF07562AD31501C7275B8DF1B7D29 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TableCanvas::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableCanvas_Awake_m8AEC0651DBDEC4BFA5AB4C659472647DFBE217F9 (TableCanvas_t092E97967B20B5C52670DD8E51DC3F352A3BC7AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// canvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___canvas_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_4), (void*)L_0);
		// canvas.worldCamera = GameObject.FindGameObjectWithTag("ARCamera").GetComponent<Camera>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->___canvas_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392, NULL);
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_2, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_1);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_1, L_3, NULL);
		// towerCostText.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___towerCostText_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TableCanvas::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableCanvas__ctor_m66F416F554C839FCE7014B71A8775552CE3DA9C0 (TableCanvas_t092E97967B20B5C52670DD8E51DC3F352A3BC7AE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Collider Tile::get_Collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Tile_get_Collider_mCE2D195A5B4B6D2A05228EC3D9A21BDA6289B29D (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// public Collider Collider { get => collider; set => collider = value; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___collider_4;
		return L_0;
	}
}
// System.Void Tile::set_Collider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_Collider_m962EEE124B83D3B8C9687228F59DADDC18AC4989 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Collider Collider { get => collider; set => collider = value; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_value;
		__this->___collider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collider_4), (void*)L_0);
		return;
	}
}
// System.Boolean Tile::get_IsBlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tile_get_IsBlocked_mFFDAEE04A40F57002CF726ED57CAA14835940802 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBlocked { get => isBlocked; set => isBlocked = value; }
		bool L_0 = __this->___isBlocked_5;
		return L_0;
	}
}
// System.Void Tile::set_IsBlocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_IsBlocked_m3ED8E4A0204EACE6767879FF57ED9322C9115080 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsBlocked { get => isBlocked; set => isBlocked = value; }
		bool L_0 = ___0_value;
		__this->___isBlocked_5 = L_0;
		return;
	}
}
// System.Void Tile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Start_m7570D3565812FE205FD0D72A69D9979C41E08FB1 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		Tile_set_Collider_m962EEE124B83D3B8C9687228F59DADDC18AC4989_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mB2C904B47040471552C938AE751AC0BF80B369E7 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<UnityEngine.Transform> TileManager::get_Tiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* TileManager_get_Tiles_mFA97F0D16DB1169DE563ABB691C967230B85ED6B (TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5* __this, const RuntimeMethod* method) 
{
	{
		// public List<Transform> Tiles { get => tiles; set => tiles = value; }
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___tiles_6;
		return L_0;
	}
}
// System.Void TileManager::set_Tiles(System.Collections.Generic.List`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileManager_set_Tiles_m26DB280E6421BF05F559783AFDEDC2AAF6DBD579 (TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5* __this, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___0_value, const RuntimeMethod* method) 
{
	{
		// public List<Transform> Tiles { get => tiles; set => tiles = value; }
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = ___0_value;
		__this->___tiles_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiles_6), (void*)L_0);
		return;
	}
}
// System.Void TileManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileManager_Start_m5011CB1D0DB337B483F455D4DA0428083DBEAAF4 (TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD86072660D36169D57F3DBFF16C289D4EAD57856);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_10 = NULL;
	{
		// float scaleX = gridTilePrefab.transform.localScale.x / 10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gridTilePrefab_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		V_0 = ((float)(L_3/(10.0f)));
		// float scaleZ = gridTilePrefab.transform.localScale.z / 10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gridTilePrefab_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = L_6.___z_4;
		V_1 = ((float)(L_7/(10.0f)));
		// Bounds objectBounds = GetComponent<Renderer>().bounds;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8;
		L_8 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_8, NULL);
		V_2 = L_9;
		// int tilesX = Mathf.FloorToInt(objectBounds.size.x / (scaleX + spacing));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_2), NULL);
		float L_11 = L_10.___x_2;
		float L_12 = V_0;
		float L_13 = __this->___spacing_5;
		int32_t L_14;
		L_14 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_11/((float)il2cpp_codegen_add(L_12, L_13)))), NULL);
		V_3 = L_14;
		// int tilesZ = Mathf.FloorToInt(objectBounds.size.z / (scaleZ + spacing));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_2), NULL);
		float L_16 = L_15.___z_4;
		float L_17 = V_1;
		float L_18 = __this->___spacing_5;
		int32_t L_19;
		L_19 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_16/((float)il2cpp_codegen_add(L_17, L_18)))), NULL);
		V_4 = L_19;
		// float offsetX = (objectBounds.size.x - tilesX * (scaleX + spacing)) / 2.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_2), NULL);
		float L_21 = L_20.___x_2;
		int32_t L_22 = V_3;
		float L_23 = V_0;
		float L_24 = __this->___spacing_5;
		V_5 = ((float)(((float)il2cpp_codegen_subtract(L_21, ((float)il2cpp_codegen_multiply(((float)L_22), ((float)il2cpp_codegen_add(L_23, L_24))))))/(2.0f)));
		// float offsetZ = (objectBounds.size.z - tilesZ * (scaleZ + spacing)) / 2.0f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_2), NULL);
		float L_26 = L_25.___z_4;
		int32_t L_27 = V_4;
		float L_28 = V_1;
		float L_29 = __this->___spacing_5;
		V_6 = ((float)(((float)il2cpp_codegen_subtract(L_26, ((float)il2cpp_codegen_multiply(((float)L_27), ((float)il2cpp_codegen_add(L_28, L_29))))))/(2.0f)));
		// for (int x = 0; x <= tilesX; x++) {
		V_7 = 0;
		goto IL_0184;
	}

IL_00c4:
	{
		// for (int z = 0; z <= tilesZ; z++) {
		V_8 = 0;
		goto IL_0175;
	}

IL_00cc:
	{
		// Vector3 position = new Vector3(
		//     objectBounds.min.x + offsetX + (x * (scaleX + spacing)),
		//     objectBounds.min.y,
		//     objectBounds.min.z + offsetZ + (z * (scaleZ + spacing))
		// );
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_2), NULL);
		float L_31 = L_30.___x_2;
		float L_32 = V_5;
		int32_t L_33 = V_7;
		float L_34 = V_0;
		float L_35 = __this->___spacing_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_2), NULL);
		float L_37 = L_36.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&V_2), NULL);
		float L_39 = L_38.___z_4;
		float L_40 = V_6;
		int32_t L_41 = V_8;
		float L_42 = V_1;
		float L_43 = __this->___spacing_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_31, L_32)), ((float)il2cpp_codegen_multiply(((float)L_33), ((float)il2cpp_codegen_add(L_34, L_35)))))), L_37, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_39, L_40)), ((float)il2cpp_codegen_multiply(((float)L_41), ((float)il2cpp_codegen_add(L_42, L_43)))))), NULL);
		// GameObject gridTile = Instantiate(gridTilePrefab, position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___gridTilePrefab_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46;
		L_46 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_44, L_45, L_46, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_10 = L_47;
		// gridTile.name = $"Tile {x} {z}";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_10;
		int32_t L_49 = V_7;
		int32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_50);
		int32_t L_52 = V_8;
		int32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_53);
		String_t* L_55;
		L_55 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD86072660D36169D57F3DBFF16C289D4EAD57856, L_51, L_54, NULL);
		NullCheck(L_48);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_48, L_55, NULL);
		// Tiles.Add(gridTile.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_56;
		L_56 = TileManager_get_Tiles_mFA97F0D16DB1169DE563ABB691C967230B85ED6B_inline(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_10;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		NullCheck(L_56);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_56, L_58, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// gridTile.transform.SetParent(transform, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = V_10;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_60);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_60, L_61, (bool)1, NULL);
		// for (int z = 0; z <= tilesZ; z++) {
		int32_t L_62 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0175:
	{
		// for (int z = 0; z <= tilesZ; z++) {
		int32_t L_63 = V_8;
		int32_t L_64 = V_4;
		if ((((int32_t)L_63) <= ((int32_t)L_64)))
		{
			goto IL_00cc;
		}
	}
	{
		// for (int x = 0; x <= tilesX; x++) {
		int32_t L_65 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0184:
	{
		// for (int x = 0; x <= tilesX; x++) {
		int32_t L_66 = V_7;
		int32_t L_67 = V_3;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_00c4;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TileManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileManager__ctor_m6DE6FE7B7416684B34652C47FB44FC7F2F367E3F (TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float spacing = 0.1f; // Spacing between grid tiles
		__this->___spacing_5 = (0.100000001f);
		// private List<Transform> tiles = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___tiles_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tiles_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_Start_mC9F05378DD96501A52BF28A5C2981E2D04909CBB (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animation = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animation_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animation_13), (void*)L_1);
		// }
		return;
	}
}
// System.Void Tower::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_Update_mF0E8AA55D0906C473D7D69C5D8C143B003286450 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m8AE607A96672ADD12291B4FE0CAF25D5733471A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GameObject closestEnemy = FindClosestEnemy(); // Find the closest enemy within range
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Tower_FindClosestEnemy_mDB0D8FEA33FF86E62951A183870CEEEAB0EAE0E5(__this, NULL);
		V_0 = L_0;
		// if (closestEnemy != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_008f;
		}
	}
	{
		// Vector3 targetDirection = closestEnemy.transform.position - pivot.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___pivot_12;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		V_1 = L_8;
		// targetDirection.y = 0.0f; // Lock rotation to the XZ plane (assuming Y is the vertical axis)
		(&V_1)->___y_3 = (0.0f);
		// pivot.rotation = Quaternion.LookRotation(targetDirection);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___pivot_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_10, NULL);
		NullCheck(L_9);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_9, L_11, NULL);
		// if (fireCooldown <= 0.0f) {
		float L_12 = __this->___fireCooldown_8;
		if ((!(((float)L_12) <= ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		// if (closestEnemy != null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_006b;
		}
	}
	{
		// Attack(closestEnemy.GetComponent<IDamageable>()); // Attack the closest enemy
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = GameObject_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m8AE607A96672ADD12291B4FE0CAF25D5733471A2(L_15, GameObject_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m8AE607A96672ADD12291B4FE0CAF25D5733471A2_RuntimeMethod_var);
		Tower_Attack_m373D1ECFDE34B0B5695991C3387C8FFAC6E57E86(__this, L_16, NULL);
	}

IL_006b:
	{
		// fireCooldown = 1.0f / fireRate;
		float L_17 = __this->___fireRate_4;
		__this->___fireCooldown_8 = ((float)((1.0f)/L_17));
	}

IL_007d:
	{
		// fireCooldown -= Time.deltaTime;
		float L_18 = __this->___fireCooldown_8;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___fireCooldown_8 = ((float)il2cpp_codegen_subtract(L_18, L_19));
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Tower::Attack(Assets.Scripts.IDamageable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_Attack_m373D1ECFDE34B0B5695991C3387C8FFAC6E57E86 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, RuntimeObject* ___0_enemy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animation.SetTrigger("Shoot");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animation_13;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral63D5B7B61C9A932F0CFFA0506AD506F2DC0E23A8, NULL);
		// enemy.TakeDamage(damagePerTick);
		RuntimeObject* L_1 = ___0_enemy;
		int32_t L_2 = __this->___damagePerTick_6;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void Assets.Scripts.IDamageable::TakeDamage(System.Int32) */, IDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// UnityEngine.GameObject Tower::FindClosestEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tower_FindClosestEnemy_mDB0D8FEA33FF86E62951A183870CEEEAB0EAE0E5 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m9F12EB59D8AE998A7A00E444979EA9AEE901C91C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9B53C3D04EDC545CD4D52D8F65FA2321BD32FB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF19A0C6189F7B91B8CCD0DDC457D66F2A161BA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1AF923779EA798B6D54040FA67531B1F5F1EC323_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0A8258727C1434280EB076545170B0CC4F0904C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_3 = NULL;
	float V_4 = 0.0f;
	{
		// float closestDistance = range;
		float L_0 = __this->___range_5;
		V_0 = L_0;
		// GameObject closestEnemy = null;
		V_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (Enemy enemies in enemiesInRange) {
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_1 = __this->___enemiesInRange_11;
		NullCheck(L_1);
		Enumerator_tCE299E8B29D68978C6B43A2689675634A0604AF8 L_2;
		L_2 = List_1_GetEnumerator_m0A8258727C1434280EB076545170B0CC4F0904C9(L_1, List_1_GetEnumerator_m0A8258727C1434280EB076545170B0CC4F0904C9_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9B53C3D04EDC545CD4D52D8F65FA2321BD32FB45((&V_2), Enumerator_Dispose_m9B53C3D04EDC545CD4D52D8F65FA2321BD32FB45_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005c_1;
			}

IL_0017_1:
			{
				// foreach (Enemy enemies in enemiesInRange) {
				Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_3;
				L_3 = Enumerator_get_Current_m1AF923779EA798B6D54040FA67531B1F5F1EC323_inline((&V_2), Enumerator_get_Current_m1AF923779EA798B6D54040FA67531B1F5F1EC323_RuntimeMethod_var);
				V_3 = L_3;
				// if (enemies != null) {
				Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_4 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_005c_1;
				}
			}
			{
				// IDamageable damageable = enemies.GetComponent<IDamageable>();
				Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_6 = V_3;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = Component_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m9F12EB59D8AE998A7A00E444979EA9AEE901C91C(L_6, Component_GetComponent_TisIDamageable_tF46418F9311C27BF890F7052DB85644C1A29E2A8_m9F12EB59D8AE998A7A00E444979EA9AEE901C91C_RuntimeMethod_var);
				// if (damageable != null) {
				if (!L_7)
				{
					goto IL_005c_1;
				}
			}
			{
				// float distance = Vector3.Distance(transform.position, enemies.transform.position);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
				NullCheck(L_8);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
				Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_10 = V_3;
				NullCheck(L_10);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
				NullCheck(L_11);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
				L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
				float L_13;
				L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_9, L_12, NULL);
				V_4 = L_13;
				// if (distance < closestDistance) {
				float L_14 = V_4;
				float L_15 = V_0;
				if ((!(((float)L_14) < ((float)L_15))))
				{
					goto IL_005c_1;
				}
			}
			{
				// closestDistance = distance;
				float L_16 = V_4;
				V_0 = L_16;
				// closestEnemy = enemies.gameObject;
				Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_17 = V_3;
				NullCheck(L_17);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
				L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
				V_1 = L_18;
			}

IL_005c_1:
			{
				// foreach (Enemy enemies in enemiesInRange) {
				bool L_19;
				L_19 = Enumerator_MoveNext_mF19A0C6189F7B91B8CCD0DDC457D66F2A161BA18((&V_2), Enumerator_MoveNext_mF19A0C6189F7B91B8CCD0DDC457D66F2A161BA18_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0075;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0075:
	{
		// return closestEnemy; // Set the closest enemy as the target
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		return L_20;
	}
}
// System.Void Tower::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_OnTriggerEnter_m4B7E401177191644CDE874E188BEBB18B091510F (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_0 = NULL;
	{
		// Enemy enemy = other.GetComponent<Enemy>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1;
		L_1 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(L_0, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		V_0 = L_1;
		// if (enemy != null) {
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// enemiesInRange.Add(enemy);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_4 = __this->___enemiesInRange_11;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = V_0;
		NullCheck(L_4);
		List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_inline(L_4, L_5, List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Tower::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower_OnTriggerExit_m0C53EA88FB4CDD204B5229096558E6374D8C53D3 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* V_0 = NULL;
	{
		// Enemy enemy = other.GetComponent<Enemy>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1;
		L_1 = Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11(L_0, Component_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m0D3B0DBB86B84B475D762380E70C964C3B464E11_RuntimeMethod_var);
		V_0 = L_1;
		// if (enemy != null) {
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// enemiesInRange.Remove(enemy);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_4 = __this->___enemiesInRange_11;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4(L_4, L_5, List_1_Remove_m84DCF90974973450ABD8110FD9B80101AD2FBDF4_RuntimeMethod_var);
		// if (enemy == targetEnemy) {
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_7 = V_0;
		RuntimeObject* L_8 = __this->___targetEnemy_9;
		if ((!(((RuntimeObject*)(Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		// targetEnemy = null; // Clear the target if the current target leaves the range
		__this->___targetEnemy_9 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetEnemy_9), (void*)(RuntimeObject*)NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Tower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tower__ctor_m1DDECE451BF98AEDFB7520FFBA14FB8D89DB0A80 (Tower_t93901F9ACBCBFBC827C3977B871BE5EF4D2425E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float fireRate = 0.5f;
		__this->___fireRate_4 = (0.5f);
		// public float range = 5.0f;
		__this->___range_5 = (5.0f);
		// public int damagePerTick = 1;
		__this->___damagePerTick_6 = 1;
		// public int gridSize = 3;
		__this->___gridSize_7 = 3;
		// private List<Collider> collidersInRange = new List<Collider>(); // Declare and initialize the list
		List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* L_0 = (List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252*)il2cpp_codegen_object_new(List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE(L_0, List_1__ctor_m0CDD6F02F45026B4267E7117C5DDC188F87EE7BE_RuntimeMethod_var);
		__this->___collidersInRange_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collidersInRange_10), (void*)L_0);
		// private List<Enemy> enemiesInRange = new List<Enemy>(); // Declare and initialize the list
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_1 = (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*)il2cpp_codegen_object_new(List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E(L_1, List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var);
		__this->___enemiesInRange_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemiesInRange_11), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TowerUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI_Awake_mC8D565C61B69D0BD4C727202BE5AC2EE976FA4A6 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cam = GameObject.FindGameObjectWithTag("ARCamera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralB380323115EEC67CBE21D9A21F0CDB5B90BB7392, NULL);
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_0, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->____cam_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cam_5), (void*)L_1);
		// _canvas = transform.GetChild(0).GetComponent<Canvas>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, 0, NULL);
		NullCheck(L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_3, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->____canvas_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____canvas_4), (void*)L_4);
		// }
		return;
	}
}
// System.Void TowerUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI_Start_mC07262DB54568A05909538748124E5626217F6B3 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) 
{
	{
		// _canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->____canvas_4;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// _canvasPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		__this->____canvasPosition_7 = L_2;
		// _movePoint = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->____movePoint_6 = L_3;
		// Ray ray = _cam.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_4, L_5, NULL);
		// if (Physics.Raycast(ray, out _hit, 500f)) {
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_7 = (&__this->____hit_8);
		bool L_8;
		L_8 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_6, L_7, (500.0f), NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// _movePoint = _hit.point;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->____hit_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_9, NULL);
		__this->____movePoint_6 = L_10;
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void TowerUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI_Update_m64D1AF1FDFAA7D3109B1994151AEC4F3160DA4E2 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) 
{
	{
		// IsTowerSelected();
		TowerUI_IsTowerSelected_m7F548FA693C4CAC66AEE5D33B632874624D05121(__this, NULL);
		// RotateUI();
		TowerUI_RotateUI_m1F2A4587908903AAF4708BB185FD646F686FCEE7(__this, NULL);
		// }
		return;
	}
}
// System.Void TowerUI::IsTowerSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI_IsTowerSelected_m7F548FA693C4CAC66AEE5D33B632874624D05121 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E38CBB93EA6D0F9E03A4C20355AFB8FAE481C44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < Input.touchCount; i++)
		V_0 = 0;
		goto IL_00e8;
	}

IL_0007:
	{
		// if (Input.GetTouch(i).phase == TouchPhase.Began)
		int32_t L_0 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if (L_2)
		{
			goto IL_00e4;
		}
	}
	{
		// Ray ray = _cam.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->____cam_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_4, NULL);
		// if (Physics.Raycast(ray, out _hit, 5000f))
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->____hit_8);
		bool L_7;
		L_7 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_5, L_6, (5000.0f), NULL);
		if (!L_7)
		{
			goto IL_00d8;
		}
	}
	{
		// if (_hit.collider.gameObject == gameObject || _hit.transform.gameObject == _canvas.gameObject)
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8 = (&__this->____hit_8);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_8, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_007e;
		}
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_13 = (&__this->____hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_13, NULL);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->____canvas_4;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_00ca;
		}
	}

IL_007e:
	{
		// Debug.Log("Tower selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral4E38CBB93EA6D0F9E03A4C20355AFB8FAE481C44, NULL);
		// if (_hit.collider.gameObject == gameObject || _hit.collider.CompareTag("Button")) {
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_19 = (&__this->____hit_8);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20;
		L_20 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_19, NULL);
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, L_22, NULL);
		if (L_23)
		{
			goto IL_00bc;
		}
	}
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_24 = (&__this->____hit_8);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_25;
		L_25 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_24, NULL);
		NullCheck(L_25);
		bool L_26;
		L_26 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_25, _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, NULL);
		if (!L_26)
		{
			goto IL_00e4;
		}
	}

IL_00bc:
	{
		// _canvas.enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_27 = __this->____canvas_4;
		NullCheck(L_27);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)1, NULL);
		goto IL_00e4;
	}

IL_00ca:
	{
		// _canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_28 = __this->____canvas_4;
		NullCheck(L_28);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)0, NULL);
		goto IL_00e4;
	}

IL_00d8:
	{
		// _canvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_29 = __this->____canvas_4;
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
	}

IL_00e4:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00e8:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TowerUI::RotateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI_RotateUI_m1F2A4587908903AAF4708BB185FD646F686FCEE7 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = _canvas.transform.position - _cam.transform.position;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->____canvas_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->____cam_5;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// _canvas.transform.rotation = Quaternion.LookRotation(direction);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = __this->____canvas_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_9, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void TowerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerUI__ctor_m66F498CE1D8FCE3E00F4E2CAFCC98E9C1EA875F2 (TowerUI_tD400309095A59CDBF6F7BD8BE343BE262FE2DEB5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TowerEvolutions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerEvolutions_Awake_m28F9BA3AAA5682A1DF2C8C9CF341A57E5A375E0B (TowerEvolutions_t9B575A547B4192112C671D2BA526899015FB76A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40512FD4C6B22E651FFC0EFF479EB08E7B146127);
		s_Il2CppMethodInitialized = true;
	}
	{
		// em = GameObject.FindGameObjectWithTag("EnemyManager").GetComponent<EnemyManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteral40512FD4C6B22E651FFC0EFF479EB08E7B146127, NULL);
		NullCheck(L_0);
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_1;
		L_1 = GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B(L_0, GameObject_GetComponent_TisEnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7_m7FC5DB25EAD7A83D01D405259788F8599A05113B_RuntimeMethod_var);
		__this->___em_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___em_11), (void*)L_1);
		// }
		return;
	}
}
// System.Void TowerEvolutions::UpgradeSniper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerEvolutions_UpgradeSniper_m4C4FD77452D7C8BE956F4D2D1FA7EF28EEB9AA0C (TowerEvolutions_t9B575A547B4192112C671D2BA526899015FB76A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (em.DeductPoinstIfSufficient(sniperTowerCost)) {
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_0 = __this->___em_11;
		int32_t L_1 = __this->___sniperTowerCost_10;
		NullCheck(L_0);
		bool L_2;
		L_2 = EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// Instantiate(sniperTower, mainTower.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___sniperTower_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___mainTower_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(mainTower.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___mainTower_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TowerEvolutions::UpgradeRocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerEvolutions_UpgradeRocket_mE3A909C26B14543B28245528AE484453A1310BFC (TowerEvolutions_t9B575A547B4192112C671D2BA526899015FB76A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (em.DeductPoinstIfSufficient(rocketTowerCost)) {
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_0 = __this->___em_11;
		int32_t L_1 = __this->___rocketTowerCost_9;
		NullCheck(L_0);
		bool L_2;
		L_2 = EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// Instantiate(rocketTower, mainTower.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___rocketTower_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___mainTower_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(mainTower.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___mainTower_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TowerEvolutions::UpgradeLaser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerEvolutions_UpgradeLaser_m94D03A7838F610291F343B538142641120CC0A24 (TowerEvolutions_t9B575A547B4192112C671D2BA526899015FB76A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (em.DeductPoinstIfSufficient(laserTowerCost)) {
		EnemyManager_t1E62560CF35DDFD25DCC8B8697BDBC7206B71BB7* L_0 = __this->___em_11;
		int32_t L_1 = __this->___laserTowerCost_8;
		NullCheck(L_0);
		bool L_2;
		L_2 = EnemyManager_DeductPoinstIfSufficient_mF2550436542EBDAAD3D3B05528780C3F0C353857(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// Instantiate(laserTower, mainTower.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___laserTower_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___mainTower_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(mainTower.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___mainTower_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_9, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void TowerEvolutions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowerEvolutions__ctor_mB61D19C653BA76F2F2C77A22270BE71E670F0AB2 (TowerEvolutions_t9B575A547B4192112C671D2BA526899015FB76A4* __this, const RuntimeMethod* method) 
{
	{
		// public int laserTowerCost = 600;
		__this->___laserTowerCost_8 = ((int32_t)600);
		// public int rocketTowerCost = 220;
		__this->___rocketTowerCost_9 = ((int32_t)220);
		// public int sniperTowerCost = 400;
		__this->___sniperTowerCost_10 = ((int32_t)400);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::get_placedPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_placedPrefab_m1BF21961559C84A37FA7D9DF8A8401B1BE83C416 (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PlacedPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PlacedPrefab_4;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::set_placedPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_set_placedPrefab_m2B997DD7A3B3A637826C2F18DBECA44F97621657 (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_PlacedPrefab = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_PlacedPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlacedPrefab_4), (void*)L_0);
		// set { m_PlacedPrefab = value; }
		return;
	}
}
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::get_spawnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedObject_mB3DAD65252D2D50E31C27D69BAC2F4BC7DEC18F6 (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedObjectU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::set_spawnedObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedObject_m9369CCAEA1F5D013EF7B236C4B5A3F103373D356 (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CspawnedObjectU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedObjectU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Awake_m38433067061208AABB1F83B909A56AFCD20D150B (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_9), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::TryGetTouchPosition(UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceOnPlane_TryGetTouchPosition_m4B93C9635CCEAF3E5EB5CAB294AF08BE2BC8F9CC (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_touchPosition, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// touchPosition = Input.GetTouch(0).position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___0_touchPosition;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_1 = L_3;
		// return true;
		return (bool)1;
	}

IL_001e:
	{
		// touchPosition = default;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = ___0_touchPosition;
		il2cpp_codegen_initobj(L_4, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane_Update_m9C8DC6FCAF258DBE231F1F09B53C410C7B3F46DD (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!TryGetTouchPosition(out Vector2 touchPosition))
		bool L_0;
		L_0 = PlaceOnPlane_TryGetTouchPosition_m4B93C9635CCEAF3E5EB5CAB294AF08BE2BC8F9CC(__this, (&V_0), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// if (m_RaycastManager.Raycast(touchPosition, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_1 = __this->___m_RaycastManager_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = ((PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var))->___s_Hits_8;
		NullCheck(L_1);
		bool L_4;
		L_4 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_1, L_2, L_3, 1, NULL);
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		// var hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var))->___s_Hits_8;
		NullCheck(L_5);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_6;
		L_6 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_5, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_3 = L_6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_3), NULL);
		V_2 = L_7;
		// if (spawnedObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = PlaceOnPlane_get_spawnedObject_mB3DAD65252D2D50E31C27D69BAC2F4BC7DEC18F6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// spawnedObject = Instantiate(m_PlacedPrefab, hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_PlacedPrefab_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = L_13.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		PlaceOnPlane_set_spawnedObject_m9369CCAEA1F5D013EF7B236C4B5A3F103373D356_inline(__this, L_15, NULL);
		goto IL_007e;
	}

IL_0060:
	{
		// else if (isMoving)
		bool L_16 = __this->___isMoving_7;
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		// spawnedObject.transform.position = hitPose.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = PlaceOnPlane_get_spawnedObject_mB3DAD65252D2D50E31C27D69BAC2F4BC7DEC18F6_inline(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_17, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19.___position_0;
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_20, NULL);
	}

IL_007e:
	{
		// Vector3 forward = transform.TransformDirection(Vector3.forward) * 100;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, (100.0f), NULL);
		V_1 = L_24;
		// Debug.DrawRay(transform.position, forward, Color.red);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_26, L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane__ctor_m6DAE54BAA5E83A8A342A4C309093D1884D87C4C2 (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.PlaceOnPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceOnPlane__cctor_m58DB6162A7272070289E746E4C3F115DE5928695 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var))->___s_Hits_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_StaticFields*)il2cpp_codegen_static_fields_for(PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019_il2cpp_TypeInfo_var))->___s_Hits_8), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* Entity_get_HealthComponent_m9086F947E2AB968A8BD1941247BB83E85A47E138_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// public Health HealthComponent { get => healthComponent; set => healthComponent = value; }
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_0 = __this->___healthComponent_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_Health_m4BE8EDA44B25E4BC8559D5675BB86FF54C380B30_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int Health { get => health; set => health = value; }
		int32_t L_0 = __this->___health_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* Enemy_get_EnemyMovement_mE4E2238C24E3E8D3A91040ECC3354A9E9AE4BB7D_inline (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// public EnemyMovement EnemyMovement { get => enemyMovement; set => enemyMovement = value; }
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_0 = __this->___enemyMovement_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EnemyData_get_MoveSpeed_m823E91AE93F5E4C8880580E3B610BFB235C73936_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveSpeed { get => moveSpeed; set => moveSpeed = value; }
		float L_0 = __this->___moveSpeed_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_PointValue_mE1AA76EF8C2E969CE1F4D675879ADA2FC1281686_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int PointValue { get => pointValue; set => pointValue = value; }
		int32_t L_0 = __this->___pointValue_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Entity_set_PointAmount_mEBE4A4A160019F349F86F97DC3BFB948062C0D63_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PointAmount { get => pointAmount; set => pointAmount = value; }
		int32_t L_0 = ___0_value;
		__this->___pointAmount_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_DamageValue_mF624CB7076921093FC0D1C4B7871A62A4C87BCF2_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int DamageValue { get => damageValue; set => damageValue = value; }
		int32_t L_0 = __this->___damageValue_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enemy_set_Damage_mCFA5474176D907BE22C2A24EEAF3E69E36596D64_inline (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Damage { get => damage; set => damage = value; }
		int32_t L_0 = ___0_value;
		__this->___damage_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyData_get_SpawnableInWave_mFF47A83CB1EC5D958ED79C8D3F1AC17D570DBC0E_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public int SpawnableInWave { get => spawnableInWave; set => spawnableInWave = value; }
		int32_t L_0 = __this->___spawnableInWave_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyData_get_Model_m4D969E803BF64193744C4D42AEAEBB83CA4226EA_inline (EnemyData_t9F8CB34825271167138B22969F324AF63A8C8CAD* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Model { get => model; set => model = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___model_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MathF_Round_m5DD772CDC5F86606281DE7886A23FB44BFB577E7_inline (float ___0_x, int32_t ___1_digits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_x;
		int32_t L_1 = ___1_digits;
		il2cpp_codegen_runtime_class_init_inline(MathF_t54810B9E7503B5BD0850A3D6E6336922E1553C52_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = MathF_Round_m25DAB628E94E0D50E9E5DAE40420CCBD07D370F9(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enemy_set_EnemyMovement_m3D4206FEBAC81725FEFBC7A885C8EBDB3E37821D_inline (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public EnemyMovement EnemyMovement { get => enemyMovement; set => enemyMovement = value; }
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_0 = ___0_value;
		__this->___enemyMovement_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyMovement_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* Entity_get_PointManager_m3382ADEBB89B441043D1F2ADA52A5BD9E8450A83_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, const RuntimeMethod* method) 
{
	{
		// public PointManager PointManager { get => pointManager; set => pointManager = value; }
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_0 = __this->___pointManager_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnemyMovement_set_Target_mCD0271AF9EE7503A08E39D5AC3EEC15C680AEF80_inline (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject Target { get => target; set => target = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___target_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Entity_set_HealthComponent_m00C355AED2887ED341BDDA63A10377613BAAF23E_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Health HealthComponent { get => healthComponent; set => healthComponent = value; }
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_0 = ___0_value;
		__this->___healthComponent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___healthComponent_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Entity_set_PointManager_m72701FB2DED4A49EC2D753FB3FB1B0DC0D7B6B8D_inline (Entity_tA0A7B48C604B2526417890D6E1004FACF66AD2CC* __this, PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* ___0_value, const RuntimeMethod* method) 
{
	{
		// public PointManager PointManager { get => pointManager; set => pointManager = value; }
		PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* L_0 = ___0_value;
		__this->___pointManager_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointManager_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tile_set_IsBlocked_m3ED8E4A0204EACE6767879FF57ED9322C9115080_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsBlocked { get => isBlocked; set => isBlocked = value; }
		bool L_0 = ___0_value;
		__this->___isBlocked_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tile_get_IsBlocked_mFFDAEE04A40F57002CF726ED57CAA14835940802_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsBlocked { get => isBlocked; set => isBlocked = value; }
		bool L_0 = __this->___isBlocked_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Health_get_MaxHealth_mFC8DC66E7B04FC3F11271C147ED01A27962A8969_inline (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxHealth { get => maxHealth; set => maxHealth = value; }
		int32_t L_0 = __this->___maxHealth_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HealthChangeHandler_Invoke_m247726469BD02502C6E048D33C4C6F6968784E13_inline (HealthChangeHandler_t48DBA665B7F8382C70FF08BEE602546C60F2777D* __this, int32_t ___0_currentHealth, int32_t ___1_maxHealth, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_currentHealth, ___1_maxHealth, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Projectile_SetTarget_mACB48D5F35C5F84437519140618CE1F5F0877E0E_inline (Projectile_tA72765CF412643B7253F62ADB6EDDCC9C3803BA6* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) 
{
	{
		// this.target = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_target;
		__this->___target_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_5), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointManager_get_Points_mD7E30C26FDADBCAC0E1E2392B7A5FC15603AA87A_inline (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, const RuntimeMethod* method) 
{
	{
		// public int Points { get => points; set => points = value; }
		int32_t L_0 = __this->___points_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointManager_set_Points_m4ABEC3FE50A10E278BFBBE604266A16E3E7FBD0D_inline (PointManager_t26B148DBE017524C9499C08C05A0B6A6F42FD2B9* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Points { get => points; set => points = value; }
		int32_t L_0 = ___0_value;
		__this->___points_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Tile_set_Collider_m962EEE124B83D3B8C9687228F59DADDC18AC4989_inline (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Collider Collider { get => collider; set => collider = value; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_value;
		__this->___collider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collider_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* TileManager_get_Tiles_mFA97F0D16DB1169DE563ABB691C967230B85ED6B_inline (TileManager_tFBBDFAC6A5BF52669B3CC976CF38997498154EC5* __this, const RuntimeMethod* method) 
{
	{
		// public List<Transform> Tiles { get => tiles; set => tiles = value; }
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___tiles_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceOnPlane_get_spawnedObject_mB3DAD65252D2D50E31C27D69BAC2F4BC7DEC18F6_inline (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedObjectU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceOnPlane_set_spawnedObject_m9369CCAEA1F5D013EF7B236C4B5A3F103373D356_inline (PlaceOnPlane_t430C0999E5F40469E0AC150B9D037353D3958019* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___U3CspawnedObjectU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedObjectU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m211AB6C2AA7326F6BFC8338EC888360A219AFF41_gshared_inline (Action_1_t2EDB30EAB747FDF563DD6410FC76AF861A09A0C2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m728A2437F181FBC56F4D617249B47F513AC9FC43_gshared_inline (Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* __this, int32_t ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mAF95CFFAB0893131FB83C35A9B8CB981D1F6D565_gshared_inline (Nullable_1_t3F600B8542A47470EF0DD5F72E42A0A3878DD326* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
