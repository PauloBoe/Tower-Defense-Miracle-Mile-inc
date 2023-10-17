#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8;
// Unity.XR.CoreUtils.Bindings.Variables.BindableVariable`1<System.Single>
struct BindableVariable_1_tAB8C2D23769D801C8E39D4AA927DD23AF0E6816C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,System.Single>
struct Dictionary_2_tD6336C1E43D33973F64744AF3B0B1E66CB234D61;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform>
struct Dictionary_2_t81F2911EE2E2DBAC0CE118A677A47BAC16F93B5C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter>
struct ExposedRegistrationList_1_t7932F633A860258335FD94BBFDE46AC92B1CF84B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct HashSetList_1_tB0E5508E89C533C11CEB3536E5482FFDC036DABE;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup>
struct HashSetList_1_tC1DD99D75EB047082BD9E0C1091C02E0C288AA9D;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct HashSetList_1_tE0EFB7DD0405CCE9F3D8363787AA148691CAA84B;
// Unity.XR.CoreUtils.Collections.HashSetList`1<UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor>
struct HashSetList_1_tF4597D6E0634CA8A9A545B12E6AEF4E7F4E95EB5;
// System.Collections.Generic.HashSet`1<UnityEngine.Collider>
struct HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct HashSet_1_t363C9122BFA49D682A5E9E8935229B0089922C5B;
// System.Collections.Generic.IEnumerable`1<QCHT.Samples.XRKeyboard.KeyButton>
struct IEnumerable_1_t646820691B7925C1DDDDEFEE07BE9AA9CC219FD5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform>
struct LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75;
// System.Collections.Generic.List`1<QCHT.Interactions.Distal.IXRRayInteractorFilter>
struct List_1_tF12D2E6D2CEE49A4089C079FE47A615E70D610E7;
// System.Collections.Generic.List`1<QCHT.Samples.XRKeyboard.KeyButton>
struct List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer>
struct List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<QCHT.Interactions.Distal.XRRayInteractorManager>
struct List_1_t093A0DEA3BBFE439BC7A2B4D22F23DE17A8A1605;
// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<QCHT.Samples.XRKeyboard.KeyButton>
struct UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B;
// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E;
// UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton>
struct UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8;
// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// QCHT.Samples.XRKeyboard.KeyButton[]
struct KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.XR.Interaction.Toolkit.FocusEnterEvent
struct FocusEnterEvent_tF5369B418FFFBE1C6FDE6EBDDD8B9E412A32CD90;
// UnityEngine.XR.Interaction.Toolkit.FocusExitEvent
struct FocusExitEvent_tFAE8003B7B5A47FB4D9C5BB14D7A3273AF8931AE;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// QCHT.Interactions.Hands.IHideable
struct IHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D;
// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider
struct IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E;
// UnityEngine.XR.Interaction.Toolkit.IXRAimAssist
struct IXRAimAssist_t807A9B16C0B39BAF821A2845862CB433C321C4B5;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup
struct IXRInteractionGroup_tAD9069A6C37036CE5C97D68CF2F97B1F25044D5D;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// QCHT.Samples.XRKeyboard.KeyButton
struct KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972;
// QCHT.Samples.XRKeyboard.KeyEvent
struct KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F;
// QCHT.Samples.XRKeyboard.KeyInteractionButton
struct KeyInteractionButton_t6B41C2503C6EA4247F9C5400EACD390261248E25;
// QCHT.Samples.XRKeyboard.KeySpecialButton
struct KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC;
// QCHT.Samples.XRKeyboard.KeyStringButton
struct KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78;
// QCHT.Samples.XRKeyboard.KeyStringCharButton
struct KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3;
// QCHT.Samples.XRKeyboard.KeyboardInputs
struct KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B;
// QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable
struct LookAtUserGrabInteractable_t47491001400A4829AF1B062FE7189541F5FA622E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard
struct RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.String
struct String_t;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
struct TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772;
// QCHT.Interactions.Core.XRHandTrackingManager
struct XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB;
// QCHT.Interactions.Core.XRHandTrackingSubsystem
struct XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// QCHT.Samples.XRKeyboard.XRPokeFollowTransform
struct XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// QCHT.Interactions.Distal.XRRayInteractorManager
struct XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral27E37DF4CDC352756A5EC40DE2D7686203E0BD5A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_mDE42E468458D252C4B33E3A532CB2A85A06EF73D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisIHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_mE491CC36F398D55DFE0F15272709A9948EC9922D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m87051F67A634934C7F86D6B03FC752D4FF137A61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_m6699E030E266604221A7D9E8F3FA463B8690A8A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyboardInputs_RegisterInput_m733798BEE86D7516074A28CA7E7CCE29A1FF55E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LookAtUserGrabInteractable_U3CStartU3Eb__3_0_m4320E8B567BE79C3EA4A9FA2CB4848D41EDCE7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LookAtUserGrabInteractable_U3CStartU3Eb__3_1_m38DF98C68A38C8B5B198BFD723910BFD4B4DA2D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisRayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA_m5CAE1243F4C421F0029B9F84A083F6C6279E07F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m9D114AFC210A32DB63C416E8283CDBD7420C16FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPokeFollowTransform_OnPokeDataUpdated_m1BD5E92C6A8409D993A3A602C919864B29F72D32_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBC260200FE072F533F3110D51FD03A5BBDDA31AE 
{
};

// System.Collections.Generic.List`1<QCHT.Samples.XRKeyboard.KeyButton>
struct List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// System.Collections.Generic.List`1/Enumerator<QCHT.Samples.XRKeyboard.KeyButton>
struct Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* ____current_3;
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

// UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton>
struct UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// QCHT.Samples.XRKeyboard.KeyEvent
struct KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F  : public UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E
{
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

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 
{
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<meetsRequirements>k__BackingField
	bool ___U3CmeetsRequirementsU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<pokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<axisAlignedPokeInteractionPoint>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	// System.Single UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<interactionStrength>k__BackingField
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::<target>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_pinvoke
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData
struct PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032_marshaled_com
{
	int32_t ___U3CmeetsRequirementsU3Ek__BackingField_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CpokeInteractionPointU3Ek__BackingField_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
	float ___U3CinteractionStrengthU3Ek__BackingField_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtargetU3Ek__BackingField_4;
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

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0  : public UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8
{
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6  : public UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>
struct Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<QCHT.Samples.XRKeyboard.KeyButton>
struct UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>
struct UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>
struct UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// QCHT.Samples.XRKeyboard.KeyButton
struct KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject QCHT.Samples.XRKeyboard.KeyButton::_selectState
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____selectState_4;
	// UnityEngine.AudioSource QCHT.Samples.XRKeyboard.KeyButton::_audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____audioSource_5;
	// QCHT.Samples.XRKeyboard.KeyEvent QCHT.Samples.XRKeyboard.KeyButton::inputEvent
	KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F* ___inputEvent_6;
};

// QCHT.Samples.XRKeyboard.KeyboardInputs
struct KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text QCHT.Samples.XRKeyboard.KeyboardInputs::_keyboardInputsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____keyboardInputsText_4;
	// System.Boolean QCHT.Samples.XRKeyboard.KeyboardInputs::_maj
	bool ____maj_5;
	// UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton> QCHT.Samples.XRKeyboard.KeyboardInputs::OnKeyButtonPressed
	UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* ___OnKeyButtonPressed_6;
	// System.Collections.Generic.List`1<QCHT.Samples.XRKeyboard.KeyButton> QCHT.Samples.XRKeyboard.KeyboardInputs::_keyButtons
	List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* ____keyButtons_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.Vector2 UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIScrollValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UIScrollValue_17;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_19;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_21;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_23;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_24;
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

// QCHT.Interactions.Core.XRHandTrackingManager
struct XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::leftHandPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftHandPrefab_8;
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::rightHandPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightHandPrefab_9;
	// QCHT.Interactions.Core.XRHandTrackingSubsystem QCHT.Interactions.Core.XRHandTrackingManager::_subsystem
	XRHandTrackingSubsystem_tE85A1251586FBC35BD29B6B293C78B2BAD0F3562* ____subsystem_10;
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::_leftHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____leftHand_11;
	// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::_rightHand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____rightHand_12;
};

// QCHT.Samples.XRKeyboard.XRPokeFollowTransform
struct XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform QCHT.Samples.XRKeyboard.XRPokeFollowTransform::_followTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____followTransform_4;
	// System.Single QCHT.Samples.XRKeyboard.XRPokeFollowTransform::_smoothSpeed
	float ____smoothSpeed_5;
	// System.Single QCHT.Samples.XRKeyboard.XRPokeFollowTransform::_maxDistance
	float ____maxDistance_6;
	// UnityEngine.Vector3 QCHT.Samples.XRKeyboard.XRPokeFollowTransform::_initPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initPos_7;
	// UnityEngine.Vector3 QCHT.Samples.XRKeyboard.XRPokeFollowTransform::_targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____targetPos_8;
	// UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider QCHT.Samples.XRKeyboard.XRPokeFollowTransform::_pokeStateDataProvider
	RuntimeObject* ____pokeStateDataProvider_9;
};

// QCHT.Interactions.Distal.XRRayInteractorManager
struct XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// QCHT.Interactions.Core.XrHandedness QCHT.Interactions.Distal.XRRayInteractorManager::<Handedness>k__BackingField
	int32_t ___U3CHandednessU3Ek__BackingField_6;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor QCHT.Interactions.Distal.XRRayInteractorManager::rayInteractor
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___rayInteractor_7;
	// System.Collections.Generic.List`1<UnityEngine.Object> QCHT.Interactions.Distal.XRRayInteractorManager::startFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___startFilters_8;
	// System.Collections.Generic.List`1<QCHT.Interactions.Distal.IXRRayInteractorFilter> QCHT.Interactions.Distal.XRRayInteractorManager::_filters
	List_1_tF12D2E6D2CEE49A4089C079FE47A615E70D610E7* ____filters_9;
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

// QCHT.Samples.XRKeyboard.KeyInteractionButton
struct KeyInteractionButton_t6B41C2503C6EA4247F9C5400EACD390261248E25  : public KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972
{
	// QCHT.Interactions.Distal.XrDistalInteractorType QCHT.Samples.XRKeyboard.KeyInteractionButton::XRDistalInteractorType
	int32_t ___XRDistalInteractorType_7;
};

// QCHT.Samples.XRKeyboard.KeySpecialButton
struct KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC  : public KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972
{
	// QCHT.Samples.XRKeyboard.KeySpecial QCHT.Samples.XRKeyboard.KeySpecialButton::keyKeySpecial
	int32_t ___keyKeySpecial_7;
	// UnityEngine.GameObject QCHT.Samples.XRKeyboard.KeySpecialButton::_objectToDeactivate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____objectToDeactivate_8;
	// UnityEngine.GameObject QCHT.Samples.XRKeyboard.KeySpecialButton::_objectToActivate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____objectToActivate_9;
};

// QCHT.Samples.XRKeyboard.KeyStringButton
struct KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78  : public KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972
{
	// System.String QCHT.Samples.XRKeyboard.KeyStringButton::_strInput
	String_t* ____strInput_7;
};

// QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard
struct RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA  : public XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E
{
	// UnityEngine.Transform QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::_leftHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____leftHand_11;
	// UnityEngine.Transform QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::_rightHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____rightHand_12;
	// System.Single QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::distanceToDesactivate
	float ___distanceToDesactivate_13;
	// UnityEngine.Transform QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::_keyboardTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____keyboardTransform_14;
	// System.Boolean QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::_shouldHideHands
	bool ____shouldHideHands_15;
	// System.Boolean QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::_shouldShowRightHandsAndRays
	bool ____shouldShowRightHandsAndRays_16;
	// System.Boolean QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::_shouldShowLeftHandsAndRays
	bool ____shouldShowLeftHandsAndRays_17;
};

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_79;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SecondaryAttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_SecondaryAttachTransform_80;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UseDynamicAttach
	bool ___m_UseDynamicAttach_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachPosition
	bool ___m_MatchAttachPosition_82;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachRotation
	bool ___m_MatchAttachRotation_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SnapToColliderVolume
	bool ___m_SnapToColliderVolume_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ReinitializeDynamicAttachEverySingleGrab
	bool ___m_ReinitializeDynamicAttachEverySingleGrab_85;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachEaseInTime
	float ___m_AttachEaseInTime_86;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MovementType
	int32_t ___m_MovementType_87;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityDamping
	float ___m_VelocityDamping_88;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityScale
	float ___m_VelocityScale_89;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityDamping
	float ___m_AngularVelocityDamping_90;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityScale
	float ___m_AngularVelocityScale_91;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackPosition
	bool ___m_TrackPosition_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPosition
	bool ___m_SmoothPosition_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPositionAmount
	float ___m_SmoothPositionAmount_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenPosition
	float ___m_TightenPosition_95;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackRotation
	bool ___m_TrackRotation_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotation
	bool ___m_SmoothRotation_97;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotationAmount
	float ___m_SmoothRotationAmount_98;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenRotation
	float ___m_TightenRotation_99;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowOnDetach
	bool ___m_ThrowOnDetach_100;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingDuration
	float ___m_ThrowSmoothingDuration_101;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_ThrowSmoothingCurve_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowVelocityScale
	float ___m_ThrowVelocityScale_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowAngularVelocityScale
	float ___m_ThrowAngularVelocityScale_104;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ForceGravityOnDetach
	bool ___m_ForceGravityOnDetach_105;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_RetainTransformParent
	bool ___m_RetainTransformParent_106;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachPointCompatibilityMode
	int32_t ___m_AttachPointCompatibilityMode_107;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingSingleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingSingleGrabTransformers_108;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingMultipleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingMultipleGrabTransformers_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AddDefaultGrabTransformers
	bool ___m_AddDefaultGrabTransformers_110;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SingleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_SingleGrabTransformers_111;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MultipleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_MultipleGrabTransformers_112;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabTransformersAddedWhenGrabbed
	List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75* ___m_GrabTransformersAddedWhenGrabbed_113;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabCountChanged
	bool ___m_GrabCountChanged_114;
	// System.ValueTuple`2<System.Int32,System.Int32> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabCountBeforeAndAfterChange
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_GrabCountBeforeAndAfterChange_115;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_IsProcessingGrabTransformers
	bool ___m_IsProcessingGrabTransformers_116;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_TargetPose_117;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TargetLocalScale_118;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentAttachEaseTime
	float ___m_CurrentAttachEaseTime_119;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentMovementType
	int32_t ___m_CurrentMovementType_120;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachInLateUpdate
	bool ___m_DetachInLateUpdate_121;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachVelocity_122;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachAngularVelocity_123;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurrentFrame
	int32_t ___m_ThrowSmoothingCurrentFrame_124;
	// System.Single[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFrameTimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_ThrowSmoothingFrameTimes_125;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingVelocityFrames_126;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingAngularVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingAngularVelocityFrames_127;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFirstUpdate
	bool ___m_ThrowSmoothingFirstUpdate_128;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastThrowReferencePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LastThrowReferencePose_129;
	// UnityEngine.XR.Interaction.Toolkit.IXRAimAssist UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowAssist
	RuntimeObject* ___m_ThrowAssist_130;
	// UnityEngine.Rigidbody UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_131;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_WasKinematic
	bool ___m_WasKinematic_132;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UsedGravity
	bool ___m_UsedGravity_133;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldDrag
	float ___m_OldDrag_134;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldAngularDrag
	float ___m_OldAngularDrag_135;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_IgnoringCharacterCollision
	bool ___m_IgnoringCharacterCollision_136;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StopIgnoringCollisionInLateUpdate
	bool ___m_StopIgnoringCollisionInLateUpdate_137;
	// UnityEngine.CharacterController UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SelectingCharacterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_SelectingCharacterController_138;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SelectingCharacterInteractors
	HashSet_1_t363C9122BFA49D682A5E9E8935229B0089922C5B* ___m_SelectingCharacterInteractors_139;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_RigidbodyColliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_RigidbodyColliders_140;
	// System.Collections.Generic.HashSet`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CollidersThatAllowedCharacterCollision
	HashSet_1_t109CCE87260348881F7ED50EEE3FFD003542DC8B* ___m_CollidersThatAllowedCharacterCollision_141;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OriginalSceneParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_OriginalSceneParent_142;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TeleportationMonitor
	TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6* ___m_TeleportationMonitor_143;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DynamicAttachTransforms
	Dictionary_2_t81F2911EE2E2DBAC0CE118A677A47BAC16F93B5C* ___m_DynamicAttachTransforms_144;
};

// QCHT.Samples.XRKeyboard.KeyStringCharButton
struct KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3  : public KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78
{
	// UnityEngine.UI.Text QCHT.Samples.XRKeyboard.KeyStringCharButton::_character
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____character_8;
};

// QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable
struct LookAtUserGrabInteractable_t47491001400A4829AF1B062FE7189541F5FA622E  : public XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772
{
	// UnityEngine.Transform QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::_userTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____userTransform_147;
	// System.Boolean QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::_shouldFaceUser
	bool ____shouldFaceUser_148;
	// System.Single QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::_xStartingAngle
	float ____xStartingAngle_149;
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

// System.Collections.Generic.List`1<QCHT.Samples.XRKeyboard.KeyButton>
struct List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<QCHT.Samples.XRKeyboard.KeyButton>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<QCHT.Samples.XRKeyboard.KeyButton>

// System.Collections.Generic.List`1/Enumerator<QCHT.Samples.XRKeyboard.KeyButton>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton>

// UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs

// System.Single

// System.Single

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

// QCHT.Samples.XRKeyboard.KeyEvent

// QCHT.Samples.XRKeyboard.KeyEvent

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData

// UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>

// UnityEngine.Events.UnityAction`1<QCHT.Samples.XRKeyboard.KeyButton>

// UnityEngine.Events.UnityAction`1<QCHT.Samples.XRKeyboard.KeyButton>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

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

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// QCHT.Samples.XRKeyboard.KeyButton

// QCHT.Samples.XRKeyboard.KeyButton

// QCHT.Samples.XRKeyboard.KeyboardInputs

// QCHT.Samples.XRKeyboard.KeyboardInputs

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseController

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_ProcessInteractionStrengthMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessInteractionStrengthMarker_56;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable

// QCHT.Interactions.Core.XRHandTrackingManager

// QCHT.Interactions.Core.XRHandTrackingManager

// QCHT.Samples.XRKeyboard.XRPokeFollowTransform

// QCHT.Samples.XRKeyboard.XRPokeFollowTransform

// QCHT.Interactions.Distal.XRRayInteractorManager
struct XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E_StaticFields
{
	// System.Collections.Generic.List`1<QCHT.Interactions.Distal.XRRayInteractorManager> QCHT.Interactions.Distal.XRRayInteractorManager::activeViewers
	List_1_t093A0DEA3BBFE439BC7A2B4D22F23DE17A8A1605* ___activeViewers_10;
};

// QCHT.Interactions.Distal.XRRayInteractorManager

// QCHT.Samples.XRKeyboard.KeyInteractionButton

// QCHT.Samples.XRKeyboard.KeyInteractionButton

// QCHT.Samples.XRKeyboard.KeySpecialButton

// QCHT.Samples.XRKeyboard.KeySpecialButton

// QCHT.Samples.XRKeyboard.KeyStringButton

// QCHT.Samples.XRKeyboard.KeyStringButton

// QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard

// QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_DynamicAttachTransformPool
	LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450* ___s_DynamicAttachTransformPool_145;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_ProcessGrabTransformersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessGrabTransformersMarker_146;
};

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable

// QCHT.Samples.XRKeyboard.KeyStringCharButton

// QCHT.Samples.XRKeyboard.KeyStringCharButton

// QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable

// QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable

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
// QCHT.Samples.XRKeyboard.KeyButton[]
struct KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* m_Items[1];

	inline KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___0_call, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54_gshared (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// T[] UnityEngine.Component::GetComponentsInChildren<QCHT.Samples.XRKeyboard.KeyButton>(System.Boolean)
inline KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6* Component_GetComponentsInChildren_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_mDE42E468458D252C4B33E3A532CB2A85A06EF73D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<QCHT.Samples.XRKeyboard.KeyButton>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* Enumerable_ToList_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_m6699E030E266604221A7D9E8F3FA463B8690A8A7 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<QCHT.Samples.XRKeyboard.KeyButton>::GetEnumerator()
inline Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491 List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2 (List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491 (*) (List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<QCHT.Samples.XRKeyboard.KeyButton>::Dispose()
inline void Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984 (Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<QCHT.Samples.XRKeyboard.KeyButton>::get_Current()
inline KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_inline (Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491* __this, const RuntimeMethod* method)
{
	return ((  KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* (*) (Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<QCHT.Samples.XRKeyboard.KeyButton>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m94B12F90EE25509476AB2F990965768A72DD0C3C (UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m9D114AFC210A32DB63C416E8283CDBD7420C16FA (UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* __this, UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E*, UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<QCHT.Samples.XRKeyboard.KeyButton>::MoveNext()
inline bool Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C (Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::ProcessText(QCHT.Samples.XRKeyboard.KeyButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs_ProcessText_m10339D37F6761294E470E2E943B93CA4ACE713D1 (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* ___0_keyButton, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton>::Invoke(T0)
inline void UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590 (UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* __this, KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E*, KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String QCHT.Samples.XRKeyboard.KeyStringButton::get_StrInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38_inline (KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// QCHT.Samples.XRKeyboard.KeySpecial QCHT.Samples.XRKeyboard.KeySpecialButton::get_KeySpecial()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeySpecialButton_get_KeySpecial_m3A1963976B896D7219749BB1A9A666C19177BFE6_inline (KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::SetMaj(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs_SetMaj_mA8EA661EB080296743205F4FFC5F18BEED233969 (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, bool ___0_maj, const RuntimeMethod* method) ;
// System.Void QCHT.Samples.XRKeyboard.KeySpecialButton::SwitchObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySpecialButton_SwitchObject_m6DA89BD41A33EBA8CE0A57E4C5C95279E3E4AE6B (KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Samples.XRKeyboard.KeyStringCharButton::SetMaj(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStringCharButton_SetMaj_mAC7626D1AB0F20EBF4A0F707E4C5444CB4C1F9B7 (KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* __this, bool ___0_maj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<QCHT.Samples.XRKeyboard.KeyButton>::.ctor()
inline void UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F (UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void QCHT.Samples.XRKeyboard.KeyButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyButton_OnPointerDown_mC619A8E5C0A3B15F6CEC75E6DB60A4B57767708A (KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void QCHT.Samples.XRKeyboard.KeyButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyButton__ctor_m05F6271D5C542AB381D94E2F57EFDC7D5B7A74A5 (KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void QCHT.Samples.XRKeyboard.KeyStringButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStringButton__ctor_m84F1FBE8CFD09A2861597924330A28E330F72050 (KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectEntered()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24 (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2 (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8* __this, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t8C99CC340A51BB1718EAC4102D4F90EE78F667F8*, UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::get_selectExited()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40 (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602 (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B* __this, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t6653C165067CA012C0771D17D5AF3506C58F446B*, UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___0_call, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard>()
inline RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* Object_FindObjectOfType_TisRayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA_m5CAE1243F4C421F0029B9F84A083F6C6279E07F4 (const RuntimeMethod* method)
{
	return ((  RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::set_KeyboardTransform(UnityEngine.Transform)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RayInteractorManagerKeyboard_set_KeyboardTransform_m66AC20B0F87B790E8373B2395B6831C705E4EF13_inline (RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, const RuntimeMethod* method) ;
// QCHT.Interactions.Core.XRHandTrackingManager QCHT.Interactions.Core.XRHandTrackingManager::GetOrCreate(UnityEngine.GameObject,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* XRHandTrackingManager_GetOrCreate_mF056FDC7FF954E53DD2EEA9222645B9F8C32E492 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_leftPrefab, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_rightPrefab, const RuntimeMethod* method) ;
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_LeftHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_LeftHand_m78B2F1A4FFA293A32B75DFBD7B4D06EC12A914DB_inline (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject QCHT.Interactions.Core.XRHandTrackingManager::get_RightHand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_RightHand_m8FC99E1275A977F61D7407FB5A3B3D10A6346D85_inline (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.XR.Interaction.Toolkit.XRBaseController>(T&)
inline bool Component_TryGetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m87051F67A634934C7F86D6B03FC752D4FF137A61 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::get_model()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRBaseController_get_model_m8E9DD91990CD87A6B4AF13DB6C3EA06EB5A3A5C0_inline (XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<QCHT.Interactions.Hands.IHideable>(T&)
inline bool Component_TryGetComponent_TisIHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_mE491CC36F398D55DFE0F15272709A9948EC9922D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, RuntimeObject**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Void QCHT.Interactions.Distal.XRRayInteractorManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRayInteractorManager__ctor_m6C6D3CF4FE4E1F906DF20E23604BE969DF57D07B (XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider>()
inline RuntimeObject* Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54 (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void QCHT.Samples.XRKeyboard.XRPokeFollowTransform::UpdateTransformPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowTransform_UpdateTransformPosition_mCECA23F2428811E92EB8F977F9F277303A137EA8 (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 QCHT.Samples.XRKeyboard.XRPokeFollowTransform::SmoothPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRPokeFollowTransform_SmoothPosition_mF615C3B053580AEF4CE71A601DB2918FCED11207 (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_initPos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetPos, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData::get_axisAlignedPokeInteractionPoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// UnityEngine.UI.Text QCHT.Samples.XRKeyboard.KeyboardInputs::get_KeyboardInputsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* KeyboardInputs_get_KeyboardInputsText_m3C759B0F7D5163EB582CEE19F8942B72435B0CDC (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, const RuntimeMethod* method) 
{
	{
		// get => _keyboardInputsText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____keyboardInputsText_4;
		return L_0;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::set_KeyboardInputsText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs_set_KeyboardInputsText_mBB245C775EF70B83683377353DC0295162774248 (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _keyboardInputsText = value;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = ___0_value;
		__this->____keyboardInputsText_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyboardInputsText_4), (void*)L_0);
		return;
	}
}
// System.Boolean QCHT.Samples.XRKeyboard.KeyboardInputs::get_IsMaj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyboardInputs_get_IsMaj_m408DCB1689DA26D7115ACCF58FF7D91F72867051 (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMaj => _maj;
		bool L_0 = __this->____maj_5;
		return L_0;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs_Start_mDCA46005DDADE8AFF831A022D279AC01131C712A (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_mDE42E468458D252C4B33E3A532CB2A85A06EF73D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_m6699E030E266604221A7D9E8F3FA463B8690A8A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyboardInputs_RegisterInput_m733798BEE86D7516074A28CA7E7CCE29A1FF55E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m9D114AFC210A32DB63C416E8283CDBD7420C16FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _keyButtons = GetComponentsInChildren<KeyButton>(true).ToList();
		KeyButtonU5BU5D_tED280E7E7B5698C81563911F5C002AFBF8E186C6* L_0;
		L_0 = Component_GetComponentsInChildren_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_mDE42E468458D252C4B33E3A532CB2A85A06EF73D(__this, (bool)1, Component_GetComponentsInChildren_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_mDE42E468458D252C4B33E3A532CB2A85A06EF73D_RuntimeMethod_var);
		List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* L_1;
		L_1 = Enumerable_ToList_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_m6699E030E266604221A7D9E8F3FA463B8690A8A7((RuntimeObject*)L_0, Enumerable_ToList_TisKeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972_m6699E030E266604221A7D9E8F3FA463B8690A8A7_RuntimeMethod_var);
		__this->____keyButtons_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyButtons_7), (void*)L_1);
		// foreach (KeyButton button in _keyButtons)
		List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* L_2 = __this->____keyButtons_7;
		NullCheck(L_2);
		Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491 L_3;
		L_3 = List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2(L_2, List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984((&V_0), Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_0020_1:
			{
				// foreach (KeyButton button in _keyButtons)
				KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* L_4;
				L_4 = Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_inline((&V_0), Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_RuntimeMethod_var);
				// button.inputEvent.AddListener(RegisterInput);
				NullCheck(L_4);
				KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F* L_5 = L_4->___inputEvent_6;
				UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9* L_6 = (UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9*)il2cpp_codegen_object_new(UnityAction_1_t7E92AB64377DF3757AC6B39490D6A5D0B7746DF9_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				UnityAction_1__ctor_m94B12F90EE25509476AB2F990965768A72DD0C3C(L_6, __this, (intptr_t)((void*)KeyboardInputs_RegisterInput_m733798BEE86D7516074A28CA7E7CCE29A1FF55E5_RuntimeMethod_var), NULL);
				NullCheck(L_5);
				UnityEvent_1_AddListener_m9D114AFC210A32DB63C416E8283CDBD7420C16FA(L_5, L_6, UnityEvent_1_AddListener_m9D114AFC210A32DB63C416E8283CDBD7420C16FA_RuntimeMethod_var);
			}

IL_003d_1:
			{
				// foreach (KeyButton button in _keyButtons)
				bool L_7;
				L_7 = Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C((&V_0), Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::RegisterInput(QCHT.Samples.XRKeyboard.KeyButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs_RegisterInput_m733798BEE86D7516074A28CA7E7CCE29A1FF55E5 (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* ___0_keyButton, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* G_B2_0 = NULL;
	UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* G_B1_0 = NULL;
	{
		// ProcessText(keyButton);
		KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* L_0 = ___0_keyButton;
		KeyboardInputs_ProcessText_m10339D37F6761294E470E2E943B93CA4ACE713D1(__this, L_0, NULL);
		// OnKeyButtonPressed?.Invoke(keyButton);
		UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* L_1 = __this->___OnKeyButtonPressed_6;
		UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* L_3 = ___0_keyButton;
		NullCheck(G_B2_0);
		UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590(G_B2_0, L_3, UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::ProcessText(QCHT.Samples.XRKeyboard.KeyButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs_ProcessText_m10339D37F6761294E470E2E943B93CA4ACE713D1 (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* ___0_keyButton, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* V_0 = NULL;
	KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* V_1 = NULL;
	KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_2 = NULL;
	{
		// if (_keyboardInputsText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____keyboardInputsText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var keyStringCharButton = keyButton as KeyStringCharButton;
		KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* L_2 = ___0_keyButton;
		V_0 = ((KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3*)IsInstClass((RuntimeObject*)L_2, KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3_il2cpp_TypeInfo_var));
		// if (keyStringCharButton != null && keyStringCharButton.StrInput.Length > 0)
		KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0064;
		}
	}
	{
		KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		// _keyboardInputsText.text += _maj ? keyStringCharButton.StrInput.ToUpper() : keyStringCharButton.StrInput.ToLower();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->____keyboardInputsText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_8;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		bool L_11 = __this->____maj_5;
		G_B5_0 = L_10;
		G_B5_1 = L_9;
		if (L_11)
		{
			G_B6_0 = L_10;
			G_B6_1 = L_9;
			goto IL_004e;
		}
	}
	{
		KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38_inline(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_13, NULL);
		G_B7_0 = L_14;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0059;
	}

IL_004e:
	{
		KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38_inline(L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_16, NULL);
		G_B7_0 = L_17;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0059:
	{
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B7_1, G_B7_0, NULL);
		NullCheck(G_B7_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B7_2, L_18);
		// return;
		return;
	}

IL_0064:
	{
		// var keyStringButton = keyButton as KeyStringButton;
		KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* L_19 = ___0_keyButton;
		V_1 = ((KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78*)IsInstClass((RuntimeObject*)L_19, KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78_il2cpp_TypeInfo_var));
		// if (keyStringButton != null && keyStringButton.StrInput.Length > 0)
		KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_009f;
		}
	}
	{
		KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* L_22 = V_1;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38_inline(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_23, NULL);
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		// _keyboardInputsText.text += keyStringButton.StrInput;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->____keyboardInputsText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = L_25;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_26);
		KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38_inline(L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_27, L_29, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_30);
		// return;
		return;
	}

IL_009f:
	{
		// var keySpecialButton = keyButton as KeySpecialButton;
		KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* L_31 = ___0_keyButton;
		V_2 = ((KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC*)IsInstClass((RuntimeObject*)L_31, KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC_il2cpp_TypeInfo_var));
		// if (keySpecialButton != null)
		KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* L_32 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_32, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_33)
		{
			goto IL_01cc;
		}
	}
	{
		// switch (keySpecialButton.KeySpecial)
		KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = KeySpecialButton_get_KeySpecial_m3A1963976B896D7219749BB1A9A666C19177BFE6_inline(L_34, NULL);
		V_3 = L_35;
		int32_t L_36 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_36, 1)))
		{
			case 0:
			{
				goto IL_00d6;
			}
			case 1:
			{
				goto IL_01a5;
			}
			case 2:
			{
				goto IL_0189;
			}
			case 3:
			{
				goto IL_01b5;
			}
			case 4:
			{
				goto IL_01c6;
			}
		}
	}
	{
		return;
	}

IL_00d6:
	{
		// if (_keyboardInputsText.text.Length > 3 && _keyboardInputsText.text.Substring(_keyboardInputsText.text.Length - 2, 2) == "\n")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = __this->____keyboardInputsText_4;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_37);
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)3)))
		{
			goto IL_0147;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->____keyboardInputsText_4;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_40);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = __this->____keyboardInputsText_4;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_42);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_43, NULL);
		NullCheck(L_41);
		String_t* L_45;
		L_45 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_41, ((int32_t)il2cpp_codegen_subtract(L_44, 2)), 2, NULL);
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		if (!L_46)
		{
			goto IL_0147;
		}
	}
	{
		// _keyboardInputsText.text = _keyboardInputsText.text.Substring(0, _keyboardInputsText.text.Length - 2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_47 = __this->____keyboardInputsText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_48 = __this->____keyboardInputsText_4;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_48);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = __this->____keyboardInputsText_4;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_50);
		NullCheck(L_51);
		int32_t L_52;
		L_52 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_51, NULL);
		NullCheck(L_49);
		String_t* L_53;
		L_53 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_49, 0, ((int32_t)il2cpp_codegen_subtract(L_52, 2)), NULL);
		NullCheck(L_47);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_53);
		return;
	}

IL_0147:
	{
		// else if (_keyboardInputsText.text.Length > 0)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = __this->____keyboardInputsText_4;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_54);
		NullCheck(L_55);
		int32_t L_56;
		L_56 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_55, NULL);
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01cc;
		}
	}
	{
		// _keyboardInputsText.text = _keyboardInputsText.text.Substring(0, _keyboardInputsText.text.Length - 1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = __this->____keyboardInputsText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_58 = __this->____keyboardInputsText_4;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_58);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = __this->____keyboardInputsText_4;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_60);
		NullCheck(L_61);
		int32_t L_62;
		L_62 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_61, NULL);
		NullCheck(L_59);
		String_t* L_63;
		L_63 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_59, 0, ((int32_t)il2cpp_codegen_subtract(L_62, 1)), NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_63);
		// break;
		return;
	}

IL_0189:
	{
		// _keyboardInputsText.text += "\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_64 = __this->____keyboardInputsText_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = L_64;
		NullCheck(L_65);
		String_t* L_66;
		L_66 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_65);
		String_t* L_67;
		L_67 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_66, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, L_67);
		// break;
		return;
	}

IL_01a5:
	{
		// SetMaj(!_maj);
		bool L_68 = __this->____maj_5;
		KeyboardInputs_SetMaj_mA8EA661EB080296743205F4FFC5F18BEED233969(__this, (bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0), NULL);
		// break;
		return;
	}

IL_01b5:
	{
		// _keyboardInputsText.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_69 = __this->____keyboardInputsText_4;
		String_t* L_70 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_69);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_69, L_70);
		// break;
		return;
	}

IL_01c6:
	{
		// keySpecialButton.SwitchObject();
		KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* L_71 = V_2;
		NullCheck(L_71);
		KeySpecialButton_SwitchObject_m6DA89BD41A33EBA8CE0A57E4C5C95279E3E4AE6B(L_71, NULL);
	}

IL_01cc:
	{
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::SetMaj(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs_SetMaj_mA8EA661EB080296743205F4FFC5F18BEED233969 (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, bool ___0_maj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* V_1 = NULL;
	{
		// foreach (var key in _keyButtons)
		List_1_tD3728402F0D5A46C8A1BBE3FB9273EF1C3A12ABA* L_0 = __this->____keyButtons_7;
		NullCheck(L_0);
		Enumerator_t5C182EC6AC723696FFAED919F0CA2A8857225491 L_1;
		L_1 = List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2(L_0, List_1_GetEnumerator_mBB642DF147402870002CA59AFC3D5DFD5DE8ABD2_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984((&V_0), Enumerator_Dispose_m75A3E4444DF1AD27DFF65876C99F5BD8D281A984_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_000e_1:
			{
				// foreach (var key in _keyButtons)
				KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* L_2;
				L_2 = Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_inline((&V_0), Enumerator_get_Current_m12D4F70E75A459E1E82A94FA343F6EBC2DA4D8F8_RuntimeMethod_var);
				// var keyChar = key as KeyStringCharButton;
				V_1 = ((KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3*)IsInstClass((RuntimeObject*)L_2, KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3_il2cpp_TypeInfo_var));
				// if (keyChar != null)
				KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_4;
				L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				// keyChar.SetMaj(maj);
				KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* L_5 = V_1;
				bool L_6 = ___0_maj;
				NullCheck(L_5);
				KeyStringCharButton_SetMaj_mAC7626D1AB0F20EBF4A0F707E4C5444CB4C1F9B7(L_5, L_6, NULL);
			}

IL_002b_1:
			{
				// foreach (var key in _keyButtons)
				bool L_7;
				L_7 = Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C((&V_0), Enumerator_MoveNext_mF7EF75190EAA3F6FAC147EA80545BA0E8CFA4D7C_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// _maj = maj;
		bool L_8 = ___0_maj;
		__this->____maj_5 = L_8;
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyboardInputs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardInputs__ctor_m59AFA00CB02D59A762F60D229D1B5A154E983AFB (KeyboardInputs_tD489B175B159BC2607C0371BD2964BE3EEA64F4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityEvent<KeyButton> OnKeyButtonPressed = new UnityEvent<KeyButton>();
		UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E* L_0 = (UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E*)il2cpp_codegen_object_new(UnityEvent_1_tB7C754CA8FDFF43136CB0BD92CE3D590197B307E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F(L_0, UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F_RuntimeMethod_var);
		__this->___OnKeyButtonPressed_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OnKeyButtonPressed_6), (void*)L_0);
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
// System.Void QCHT.Samples.XRKeyboard.KeyEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyEvent__ctor_m7F1D9CE204E7BC0F29F8A629E9F7D40BBC8D53E4 (KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F(__this, UnityEvent_1__ctor_m6C4187D9359F3FC31A8B1C27F577F38745CF550F_RuntimeMethod_var);
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
// System.Void QCHT.Samples.XRKeyboard.KeyButton::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyButton_OnPointerExit_mBDDC12F8FFA0ADF23019D73DCBC80DB9E3C720D0 (KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_selectState) _selectState.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____selectState_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (_selectState) _selectState.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____selectState_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyButton_OnPointerDown_mC619A8E5C0A3B15F6CEC75E6DB60A4B57767708A (KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F* G_B6_0 = NULL;
	KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F* G_B5_0 = NULL;
	{
		// if (_selectState) _selectState.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____selectState_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (_selectState) _selectState.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____selectState_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_0019:
	{
		// if (_audioSource) _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->____audioSource_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// if (_audioSource) _audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->____audioSource_5;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
	}

IL_0031:
	{
		// inputEvent?.Invoke(this);
		KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F* L_6 = __this->___inputEvent_6;
		KeyEvent_tAE9298F07FAF5840B273257A1B121E6682E9446F* L_7 = L_6;
		G_B5_0 = L_7;
		if (L_7)
		{
			G_B6_0 = L_7;
			goto IL_003c;
		}
	}
	{
		return;
	}

IL_003c:
	{
		NullCheck(G_B6_0);
		UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590(G_B6_0, __this, UnityEvent_1_Invoke_mDFA1665CEE8AE4BE20550FA30D84DB044689C590_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyButton_OnPointerUp_mB0D3357F9AB9F337E8A765A90CA4087C9F2E6427 (KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_selectState) _selectState.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____selectState_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (_selectState) _selectState.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____selectState_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyButton__ctor_m05F6271D5C542AB381D94E2F57EFDC7D5B7A74A5 (KeyButton_tC7330562A700E5E1D0E44ACDC5A1E6AC23B9E972* __this, const RuntimeMethod* method) 
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
// QCHT.Interactions.Distal.XrDistalInteractorType QCHT.Samples.XRKeyboard.KeyInteractionButton::get_Interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeyInteractionButton_get_Interaction_mE2F2DD99B3E5F61B0C6EAFD8D828958D2194A0CE (KeyInteractionButton_t6B41C2503C6EA4247F9C5400EACD390261248E25* __this, const RuntimeMethod* method) 
{
	{
		// public XrDistalInteractorType Interaction => XRDistalInteractorType;
		int32_t L_0 = __this->___XRDistalInteractorType_7;
		return L_0;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyInteractionButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyInteractionButton_OnPointerDown_m31A22F72066DC04F3BDC6C4961891007144B6EB6 (KeyInteractionButton_t6B41C2503C6EA4247F9C5400EACD390261248E25* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		KeyButton_OnPointerDown_mC619A8E5C0A3B15F6CEC75E6DB60A4B57767708A(__this, L_0, NULL);
		// OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(9 /* System.Void QCHT.Samples.XRKeyboard.KeyButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData) */, __this, L_1);
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyInteractionButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyInteractionButton__ctor_m7E8845AD67ECDAD24FCA14FD3BD40E6AB8B5015C (KeyInteractionButton_t6B41C2503C6EA4247F9C5400EACD390261248E25* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private XrDistalInteractorType XRDistalInteractorType = XrDistalInteractorType.Gaze;
		__this->___XRDistalInteractorType_7 = 1;
		KeyButton__ctor_m05F6271D5C542AB381D94E2F57EFDC7D5B7A74A5(__this, NULL);
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
// System.Void QCHT.Samples.XRKeyboard.KeySpecialButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySpecialButton_Start_m1B91E750FF42FEB7D7029918BCF0C1D12D2E972C (KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* __this, const RuntimeMethod* method) 
{
	{
		// if (keyKeySpecial == KeySpecial.None)
		int32_t L_0 = __this->___keyKeySpecial_7;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeySpecialButton::SwitchObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySpecialButton_SwitchObject_m6DA89BD41A33EBA8CE0A57E4C5C95279E3E4AE6B (KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27E37DF4CDC352756A5EC40DE2D7686203E0BD5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Switch object");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral27E37DF4CDC352756A5EC40DE2D7686203E0BD5A, NULL);
		// if (!_objectToActivate || !_objectToDeactivate)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____objectToActivate_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____objectToDeactivate_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// return;
		return;
	}

IL_0025:
	{
		// _objectToActivate.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____objectToActivate_9;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// _objectToDeactivate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____objectToDeactivate_8;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// QCHT.Samples.XRKeyboard.KeySpecial QCHT.Samples.XRKeyboard.KeySpecialButton::get_KeySpecial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeySpecialButton_get_KeySpecial_m3A1963976B896D7219749BB1A9A666C19177BFE6 (KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* __this, const RuntimeMethod* method) 
{
	{
		// public KeySpecial KeySpecial => keyKeySpecial;
		int32_t L_0 = __this->___keyKeySpecial_7;
		return L_0;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeySpecialButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeySpecialButton__ctor_m40060D8757CA1D23A6B24BD0FE86E9437136A30F (KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* __this, const RuntimeMethod* method) 
{
	{
		KeyButton__ctor_m05F6271D5C542AB381D94E2F57EFDC7D5B7A74A5(__this, NULL);
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
// System.String QCHT.Samples.XRKeyboard.KeyStringButton::get_StrInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38 (KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* __this, const RuntimeMethod* method) 
{
	{
		// public string StrInput => _strInput;
		String_t* L_0 = __this->____strInput_7;
		return L_0;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyStringButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStringButton__ctor_m84F1FBE8CFD09A2861597924330A28E330F72050 (KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _strInput = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____strInput_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____strInput_7), (void*)L_0);
		KeyButton__ctor_m05F6271D5C542AB381D94E2F57EFDC7D5B7A74A5(__this, NULL);
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
// System.Void QCHT.Samples.XRKeyboard.KeyStringCharButton::SetMaj(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStringCharButton_SetMaj_mAC7626D1AB0F20EBF4A0F707E4C5444CB4C1F9B7 (KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* __this, bool ___0_maj, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// public void SetMaj(bool maj) => _character.text = maj ? _character.text.ToUpper() : _character.text.ToLower();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____character_8;
		bool L_1 = ___0_maj;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001b;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____character_8;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_3, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_002b;
	}

IL_001b:
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->____character_8;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_6, NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_002b:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.KeyStringCharButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyStringCharButton__ctor_mD421B1769FD8D2C1832EA833FB772E805148FC70 (KeyStringCharButton_t0E9278CC653B6DEC7B463DC8A76FB8BCB8A0FCA3* __this, const RuntimeMethod* method) 
{
	{
		KeyStringButton__ctor_m84F1FBE8CFD09A2861597924330A28E330F72050(__this, NULL);
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
// System.Void QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtUserGrabInteractable_Start_mE13B9FA082104677A5DA44205CBC6B1CD4101936 (LookAtUserGrabInteractable_t47491001400A4829AF1B062FE7189541F5FA622E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookAtUserGrabInteractable_U3CStartU3Eb__3_0_m4320E8B567BE79C3EA4A9FA2CB4848D41EDCE7DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookAtUserGrabInteractable_U3CStartU3Eb__3_1_m38DF98C68A38C8B5B198BFD723910BFD4B4DA2D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisRayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA_m5CAE1243F4C421F0029B9F84A083F6C6279E07F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* V_0 = NULL;
	{
		// _userTransform = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->____userTransform_147 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userTransform_147), (void*)L_1);
		// selectEntered.AddListener(arg => _shouldFaceUser = true);
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_2;
		L_2 = XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline(__this, NULL);
		UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B* L_3 = (UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B*)il2cpp_codegen_object_new(UnityAction_1_t6D7C8D94300AACA6B0CFB2228AA5572CFBF0531B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_mEE39E1A87376378311B4931978E8E07E589E9A24(L_3, __this, (intptr_t)((void*)LookAtUserGrabInteractable_U3CStartU3Eb__3_0_m4320E8B567BE79C3EA4A9FA2CB4848D41EDCE7DE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2(L_2, L_3, UnityEvent_1_AddListener_mAE71681FB0832FD7DBA813E5ADDBA574EA32EED2_RuntimeMethod_var);
		// selectExited.AddListener(arg => _shouldFaceUser = false);
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_4;
		L_4 = XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline(__this, NULL);
		UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E* L_5 = (UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E*)il2cpp_codegen_object_new(UnityAction_1_tD4A8B5CFDB30ABDE869D801066212B20B4D61D6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mD74501F5FCCC37863163D5E7155B6C8B9B366C40(L_5, __this, (intptr_t)((void*)LookAtUserGrabInteractable_U3CStartU3Eb__3_1_m38DF98C68A38C8B5B198BFD723910BFD4B4DA2D3_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602(L_4, L_5, UnityEvent_1_AddListener_mB662756036996A6B6F83F6492CE9E26797AF9602_RuntimeMethod_var);
		// _xStartingAngle = transform.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		float L_8 = L_7.___x_2;
		__this->____xStartingAngle_149 = L_8;
		// var pointerViewerKeyboard = FindObjectOfType<RayInteractorManagerKeyboard>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* L_9;
		L_9 = Object_FindObjectOfType_TisRayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA_m5CAE1243F4C421F0029B9F84A083F6C6279E07F4(Object_FindObjectOfType_TisRayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA_m5CAE1243F4C421F0029B9F84A083F6C6279E07F4_RuntimeMethod_var);
		V_0 = L_9;
		// if (pointerViewerKeyboard != null) pointerViewerKeyboard.KeyboardTransform = transform;
		RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* L_10 = V_0;
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// if (pointerViewerKeyboard != null) pointerViewerKeyboard.KeyboardTransform = transform;
		RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		RayInteractorManagerKeyboard_set_KeyboardTransform_m66AC20B0F87B790E8373B2395B6831C705E4EF13_inline(L_12, L_13, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtUserGrabInteractable_Update_mD45C2B181FC1CE43BFF21A8676AF0714BD861212 (LookAtUserGrabInteractable_t47491001400A4829AF1B062FE7189541F5FA622E* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!_shouldFaceUser)
		bool L_0 = __this->____shouldFaceUser_148;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Quaternion quaternion = Quaternion.LookRotation(transform.position - _userTransform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->____userTransform_147;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		V_0 = L_6;
		// transform.rotation = quaternion;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		// transform.eulerAngles = new Vector3(_xStartingAngle, transform.eulerAngles.y, transform.eulerAngles.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_10 = __this->____xStartingAngle_149;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_11, NULL);
		float L_13 = L_12.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_14, NULL);
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_10, L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_9, L_17, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtUserGrabInteractable__ctor_mC4F1A8DE567CBA4883AE5BBD955DABA31AD9046D (LookAtUserGrabInteractable_t47491001400A4829AF1B062FE7189541F5FA622E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var);
		XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E(__this, NULL);
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::<Start>b__3_0(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtUserGrabInteractable_U3CStartU3Eb__3_0_m4320E8B567BE79C3EA4A9FA2CB4848D41EDCE7DE (LookAtUserGrabInteractable_t47491001400A4829AF1B062FE7189541F5FA622E* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___0_arg, const RuntimeMethod* method) 
{
	{
		// selectEntered.AddListener(arg => _shouldFaceUser = true);
		__this->____shouldFaceUser_148 = (bool)1;
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.LookAtUserGrabInteractable::<Start>b__3_1(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtUserGrabInteractable_U3CStartU3Eb__3_1_m38DF98C68A38C8B5B198BFD723910BFD4B4DA2D3 (LookAtUserGrabInteractable_t47491001400A4829AF1B062FE7189541F5FA622E* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___0_arg, const RuntimeMethod* method) 
{
	{
		// selectExited.AddListener(arg => _shouldFaceUser = false);
		__this->____shouldFaceUser_148 = (bool)0;
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
// UnityEngine.Transform QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::get_KeyboardTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RayInteractorManagerKeyboard_get_KeyboardTransform_mE2F8DACCD7940C8732CE2F24C3453D98EC864ACE (RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* __this, const RuntimeMethod* method) 
{
	{
		// get => _keyboardTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____keyboardTransform_14;
		return L_0;
	}
}
// System.Void QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::set_KeyboardTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayInteractorManagerKeyboard_set_KeyboardTransform_m66AC20B0F87B790E8373B2395B6831C705E4EF13 (RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _keyboardTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->____keyboardTransform_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyboardTransform_14), (void*)L_0);
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayInteractorManagerKeyboard_Start_m9591C1E39FE9255B59A54E999B2B9AA222E900DD (RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* __this, const RuntimeMethod* method) 
{
	{
		// _leftHand = XRHandTrackingManager.GetOrCreate().LeftHand.transform;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_0;
		L_0 = XRHandTrackingManager_GetOrCreate_mF056FDC7FF954E53DD2EEA9222645B9F8C32E492((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = XRHandTrackingManager_get_LeftHand_m78B2F1A4FFA293A32B75DFBD7B4D06EC12A914DB_inline(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->____leftHand_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____leftHand_11), (void*)L_2);
		// _rightHand = XRHandTrackingManager.GetOrCreate().RightHand.transform;
		XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* L_3;
		L_3 = XRHandTrackingManager_GetOrCreate_mF056FDC7FF954E53DD2EEA9222645B9F8C32E492((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = XRHandTrackingManager_get_RightHand_m8FC99E1275A977F61D7407FB5A3B3D10A6346D85_inline(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		__this->____rightHand_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rightHand_12), (void*)L_5);
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayInteractorManagerKeyboard_Update_m9EA7EF17C617FC6B9D42DC8603A457F7B838D786 (RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisIHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_mE491CC36F398D55DFE0F15272709A9948EC9922D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m87051F67A634934C7F86D6B03FC752D4FF137A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var currentShowRight = _shouldShowRightHandsAndRays;
		bool L_0 = __this->____shouldShowRightHandsAndRays_16;
		V_0 = L_0;
		// var currentShowLeft = _shouldShowLeftHandsAndRays;
		bool L_1 = __this->____shouldShowLeftHandsAndRays_17;
		V_1 = L_1;
		// if (_keyboardTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____keyboardTransform_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// var keyboardPosition = _keyboardTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->____keyboardTransform_14;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_2 = L_5;
		// _shouldShowRightHandsAndRays =
		//     !(Vector3.Distance(keyboardPosition, _rightHand.position) <= distanceToDesactivate);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->____rightHand_12;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9;
		L_9 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_6, L_8, NULL);
		float L_10 = __this->___distanceToDesactivate_13;
		__this->____shouldShowRightHandsAndRays_16 = (bool)((!(((float)L_9) <= ((float)L_10)))? 1 : 0);
		// _shouldShowLeftHandsAndRays =
		//     !(Vector3.Distance(keyboardPosition, _leftHand.position) <= distanceToDesactivate);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->____leftHand_11;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14;
		L_14 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_11, L_13, NULL);
		float L_15 = __this->___distanceToDesactivate_13;
		__this->____shouldShowLeftHandsAndRays_17 = (bool)((!(((float)L_14) <= ((float)L_15)))? 1 : 0);
		// if (_shouldHideHands)
		bool L_16 = __this->____shouldHideHands_15;
		if (!L_16)
		{
			goto IL_010d;
		}
	}
	{
		// if (currentShowLeft != _shouldShowLeftHandsAndRays)
		bool L_17 = V_1;
		bool L_18 = __this->____shouldShowLeftHandsAndRays_17;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_00bf;
		}
	}
	{
		// if (_leftHand.TryGetComponent(out XRBaseController xrController) && xrController.model != null &&
		//     xrController.model.TryGetComponent(out IHideable hideable))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->____leftHand_11;
		NullCheck(L_19);
		bool L_20;
		L_20 = Component_TryGetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m87051F67A634934C7F86D6B03FC752D4FF137A61(L_19, (&V_3), Component_TryGetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m87051F67A634934C7F86D6B03FC752D4FF137A61_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_00bf;
		}
	}
	{
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_21 = V_3;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = XRBaseController_get_model_m8E9DD91990CD87A6B4AF13DB6C3EA06EB5A3A5C0_inline(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00bf;
		}
	}
	{
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_24 = V_3;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = XRBaseController_get_model_m8E9DD91990CD87A6B4AF13DB6C3EA06EB5A3A5C0_inline(L_24, NULL);
		NullCheck(L_25);
		bool L_26;
		L_26 = Component_TryGetComponent_TisIHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_mE491CC36F398D55DFE0F15272709A9948EC9922D(L_25, (&V_4), Component_TryGetComponent_TisIHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_mE491CC36F398D55DFE0F15272709A9948EC9922D_RuntimeMethod_var);
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		// if (_shouldShowLeftHandsAndRays)
		bool L_27 = __this->____shouldShowLeftHandsAndRays_17;
		if (!L_27)
		{
			goto IL_00b8;
		}
	}
	{
		// hideable.Show();
		RuntimeObject* L_28 = V_4;
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void QCHT.Interactions.Hands.IHideable::Show() */, IHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_il2cpp_TypeInfo_var, L_28);
		goto IL_00bf;
	}

IL_00b8:
	{
		// hideable.Hide();
		RuntimeObject* L_29 = V_4;
		NullCheck(L_29);
		InterfaceActionInvoker0::Invoke(1 /* System.Void QCHT.Interactions.Hands.IHideable::Hide() */, IHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_il2cpp_TypeInfo_var, L_29);
	}

IL_00bf:
	{
		// if (currentShowRight != _shouldShowRightHandsAndRays)
		bool L_30 = V_0;
		bool L_31 = __this->____shouldShowRightHandsAndRays_16;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_010d;
		}
	}
	{
		// if (_rightHand.TryGetComponent(out XRBaseController xrController) && xrController.model != null &&
		//     xrController.model.TryGetComponent(out IHideable hideable))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->____rightHand_12;
		NullCheck(L_32);
		bool L_33;
		L_33 = Component_TryGetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m87051F67A634934C7F86D6B03FC752D4FF137A61(L_32, (&V_5), Component_TryGetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m87051F67A634934C7F86D6B03FC752D4FF137A61_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_010d;
		}
	}
	{
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_34 = V_5;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = XRBaseController_get_model_m8E9DD91990CD87A6B4AF13DB6C3EA06EB5A3A5C0_inline(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_010d;
		}
	}
	{
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_37 = V_5;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = XRBaseController_get_model_m8E9DD91990CD87A6B4AF13DB6C3EA06EB5A3A5C0_inline(L_37, NULL);
		NullCheck(L_38);
		bool L_39;
		L_39 = Component_TryGetComponent_TisIHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_mE491CC36F398D55DFE0F15272709A9948EC9922D(L_38, (&V_6), Component_TryGetComponent_TisIHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_mE491CC36F398D55DFE0F15272709A9948EC9922D_RuntimeMethod_var);
		if (!L_39)
		{
			goto IL_010d;
		}
	}
	{
		// if (_shouldShowRightHandsAndRays)
		bool L_40 = __this->____shouldShowRightHandsAndRays_16;
		if (!L_40)
		{
			goto IL_0106;
		}
	}
	{
		// hideable.Show();
		RuntimeObject* L_41 = V_6;
		NullCheck(L_41);
		InterfaceActionInvoker0::Invoke(0 /* System.Void QCHT.Interactions.Hands.IHideable::Show() */, IHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_il2cpp_TypeInfo_var, L_41);
		return;
	}

IL_0106:
	{
		// hideable.Hide();
		RuntimeObject* L_42 = V_6;
		NullCheck(L_42);
		InterfaceActionInvoker0::Invoke(1 /* System.Void QCHT.Interactions.Hands.IHideable::Hide() */, IHideable_tD85CDB5530F664B6BBE8EABF990292680AAB051D_il2cpp_TypeInfo_var, L_42);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.RayInteractorManagerKeyboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayInteractorManagerKeyboard__ctor_mEEE35A7D8ADFFB3E82445A230847ED394D9CF750 (RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float distanceToDesactivate = 0.5f;
		__this->___distanceToDesactivate_13 = (0.5f);
		// private bool _shouldShowRightHandsAndRays = true;
		__this->____shouldShowRightHandsAndRays_16 = (bool)1;
		// private bool _shouldShowLeftHandsAndRays = true;
		__this->____shouldShowLeftHandsAndRays_17 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(XRRayInteractorManager_tA87C2522A1AEF50B36EFA76FDC56E75EA7AACA5E_il2cpp_TypeInfo_var);
		XRRayInteractorManager__ctor_m6C6D3CF4FE4E1F906DF20E23604BE969DF57D07B(__this, NULL);
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
// System.Void QCHT.Samples.XRKeyboard.XRPokeFollowTransform::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowTransform_Awake_mDDA7D16B3C2636BC003525804F3915B70CB416DD (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void Awake() => _pokeStateDataProvider = GetComponentInParent<IPokeStateDataProvider>();
		RuntimeObject* L_0;
		L_0 = Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E(__this, Component_GetComponentInParent_TisIPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_mD04C3940E4B8C24B3DF01EFC7D17BFA69FF2804E_RuntimeMethod_var);
		__this->____pokeStateDataProvider_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pokeStateDataProvider_9), (void*)L_0);
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.XRPokeFollowTransform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowTransform_Start_mB813ED1533438225840F6AE1FC1D32BB98EAB342 (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRPokeFollowTransform_OnPokeDataUpdated_m1BD5E92C6A8409D993A3A602C919864B29F72D32_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_followTransform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____followTransform_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// _initPos = _followTransform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->____followTransform_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		__this->____initPos_7 = L_3;
		// _pokeStateDataProvider.pokeStateData.SubscribeAndUpdate(OnPokeDataUpdated);
		RuntimeObject* L_4 = __this->____pokeStateDataProvider_9;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData> UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.IPokeStateDataProvider::get_pokeStateData() */, IPokeStateDataProvider_t44A37A07F4158455AD30DD3BE0AE5B603E61AD1E_il2cpp_TypeInfo_var, L_4);
		Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* L_6 = (Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8*)il2cpp_codegen_object_new(Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m51E8C8F6D6AAA447F906F82CBA1114C86E69FF54(L_6, __this, (intptr_t)((void*)XRPokeFollowTransform_OnPokeDataUpdated_m1BD5E92C6A8409D993A3A602C919864B29F72D32_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, Action_1_t1FB720A83B3555E719F665FB0110E7C51487F3F8* >::Invoke(1 /* Unity.XR.CoreUtils.Bindings.IEventBinding Unity.XR.CoreUtils.Bindings.Variables.IReadOnlyBindableVariable`1<UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData>::SubscribeAndUpdate(System.Action`1<T>) */, IReadOnlyBindableVariable_1_tD608177C44612AEF9CD25AEDCA15F1734DD0E073_il2cpp_TypeInfo_var, L_5, L_6);
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.XRPokeFollowTransform::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowTransform_LateUpdate_m0F4CBB16B6918CD186341B24342C1FCBFE22697F (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, const RuntimeMethod* method) 
{
	{
		// UpdateTransformPosition();
		XRPokeFollowTransform_UpdateTransformPosition_mCECA23F2428811E92EB8F977F9F277303A137EA8(__this, NULL);
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.XRPokeFollowTransform::UpdateTransformPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowTransform_UpdateTransformPosition_mCECA23F2428811E92EB8F977F9F277303A137EA8 (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, const RuntimeMethod* method) 
{
	{
		// _followTransform.localPosition =
		//     SmoothPosition(_followTransform.localPosition, _targetPos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->____followTransform_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->____followTransform_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->____targetPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = XRPokeFollowTransform_SmoothPosition_mF615C3B053580AEF4CE71A601DB2918FCED11207(__this, L_2, L_3, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_4, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 QCHT.Samples.XRKeyboard.XRPokeFollowTransform::SmoothPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 XRPokeFollowTransform_SmoothPosition_mF615C3B053580AEF4CE71A601DB2918FCED11207 (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_initPos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetPos, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var interpolateTime = Time.deltaTime * _smoothSpeed;
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_1 = __this->____smoothSpeed_5;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// return Vector3.Lerp(initPos, targetPos, interpolateTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_initPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_targetPos;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void QCHT.Samples.XRKeyboard.XRPokeFollowTransform::OnPokeDataUpdated(UnityEngine.XR.Interaction.Toolkit.Filtering.PokeStateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowTransform_OnPokeDataUpdated_m1BD5E92C6A8409D993A3A602C919864B29F72D32 (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032 ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		// var pokeTransform = data.target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline((&___0_data), NULL);
		V_0 = L_0;
		// var hasToFollowPoke = pokeTransform != null && pokeTransform.IsChildOf(transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = Transform_IsChildOf_mFE071BE1E775E825401FE0A9B9BE49E39D256CEA(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		// if (hasToFollowPoke)
		if (!G_B3_0)
		{
			goto IL_005b;
		}
	}
	{
		// var position = pokeTransform.InverseTransformPoint(data.axisAlignedPokeInteractionPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline((&___0_data), NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_6, L_7, NULL);
		V_1 = L_8;
		// var maxDistanceReached = position.sqrMagnitude > Mathf.Sqrt(_maxDistance);
		float L_9;
		L_9 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		float L_10 = __this->____maxDistance_6;
		float L_11;
		L_11 = sqrtf(L_10);
		// if (maxDistanceReached)
		if (!((((float)L_9) > ((float)L_11))? 1 : 0))
		{
			goto IL_0053;
		}
	}
	{
		// position = Vector3.ClampMagnitude(position, _maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = __this->____maxDistance_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_12, L_13, NULL);
		V_1 = L_14;
	}

IL_0053:
	{
		// _targetPos = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		__this->____targetPos_8 = L_15;
		return;
	}

IL_005b:
	{
		// _targetPos = _initPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->____initPos_7;
		__this->____targetPos_8 = L_16;
		// }
		return;
	}
}
// System.Void QCHT.Samples.XRKeyboard.XRPokeFollowTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPokeFollowTransform__ctor_m18D140F723B2F316D7CD11280E4DAEFA5F1F9E44 (XRPokeFollowTransform_tFA540EBEEE2178F360B55AF502C898D65CB2000E* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _smoothSpeed = 9f;
		__this->____smoothSpeed_5 = (9.0f);
		// [SerializeField] private float _maxDistance = 20f;
		__this->____maxDistance_6 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KeyStringButton_get_StrInput_m853DE8195AC550E34DB92CB91CE7E02127001F38_inline (KeyStringButton_t43510FEE5418FBF031A8B4B48078026D3023FF78* __this, const RuntimeMethod* method) 
{
	{
		// public string StrInput => _strInput;
		String_t* L_0 = __this->____strInput_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeySpecialButton_get_KeySpecial_m3A1963976B896D7219749BB1A9A666C19177BFE6_inline (KeySpecialButton_tE7A5BF20A5629FE918B9C325B9216330A54C14AC* __this, const RuntimeMethod* method) 
{
	{
		// public KeySpecial KeySpecial => keyKeySpecial;
		int32_t L_0 = __this->___keyKeySpecial_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* XRBaseInteractable_get_selectEntered_m1E5439CAE1D95FDB7D60F14D919E739435F2C341_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectEntered;
		SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* L_0 = __this->___m_SelectEntered_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* XRBaseInteractable_get_selectExited_m35974CB2AD2FB38B4B093DC75D2917A1D321AFA6_inline (XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectExited;
		SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* L_0 = __this->___m_SelectExited_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RayInteractorManagerKeyboard_set_KeyboardTransform_m66AC20B0F87B790E8373B2395B6831C705E4EF13_inline (RayInteractorManagerKeyboard_t9F3C52968729011B7A4042E0ED2111621656E1AA* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => _keyboardTransform = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_value;
		__this->____keyboardTransform_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keyboardTransform_14), (void*)L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_LeftHand_m78B2F1A4FFA293A32B75DFBD7B4D06EC12A914DB_inline (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject LeftHand => _leftHand;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____leftHand_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XRHandTrackingManager_get_RightHand_m8FC99E1275A977F61D7407FB5A3B3D10A6346D85_inline (XRHandTrackingManager_t67C975D4AA74E1CA03B3B5089775D8E757AF21DB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject RightHand => _rightHand;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____rightHand_12;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRBaseController_get_model_m8E9DD91990CD87A6B4AF13DB6C3EA06EB5A3A5C0_inline (XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Model;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_Model_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* PokeStateData_get_target_m464672F352B73F0010B9829CA5C692505783091C_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Transform target { get; set; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CtargetU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PokeStateData_get_axisAlignedPokeInteractionPoint_mC3B4E6D1232B8A2E2A98374B3AA9976E29E67D43_inline (PokeStateData_t87D34716C1C477FC04D9344710D09399FE6F5032* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 axisAlignedPokeInteractionPoint { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CaxisAlignedPokeInteractionPointU3Ek__BackingField_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
