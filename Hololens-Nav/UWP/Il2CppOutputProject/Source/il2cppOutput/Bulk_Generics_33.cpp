#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IReadOnlyList`1<System.Collections.IList>
struct IReadOnlyList_1_t2659354122;
// System.Collections.Generic.IReadOnlyList`1<System.DateTimeOffset>
struct IReadOnlyList_1_t3793710413;
// System.Collections.Generic.IReadOnlyList`1<System.Double>
struct IReadOnlyList_1_t1159088269;
// System.Collections.Generic.IReadOnlyList`1<System.Exception>
struct IReadOnlyList_1_t2001160155;
// System.Collections.Generic.IReadOnlyList`1<System.Guid>
struct IReadOnlyList_1_t3757955793;
// System.Collections.Generic.IReadOnlyList`1<System.IDisposable>
struct IReadOnlyList_1_t4204688389;
// System.Collections.Generic.IReadOnlyList`1<System.Int16>
struct IReadOnlyList_1_t3117243293;
// System.Collections.Generic.IReadOnlyList`1<System.Int32>
struct IReadOnlyList_1_t3515368659;
// System.Collections.Generic.IReadOnlyList`1<System.Int64>
struct IReadOnlyList_1_t6022914;
// System.Collections.Generic.IReadOnlyList`1<System.Object>
struct IReadOnlyList_1_t3644529070;
// System.Collections.Generic.IReadOnlyList`1<System.Single>
struct IReadOnlyList_1_t1961689680;
// System.Collections.Generic.IReadOnlyList`1<System.String>
struct IReadOnlyList_1_t2411873595;
// System.Collections.Generic.IReadOnlyList`1<System.TimeSpan>
struct IReadOnlyList_1_t1445582155;
// System.Collections.Generic.IReadOnlyList`1<System.Type>
struct IReadOnlyList_1_t3048367666;
// System.Collections.Generic.IReadOnlyList`1<System.UInt16>
struct IReadOnlyList_1_t2742147864;
// System.Collections.Generic.IReadOnlyList`1<System.UInt32>
struct IReadOnlyList_1_t3124484884;
// System.Collections.Generic.IReadOnlyList`1<System.UInt64>
struct IReadOnlyList_1_t403495702;
// System.Collections.Generic.IReadOnlyList`1<System.Uri>
struct IReadOnlyList_1_t664659230;
// System.Collections.Generic.IReadOnlyList`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>
struct IReadOnlyList_1_t2763839487;
// System.Collections.Generic.IReadOnlyList`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>
struct IReadOnlyList_1_t1477883989;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct IReadOnlyList_1_t3507722876;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Point>
struct IReadOnlyList_1_t434409149;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Rect>
struct IReadOnlyList_1_t3259536393;
// System.Collections.Generic.IReadOnlyList`1<Windows.Foundation.Size>
struct IReadOnlyList_1_t1115340544;
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>
struct IReadOnlyList_1_t3541860837;
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>
struct IReadOnlyList_1_t1923252709;
// System.Collections.Generic.IReadOnlyList`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct IReadOnlyList_1_t1780110969;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.IList[]
struct IListU5BU5D_t2181495985;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Exception
struct Exception_t;
// System.Exception[]
struct ExceptionU5BU5D_t2535001212;
// System.Guid[]
struct GuidU5BU5D_t545550574;
// System.IDisposable
struct IDisposable_t3640265483;
// System.IDisposable[]
struct IDisposableU5BU5D_t3584190570;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriInfo
struct UriInfo_t1092684687;
// System.UriParser
struct UriParser_t3890150400;
// System.Uri[]
struct UriU5BU5D_t673446605;
// System.Void
struct Void_t1185182177;
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct ISimpleHapticsControllerFeedback_t2199416581;
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback[]
struct ISimpleHapticsControllerFeedbackU5BU5D_t2466915144;
// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct SimpleHapticsControllerFeedback_t913461083;
// Windows.Devices.Haptics.SimpleHapticsControllerFeedback[]
struct SimpleHapticsControllerFeedbackU5BU5D_t1558149338;
// Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t39852124;
// Windows.Foundation.IUriEscapeStatics
struct IUriEscapeStatics_t1418340874;
// Windows.Foundation.IUriRuntimeClassFactory
struct IUriRuntimeClassFactory_t1786313621;
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct IWwwFormUrlDecoderEntry_t2943299970;
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658;
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558;
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct ISpatialInteractionSourceState_t1358829803;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct ISpatialInteractionSourceState2_t2977437931;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2[]
struct ISpatialInteractionSourceState2U5BU5D_t3674212106;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState[]
struct ISpatialInteractionSourceStateU5BU5D_t513935114;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t1215688063;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState[]
struct SpatialInteractionSourceStateU5BU5D_t1865583014;
// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleHapticsControllerFeedback_t913461083_il2cpp_TypeInfo_var;
extern RuntimeClass* SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t952691556_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral311452336;
extern String_t* _stringLiteral4286223022;
extern const uint32_t IReference_1_get_Value_m2049683846_MetadataUsageId;
extern const uint32_t IReference_1_get_Value_m3229386239_MetadataUsageId;
extern const uint32_t IVector_1_Append_m2334270570_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m1739705579_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m1818179852_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m1946664100_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m219694725_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m2453859029_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m2474823143_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3175655389_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3184039671_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3254412450_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m3687365220_MetadataUsageId;
extern const uint32_t IVector_1_GetAt_m686949258_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m1098326929_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m1744931425_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m2021061927_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3259563266_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m332545167_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3415000903_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3458941667_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3541038849_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m3924300725_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m4135776724_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m569725914_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1062446282_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m118185472_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1219033264_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1457083017_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1588427753_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1625647690_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1670428144_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1774052338_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1943501597_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m1969741156_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2176928854_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2396989032_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2404813821_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2518531823_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2578442391_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2756521257_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m2857412624_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3025995885_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3086397386_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3260557022_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3272889438_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m3695632509_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m4294882662_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m435781098_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m748183030_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m776116354_MetadataUsageId;
extern const uint32_t IVector_1_GetView_m891121390_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m3867025885_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m697980859_MetadataUsageId;
extern const uint32_t IVector_1_ReplaceAll_m3525453833_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m2446451012_MetadataUsageId;
struct DateTime_t1679451545 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t ;
struct IBindableVectorView_t4191940899;
struct IBindableVector_t1801110279;
struct IClosable_t326290202;
struct ISimpleHapticsControllerFeedback_t2199416581;
struct ISpatialInteractionSourceState2_t2977437931;
struct ISpatialInteractionSourceState_t1358829803;
struct ISpatialInteractionSource_t2185314266;
struct IUriRuntimeClass_t921050115;;
struct IVectorView_1_t1186315951;
struct IVectorView_1_t1433796478;
struct IVectorView_1_t1516590220;
struct IVectorView_1_t1538281843;
struct IVectorView_1_t1822810022;
struct IVectorView_1_t1891685649;
struct IVectorView_1_t1898927240;
struct IVectorView_1_t2033978749;
struct IVectorView_1_t220024511;
struct IVectorView_1_t2282165232;
struct IVectorView_1_t2289811015;
struct IVectorView_1_t2316303193;
struct IVectorView_1_t2418971426;
struct IVectorView_1_t252326345;
struct IVectorView_1_t2532398149;
struct IVectorView_1_t2568152769;
struct IVectorView_1_t2979130745;
struct IVectorView_1_t3075432566;
struct IVectorView_1_t3472905354;
struct IVectorView_1_t3503818801;
struct IVectorView_1_t3734068882;
struct IVectorView_1_t4184750196;
struct IVectorView_1_t4228497921;
struct IVectorView_1_t554553325;
struct IVectorView_1_t697695065;
struct IVectorView_1_t736132036;
struct IVectorView_1_t775602511;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct IWwwFormUrlDecoderRuntimeClass_t497020701;
struct Il2CppWindowsRuntimeTypeName;
struct Point_t4164953539 ;
struct Rect_t2695113487 ;
struct Size_t550917638 ;
struct TimeSpan_t881159249 ;
struct TypeName_t4208425108;;
struct TypeName_t4208425108_marshaled_windows_runtime;
struct TypeName_t4208425108_marshaled_windows_runtime;;

struct IListU5BU5D_t2181495985;
struct DateTimeOffsetU5BU5D_t3473357058;
struct DelegateU5BU5D_t1703627840;
struct DoubleU5BU5D_t3413330114;
struct ExceptionU5BU5D_t2535001212;
struct GuidU5BU5D_t545550574;
struct IDisposableU5BU5D_t3584190570;
struct Int16U5BU5D_t3686840178;
struct Int32U5BU5D_t385246372;
struct Int64U5BU5D_t2559172825;
struct ObjectU5BU5D_t2843939325;
struct SingleU5BU5D_t1444911251;
struct StringU5BU5D_t1281789340;
struct TimeSpanU5BU5D_t4291357516;
struct TypeU5BU5D_t3940880105;
struct UInt16U5BU5D_t3326319531;
struct UInt32U5BU5D_t2770800703;
struct UInt64U5BU5D_t1659327989;
struct UriU5BU5D_t673446605;
struct ISimpleHapticsControllerFeedbackU5BU5D_t2466915144;
struct SimpleHapticsControllerFeedbackU5BU5D_t1558149338;
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
struct PointU5BU5D_t724808658;
struct RectU5BU5D_t5657558;
struct SizeU5BU5D_t1671914275;
struct ISpatialInteractionSourceState2U5BU5D_t3674212106;
struct ISpatialInteractionSourceStateU5BU5D_t513935114;
struct SpatialInteractionSourceStateU5BU5D_t1865583014;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct NOVTABLE ISimpleHapticsControllerFeedback_t2199416581 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_get_Waveform_m1427054036(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_U24__Stripped0_get_Duration_m1134348836() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.IList>
struct NOVTABLE IVectorView_1_t1433796478 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m380625345(uint32_t ___index0, IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3533088173(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m180434441(IBindableVector_t1801110279* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2636815833(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableVector_t1801110279** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Double>
struct NOVTABLE IVectorView_1_t4228497921 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3029520189(uint32_t ___index0, double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1840672366(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m519924844(double ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4072621343(uint32_t ___startIndex0, uint32_t ___items1ArraySize, double* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Exception>
struct NOVTABLE IVectorView_1_t775602511 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m116971458(uint32_t ___index0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m917737768(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2525069292(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m979855732(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.IDisposable>
struct NOVTABLE IVectorView_1_t2979130745 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3461880810(uint32_t ___index0, IClosable_t326290202** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m671734930(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m456269461(IClosable_t326290202* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1458693733(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t326290202** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Int16>
struct NOVTABLE IVectorView_1_t1891685649 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1319642345(uint32_t ___index0, int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2071989762(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1081404675(int16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3136641509(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Int32>
struct NOVTABLE IVectorView_1_t2289811015 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1038499426(uint32_t ___index0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3269133634(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m711808760(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m632553004(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Int64>
struct NOVTABLE IVectorView_1_t3075432566 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4097062415(uint32_t ___index0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3689183858(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m928127612(int64_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2435124798(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int64_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t2418971426 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m726655415(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1102039859(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2349108669(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4226896717(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Single>
struct NOVTABLE IVectorView_1_t736132036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3845931799(uint32_t ___index0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2530367390(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m481527169(float ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m996189245(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.String>
struct NOVTABLE IVectorView_1_t1186315951 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3375407458(uint32_t ___index0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2689776779(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2724138940(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m912540698(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.UInt16>
struct NOVTABLE IVectorView_1_t1516590220 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3314156493(uint32_t ___index0, uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2270537288(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m450613661(uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m619054749(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.UInt32>
struct NOVTABLE IVectorView_1_t1898927240 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1103191833(uint32_t ___index0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3012050323(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2476062681(uint32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2297801015(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint32_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.UInt64>
struct NOVTABLE IVectorView_1_t3472905354 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4005243902(uint32_t ___index0, uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3900133190(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3903182137(uint64_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3669431734(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint64_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Uri>
struct NOVTABLE IVectorView_1_t3734068882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m454402293(uint32_t ___index0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3232372556(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m56161609(IUriRuntimeClass_t921050115* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3086367392(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IUriRuntimeClass_t921050115** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>
struct NOVTABLE IVectorView_1_t1538281843 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3846975120(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2545045611(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2360559998(ISimpleHapticsControllerFeedback_t2199416581* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1297880195(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>
struct NOVTABLE IVectorView_1_t252326345 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m306269307(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m164847096(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m390895991(ISimpleHapticsControllerFeedback_t2199416581* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1398936297(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>
struct NOVTABLE IVectorView_1_t2316303193 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m481647535(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3235029412(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3786545505(ISpatialInteractionSourceState2_t2977437931* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3125443688(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState2_t2977437931** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>
struct NOVTABLE IVectorView_1_t697695065 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m849474102(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1912501272(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1154184863(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4030857929(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct NOVTABLE IVectorView_1_t554553325 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3403983141(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2305435658(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1144283072(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m557233082(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Collections.IList>
struct NOVTABLE IVector_1_t2835552937 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1739705579(uint32_t ___index0, IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2443289628(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m4294882662(IVectorView_1_t1433796478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m109650767(IBindableVector_t1801110279* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2038640497(uint32_t ___index0, IBindableVector_t1801110279* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3348104418(uint32_t ___index0, IBindableVector_t1801110279* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3548229972(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m157288751(IBindableVector_t1801110279* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2693923453() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m3341163113() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m1744931425(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IBindableVector_t1801110279** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3404326288(uint32_t ___items0ArraySize, IBindableVector_t1801110279** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Double>
struct NOVTABLE IVector_1_t1335287084 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2258907825(uint32_t ___index0, double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1655656993(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2756521257(IVectorView_1_t4228497921** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2419515901(double ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2239482525(uint32_t ___index0, double ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m4179671597(uint32_t ___index0, double ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3750794654(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m1220903153(double ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2834979580() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m432459071() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m1219290460(uint32_t ___startIndex0, uint32_t ___items1ArraySize, double* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m36060731(uint32_t ___items0ArraySize, double* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Exception>
struct NOVTABLE IVector_1_t2177358970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1490261528(uint32_t ___index0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1396078520(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3260557022(IVectorView_1_t775602511** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1343155571(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3790683234(uint32_t ___index0, int32_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3454371523(uint32_t ___index0, int32_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1723937581(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m916517619(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m92554222() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m3596568657() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3415137161(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m607959396(uint32_t ___items0ArraySize, int32_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.IDisposable>
struct NOVTABLE IVector_1_t85919908 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1818179852(uint32_t ___index0, IClosable_t326290202** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3823752638(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1774052338(IVectorView_1_t2979130745** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1585381087(IClosable_t326290202* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3515660460(uint32_t ___index0, IClosable_t326290202* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2376466212(uint32_t ___index0, IClosable_t326290202* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1611448121(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m1351769897(IClosable_t326290202* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2882598834() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2337331050() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3415000903(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t326290202** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m925457437(uint32_t ___items0ArraySize, IClosable_t326290202** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Int16>
struct NOVTABLE IVector_1_t3293442108 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2480307800(uint32_t ___index0, int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2555907765(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3272889438(IVectorView_1_t1891685649** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m4004437884(int16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2546160938(uint32_t ___index0, int16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1503796612(uint32_t ___index0, int16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3237793706(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m73662841(int16_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2323914946() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1518645361() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m2254068249(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m4039134861(uint32_t ___items0ArraySize, int16_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Int32>
struct NOVTABLE IVector_1_t3691567474 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m669642145(uint32_t ___index0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1083909874(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1457083017(IVectorView_1_t2289811015** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1513096330(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2697343022(uint32_t ___index0, int32_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2016133864(uint32_t ___index0, int32_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2081155343(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m71244649(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2906723444() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2316468687() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3133207996(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m4247928211(uint32_t ___items0ArraySize, int32_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Int64>
struct NOVTABLE IVector_1_t182221729 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m425655216(uint32_t ___index0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3151845843(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2857412624(IVectorView_1_t3075432566** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m211653580(int64_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3641861081(uint32_t ___index0, int64_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3699328408(uint32_t ___index0, int64_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m730199872(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m1860785285(int64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m801618119() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1532284886() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3643023987(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int64_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3104744120(uint32_t ___items0ArraySize, int64_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Object>
struct NOVTABLE IVector_1_t3820727885 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m219694725(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2561126536(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3086397386(IVectorView_1_t2418971426** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1930043913(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1678827239(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1249203443(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1710167275(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m1926269351(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m3025735428() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m305000098() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3541038849(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2515130844(uint32_t ___items0ArraySize, Il2CppIInspectable** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Single>
struct NOVTABLE IVector_1_t2137888495 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3700246983(uint32_t ___index0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3531442778(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1670428144(IVectorView_1_t736132036** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m739803125(float ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1156666243(uint32_t ___index0, float ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1898551949(uint32_t ___index0, float ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3164249930(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2356107643(float ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2431982566() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m3622925119() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m2648716604(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1968832847(uint32_t ___items0ArraySize, float* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.String>
struct NOVTABLE IVector_1_t2588072410 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2881185809(uint32_t ___index0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3596466296(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1219033264(IVectorView_1_t1186315951** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2107560054(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m166369194(uint32_t ___index0, Il2CppHString ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2973823425(uint32_t ___index0, Il2CppHString ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m269128213(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3989127587(Il2CppHString ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m3708964671() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m867824() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3511123964(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m4096830123(uint32_t ___items0ArraySize, Il2CppHString* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.UInt16>
struct NOVTABLE IVector_1_t2918346679 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m238587295(uint32_t ___index0, uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3469677531(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3025995885(IVectorView_1_t1516590220** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1343053975(uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m246985172(uint32_t ___index0, uint16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2991702087(uint32_t ___index0, uint16_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2673603791(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m1576189264(uint16_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1857915307() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m3093710788() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m91550909(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2701549418(uint32_t ___items0ArraySize, uint16_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.UInt32>
struct NOVTABLE IVector_1_t3300683699 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1377932999(uint32_t ___index0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1923345822(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m776116354(IVectorView_1_t1898927240** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3489169491(uint32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3079373580(uint32_t ___index0, uint32_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2718637520(uint32_t ___index0, uint32_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m328020143(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2065973735(uint32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1175668767() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m3720926093() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m2743709791(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint32_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3864847556(uint32_t ___items0ArraySize, uint32_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.UInt64>
struct NOVTABLE IVector_1_t579694517 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m951635711(uint32_t ___index0, uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1121146914(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m435781098(IVectorView_1_t3472905354** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2037213150(uint64_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2428609496(uint32_t ___index0, uint64_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3377046151(uint32_t ___index0, uint64_t ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3822942214(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3066519795(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m688723122() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m3650286301() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m1446676414(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint64_t* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m544562035(uint32_t ___items0ArraySize, uint64_t* ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Uri>
struct NOVTABLE IVector_1_t840858045 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3184039671(uint32_t ___index0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1541693482(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m748183030(IVectorView_1_t3734068882** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3867025885(IUriRuntimeClass_t921050115* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2446451012(uint32_t ___index0, IUriRuntimeClass_t921050115* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m697980859(uint32_t ___index0, IUriRuntimeClass_t921050115* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m4032724530(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2334270570(IUriRuntimeClass_t921050115* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2604786809() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m902403216() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3924300725(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IUriRuntimeClass_t921050115** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3525453833(uint32_t ___items0ArraySize, IUriRuntimeClass_t921050115** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>
struct NOVTABLE IVector_1_t2940038302 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2474823143(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2373564315(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2396989032(IVectorView_1_t1538281843** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m543208854(ISimpleHapticsControllerFeedback_t2199416581* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m814819286(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2143850214(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1296683806(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2022764008(ISimpleHapticsControllerFeedback_t2199416581* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m878530500() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1675326544() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3259563266(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m757258633(uint32_t ___items0ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>
struct NOVTABLE IVector_1_t1654082804 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2453859029(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1654407398(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1625647690(IVectorView_1_t252326345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2760763487(ISimpleHapticsControllerFeedback_t2199416581* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1760220849(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1229330134(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3723240283(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2989623206(ISimpleHapticsControllerFeedback_t2199416581* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m105895202() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m314610285() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m332545167(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3471145194(uint32_t ___items0ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVector_1_t3683921691 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3687365220(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m853395603(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2518531823(IVectorView_1_t2282165232** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m125330836(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m314985913(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1485467707(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2725070673(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4022682317(IWwwFormUrlDecoderEntry_t2943299970* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m535504839() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2360775652() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m569725914(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2534884464(uint32_t ___items0ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>
struct NOVTABLE IVector_1_t3718059652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3175655389(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3172301122(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2176928854(IVectorView_1_t2316303193** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m876780403(ISpatialInteractionSourceState2_t2977437931* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3594153116(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1444518929(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1302937041(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2941185074(ISpatialInteractionSourceState2_t2977437931* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2946446583() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1635201740() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m2021061927(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState2_t2977437931** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2042354847(uint32_t ___items0ArraySize, ISpatialInteractionSourceState2_t2977437931** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>
struct NOVTABLE IVector_1_t2099451524 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1946664100(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3798462280(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m891121390(IVectorView_1_t697695065** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2504506261(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3979818183(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m996791195(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3540886805(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4159068860(ISpatialInteractionSourceState_t1358829803* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1022091397() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2343666422() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m1098326929(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m3582663649(uint32_t ___items0ArraySize, ISpatialInteractionSourceState_t1358829803** ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct NOVTABLE IVector_1_t1956309784 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m686949258(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m535300163(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1588427753(IVectorView_1_t554553325** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1021089064(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3738080061(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3469030146(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1514236569(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m65402885(ISpatialInteractionSourceState_t1358829803* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2373934537() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2371066248() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4135776724(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2190095755(uint32_t ___items0ArraySize, ISpatialInteractionSourceState_t1358829803** ___items0) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct NOVTABLE IAsyncOperation_1_t1701293884 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_U24__Stripped0_put_Completed_m2296991727() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_U24__Stripped1_get_Completed_m3282157210() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_U24__Stripped2_GetResults_m3059503325() = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct NOVTABLE IAsyncOperation_1_t1918115372 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_U24__Stripped0_put_Completed_m728317539() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_U24__Stripped1_get_Completed_m2912873452() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_U24__Stripped2_GetResults_m3878905756() = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t326290202 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m649191502() = 0;
};
// Windows.Foundation.IReference`1<System.Boolean>
struct NOVTABLE IReference_1_t3645423686 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m774017165(bool* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Byte>
struct NOVTABLE IReference_1_t387464801 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3247461990(uint8_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Char>
struct NOVTABLE IReference_1_t2887628895 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m704688121(Il2CppChar* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Double>
struct NOVTABLE IReference_1_t4142801084 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3861827098(double* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t689905674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3319376935(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int16>
struct NOVTABLE IReference_1_t1805988812 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3359388353(int16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int32>
struct NOVTABLE IReference_1_t2204114178 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1946804912(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int64>
struct NOVTABLE IReference_1_t2989735729 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m197260093(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Object>
struct NOVTABLE IReference_1_t2333274589 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3229386239(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Single>
struct NOVTABLE IReference_1_t650435199 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1034221680(float* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.String>
struct NOVTABLE IReference_1_t1100619114 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4216510932(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt16>
struct NOVTABLE IReference_1_t1430893383 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1209658772(uint16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt32>
struct NOVTABLE IReference_1_t1813230403 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1308423508(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt64>
struct NOVTABLE IReference_1_t3387208517 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2294903021(uint64_t* comReturnValue) = 0;
};
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriEscapeStatics
struct NOVTABLE IUriEscapeStatics_t1418340874 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_UnescapeComponent_m4034034788(Il2CppHString ___toUnescape0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_EscapeComponent_m2989309814(Il2CppHString ___toEscape0, Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClass
struct NOVTABLE IUriRuntimeClass_t921050115 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_AbsoluteUri_m1802109736(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_DisplayUri_m486834635(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Domain_m2557921454(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Extension_m3106685299(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Fragment_m2886153123(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Host_m971230776(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Password_m4039608124(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Path_m1403698734(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Query_m49598513(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_QueryParsed_m1061304731(IWwwFormUrlDecoderRuntimeClass_t497020701** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_RawUri_m1303737506(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_SchemeName_m1162666486(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_UserName_m1956155983(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Port_m834193881(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Suspicious_m1231824283(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_Equals_m641048832(IUriRuntimeClass_t921050115* ___pUri0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_CombineUri_m511350015(Il2CppHString ___relativeUri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassFactory
struct NOVTABLE IUriRuntimeClassFactory_t1786313621 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateUri_m1347622952(Il2CppHString ___uri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateWithRelativeUri_m922460588(Il2CppHString ___baseUri0, Il2CppHString ___relativeUri1, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
struct NOVTABLE IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_AbsoluteCanonicalUri_m576710761(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_DisplayIri_m2106498432(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct NOVTABLE ISpatialInteractionSourceState_t1358829803 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_get_Source_m2883277112(ISpatialInteractionSource_t2185314266** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped0_get_Properties_m1189053370() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped1_get_IsPressed_m546887925() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped2_get_Timestamp_m1483989895() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped3_TryGetPointerPose_m837462904() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct NOVTABLE ISpatialInteractionSourceState2_t2977437931 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped0_get_IsSelectPressed_m1462024929() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped1_get_IsMenuPressed_m2884506468() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped2_get_IsGrasped_m2033866613() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped3_get_SelectPressedValue_m3876541456() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped4_get_ControllerProperties_m1166340460() = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_t1801110279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m2354796153(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m151438974(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m1491544680(IBindableVectorView_t4191940899** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m627110519(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m1920883433(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m450046008(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m3479961725(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m2201043447(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m2914381745() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m717217363() = 0;
};
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#define SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct  SimpleHapticsControllerFeedback_t913461083  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
	ISimpleHapticsControllerFeedback_t2199416581* ____isimpleHapticsControllerFeedback_t2199416581;

public:
	inline ISimpleHapticsControllerFeedback_t2199416581* get_____isimpleHapticsControllerFeedback_t2199416581()
	{
		ISimpleHapticsControllerFeedback_t2199416581* returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsControllerFeedback_t2199416581>((&____isimpleHapticsControllerFeedback_t2199416581), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifndef DATETIME_T1679451545_H
#define DATETIME_T1679451545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t1679451545 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t1679451545, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1679451545_H
#ifndef FOUNDATIONCONTRACT_T3651383009_H
#define FOUNDATIONCONTRACT_T3651383009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.FoundationContract
struct  FoundationContract_t3651383009 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOUNDATIONCONTRACT_T3651383009_H
#ifndef HRESULT_T3073183193_H
#define HRESULT_T3073183193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.HResult
struct  HResult_t3073183193 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_t3073183193, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HRESULT_T3073183193_H
#ifndef POINT_T4164953540_H
#define POINT_T4164953540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953540 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953540_H
#ifndef POINT_T4164953539_H
#define POINT_T4164953539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953539 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953539_H
#ifndef RECT_T2695113488_H
#define RECT_T2695113488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113488 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113488_H
#ifndef RECT_T2695113487_H
#define RECT_T2695113487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113487 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113487_H
#ifndef SIZE_T550917638_H
#define SIZE_T550917638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917638 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_t550917638, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_t550917638, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917638_H
#ifndef SIZE_T550917639_H
#define SIZE_T550917639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917639 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917639_H
#ifndef TIMESPAN_T1755640982_H
#define TIMESPAN_T1755640982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TimeSpan
struct  TimeSpan_t1755640982 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1755640982, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1755640982_H
#ifndef UNIVERSALAPICONTRACT_T3367004861_H
#define UNIVERSALAPICONTRACT_T3367004861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t3367004861 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T3367004861_H
#ifndef URI_T952691556_H
#define URI_T952691556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Uri
struct  Uri_t952691556  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IUriRuntimeClass
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IUriRuntimeClass_t921050115* get_____iuriRuntimeClass_t921050115()
	{
		IUriRuntimeClass_t921050115* returnValue = ____iuriRuntimeClass_t921050115;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClass_t921050115::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClass_t921050115>((&____iuriRuntimeClass_t921050115), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClass_t921050115;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788()
	{
		IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788>((&____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct Uri_t952691556_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassFactory
	IUriRuntimeClassFactory_t1786313621* ____iuriRuntimeClassFactory_t1786313621;
	// Cached pointer to Windows.Foundation.IUriEscapeStatics
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Uri"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassFactory_t1786313621* get_____iuriRuntimeClassFactory_t1786313621()
	{
		IUriRuntimeClassFactory_t1786313621* returnValue = ____iuriRuntimeClassFactory_t1786313621;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriRuntimeClassFactory_t1786313621::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassFactory_t1786313621>((&____iuriRuntimeClassFactory_t1786313621), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassFactory_t1786313621;
			}
		}
		return returnValue;
	}

	inline IUriEscapeStatics_t1418340874* get_____iuriEscapeStatics_t1418340874()
	{
		IUriEscapeStatics_t1418340874* returnValue = ____iuriEscapeStatics_t1418340874;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriEscapeStatics_t1418340874::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriEscapeStatics_t1418340874>((&____iuriEscapeStatics_t1418340874), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriEscapeStatics_t1418340874;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T952691556_H
#ifndef SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#define SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_t1215688063  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState
	ISpatialInteractionSourceState_t1358829803* ____ispatialInteractionSourceState_t1358829803;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
	ISpatialInteractionSourceState2_t2977437931* ____ispatialInteractionSourceState2_t2977437931;

public:
	inline ISpatialInteractionSourceState_t1358829803* get_____ispatialInteractionSourceState_t1358829803()
	{
		ISpatialInteractionSourceState_t1358829803* returnValue = ____ispatialInteractionSourceState_t1358829803;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState_t1358829803>((&____ispatialInteractionSourceState_t1358829803), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState_t1358829803;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSourceState2_t2977437931* get_____ispatialInteractionSourceState2_t2977437931()
	{
		ISpatialInteractionSourceState2_t2977437931* returnValue = ____ispatialInteractionSourceState2_t2977437931;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState2_t2977437931>((&____ispatialInteractionSourceState2_t2977437931), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState2_t2977437931;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifndef ATTRIBUTETARGETS_T1784037988_H
#define ATTRIBUTETARGETS_T1784037988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t1784037988 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t1784037988, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T1784037988_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef FLAGS_T2372798318_H
#define FLAGS_T2372798318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Flags
struct  Flags_t2372798318 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t2372798318, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T2372798318_H
#ifndef URIIDNSCOPE_T1847433844_H
#define URIIDNSCOPE_T1847433844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_t1847433844 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_t1847433844, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIIDNSCOPE_T1847433844_H
// Windows.Foundation.Collections.IVectorView`1<System.DateTimeOffset>
struct NOVTABLE IVectorView_1_t2568152769 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1224151036(uint32_t ___index0, DateTime_t1679451545 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1566737220(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1513712387(DateTime_t1679451545  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1032517645(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t1679451545 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Guid>
struct NOVTABLE IVectorView_1_t2532398149 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3400009220(uint32_t ___index0, Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m50190753(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4154363339(Guid_t  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2882594533(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Guid_t * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>
struct NOVTABLE IVectorView_1_t3503818801 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m828460566(uint32_t ___index0, Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3766324835(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1240834200(Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m320624579(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>
struct NOVTABLE IVectorView_1_t2033978749 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2736327627(uint32_t ___index0, Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2984082999(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3219133186(Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4144836697(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>
struct NOVTABLE IVectorView_1_t4184750196 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2196457089(uint32_t ___index0, Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3307328074(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1205944866(Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2898007465(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>
struct NOVTABLE IVector_1_t3969909228 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3254412450(uint32_t ___index0, DateTime_t1679451545 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3377152281(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1062446282(IVectorView_1_t2568152769** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1294821683(DateTime_t1679451545  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m60350146(uint32_t ___index0, DateTime_t1679451545  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3629928755(uint32_t ___index0, DateTime_t1679451545  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m2821918640(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m3775858658(DateTime_t1679451545  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m1446419325() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1953971700() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3458941667(uint32_t ___startIndex0, uint32_t ___items1ArraySize, DateTime_t1679451545 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1854201827(uint32_t ___items0ArraySize, DateTime_t1679451545 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Guid>
struct NOVTABLE IVector_1_t3934154608 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3326051374(uint32_t ___index0, Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3520021120(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1969741156(IVectorView_1_t2532398149** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2802066719(Guid_t  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m1537228356(uint32_t ___index0, Guid_t  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m967313605(uint32_t ___index0, Guid_t  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m910435960(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4070143794(Guid_t  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2674284142() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m3627484611() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3008218334(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Guid_t * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m1706362207(uint32_t ___items0ArraySize, Guid_t * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>
struct NOVTABLE IVector_1_t610607964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2330330105(uint32_t ___index0, Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m59889375(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m118185472(IVectorView_1_t3503818801** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m428066000(Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m565528379(uint32_t ___index0, Point_t4164953539  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3604836490(uint32_t ___index0, Point_t4164953539  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m1853546183(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m195984872(Point_t4164953539  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m4286336640() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2273683721() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4242153011(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2759782552(uint32_t ___items0ArraySize, Point_t4164953539 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>
struct NOVTABLE IVector_1_t3435735208 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3545656912(uint32_t ___index0, Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m2774852035(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m3695632509(IVectorView_1_t2033978749** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2583104291(Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m661546338(uint32_t ___index0, Rect_t2695113487  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m1857322035(uint32_t ___index0, Rect_t2695113487  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3994675881(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4126265023(Rect_t2695113487  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m298642047() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m26527518() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m476750240(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2673034237(uint32_t ___items0ArraySize, Rect_t2695113487 * ___items0) = 0;
};
// Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>
struct NOVTABLE IVector_1_t1291539359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m2699244792(uint32_t ___index0, Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m4157668882(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1943501597(IVectorView_1_t4184750196** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3701100474(Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3412621482(uint32_t ___index0, Size_t550917638  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3860348037(uint32_t ___index0, Size_t550917638  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m394387669(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2019222254(Size_t550917638  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2572115469() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m783567046() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m4076800509(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m4107471252(uint32_t ___items0ArraySize, Size_t550917638 * ___items0) = 0;
};
// Windows.Foundation.IReference`1<System.DateTimeOffset>
struct NOVTABLE IReference_1_t2482455932 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2049683846(DateTime_t1679451545 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t2446701312 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2917423479(Guid_t * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.DateTime>
struct NOVTABLE IReference_1_t932619970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1126360047(DateTime_t1679451545 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_t2904551434 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m919830547(FoundationContract_t3651383009 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t2326351618 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3795436356(HResult_t3073183193 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t3418121965 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2248936516(Point_t4164953540 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t3418121964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2248936515(Point_t4164953539 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t1948281912 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2582268702(Rect_t2695113488 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t1948281913 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2582268703(Rect_t2695113487 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t4099053359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3618386193(Size_t550917639 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t4099053360 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3618386194(Size_t550917638 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t1008809407 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3415674831(TimeSpan_t1755640982 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReference_1_t2620173286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2468794183(UniversalApiContract_t3367004861 * comReturnValue) = 0;
};
#ifndef MARSHALINGTYPE_T3556196393_H
#define MARSHALINGTYPE_T3556196393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingType
struct  MarshalingType_t3556196393 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_t3556196393, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALINGTYPE_T3556196393_H
#ifndef THREADINGMODEL_T2838021473_H
#define THREADINGMODEL_T2838021473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingModel
struct  ThreadingModel_t2838021473 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_t2838021473, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINGMODEL_T2838021473_H
#ifndef PROPERTYTYPE_T3031428354_H
#define PROPERTYTYPE_T3031428354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.PropertyType
struct  PropertyType_t3031428354 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_t3031428354, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTYPE_T3031428354_H
#ifndef TYPEKIND_T2273581760_H
#define TYPEKIND_T2273581760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_t2273581760 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t2273581760, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEKIND_T2273581760_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t3890150400 * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t1092684687 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_String_13), value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_originalUnicodeString_14), value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Syntax_15)); }
	inline UriParser_t3890150400 * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t3890150400 ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t3890150400 * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Syntax_15), value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_DnsSafeHost_16), value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Info_18)); }
	inline UriInfo_t1092684687 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t1092684687 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t1092684687 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_18), value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t3528271667* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t3528271667* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_0), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_1), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_2), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_3), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_4), value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWs_5), value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWss_6), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_7), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_8), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_9), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_10), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_11), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_12), value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((&___s_initLock_26), value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t3528271667* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t3528271667** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t3528271667* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((&___HexLowerChars_27), value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t3528271667* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t3528271667** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t3528271667* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((&____WSchars_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
// Windows.Foundation.Collections.IVectorView`1<System.TimeSpan>
struct NOVTABLE IVectorView_1_t220024511 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1798264202(uint32_t ___index0, TimeSpan_t881159249 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m846008238(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2157973748(TimeSpan_t881159249  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3909526617(uint32_t ___startIndex0, uint32_t ___items1ArraySize, TimeSpan_t881159249 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.TimeSpan>
struct NOVTABLE IVector_1_t1621780970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m4001576701(uint32_t ___index0, TimeSpan_t881159249 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m1979953161(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2578442391(IVectorView_1_t220024511** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m3610534390(TimeSpan_t881159249  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3169382320(uint32_t ___index0, TimeSpan_t881159249  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2337166544(uint32_t ___index0, TimeSpan_t881159249  ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3743278496(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m250096651(TimeSpan_t881159249  ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m4140907611() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m2231523500() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m3395665562(uint32_t ___startIndex0, uint32_t ___items1ArraySize, TimeSpan_t881159249 * ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m2447609914(uint32_t ___items0ArraySize, TimeSpan_t881159249 * ___items0) = 0;
};
// Windows.Foundation.IReference`1<System.AttributeTargets>
struct NOVTABLE IReference_1_t1037206413 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m95326068(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.TimeSpan>
struct NOVTABLE IReference_1_t134327674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2770668730(TimeSpan_t881159249 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t2809364818 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4241848242(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReference_1_t2091189898 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3959947048(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_t2284596779 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4223149003(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReference_1_t1526750185 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2990591067(int32_t* comReturnValue) = 0;
};
#ifndef ATTRIBUTETARGETS_T2460853228_H
#define ATTRIBUTETARGETS_T2460853228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeTargets
struct  AttributeTargets_t2460853228 
{
public:
	// System.UInt32 Windows.Foundation.Metadata.AttributeTargets::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t2460853228, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T2460853228_H
#ifndef TYPENAME_T4208425108_H
#define TYPENAME_T4208425108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t4208425108 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T4208425108_H
// Windows.Foundation.Collections.IVectorView`1<System.Type>
struct NOVTABLE IVectorView_1_t1822810022 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3708182184(uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1097778865(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1129849567(Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3274208783(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Type>
struct NOVTABLE IVector_1_t3224566481 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3023396459(uint32_t ___index0, Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3611201515(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m2404813821(IVectorView_1_t1822810022** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m2314055355(Il2CppWindowsRuntimeTypeName ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m3724063766(uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m2145145338(uint32_t ___index0, Il2CppWindowsRuntimeTypeName ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m154224944(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m386838768(Il2CppWindowsRuntimeTypeName ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m110681880() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1062744925() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m1218665569(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppWindowsRuntimeTypeName* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m4247109972(uint32_t ___items0ArraySize, Il2CppWindowsRuntimeTypeName* ___items0) = 0;
};
#ifndef EVENTHANDLER_1_T39852124_H
#define EVENTHANDLER_1_T39852124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.EventHandler`1<System.Object>
struct  EventHandler_1_t39852124  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Object>
struct IEventHandler_1_t39852124_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#endif // EVENTHANDLER_1_T39852124_H
// Windows.Foundation.IReference`1<System.Type>
struct NOVTABLE IReference_1_t1737113185 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2081172832(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>
struct NOVTABLE IReference_1_t1714021653 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m800375591(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReference_1_t3461593533 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3274607421(TypeName_t4208425108_marshaled_windows_runtime* comReturnValue) = 0;
};
// System.Collections.IList[]
struct IListU5BU5D_t2181495985  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t3473357058  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DateTimeOffset_t3229287507  m_Items[1];

public:
	inline DateTimeOffset_t3229287507  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t3229287507  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t3229287507 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t3229287507  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Exception[]
struct ExceptionU5BU5D_t2535001212  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Exception_t * m_Items[1];

public:
	inline Exception_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Exception_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Exception_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Exception_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Exception_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Exception_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Guid[]
struct GuidU5BU5D_t545550574  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// System.IDisposable[]
struct IDisposableU5BU5D_t3584190570  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int16[]
struct Int16U5BU5D_t3686840178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Int64[]
struct Int64U5BU5D_t2559172825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_t881159249  m_Items[1];

public:
	inline TimeSpan_t881159249  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t881159249  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t3326319531  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t1659327989  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Uri[]
struct UriU5BU5D_t673446605  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Uri_t100236324 * m_Items[1];

public:
	inline Uri_t100236324 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Uri_t100236324 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Uri_t100236324 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Uri_t100236324 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Uri_t100236324 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Uri_t100236324 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback[]
struct ISimpleHapticsControllerFeedbackU5BU5D_t2466915144  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Devices.Haptics.SimpleHapticsControllerFeedback[]
struct SimpleHapticsControllerFeedbackU5BU5D_t1558149338  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SimpleHapticsControllerFeedback_t913461083 * m_Items[1];

public:
	inline SimpleHapticsControllerFeedback_t913461083 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SimpleHapticsControllerFeedback_t913461083 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SimpleHapticsControllerFeedback_t913461083 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SimpleHapticsControllerFeedback_t913461083 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SimpleHapticsControllerFeedback_t913461083 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SimpleHapticsControllerFeedback_t913461083 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Point_t4164953539  m_Items[1];

public:
	inline Point_t4164953539  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_t4164953539  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_t2695113487  m_Items[1];

public:
	inline Rect_t2695113487  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_t2695113487  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Size_t550917638  m_Items[1];

public:
	inline Size_t550917638  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Size_t550917638  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Size_t550917638  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Size_t550917638  value)
	{
		m_Items[index] = value;
	}
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2[]
struct ISpatialInteractionSourceState2U5BU5D_t3674212106  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState[]
struct ISpatialInteractionSourceStateU5BU5D_t513935114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.UI.Input.Spatial.SpatialInteractionSourceState[]
struct SpatialInteractionSourceStateU5BU5D_t1865583014  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpatialInteractionSourceState_t1215688063 * m_Items[1];

public:
	inline SpatialInteractionSourceState_t1215688063 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialInteractionSourceState_t1215688063 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialInteractionSourceState_t1215688063 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpatialInteractionSourceState_t1215688063 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialInteractionSourceState_t1215688063 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialInteractionSourceState_t1215688063 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void TypeName_t4208425108_marshal_windows_runtime(const TypeName_t4208425108& unmarshaled, TypeName_t4208425108_marshaled_windows_runtime& marshaled);
extern "C" void TypeName_t4208425108_marshal_windows_runtime_back(const TypeName_t4208425108_marshaled_windows_runtime& marshaled, TypeName_t4208425108& unmarshaled);
extern "C" void TypeName_t4208425108_marshal_windows_runtime_cleanup(TypeName_t4208425108_marshaled_windows_runtime& marshaled);


// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  DateTimeOffset_ToLocalTime_m1141180670 (DateTimeOffset_t3229287507 * __this, bool ___throwOnOverflow0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m1474792120 (Uri_t100236324 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m2551181575 (Uri_t100236324 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Collections.IList>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m1739705579 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m1739705579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IBindableVector_t1801110279* returnValue = NULL;
	hr = ____ivector_1_t2835552937->IVector_1_GetAt_m1739705579(___index0, &returnValue);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.IList>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m2443289628 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2835552937->IVector_1_get_Size_m2443289628(&returnValue);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Collections.IList>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m4294882662 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m4294882662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t1433796478* returnValue = NULL;
	hr = ____ivector_1_t2835552937->IVector_1_GetView_m4294882662(&returnValue);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Collections.IList>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m109650767 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IBindableVector_t1801110279* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBindableVector_t1801110279>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2835552937->IVector_1_IndexOf_m109650767(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Collections.IList>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m2038640497 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IBindableVector_t1801110279* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBindableVector_t1801110279>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2835552937->IVector_1_SetAt_m2038640497(___index0, ____value1_marshaled);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Collections.IList>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3348104418 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IBindableVector_t1801110279* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBindableVector_t1801110279>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2835552937->IVector_1_InsertAt_m3348104418(___index0, ____value1_marshaled);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Collections.IList>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3548229972 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2835552937->IVector_1_RemoveAt_m3548229972(___index0);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Collections.IList>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m157288751 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IBindableVector_t1801110279* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IBindableVector_t1801110279>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2835552937->IVector_1_Append_m157288751(____value0_marshaled);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Collections.IList>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2693923453 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2835552937->IVector_1_RemoveAtEnd_m2693923453();
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Collections.IList>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m3341163113 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2835552937->IVector_1_Clear_m3341163113();
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.IList>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m1744931425 (RuntimeObject* __this, uint32_t ___startIndex0, IListU5BU5D_t2181495985* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m1744931425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IBindableVector_t1801110279** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IBindableVector_t1801110279*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IBindableVector_t1801110279*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2835552937->IVector_1_GetMany_m1744931425(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Collections.IList>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3404326288 (RuntimeObject* __this, IListU5BU5D_t2181495985* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2835552937* ____ivector_1_t2835552937 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2835552937::IID, reinterpret_cast<void**>(&____ivector_1_t2835552937));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IBindableVector_t1801110279** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IBindableVector_t1801110279*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(IBindableVector_t1801110279::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<IBindableVector_t1801110279>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2835552937->IVector_1_ReplaceAll_m3404326288(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2835552937->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// T Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  IVector_1_GetAt_m3254412450 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3254412450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ivector_1_t3969909228->IVector_1_GetAt_m3254412450(___index0, &returnValue);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DateTimeOffset_t3229287507  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	if ((returnValue).get_UniversalTime_0() < -504911232000000000 || (returnValue).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  _returnValue_unmarshaledStaging;
	DateTime_t3738529785  _returnValue_unmarshaledDateTime;
	_returnValue_unmarshaledDateTime.set_dateData_44((returnValue).get_UniversalTime_0() + 504911232000000000);
	_returnValue_unmarshaledStaging.set_m_dateTime_2(_returnValue_unmarshaledDateTime);
	_returnValue_unmarshaledStaging.set_m_offsetMinutes_3(0);
	_returnValue_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&_returnValue_unmarshaledStaging), true, NULL);;

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3377152281 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3969909228->IVector_1_get_Size_m3377152281(&returnValue);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1062446282 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1062446282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2568152769* returnValue = NULL;
	hr = ____ivector_1_t3969909228->IVector_1_GetView_m1062446282(&returnValue);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1294821683 (RuntimeObject* __this, DateTimeOffset_t3229287507  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	DateTime_t1679451545  ____value0_marshaled = {};
	(____value0_marshaled).set_UniversalTime_0((___value0.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3969909228->IVector_1_IndexOf_m1294821683(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m60350146 (RuntimeObject* __this, uint32_t ___index0, DateTimeOffset_t3229287507  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	DateTime_t1679451545  ____value1_marshaled = {};
	(____value1_marshaled).set_UniversalTime_0((___value1.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	// Native function invocation
	hr = ____ivector_1_t3969909228->IVector_1_SetAt_m60350146(___index0, ____value1_marshaled);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3629928755 (RuntimeObject* __this, uint32_t ___index0, DateTimeOffset_t3229287507  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	DateTime_t1679451545  ____value1_marshaled = {};
	(____value1_marshaled).set_UniversalTime_0((___value1.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	// Native function invocation
	hr = ____ivector_1_t3969909228->IVector_1_InsertAt_m3629928755(___index0, ____value1_marshaled);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m2821918640 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3969909228->IVector_1_RemoveAt_m2821918640(___index0);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m3775858658 (RuntimeObject* __this, DateTimeOffset_t3229287507  ___value0, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	DateTime_t1679451545  ____value0_marshaled = {};
	(____value0_marshaled).set_UniversalTime_0((___value0.get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);

	// Native function invocation
	hr = ____ivector_1_t3969909228->IVector_1_Append_m3775858658(____value0_marshaled);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m1446419325 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3969909228->IVector_1_RemoveAtEnd_m1446419325();
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1953971700 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3969909228->IVector_1_Clear_m1953971700();
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3458941667 (RuntimeObject* __this, uint32_t ___startIndex0, DateTimeOffsetU5BU5D_t3473357058* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3458941667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	DateTime_t1679451545 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<DateTime_t1679451545 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(DateTime_t1679451545 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3969909228->IVector_1_GetMany_m3458941667(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			DateTimeOffset_t3229287507  _____items1_marshaled_i__unmarshaled;
			memset(&_____items1_marshaled_i__unmarshaled, 0, sizeof(_____items1_marshaled_i__unmarshaled));
			if (((____items1_marshaled)[i]).get_UniversalTime_0() < -504911232000000000 || ((____items1_marshaled)[i]).get_UniversalTime_0() > 2650467743999999999)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}

			DateTimeOffset_t3229287507  _____items1_marshaled_i__unmarshaledStaging;
			DateTime_t3738529785  _____items1_marshaled_i__unmarshaledDateTime;
			_____items1_marshaled_i__unmarshaledDateTime.set_dateData_44(((____items1_marshaled)[i]).get_UniversalTime_0() + 504911232000000000);
			_____items1_marshaled_i__unmarshaledStaging.set_m_dateTime_2(_____items1_marshaled_i__unmarshaledDateTime);
			_____items1_marshaled_i__unmarshaledStaging.set_m_offsetMinutes_3(0);
			_____items1_marshaled_i__unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&_____items1_marshaled_i__unmarshaledStaging), true, NULL);;
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.DateTimeOffset>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m1854201827 (RuntimeObject* __this, DateTimeOffsetU5BU5D_t3473357058* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3969909228* ____ivector_1_t3969909228 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3969909228::IID, reinterpret_cast<void**>(&____ivector_1_t3969909228));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	DateTime_t1679451545 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<DateTime_t1679451545 >(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			((____items0_marshaled)[i]).set_UniversalTime_0(((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)).get_m_dateTime_2().get_dateData_44() & 0x3FFFFFFFFFFFFFFF) - 504911232000000000);
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3969909228->IVector_1_ReplaceAll_m1854201827(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3969909228->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// T Windows.Foundation.Collections.IVector`1<System.Double>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR double IVector_1_GetAt_m2258907825 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	double returnValue = 0.0;
	hr = ____ivector_1_t1335287084->IVector_1_GetAt_m2258907825(___index0, &returnValue);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Double>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1655656993 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1335287084->IVector_1_get_Size_m1655656993(&returnValue);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Double>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2756521257 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2756521257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t4228497921* returnValue = NULL;
	hr = ____ivector_1_t1335287084->IVector_1_GetView_m2756521257(&returnValue);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Double>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2419515901 (RuntimeObject* __this, double ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t1335287084->IVector_1_IndexOf_m2419515901(___value0, ___index1, &returnValue);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Double>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m2239482525 (RuntimeObject* __this, uint32_t ___index0, double ___value1, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1335287084->IVector_1_SetAt_m2239482525(___index0, ___value1);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Double>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m4179671597 (RuntimeObject* __this, uint32_t ___index0, double ___value1, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1335287084->IVector_1_InsertAt_m4179671597(___index0, ___value1);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Double>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3750794654 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1335287084->IVector_1_RemoveAt_m3750794654(___index0);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Double>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m1220903153 (RuntimeObject* __this, double ___value0, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1335287084->IVector_1_Append_m1220903153(___value0);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Double>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2834979580 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1335287084->IVector_1_RemoveAtEnd_m2834979580();
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Double>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m432459071 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1335287084->IVector_1_Clear_m432459071();
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Double>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m1219290460 (RuntimeObject* __this, uint32_t ___startIndex0, DoubleU5BU5D_t3413330114* ___items1, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	double* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(double));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1335287084->IVector_1_GetMany_m1219290460(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Double>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m36060731 (RuntimeObject* __this, DoubleU5BU5D_t3413330114* ___items0, const RuntimeMethod* method)
{
	IVector_1_t1335287084* ____ivector_1_t1335287084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1335287084::IID, reinterpret_cast<void**>(&____ivector_1_t1335287084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	double* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<double*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t1335287084->IVector_1_ReplaceAll_m36060731(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t1335287084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Exception>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Exception_t * IVector_1_GetAt_m1490261528 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ivector_1_t2177358970->IVector_1_GetAt_m1490261528(___index0, &returnValue);
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Exception>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1396078520 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2177358970->IVector_1_get_Size_m1396078520(&returnValue);
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Exception>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3260557022 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3260557022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t775602511* returnValue = NULL;
	hr = ____ivector_1_t2177358970->IVector_1_GetView_m3260557022(&returnValue);
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Exception>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1343155571 (RuntimeObject* __this, Exception_t * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2177358970->IVector_1_IndexOf_m1343155571((___value0 != NULL ? reinterpret_cast<RuntimeException*>(___value0)->hresult : IL2CPP_S_OK), ___index1, &returnValue);
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Exception>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3790683234 (RuntimeObject* __this, uint32_t ___index0, Exception_t * ___value1, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2177358970->IVector_1_SetAt_m3790683234(___index0, (___value1 != NULL ? reinterpret_cast<RuntimeException*>(___value1)->hresult : IL2CPP_S_OK));
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Exception>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3454371523 (RuntimeObject* __this, uint32_t ___index0, Exception_t * ___value1, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2177358970->IVector_1_InsertAt_m3454371523(___index0, (___value1 != NULL ? reinterpret_cast<RuntimeException*>(___value1)->hresult : IL2CPP_S_OK));
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Exception>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1723937581 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2177358970->IVector_1_RemoveAt_m1723937581(___index0);
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Exception>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m916517619 (RuntimeObject* __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2177358970->IVector_1_Append_m916517619((___value0 != NULL ? reinterpret_cast<RuntimeException*>(___value0)->hresult : IL2CPP_S_OK));
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Exception>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m92554222 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2177358970->IVector_1_RemoveAtEnd_m92554222();
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Exception>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m3596568657 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2177358970->IVector_1_Clear_m3596568657();
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Exception>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3415137161 (RuntimeObject* __this, uint32_t ___startIndex0, ExceptionU5BU5D_t2535001212* ___items1, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int32_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int32_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2177358970->IVector_1_GetMany_m3415137161(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), ((____items1_marshaled)[i] != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception((____items1_marshaled)[i], false)) : NULL));
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Exception>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m607959396 (RuntimeObject* __this, ExceptionU5BU5D_t2535001212* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2177358970* ____ivector_1_t2177358970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2177358970::IID, reinterpret_cast<void**>(&____ivector_1_t2177358970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	int32_t* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			(____items0_marshaled)[i] = ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL ? reinterpret_cast<RuntimeException*>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->hresult : IL2CPP_S_OK);
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2177358970->IVector_1_ReplaceAll_m607959396(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2177358970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// T Windows.Foundation.Collections.IVector`1<System.Guid>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Guid_t  IVector_1_GetAt_m3326051374 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Guid_t  returnValue = {};
	hr = ____ivector_1_t3934154608->IVector_1_GetAt_m3326051374(___index0, &returnValue);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Guid>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3520021120 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3934154608->IVector_1_get_Size_m3520021120(&returnValue);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Guid>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1969741156 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1969741156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2532398149* returnValue = NULL;
	hr = ____ivector_1_t3934154608->IVector_1_GetView_m1969741156(&returnValue);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Guid>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2802066719 (RuntimeObject* __this, Guid_t  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3934154608->IVector_1_IndexOf_m2802066719(___value0, ___index1, &returnValue);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Guid>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m1537228356 (RuntimeObject* __this, uint32_t ___index0, Guid_t  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3934154608->IVector_1_SetAt_m1537228356(___index0, ___value1);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Guid>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m967313605 (RuntimeObject* __this, uint32_t ___index0, Guid_t  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3934154608->IVector_1_InsertAt_m967313605(___index0, ___value1);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Guid>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m910435960 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3934154608->IVector_1_RemoveAt_m910435960(___index0);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Guid>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m4070143794 (RuntimeObject* __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3934154608->IVector_1_Append_m4070143794(___value0);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Guid>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2674284142 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3934154608->IVector_1_RemoveAtEnd_m2674284142();
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Guid>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m3627484611 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3934154608->IVector_1_Clear_m3627484611();
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Guid>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3008218334 (RuntimeObject* __this, uint32_t ___startIndex0, GuidU5BU5D_t545550574* ___items1, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Guid_t * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Guid_t ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3934154608->IVector_1_GetMany_m3008218334(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Guid>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m1706362207 (RuntimeObject* __this, GuidU5BU5D_t545550574* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3934154608* ____ivector_1_t3934154608 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3934154608::IID, reinterpret_cast<void**>(&____ivector_1_t3934154608));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Guid_t * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<Guid_t *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t3934154608->IVector_1_ReplaceAll_m1706362207(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3934154608->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.IDisposable>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m1818179852 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m1818179852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IClosable_t326290202* returnValue = NULL;
	hr = ____ivector_1_t85919908->IVector_1_GetAt_m1818179852(___index0, &returnValue);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.IDisposable>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3823752638 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t85919908->IVector_1_get_Size_m3823752638(&returnValue);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.IDisposable>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1774052338 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1774052338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2979130745* returnValue = NULL;
	hr = ____ivector_1_t85919908->IVector_1_GetView_m1774052338(&returnValue);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.IDisposable>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1585381087 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IClosable_t326290202* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IClosable_t326290202>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t85919908->IVector_1_IndexOf_m1585381087(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.IDisposable>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3515660460 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IClosable_t326290202* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IClosable_t326290202>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t85919908->IVector_1_SetAt_m3515660460(___index0, ____value1_marshaled);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.IDisposable>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2376466212 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IClosable_t326290202* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IClosable_t326290202>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t85919908->IVector_1_InsertAt_m2376466212(___index0, ____value1_marshaled);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.IDisposable>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1611448121 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t85919908->IVector_1_RemoveAt_m1611448121(___index0);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.IDisposable>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m1351769897 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IClosable_t326290202* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IClosable_t326290202>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t85919908->IVector_1_Append_m1351769897(____value0_marshaled);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.IDisposable>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2882598834 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t85919908->IVector_1_RemoveAtEnd_m2882598834();
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.IDisposable>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2337331050 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t85919908->IVector_1_Clear_m2337331050();
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.IDisposable>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3415000903 (RuntimeObject* __this, uint32_t ___startIndex0, IDisposableU5BU5D_t3584190570* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3415000903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IClosable_t326290202** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IClosable_t326290202*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IClosable_t326290202*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t85919908->IVector_1_GetMany_m3415000903(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.IDisposable>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m925457437 (RuntimeObject* __this, IDisposableU5BU5D_t3584190570* ___items0, const RuntimeMethod* method)
{
	IVector_1_t85919908* ____ivector_1_t85919908 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t85919908::IID, reinterpret_cast<void**>(&____ivector_1_t85919908));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IClosable_t326290202** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IClosable_t326290202*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<IClosable_t326290202>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t85919908->IVector_1_ReplaceAll_m925457437(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t85919908->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<System.Int16>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int16_t IVector_1_GetAt_m2480307800 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int16_t returnValue = 0;
	hr = ____ivector_1_t3293442108->IVector_1_GetAt_m2480307800(___index0, &returnValue);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Int16>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m2555907765 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3293442108->IVector_1_get_Size_m2555907765(&returnValue);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Int16>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3272889438 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3272889438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t1891685649* returnValue = NULL;
	hr = ____ivector_1_t3293442108->IVector_1_GetView_m3272889438(&returnValue);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Int16>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m4004437884 (RuntimeObject* __this, int16_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3293442108->IVector_1_IndexOf_m4004437884(___value0, ___index1, &returnValue);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int16>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m2546160938 (RuntimeObject* __this, uint32_t ___index0, int16_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3293442108->IVector_1_SetAt_m2546160938(___index0, ___value1);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int16>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1503796612 (RuntimeObject* __this, uint32_t ___index0, int16_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3293442108->IVector_1_InsertAt_m1503796612(___index0, ___value1);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int16>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3237793706 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3293442108->IVector_1_RemoveAt_m3237793706(___index0);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int16>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m73662841 (RuntimeObject* __this, int16_t ___value0, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3293442108->IVector_1_Append_m73662841(___value0);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int16>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2323914946 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3293442108->IVector_1_RemoveAtEnd_m2323914946();
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int16>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1518645361 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3293442108->IVector_1_Clear_m1518645361();
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Int16>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m2254068249 (RuntimeObject* __this, uint32_t ___startIndex0, Int16U5BU5D_t3686840178* ___items1, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int16_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int16_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3293442108->IVector_1_GetMany_m2254068249(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int16>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m4039134861 (RuntimeObject* __this, Int16U5BU5D_t3686840178* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3293442108* ____ivector_1_t3293442108 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3293442108::IID, reinterpret_cast<void**>(&____ivector_1_t3293442108));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	int16_t* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<int16_t*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t3293442108->IVector_1_ReplaceAll_m4039134861(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3293442108->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Int32>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int32_t IVector_1_GetAt_m669642145 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ivector_1_t3691567474->IVector_1_GetAt_m669642145(___index0, &returnValue);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Int32>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1083909874 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3691567474->IVector_1_get_Size_m1083909874(&returnValue);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Int32>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1457083017 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1457083017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2289811015* returnValue = NULL;
	hr = ____ivector_1_t3691567474->IVector_1_GetView_m1457083017(&returnValue);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Int32>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1513096330 (RuntimeObject* __this, int32_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3691567474->IVector_1_IndexOf_m1513096330(___value0, ___index1, &returnValue);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int32>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m2697343022 (RuntimeObject* __this, uint32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3691567474->IVector_1_SetAt_m2697343022(___index0, ___value1);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int32>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2016133864 (RuntimeObject* __this, uint32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3691567474->IVector_1_InsertAt_m2016133864(___index0, ___value1);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int32>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m2081155343 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3691567474->IVector_1_RemoveAt_m2081155343(___index0);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int32>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m71244649 (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3691567474->IVector_1_Append_m71244649(___value0);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int32>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2906723444 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3691567474->IVector_1_RemoveAtEnd_m2906723444();
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2316468687 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3691567474->IVector_1_Clear_m2316468687();
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Int32>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3133207996 (RuntimeObject* __this, uint32_t ___startIndex0, Int32U5BU5D_t385246372* ___items1, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int32_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int32_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3691567474->IVector_1_GetMany_m3133207996(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int32>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m4247928211 (RuntimeObject* __this, Int32U5BU5D_t385246372* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3691567474* ____ivector_1_t3691567474 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3691567474::IID, reinterpret_cast<void**>(&____ivector_1_t3691567474));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	int32_t* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<int32_t*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t3691567474->IVector_1_ReplaceAll_m4247928211(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3691567474->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Int64>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR int64_t IVector_1_GetAt_m425655216 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int64_t returnValue = 0;
	hr = ____ivector_1_t182221729->IVector_1_GetAt_m425655216(___index0, &returnValue);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Int64>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3151845843 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t182221729->IVector_1_get_Size_m3151845843(&returnValue);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Int64>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2857412624 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2857412624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t3075432566* returnValue = NULL;
	hr = ____ivector_1_t182221729->IVector_1_GetView_m2857412624(&returnValue);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Int64>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m211653580 (RuntimeObject* __this, int64_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t182221729->IVector_1_IndexOf_m211653580(___value0, ___index1, &returnValue);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int64>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3641861081 (RuntimeObject* __this, uint32_t ___index0, int64_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t182221729->IVector_1_SetAt_m3641861081(___index0, ___value1);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int64>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3699328408 (RuntimeObject* __this, uint32_t ___index0, int64_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t182221729->IVector_1_InsertAt_m3699328408(___index0, ___value1);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int64>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m730199872 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t182221729->IVector_1_RemoveAt_m730199872(___index0);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int64>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m1860785285 (RuntimeObject* __this, int64_t ___value0, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t182221729->IVector_1_Append_m1860785285(___value0);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int64>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m801618119 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t182221729->IVector_1_RemoveAtEnd_m801618119();
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int64>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1532284886 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t182221729->IVector_1_Clear_m1532284886();
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Int64>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3643023987 (RuntimeObject* __this, uint32_t ___startIndex0, Int64U5BU5D_t2559172825* ___items1, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int64_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int64_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t182221729->IVector_1_GetMany_m3643023987(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Int64>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3104744120 (RuntimeObject* __this, Int64U5BU5D_t2559172825* ___items0, const RuntimeMethod* method)
{
	IVector_1_t182221729* ____ivector_1_t182221729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t182221729::IID, reinterpret_cast<void**>(&____ivector_1_t182221729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	int64_t* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<int64_t*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t182221729->IVector_1_ReplaceAll_m3104744120(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t182221729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Object>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IVector_1_GetAt_m219694725 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m219694725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ivector_1_t3820727885->IVector_1_GetAt_m219694725(___index0, &returnValue);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Object>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m2561126536 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3820727885->IVector_1_get_Size_m2561126536(&returnValue);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Object>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3086397386 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3086397386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2418971426* returnValue = NULL;
	hr = ____ivector_1_t3820727885->IVector_1_GetView_m3086397386(&returnValue);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Object>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1930043913 (RuntimeObject* __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppIInspectable* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3820727885->IVector_1_IndexOf_m1930043913(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Object>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m1678827239 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppIInspectable* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3820727885->IVector_1_SetAt_m1678827239(___index0, ____value1_marshaled);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Object>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1249203443 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppIInspectable* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3820727885->IVector_1_InsertAt_m1249203443(___index0, ____value1_marshaled);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Object>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1710167275 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3820727885->IVector_1_RemoveAt_m1710167275(___index0);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Object>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m1926269351 (RuntimeObject* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppIInspectable* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3820727885->IVector_1_Append_m1926269351(____value0_marshaled);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Object>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m3025735428 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3820727885->IVector_1_RemoveAtEnd_m3025735428();
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m305000098 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3820727885->IVector_1_Clear_m305000098();
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Object>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3541038849 (RuntimeObject* __this, uint32_t ___startIndex0, ObjectU5BU5D_t2843939325* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3541038849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Il2CppIInspectable** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppIInspectable*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Il2CppIInspectable*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3820727885->IVector_1_GetMany_m3541038849(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Object>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2515130844 (RuntimeObject* __this, ObjectU5BU5D_t2843939325* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3820727885* ____ivector_1_t3820727885 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3820727885::IID, reinterpret_cast<void**>(&____ivector_1_t3820727885));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Il2CppIInspectable** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppIInspectable*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3820727885->IVector_1_ReplaceAll_m2515130844(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3820727885->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Single>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR float IVector_1_GetAt_m3700246983 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	float returnValue = 0.0f;
	hr = ____ivector_1_t2137888495->IVector_1_GetAt_m3700246983(___index0, &returnValue);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Single>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3531442778 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2137888495->IVector_1_get_Size_m3531442778(&returnValue);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Single>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1670428144 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1670428144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t736132036* returnValue = NULL;
	hr = ____ivector_1_t2137888495->IVector_1_GetView_m1670428144(&returnValue);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Single>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m739803125 (RuntimeObject* __this, float ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2137888495->IVector_1_IndexOf_m739803125(___value0, ___index1, &returnValue);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Single>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m1156666243 (RuntimeObject* __this, uint32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2137888495->IVector_1_SetAt_m1156666243(___index0, ___value1);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Single>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1898551949 (RuntimeObject* __this, uint32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2137888495->IVector_1_InsertAt_m1898551949(___index0, ___value1);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Single>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3164249930 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2137888495->IVector_1_RemoveAt_m3164249930(___index0);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Single>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2356107643 (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2137888495->IVector_1_Append_m2356107643(___value0);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Single>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2431982566 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2137888495->IVector_1_RemoveAtEnd_m2431982566();
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Single>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m3622925119 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2137888495->IVector_1_Clear_m3622925119();
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Single>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m2648716604 (RuntimeObject* __this, uint32_t ___startIndex0, SingleU5BU5D_t1444911251* ___items1, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	float* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(float));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2137888495->IVector_1_GetMany_m2648716604(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Single>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m1968832847 (RuntimeObject* __this, SingleU5BU5D_t1444911251* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2137888495* ____ivector_1_t2137888495 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2137888495::IID, reinterpret_cast<void**>(&____ivector_1_t2137888495));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	float* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<float*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t2137888495->IVector_1_ReplaceAll_m1968832847(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2137888495->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.String>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR String_t* IVector_1_GetAt_m2881185809 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ivector_1_t2588072410->IVector_1_GetAt_m2881185809(___index0, &returnValue);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.String>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3596466296 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2588072410->IVector_1_get_Size_m3596466296(&returnValue);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.String>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1219033264 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1219033264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t1186315951* returnValue = NULL;
	hr = ____ivector_1_t2588072410->IVector_1_GetView_m1219033264(&returnValue);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.String>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2107560054 (RuntimeObject* __this, String_t* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppHString ____value0_marshaled = NULL;
	if (___value0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value0NativeView, ___value0);
	il2cpp::utils::Il2CppHStringReference ___value0HStringReference(___value0NativeView);
	____value0_marshaled = ___value0HStringReference;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2588072410->IVector_1_IndexOf_m2107560054(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.String>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m166369194 (RuntimeObject* __this, uint32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppHString ____value1_marshaled = NULL;
	if (___value1 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value1NativeView, ___value1);
	il2cpp::utils::Il2CppHStringReference ___value1HStringReference(___value1NativeView);
	____value1_marshaled = ___value1HStringReference;

	// Native function invocation
	hr = ____ivector_1_t2588072410->IVector_1_SetAt_m166369194(___index0, ____value1_marshaled);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.String>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2973823425 (RuntimeObject* __this, uint32_t ___index0, String_t* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppHString ____value1_marshaled = NULL;
	if (___value1 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value1NativeView, ___value1);
	il2cpp::utils::Il2CppHStringReference ___value1HStringReference(___value1NativeView);
	____value1_marshaled = ___value1HStringReference;

	// Native function invocation
	hr = ____ivector_1_t2588072410->IVector_1_InsertAt_m2973823425(___index0, ____value1_marshaled);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.String>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m269128213 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2588072410->IVector_1_RemoveAt_m269128213(___index0);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.String>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m3989127587 (RuntimeObject* __this, String_t* ___value0, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppHString ____value0_marshaled = NULL;
	if (___value0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"), NULL, NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value0NativeView, ___value0);
	il2cpp::utils::Il2CppHStringReference ___value0HStringReference(___value0NativeView);
	____value0_marshaled = ___value0HStringReference;

	// Native function invocation
	hr = ____ivector_1_t2588072410->IVector_1_Append_m3989127587(____value0_marshaled);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.String>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m3708964671 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2588072410->IVector_1_RemoveAtEnd_m3708964671();
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.String>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m867824 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2588072410->IVector_1_Clear_m867824();
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.String>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3511123964 (RuntimeObject* __this, uint32_t ___startIndex0, StringU5BU5D_t1281789340* ___items1, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Il2CppHString* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Il2CppHString));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2588072410->IVector_1_GetMany_m3511123964(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			String_t* _____items1_marshaled_i__unmarshaled = NULL;
			_____items1_marshaled_i__unmarshaled = il2cpp_codegen_marshal_hstring_result((____items1_marshaled)[i]);
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free_hstring((____items1_marshaled)[i]);
			(____items1_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.String>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m4096830123 (RuntimeObject* __this, StringU5BU5D_t1281789340* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2588072410* ____ivector_1_t2588072410 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2588072410::IID, reinterpret_cast<void**>(&____ivector_1_t2588072410));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Il2CppHString* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) == NULL)
			{
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("items"), NULL, NULL);
			}
			(____items0_marshaled)[i] = il2cpp_codegen_create_hstring((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2588072410->IVector_1_ReplaceAll_m4096830123(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2588072410->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free_hstring((____items0_marshaled)[i]);
			(____items0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// T Windows.Foundation.Collections.IVector`1<System.TimeSpan>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  IVector_1_GetAt_m4001576701 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t881159249  returnValue = {};
	hr = ____ivector_1_t1621780970->IVector_1_GetAt_m4001576701(___index0, &returnValue);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.TimeSpan>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1979953161 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1621780970->IVector_1_get_Size_m1979953161(&returnValue);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.TimeSpan>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2578442391 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2578442391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t220024511* returnValue = NULL;
	hr = ____ivector_1_t1621780970->IVector_1_GetView_m2578442391(&returnValue);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.TimeSpan>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m3610534390 (RuntimeObject* __this, TimeSpan_t881159249  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t1621780970->IVector_1_IndexOf_m3610534390(___value0, ___index1, &returnValue);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.TimeSpan>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3169382320 (RuntimeObject* __this, uint32_t ___index0, TimeSpan_t881159249  ___value1, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1621780970->IVector_1_SetAt_m3169382320(___index0, ___value1);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.TimeSpan>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2337166544 (RuntimeObject* __this, uint32_t ___index0, TimeSpan_t881159249  ___value1, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1621780970->IVector_1_InsertAt_m2337166544(___index0, ___value1);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.TimeSpan>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3743278496 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1621780970->IVector_1_RemoveAt_m3743278496(___index0);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.TimeSpan>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m250096651 (RuntimeObject* __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1621780970->IVector_1_Append_m250096651(___value0);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.TimeSpan>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m4140907611 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1621780970->IVector_1_RemoveAtEnd_m4140907611();
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.TimeSpan>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2231523500 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1621780970->IVector_1_Clear_m2231523500();
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.TimeSpan>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3395665562 (RuntimeObject* __this, uint32_t ___startIndex0, TimeSpanU5BU5D_t4291357516* ___items1, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	TimeSpan_t881159249 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<TimeSpan_t881159249 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(TimeSpan_t881159249 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1621780970->IVector_1_GetMany_m3395665562(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.TimeSpan>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2447609914 (RuntimeObject* __this, TimeSpanU5BU5D_t4291357516* ___items0, const RuntimeMethod* method)
{
	IVector_1_t1621780970* ____ivector_1_t1621780970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1621780970::IID, reinterpret_cast<void**>(&____ivector_1_t1621780970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	TimeSpan_t881159249 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<TimeSpan_t881159249 *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t1621780970->IVector_1_ReplaceAll_m2447609914(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t1621780970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Type>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Type_t * IVector_1_GetAt_m3023396459 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppWindowsRuntimeTypeName returnValue = Il2CppWindowsRuntimeTypeName();
	hr = ____ivector_1_t3224566481->IVector_1_GetAt_m3023396459(___index0, &returnValue);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Type_t * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_type_from_native(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_delete_native_type(returnValue);

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Type>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3611201515 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3224566481->IVector_1_get_Size_m3611201515(&returnValue);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Type>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2404813821 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2404813821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t1822810022* returnValue = NULL;
	hr = ____ivector_1_t3224566481->IVector_1_GetView_m2404813821(&returnValue);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Type>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2314055355 (RuntimeObject* __this, Type_t * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppWindowsRuntimeTypeName ____value0_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(___value0, ____value0_marshaled);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3224566481->IVector_1_IndexOf_m2314055355(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	il2cpp_codegen_delete_native_type(____value0_marshaled);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Type>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3724063766 (RuntimeObject* __this, uint32_t ___index0, Type_t * ___value1, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppWindowsRuntimeTypeName ____value1_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(___value1, ____value1_marshaled);

	// Native function invocation
	hr = ____ivector_1_t3224566481->IVector_1_SetAt_m3724063766(___index0, ____value1_marshaled);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_delete_native_type(____value1_marshaled);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Type>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2145145338 (RuntimeObject* __this, uint32_t ___index0, Type_t * ___value1, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	Il2CppWindowsRuntimeTypeName ____value1_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(___value1, ____value1_marshaled);

	// Native function invocation
	hr = ____ivector_1_t3224566481->IVector_1_InsertAt_m2145145338(___index0, ____value1_marshaled);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_delete_native_type(____value1_marshaled);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Type>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m154224944 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3224566481->IVector_1_RemoveAt_m154224944(___index0);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Type>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m386838768 (RuntimeObject* __this, Type_t * ___value0, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppWindowsRuntimeTypeName ____value0_marshaled = Il2CppWindowsRuntimeTypeName();
	il2cpp_codegen_marshal_type_to_native(___value0, ____value0_marshaled);

	// Native function invocation
	hr = ____ivector_1_t3224566481->IVector_1_Append_m386838768(____value0_marshaled);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	il2cpp_codegen_delete_native_type(____value0_marshaled);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Type>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m110681880 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3224566481->IVector_1_RemoveAtEnd_m110681880();
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Type>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1062744925 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3224566481->IVector_1_Clear_m1062744925();
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Type>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m1218665569 (RuntimeObject* __this, uint32_t ___startIndex0, TypeU5BU5D_t3940880105* ___items1, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Il2CppWindowsRuntimeTypeName* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppWindowsRuntimeTypeName>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Il2CppWindowsRuntimeTypeName));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3224566481->IVector_1_GetMany_m1218665569(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			Type_t * _____items1_marshaled_i__unmarshaled = NULL;
			_____items1_marshaled_i__unmarshaled = il2cpp_codegen_marshal_type_from_native((____items1_marshaled)[i]);
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_delete_native_type((____items1_marshaled)[i]);
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Type>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m4247109972 (RuntimeObject* __this, TypeU5BU5D_t3940880105* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3224566481* ____ivector_1_t3224566481 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3224566481::IID, reinterpret_cast<void**>(&____ivector_1_t3224566481));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Il2CppWindowsRuntimeTypeName* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppWindowsRuntimeTypeName>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			il2cpp_codegen_marshal_type_to_native((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), (____items0_marshaled)[i]);
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3224566481->IVector_1_ReplaceAll_m4247109972(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3224566481->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_delete_native_type((____items0_marshaled)[i]);
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.UInt16>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint16_t IVector_1_GetAt_m238587295 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ivector_1_t2918346679->IVector_1_GetAt_m238587295(___index0, &returnValue);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.UInt16>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3469677531 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2918346679->IVector_1_get_Size_m3469677531(&returnValue);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.UInt16>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3025995885 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3025995885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t1516590220* returnValue = NULL;
	hr = ____ivector_1_t2918346679->IVector_1_GetView_m3025995885(&returnValue);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.UInt16>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1343053975 (RuntimeObject* __this, uint16_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2918346679->IVector_1_IndexOf_m1343053975(___value0, ___index1, &returnValue);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt16>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m246985172 (RuntimeObject* __this, uint32_t ___index0, uint16_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2918346679->IVector_1_SetAt_m246985172(___index0, ___value1);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt16>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2991702087 (RuntimeObject* __this, uint32_t ___index0, uint16_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2918346679->IVector_1_InsertAt_m2991702087(___index0, ___value1);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt16>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m2673603791 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2918346679->IVector_1_RemoveAt_m2673603791(___index0);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt16>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m1576189264 (RuntimeObject* __this, uint16_t ___value0, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2918346679->IVector_1_Append_m1576189264(___value0);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt16>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m1857915307 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2918346679->IVector_1_RemoveAtEnd_m1857915307();
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt16>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m3093710788 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2918346679->IVector_1_Clear_m3093710788();
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.UInt16>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m91550909 (RuntimeObject* __this, uint32_t ___startIndex0, UInt16U5BU5D_t3326319531* ___items1, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	uint16_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(uint16_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2918346679->IVector_1_GetMany_m91550909(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt16>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2701549418 (RuntimeObject* __this, UInt16U5BU5D_t3326319531* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2918346679* ____ivector_1_t2918346679 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2918346679::IID, reinterpret_cast<void**>(&____ivector_1_t2918346679));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	uint16_t* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<uint16_t*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t2918346679->IVector_1_ReplaceAll_m2701549418(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2918346679->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.UInt32>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetAt_m1377932999 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3300683699->IVector_1_GetAt_m1377932999(___index0, &returnValue);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.UInt32>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1923345822 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3300683699->IVector_1_get_Size_m1923345822(&returnValue);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.UInt32>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m776116354 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m776116354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t1898927240* returnValue = NULL;
	hr = ____ivector_1_t3300683699->IVector_1_GetView_m776116354(&returnValue);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.UInt32>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m3489169491 (RuntimeObject* __this, uint32_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3300683699->IVector_1_IndexOf_m3489169491(___value0, ___index1, &returnValue);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt32>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3079373580 (RuntimeObject* __this, uint32_t ___index0, uint32_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3300683699->IVector_1_SetAt_m3079373580(___index0, ___value1);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt32>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2718637520 (RuntimeObject* __this, uint32_t ___index0, uint32_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3300683699->IVector_1_InsertAt_m2718637520(___index0, ___value1);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt32>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m328020143 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3300683699->IVector_1_RemoveAt_m328020143(___index0);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt32>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2065973735 (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3300683699->IVector_1_Append_m2065973735(___value0);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt32>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m1175668767 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3300683699->IVector_1_RemoveAtEnd_m1175668767();
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt32>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m3720926093 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3300683699->IVector_1_Clear_m3720926093();
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.UInt32>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m2743709791 (RuntimeObject* __this, uint32_t ___startIndex0, UInt32U5BU5D_t2770800703* ___items1, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	uint32_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(uint32_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3300683699->IVector_1_GetMany_m2743709791(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt32>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3864847556 (RuntimeObject* __this, UInt32U5BU5D_t2770800703* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3300683699* ____ivector_1_t3300683699 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3300683699::IID, reinterpret_cast<void**>(&____ivector_1_t3300683699));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	uint32_t* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<uint32_t*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t3300683699->IVector_1_ReplaceAll_m3864847556(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3300683699->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.UInt64>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR uint64_t IVector_1_GetAt_m951635711 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ivector_1_t579694517->IVector_1_GetAt_m951635711(___index0, &returnValue);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.UInt64>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1121146914 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t579694517->IVector_1_get_Size_m1121146914(&returnValue);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.UInt64>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m435781098 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m435781098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t3472905354* returnValue = NULL;
	hr = ____ivector_1_t579694517->IVector_1_GetView_m435781098(&returnValue);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.UInt64>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2037213150 (RuntimeObject* __this, uint64_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t579694517->IVector_1_IndexOf_m2037213150(___value0, ___index1, &returnValue);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt64>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m2428609496 (RuntimeObject* __this, uint32_t ___index0, uint64_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t579694517->IVector_1_SetAt_m2428609496(___index0, ___value1);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt64>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3377046151 (RuntimeObject* __this, uint32_t ___index0, uint64_t ___value1, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t579694517->IVector_1_InsertAt_m3377046151(___index0, ___value1);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt64>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3822942214 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t579694517->IVector_1_RemoveAt_m3822942214(___index0);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt64>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m3066519795 (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t579694517->IVector_1_Append_m3066519795(___value0);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt64>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m688723122 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t579694517->IVector_1_RemoveAtEnd_m688723122();
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt64>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m3650286301 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t579694517->IVector_1_Clear_m3650286301();
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.UInt64>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m1446676414 (RuntimeObject* __this, uint32_t ___startIndex0, UInt64U5BU5D_t1659327989* ___items1, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	uint64_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(uint64_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t579694517->IVector_1_GetMany_m1446676414(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.UInt64>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m544562035 (RuntimeObject* __this, UInt64U5BU5D_t1659327989* ___items0, const RuntimeMethod* method)
{
	IVector_1_t579694517* ____ivector_1_t579694517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t579694517::IID, reinterpret_cast<void**>(&____ivector_1_t579694517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	uint64_t* ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<uint64_t*>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t579694517->IVector_1_ReplaceAll_m544562035(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t579694517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<System.Uri>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Uri_t100236324 * IVector_1_GetAt_m3184039671 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3184039671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IUriRuntimeClass_t921050115* returnValue = NULL;
	hr = ____ivector_1_t840858045->IVector_1_GetAt_m3184039671(___index0, &returnValue);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Uri_t100236324 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppHString __returnValue_unmarshaledAsString_marshaled = NULL;
		il2cpp_hresult_t hr = (returnValue)->IUriRuntimeClass_get_RawUri_m1303737506((&__returnValue_unmarshaledAsString_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);

		String_t* ___returnValue_unmarshaledAsString_marshaled_unmarshaled = NULL;
		___returnValue_unmarshaledAsString_marshaled_unmarshaled = il2cpp_codegen_marshal_hstring_result(__returnValue_unmarshaledAsString_marshaled);
		il2cpp_codegen_marshal_free_hstring(__returnValue_unmarshaledAsString_marshaled);
		__returnValue_unmarshaledAsString_marshaled = NULL;

		Uri_t100236324 * _returnValue_unmarshaledTemp = (Uri_t100236324*)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m1474792120(_returnValue_unmarshaledTemp, ___returnValue_unmarshaledAsString_marshaled_unmarshaled, NULL);
		_returnValue_unmarshaled = _returnValue_unmarshaledTemp;
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Uri>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1541693482 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t840858045->IVector_1_get_Size_m1541693482(&returnValue);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Uri>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m748183030 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m748183030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t3734068882* returnValue = NULL;
	hr = ____ivector_1_t840858045->IVector_1_GetView_m748183030(&returnValue);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<System.Uri>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m3867025885 (RuntimeObject* __this, Uri_t100236324 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m3867025885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IUriRuntimeClass_t921050115* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		String_t* ___value0AsString = Uri_get_OriginalString_m2551181575(___value0, NULL);
		Il2CppHString ____value0AsString_marshaled = NULL;
		if (___value0AsString == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("___value0AsString"), NULL, NULL);
		}

		DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value0AsStringNativeView, ___value0AsString);
		il2cpp::utils::Il2CppHStringReference ___value0AsStringHStringReference(___value0AsStringNativeView);
		____value0AsString_marshaled = ___value0AsStringHStringReference;
		il2cpp_hresult_t hr = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriRuntimeClassFactory_t1786313621()->IUriRuntimeClassFactory_CreateUri_m1347622952(____value0AsString_marshaled, (&____value0_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t840858045->IVector_1_IndexOf_m3867025885(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Uri>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m2446451012 (RuntimeObject* __this, uint32_t ___index0, Uri_t100236324 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m2446451012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IUriRuntimeClass_t921050115* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		String_t* ___value1AsString = Uri_get_OriginalString_m2551181575(___value1, NULL);
		Il2CppHString ____value1AsString_marshaled = NULL;
		if (___value1AsString == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("___value1AsString"), NULL, NULL);
		}

		DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value1AsStringNativeView, ___value1AsString);
		il2cpp::utils::Il2CppHStringReference ___value1AsStringHStringReference(___value1AsStringNativeView);
		____value1AsString_marshaled = ___value1AsStringHStringReference;
		il2cpp_hresult_t hr = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriRuntimeClassFactory_t1786313621()->IUriRuntimeClassFactory_CreateUri_m1347622952(____value1AsString_marshaled, (&____value1_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t840858045->IVector_1_SetAt_m2446451012(___index0, ____value1_marshaled);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Uri>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m697980859 (RuntimeObject* __this, uint32_t ___index0, Uri_t100236324 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m697980859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IUriRuntimeClass_t921050115* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		String_t* ___value1AsString = Uri_get_OriginalString_m2551181575(___value1, NULL);
		Il2CppHString ____value1AsString_marshaled = NULL;
		if (___value1AsString == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("___value1AsString"), NULL, NULL);
		}

		DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value1AsStringNativeView, ___value1AsString);
		il2cpp::utils::Il2CppHStringReference ___value1AsStringHStringReference(___value1AsStringNativeView);
		____value1AsString_marshaled = ___value1AsStringHStringReference;
		il2cpp_hresult_t hr = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriRuntimeClassFactory_t1786313621()->IUriRuntimeClassFactory_CreateUri_m1347622952(____value1AsString_marshaled, (&____value1_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t840858045->IVector_1_InsertAt_m697980859(___index0, ____value1_marshaled);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Uri>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m4032724530 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t840858045->IVector_1_RemoveAt_m4032724530(___index0);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Uri>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2334270570 (RuntimeObject* __this, Uri_t100236324 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m2334270570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IUriRuntimeClass_t921050115* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		String_t* ___value0AsString = Uri_get_OriginalString_m2551181575(___value0, NULL);
		Il2CppHString ____value0AsString_marshaled = NULL;
		if (___value0AsString == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("___value0AsString"), NULL, NULL);
		}

		DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value0AsStringNativeView, ___value0AsString);
		il2cpp::utils::Il2CppHStringReference ___value0AsStringHStringReference(___value0AsStringNativeView);
		____value0AsString_marshaled = ___value0AsStringHStringReference;
		il2cpp_hresult_t hr = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriRuntimeClassFactory_t1786313621()->IUriRuntimeClassFactory_CreateUri_m1347622952(____value0AsString_marshaled, (&____value0_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t840858045->IVector_1_Append_m2334270570(____value0_marshaled);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Uri>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2604786809 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t840858045->IVector_1_RemoveAtEnd_m2604786809();
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<System.Uri>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m902403216 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t840858045->IVector_1_Clear_m902403216();
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<System.Uri>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3924300725 (RuntimeObject* __this, uint32_t ___startIndex0, UriU5BU5D_t673446605* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3924300725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IUriRuntimeClass_t921050115** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IUriRuntimeClass_t921050115*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IUriRuntimeClass_t921050115*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t840858045->IVector_1_GetMany_m3924300725(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			Uri_t100236324 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				Il2CppHString ______items1_marshaled_i__unmarshaledAsString_marshaled = NULL;
				il2cpp_hresult_t hr = ((____items1_marshaled)[i])->IUriRuntimeClass_get_RawUri_m1303737506((&______items1_marshaled_i__unmarshaledAsString_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);

				String_t* _______items1_marshaled_i__unmarshaledAsString_marshaled_unmarshaled = NULL;
				_______items1_marshaled_i__unmarshaledAsString_marshaled_unmarshaled = il2cpp_codegen_marshal_hstring_result(______items1_marshaled_i__unmarshaledAsString_marshaled);
				il2cpp_codegen_marshal_free_hstring(______items1_marshaled_i__unmarshaledAsString_marshaled);
				______items1_marshaled_i__unmarshaledAsString_marshaled = NULL;

				Uri_t100236324 * _____items1_marshaled_i__unmarshaledTemp = (Uri_t100236324*)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
				Uri__ctor_m1474792120(_____items1_marshaled_i__unmarshaledTemp, _______items1_marshaled_i__unmarshaledAsString_marshaled_unmarshaled, NULL);
				_____items1_marshaled_i__unmarshaled = _____items1_marshaled_i__unmarshaledTemp;
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<System.Uri>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3525453833 (RuntimeObject* __this, UriU5BU5D_t673446605* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m3525453833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t840858045* ____ivector_1_t840858045 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t840858045::IID, reinterpret_cast<void**>(&____ivector_1_t840858045));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IUriRuntimeClass_t921050115** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IUriRuntimeClass_t921050115*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				String_t* ___items0_itemAsString = Uri_get_OriginalString_m2551181575((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)), NULL);
				Il2CppHString ____items0_itemAsString_marshaled = NULL;
				if (___items0_itemAsString == NULL)
				{
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("___items0_itemAsString"), NULL, NULL);
				}

				DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___items0_itemAsStringNativeView, ___items0_itemAsString);
				il2cpp::utils::Il2CppHStringReference ___items0_itemAsStringHStringReference(___items0_itemAsStringNativeView);
				____items0_itemAsString_marshaled = ___items0_itemAsStringHStringReference;
				il2cpp_hresult_t hr = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriRuntimeClassFactory_t1786313621()->IUriRuntimeClassFactory_CreateUri_m1347622952(____items0_itemAsString_marshaled, (&(____items0_marshaled)[i]));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t840858045->IVector_1_ReplaceAll_m3525453833(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t840858045->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// T Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m2474823143 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m2474823143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISimpleHapticsControllerFeedback_t2199416581* returnValue = NULL;
	hr = ____ivector_1_t2940038302->IVector_1_GetAt_m2474823143(___index0, &returnValue);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m2373564315 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2940038302->IVector_1_get_Size_m2373564315(&returnValue);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2396989032 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2396989032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t1538281843* returnValue = NULL;
	hr = ____ivector_1_t2940038302->IVector_1_GetView_m2396989032(&returnValue);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m543208854 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISimpleHapticsControllerFeedback_t2199416581>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2940038302->IVector_1_IndexOf_m543208854(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m814819286 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISimpleHapticsControllerFeedback_t2199416581>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2940038302->IVector_1_SetAt_m814819286(___index0, ____value1_marshaled);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m2143850214 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISimpleHapticsControllerFeedback_t2199416581>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2940038302->IVector_1_InsertAt_m2143850214(___index0, ____value1_marshaled);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1296683806 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2940038302->IVector_1_RemoveAt_m1296683806(___index0);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2022764008 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISimpleHapticsControllerFeedback_t2199416581>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2940038302->IVector_1_Append_m2022764008(____value0_marshaled);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m878530500 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2940038302->IVector_1_RemoveAtEnd_m878530500();
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1675326544 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2940038302->IVector_1_Clear_m1675326544();
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m3259563266 (RuntimeObject* __this, uint32_t ___startIndex0, ISimpleHapticsControllerFeedbackU5BU5D_t2466915144* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m3259563266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISimpleHapticsControllerFeedback_t2199416581** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISimpleHapticsControllerFeedback_t2199416581*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISimpleHapticsControllerFeedback_t2199416581*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2940038302->IVector_1_GetMany_m3259563266(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m757258633 (RuntimeObject* __this, ISimpleHapticsControllerFeedbackU5BU5D_t2466915144* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2940038302* ____ivector_1_t2940038302 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2940038302::IID, reinterpret_cast<void**>(&____ivector_1_t2940038302));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISimpleHapticsControllerFeedback_t2199416581** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISimpleHapticsControllerFeedback_t2199416581*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<ISimpleHapticsControllerFeedback_t2199416581>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2940038302->IVector_1_ReplaceAll_m757258633(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2940038302->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR SimpleHapticsControllerFeedback_t913461083 * IVector_1_GetAt_m2453859029 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m2453859029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISimpleHapticsControllerFeedback_t2199416581* returnValue = NULL;
	hr = ____ivector_1_t1654082804->IVector_1_GetAt_m2453859029(___index0, &returnValue);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SimpleHapticsControllerFeedback_t913461083 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SimpleHapticsControllerFeedback_t913461083>(returnValue, SimpleHapticsControllerFeedback_t913461083_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m1654407398 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1654082804->IVector_1_get_Size_m1654407398(&returnValue);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1625647690 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1625647690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t252326345* returnValue = NULL;
	hr = ____ivector_1_t1654082804->IVector_1_GetView_m1625647690(&returnValue);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2760763487 (RuntimeObject* __this, SimpleHapticsControllerFeedback_t913461083 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____isimpleHapticsControllerFeedback_t2199416581();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t1654082804->IVector_1_IndexOf_m2760763487(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m1760220849 (RuntimeObject* __this, uint32_t ___index0, SimpleHapticsControllerFeedback_t913461083 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____isimpleHapticsControllerFeedback_t2199416581();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1654082804->IVector_1_SetAt_m1760220849(___index0, ____value1_marshaled);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1229330134 (RuntimeObject* __this, uint32_t ___index0, SimpleHapticsControllerFeedback_t913461083 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____isimpleHapticsControllerFeedback_t2199416581();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1654082804->IVector_1_InsertAt_m1229330134(___index0, ____value1_marshaled);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3723240283 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1654082804->IVector_1_RemoveAt_m3723240283(___index0);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2989623206 (RuntimeObject* __this, SimpleHapticsControllerFeedback_t913461083 * ___value0, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____isimpleHapticsControllerFeedback_t2199416581();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1654082804->IVector_1_Append_m2989623206(____value0_marshaled);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m105895202 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1654082804->IVector_1_RemoveAtEnd_m105895202();
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m314610285 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1654082804->IVector_1_Clear_m314610285();
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m332545167 (RuntimeObject* __this, uint32_t ___startIndex0, SimpleHapticsControllerFeedbackU5BU5D_t1558149338* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m332545167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISimpleHapticsControllerFeedback_t2199416581** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISimpleHapticsControllerFeedback_t2199416581*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISimpleHapticsControllerFeedback_t2199416581*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1654082804->IVector_1_GetMany_m332545167(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			SimpleHapticsControllerFeedback_t913461083 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SimpleHapticsControllerFeedback_t913461083>((____items1_marshaled)[i], SimpleHapticsControllerFeedback_t913461083_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3471145194 (RuntimeObject* __this, SimpleHapticsControllerFeedbackU5BU5D_t1558149338* ___items0, const RuntimeMethod* method)
{
	IVector_1_t1654082804* ____ivector_1_t1654082804 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1654082804::IID, reinterpret_cast<void**>(&____ivector_1_t1654082804));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISimpleHapticsControllerFeedback_t2199416581** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISimpleHapticsControllerFeedback_t2199416581*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				(____items0_marshaled)[i] = ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->get_____isimpleHapticsControllerFeedback_t2199416581();
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1654082804->IVector_1_ReplaceAll_m3471145194(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t1654082804->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m3687365220 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3687365220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IWwwFormUrlDecoderEntry_t2943299970* returnValue = NULL;
	hr = ____ivector_1_t3683921691->IVector_1_GetAt_m3687365220(___index0, &returnValue);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m853395603 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3683921691->IVector_1_get_Size_m853395603(&returnValue);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2518531823 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2518531823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2282165232* returnValue = NULL;
	hr = ____ivector_1_t3683921691->IVector_1_GetView_m2518531823(&returnValue);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m125330836 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3683921691->IVector_1_IndexOf_m125330836(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m314985913 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_SetAt_m314985913(___index0, ____value1_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1485467707 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_InsertAt_m1485467707(___index0, ____value1_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m2725070673 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_RemoveAt_m2725070673(___index0);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m4022682317 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_Append_m4022682317(____value0_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m535504839 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_RemoveAtEnd_m535504839();
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2360775652 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_Clear_m2360775652();
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m569725914 (RuntimeObject* __this, uint32_t ___startIndex0, IWwwFormUrlDecoderEntryU5BU5D_t40345143* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m569725914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IWwwFormUrlDecoderEntry_t2943299970** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IWwwFormUrlDecoderEntry_t2943299970*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IWwwFormUrlDecoderEntry_t2943299970*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3683921691->IVector_1_GetMany_m569725914(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2534884464 (RuntimeObject* __this, IWwwFormUrlDecoderEntryU5BU5D_t40345143* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3683921691* ____ivector_1_t3683921691 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3683921691::IID, reinterpret_cast<void**>(&____ivector_1_t3683921691));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	IWwwFormUrlDecoderEntry_t2943299970** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<IWwwFormUrlDecoderEntry_t2943299970*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3683921691->IVector_1_ReplaceAll_m2534884464(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3683921691->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Point_t4164953539  IVector_1_GetAt_m2330330105 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953539  returnValue = {};
	hr = ____ivector_1_t610607964->IVector_1_GetAt_m2330330105(___index0, &returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m59889375 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t610607964->IVector_1_get_Size_m59889375(&returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m118185472 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m118185472_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t3503818801* returnValue = NULL;
	hr = ____ivector_1_t610607964->IVector_1_GetView_m118185472(&returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m428066000 (RuntimeObject* __this, Point_t4164953539  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t610607964->IVector_1_IndexOf_m428066000(___value0, ___index1, &returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m565528379 (RuntimeObject* __this, uint32_t ___index0, Point_t4164953539  ___value1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_SetAt_m565528379(___index0, ___value1);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3604836490 (RuntimeObject* __this, uint32_t ___index0, Point_t4164953539  ___value1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_InsertAt_m3604836490(___index0, ___value1);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1853546183 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_RemoveAt_m1853546183(___index0);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m195984872 (RuntimeObject* __this, Point_t4164953539  ___value0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_Append_m195984872(___value0);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m4286336640 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_RemoveAtEnd_m4286336640();
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2273683721 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_Clear_m2273683721();
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m4242153011 (RuntimeObject* __this, uint32_t ___startIndex0, PointU5BU5D_t724808658* ___items1, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Point_t4164953539 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Point_t4164953539 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Point_t4164953539 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t610607964->IVector_1_GetMany_m4242153011(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Point>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2759782552 (RuntimeObject* __this, PointU5BU5D_t724808658* ___items0, const RuntimeMethod* method)
{
	IVector_1_t610607964* ____ivector_1_t610607964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t610607964::IID, reinterpret_cast<void**>(&____ivector_1_t610607964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Point_t4164953539 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<Point_t4164953539 *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t610607964->IVector_1_ReplaceAll_m2759782552(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t610607964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Rect_t2695113487  IVector_1_GetAt_m3545656912 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113487  returnValue = {};
	hr = ____ivector_1_t3435735208->IVector_1_GetAt_m3545656912(___index0, &returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m2774852035 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3435735208->IVector_1_get_Size_m2774852035(&returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m3695632509 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m3695632509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2033978749* returnValue = NULL;
	hr = ____ivector_1_t3435735208->IVector_1_GetView_m3695632509(&returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2583104291 (RuntimeObject* __this, Rect_t2695113487  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3435735208->IVector_1_IndexOf_m2583104291(___value0, ___index1, &returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m661546338 (RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_SetAt_m661546338(___index0, ___value1);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1857322035 (RuntimeObject* __this, uint32_t ___index0, Rect_t2695113487  ___value1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_InsertAt_m1857322035(___index0, ___value1);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3994675881 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_RemoveAt_m3994675881(___index0);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m4126265023 (RuntimeObject* __this, Rect_t2695113487  ___value0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_Append_m4126265023(___value0);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m298642047 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_RemoveAtEnd_m298642047();
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m26527518 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_Clear_m26527518();
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m476750240 (RuntimeObject* __this, uint32_t ___startIndex0, RectU5BU5D_t5657558* ___items1, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Rect_t2695113487 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Rect_t2695113487 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Rect_t2695113487 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3435735208->IVector_1_GetMany_m476750240(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Rect>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2673034237 (RuntimeObject* __this, RectU5BU5D_t5657558* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3435735208* ____ivector_1_t3435735208 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3435735208::IID, reinterpret_cast<void**>(&____ivector_1_t3435735208));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Rect_t2695113487 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<Rect_t2695113487 *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t3435735208->IVector_1_ReplaceAll_m2673034237(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3435735208->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR Size_t550917638  IVector_1_GetAt_m2699244792 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917638  returnValue = {};
	hr = ____ivector_1_t1291539359->IVector_1_GetAt_m2699244792(___index0, &returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m4157668882 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1291539359->IVector_1_get_Size_m4157668882(&returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1943501597 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1943501597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t4184750196* returnValue = NULL;
	hr = ____ivector_1_t1291539359->IVector_1_GetView_m1943501597(&returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m3701100474 (RuntimeObject* __this, Size_t550917638  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t1291539359->IVector_1_IndexOf_m3701100474(___value0, ___index1, &returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3412621482 (RuntimeObject* __this, uint32_t ___index0, Size_t550917638  ___value1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_SetAt_m3412621482(___index0, ___value1);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3860348037 (RuntimeObject* __this, uint32_t ___index0, Size_t550917638  ___value1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_InsertAt_m3860348037(___index0, ___value1);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m394387669 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_RemoveAt_m394387669(___index0);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2019222254 (RuntimeObject* __this, Size_t550917638  ___value0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_Append_m2019222254(___value0);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2572115469 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_RemoveAtEnd_m2572115469();
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m783567046 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_Clear_m783567046();
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m4076800509 (RuntimeObject* __this, uint32_t ___startIndex0, SizeU5BU5D_t1671914275* ___items1, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Size_t550917638 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Size_t550917638 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Size_t550917638 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1291539359->IVector_1_GetMany_m4076800509(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.Foundation.Size>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m4107471252 (RuntimeObject* __this, SizeU5BU5D_t1671914275* ___items0, const RuntimeMethod* method)
{
	IVector_1_t1291539359* ____ivector_1_t1291539359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1291539359::IID, reinterpret_cast<void**>(&____ivector_1_t1291539359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	Size_t550917638 * ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = reinterpret_cast<Size_t550917638 *>((___items0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	hr = ____ivector_1_t1291539359->IVector_1_ReplaceAll_m4107471252(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t1291539359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m3175655389 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3175655389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState2_t2977437931* returnValue = NULL;
	hr = ____ivector_1_t3718059652->IVector_1_GetAt_m3175655389(___index0, &returnValue);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3172301122 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3718059652->IVector_1_get_Size_m3172301122(&returnValue);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m2176928854 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m2176928854_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t2316303193* returnValue = NULL;
	hr = ____ivector_1_t3718059652->IVector_1_GetView_m2176928854(&returnValue);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m876780403 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t3718059652->IVector_1_IndexOf_m876780403(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3594153116 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_SetAt_m3594153116(___index0, ____value1_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m1444518929 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_InsertAt_m1444518929(___index0, ____value1_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1302937041 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_RemoveAt_m1302937041(___index0);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m2941185074 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_Append_m2941185074(____value0_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2946446583 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_RemoveAtEnd_m2946446583();
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m1635201740 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_Clear_m1635201740();
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m2021061927 (RuntimeObject* __this, uint32_t ___startIndex0, ISpatialInteractionSourceState2U5BU5D_t3674212106* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m2021061927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState2_t2977437931** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState2_t2977437931*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState2_t2977437931*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t3718059652->IVector_1_GetMany_m2021061927(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2042354847 (RuntimeObject* __this, ISpatialInteractionSourceState2U5BU5D_t3674212106* ___items0, const RuntimeMethod* method)
{
	IVector_1_t3718059652* ____ivector_1_t3718059652 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t3718059652::IID, reinterpret_cast<void**>(&____ivector_1_t3718059652));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISpatialInteractionSourceState2_t2977437931** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState2_t2977437931*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t3718059652->IVector_1_ReplaceAll_m2042354847(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t3718059652->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetAt_m1946664100 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m1946664100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState_t1358829803* returnValue = NULL;
	hr = ____ivector_1_t2099451524->IVector_1_GetAt_m1946664100(___index0, &returnValue);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m3798462280 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2099451524->IVector_1_get_Size_m3798462280(&returnValue);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m891121390 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m891121390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t697695065* returnValue = NULL;
	hr = ____ivector_1_t2099451524->IVector_1_GetView_m891121390(&returnValue);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m2504506261 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t2099451524->IVector_1_IndexOf_m2504506261(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3979818183 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_SetAt_m3979818183(___index0, ____value1_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m996791195 (RuntimeObject* __this, uint32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value1))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value1)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value1_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value1_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value1);
		}
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_InsertAt_m996791195(___index0, ____value1_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value1' native representation
	if (____value1_marshaled != NULL)
	{
		(____value1_marshaled)->Release();
		____value1_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m3540886805 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_RemoveAt_m3540886805(___index0);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m4159068860 (RuntimeObject* __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_Append_m4159068860(____value0_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m1022091397 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_RemoveAtEnd_m1022091397();
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2343666422 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_Clear_m2343666422();
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m1098326929 (RuntimeObject* __this, uint32_t ___startIndex0, ISpatialInteractionSourceStateU5BU5D_t513935114* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m1098326929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState_t1358829803*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t2099451524->IVector_1_GetMany_m1098326929(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m3582663649 (RuntimeObject* __this, ISpatialInteractionSourceStateU5BU5D_t513935114* ___items0, const RuntimeMethod* method)
{
	IVector_1_t2099451524* ____ivector_1_t2099451524 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t2099451524::IID, reinterpret_cast<void**>(&____ivector_1_t2099451524));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				if (il2cpp_codegen_is_import_or_windows_runtime((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))))
				{
					il2cpp_hresult_t hr = ((Il2CppComObject *)(___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&(____items0_marshaled)[i]));
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);
				}
				else
				{
					(____items0_marshaled)[i] = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
				}
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t2099451524->IVector_1_ReplaceAll_m3582663649(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t2099451524->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items0_marshaled_CleanupLoopCount = (___items0 != NULL) ? (___items0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items0_marshaled_CleanupLoopCount); i++)
		{
			if ((____items0_marshaled)[i] != NULL)
			{
				((____items0_marshaled)[i])->Release();
				(____items0_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// T Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR SpatialInteractionSourceState_t1215688063 * IVector_1_GetAt_m686949258 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m686949258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState_t1358829803* returnValue = NULL;
	hr = ____ivector_1_t1956309784->IVector_1_GetAt_m686949258(___index0, &returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpatialInteractionSourceState_t1215688063 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceState_t1215688063>(returnValue, SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::get_Size()
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_get_Size_m535300163 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1956309784->IVector_1_get_Size_m535300163(&returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetView()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IVector_1_GetView_m1588427753 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1588427753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVectorView_1_t554553325* returnValue = NULL;
	hr = ____ivector_1_t1956309784->IVector_1_GetView_m1588427753(&returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Boolean Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::IndexOf(T,System.UInt32&)
extern "C" IL2CPP_METHOD_ATTR bool IVector_1_IndexOf_m1021089064 (RuntimeObject* __this, SpatialInteractionSourceState_t1215688063 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivector_1_t1956309784->IVector_1_IndexOf_m1021089064(____value0_marshaled, ___index1, &returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::SetAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_SetAt_m3738080061 (RuntimeObject* __this, uint32_t ___index0, SpatialInteractionSourceState_t1215688063 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_SetAt_m3738080061(___index0, ____value1_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::InsertAt(System.UInt32,T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_InsertAt_m3469030146 (RuntimeObject* __this, uint32_t ___index0, SpatialInteractionSourceState_t1215688063 * ___value1, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value1' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value1_marshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_marshaled = (___value1)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value1_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_InsertAt_m3469030146(___index0, ____value1_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::RemoveAt(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAt_m1514236569 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_RemoveAt_m1514236569(___index0);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::Append(T)
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Append_m65402885 (RuntimeObject* __this, SpatialInteractionSourceState_t1215688063 * ___value0, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_Append_m65402885(____value0_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::RemoveAtEnd()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_RemoveAtEnd_m2373934537 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_RemoveAtEnd_m2373934537();
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::Clear()
extern "C" IL2CPP_METHOD_ATTR void IVector_1_Clear_m2371066248 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_Clear_m2371066248();
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// System.UInt32 Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetMany(System.UInt32,T[])
extern "C" IL2CPP_METHOD_ATTR uint32_t IVector_1_GetMany_m4135776724 (RuntimeObject* __this, uint32_t ___startIndex0, SpatialInteractionSourceStateU5BU5D_t1865583014* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m4135776724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState_t1358829803*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivector_1_t1956309784->IVector_1_GetMany_m4135776724(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			SpatialInteractionSourceState_t1215688063 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceState_t1215688063>((____items1_marshaled)[i], SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
// System.Void Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::ReplaceAll(T[])
extern "C" IL2CPP_METHOD_ATTR void IVector_1_ReplaceAll_m2190095755 (RuntimeObject* __this, SpatialInteractionSourceStateU5BU5D_t1865583014* ___items0, const RuntimeMethod* method)
{
	IVector_1_t1956309784* ____ivector_1_t1956309784 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVector_1_t1956309784::IID, reinterpret_cast<void**>(&____ivector_1_t1956309784));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items0' to native representation
	uint32_t ____items0_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items0_marshaled = NULL;
	if (___items0 != NULL)
	{
		____items0_marshaledArraySize = static_cast<uint32_t>((___items0)->max_length);
		____items0_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items0_marshaledArraySize));
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items0_marshaledArraySize)); i++)
		{
			if ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)) != NULL)
			{
				(____items0_marshaled)[i] = ((___items0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)))->get_____ispatialInteractionSourceState_t1358829803();
			}
			else
			{
				(____items0_marshaled)[i] = NULL;
			}
		}
	}
	else
	{
		____items0_marshaledArraySize = 0;
		____items0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____ivector_1_t1956309784->IVector_1_ReplaceAll_m2190095755(____items0_marshaledArraySize, ____items0_marshaled);
	____ivector_1_t1956309784->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___items0' native representation
	if (____items0_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items0_marshaled);
		____items0_marshaled = NULL;
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
// System.Void Windows.Foundation.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1__ctor_m380207085_gshared (EventHandler_1_t39852124 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.EventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C" IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_m3884748090_gshared (EventHandler_1_t39852124 * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
			}
		}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// T Windows.Foundation.IReference`1<System.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m95326068 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1037206413* ____ireference_1_t1037206413 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1037206413::IID, reinterpret_cast<void**>(&____ireference_1_t1037206413));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1037206413->IReference_1_get_Value_m95326068(&returnValue);
	____ireference_1_t1037206413->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool IReference_1_get_Value_m774017165 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3645423686* ____ireference_1_t3645423686 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3645423686::IID, reinterpret_cast<void**>(&____ireference_1_t3645423686));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ireference_1_t3645423686->IReference_1_get_Value_m774017165(&returnValue);
	____ireference_1_t3645423686->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Byte>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint8_t IReference_1_get_Value_m3247461990 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t387464801* ____ireference_1_t387464801 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t387464801::IID, reinterpret_cast<void**>(&____ireference_1_t387464801));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint8_t returnValue = 0;
	hr = ____ireference_1_t387464801->IReference_1_get_Value_m3247461990(&returnValue);
	____ireference_1_t387464801->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Char>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar IReference_1_get_Value_m704688121 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2887628895* ____ireference_1_t2887628895 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2887628895::IID, reinterpret_cast<void**>(&____ireference_1_t2887628895));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppChar returnValue = 0;
	hr = ____ireference_1_t2887628895->IReference_1_get_Value_m704688121(&returnValue);
	____ireference_1_t2887628895->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.DateTimeOffset>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTimeOffset_t3229287507  IReference_1_get_Value_m2049683846 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m2049683846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t2482455932* ____ireference_1_t2482455932 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2482455932::IID, reinterpret_cast<void**>(&____ireference_1_t2482455932));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ireference_1_t2482455932->IReference_1_get_Value_m2049683846(&returnValue);
	____ireference_1_t2482455932->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DateTimeOffset_t3229287507  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	if ((returnValue).get_UniversalTime_0() < -504911232000000000 || (returnValue).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
	}

	DateTimeOffset_t3229287507  _returnValue_unmarshaledStaging;
	DateTime_t3738529785  _returnValue_unmarshaledDateTime;
	_returnValue_unmarshaledDateTime.set_dateData_44((returnValue).get_UniversalTime_0() + 504911232000000000);
	_returnValue_unmarshaledStaging.set_m_dateTime_2(_returnValue_unmarshaledDateTime);
	_returnValue_unmarshaledStaging.set_m_offsetMinutes_3(0);
	_returnValue_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&_returnValue_unmarshaledStaging), true, NULL);;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Double>::get_Value()
extern "C" IL2CPP_METHOD_ATTR double IReference_1_get_Value_m3861827098 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4142801084* ____ireference_1_t4142801084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4142801084::IID, reinterpret_cast<void**>(&____ireference_1_t4142801084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	double returnValue = 0.0;
	hr = ____ireference_1_t4142801084->IReference_1_get_Value_m3861827098(&returnValue);
	____ireference_1_t4142801084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Exception>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Exception_t * IReference_1_get_Value_m3319376935 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t689905674* ____ireference_1_t689905674 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t689905674::IID, reinterpret_cast<void**>(&____ireference_1_t689905674));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t689905674->IReference_1_get_Value_m3319376935(&returnValue);
	____ireference_1_t689905674->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Guid>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Guid_t  IReference_1_get_Value_m2917423479 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2446701312* ____ireference_1_t2446701312 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2446701312::IID, reinterpret_cast<void**>(&____ireference_1_t2446701312));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Guid_t  returnValue = {};
	hr = ____ireference_1_t2446701312->IReference_1_get_Value_m2917423479(&returnValue);
	____ireference_1_t2446701312->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int16_t IReference_1_get_Value_m3359388353 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1805988812* ____ireference_1_t1805988812 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1805988812::IID, reinterpret_cast<void**>(&____ireference_1_t1805988812));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int16_t returnValue = 0;
	hr = ____ireference_1_t1805988812->IReference_1_get_Value_m3359388353(&returnValue);
	____ireference_1_t1805988812->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1946804912 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2204114178* ____ireference_1_t2204114178 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2204114178::IID, reinterpret_cast<void**>(&____ireference_1_t2204114178));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2204114178->IReference_1_get_Value_m1946804912(&returnValue);
	____ireference_1_t2204114178->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int64_t IReference_1_get_Value_m197260093 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2989735729* ____ireference_1_t2989735729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2989735729::IID, reinterpret_cast<void**>(&____ireference_1_t2989735729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int64_t returnValue = 0;
	hr = ____ireference_1_t2989735729->IReference_1_get_Value_m197260093(&returnValue);
	____ireference_1_t2989735729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * IReference_1_get_Value_m3229386239 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m3229386239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t2333274589* ____ireference_1_t2333274589 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2333274589::IID, reinterpret_cast<void**>(&____ireference_1_t2333274589));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ireference_1_t2333274589->IReference_1_get_Value_m3229386239(&returnValue);
	____ireference_1_t2333274589->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Single>::get_Value()
extern "C" IL2CPP_METHOD_ATTR float IReference_1_get_Value_m1034221680 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t650435199* ____ireference_1_t650435199 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t650435199::IID, reinterpret_cast<void**>(&____ireference_1_t650435199));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	float returnValue = 0.0f;
	hr = ____ireference_1_t650435199->IReference_1_get_Value_m1034221680(&returnValue);
	____ireference_1_t650435199->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.String>::get_Value()
extern "C" IL2CPP_METHOD_ATTR String_t* IReference_1_get_Value_m4216510932 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1100619114* ____ireference_1_t1100619114 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1100619114::IID, reinterpret_cast<void**>(&____ireference_1_t1100619114));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ireference_1_t1100619114->IReference_1_get_Value_m4216510932(&returnValue);
	____ireference_1_t1100619114->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t881159249  IReference_1_get_Value_m2770668730 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t134327674* ____ireference_1_t134327674 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t134327674::IID, reinterpret_cast<void**>(&____ireference_1_t134327674));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t881159249  returnValue = {};
	hr = ____ireference_1_t134327674->IReference_1_get_Value_m2770668730(&returnValue);
	____ireference_1_t134327674->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Type>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Type_t * IReference_1_get_Value_m2081172832 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1737113185* ____ireference_1_t1737113185 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1737113185::IID, reinterpret_cast<void**>(&____ireference_1_t1737113185));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppWindowsRuntimeTypeName returnValue = Il2CppWindowsRuntimeTypeName();
	hr = ____ireference_1_t1737113185->IReference_1_get_Value_m2081172832(&returnValue);
	____ireference_1_t1737113185->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Type_t * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_type_from_native(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_delete_native_type(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt16>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint16_t IReference_1_get_Value_m1209658772 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1430893383* ____ireference_1_t1430893383 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1430893383::IID, reinterpret_cast<void**>(&____ireference_1_t1430893383));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ireference_1_t1430893383->IReference_1_get_Value_m1209658772(&returnValue);
	____ireference_1_t1430893383->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m1308423508 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1813230403* ____ireference_1_t1813230403 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1813230403::IID, reinterpret_cast<void**>(&____ireference_1_t1813230403));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t1813230403->IReference_1_get_Value_m1308423508(&returnValue);
	____ireference_1_t1813230403->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint64_t IReference_1_get_Value_m2294903021 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3387208517* ____ireference_1_t3387208517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3387208517::IID, reinterpret_cast<void**>(&____ireference_1_t3387208517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ireference_1_t3387208517->IReference_1_get_Value_m2294903021(&returnValue);
	____ireference_1_t3387208517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.DateTime>::get_Value()
extern "C" IL2CPP_METHOD_ATTR DateTime_t1679451545  IReference_1_get_Value_m1126360047 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t932619970* ____ireference_1_t932619970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t932619970::IID, reinterpret_cast<void**>(&____ireference_1_t932619970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ireference_1_t932619970->IReference_1_get_Value_m1126360047(&returnValue);
	____ireference_1_t932619970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR FoundationContract_t3651383009  IReference_1_get_Value_m919830547 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2904551434* ____ireference_1_t2904551434 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2904551434::IID, reinterpret_cast<void**>(&____ireference_1_t2904551434));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	FoundationContract_t3651383009  returnValue = {};
	hr = ____ireference_1_t2904551434->IReference_1_get_Value_m919830547(&returnValue);
	____ireference_1_t2904551434->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.HResult>::get_Value()
extern "C" IL2CPP_METHOD_ATTR HResult_t3073183193  IReference_1_get_Value_m3795436356 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2326351618* ____ireference_1_t2326351618 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2326351618::IID, reinterpret_cast<void**>(&____ireference_1_t2326351618));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	HResult_t3073183193  returnValue = {};
	hr = ____ireference_1_t2326351618->IReference_1_get_Value_m3795436356(&returnValue);
	____ireference_1_t2326351618->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m800375591 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1714021653* ____ireference_1_t1714021653 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1714021653::IID, reinterpret_cast<void**>(&____ireference_1_t1714021653));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t1714021653->IReference_1_get_Value_m800375591(&returnValue);
	____ireference_1_t1714021653->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m4241848242 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2809364818* ____ireference_1_t2809364818 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2809364818::IID, reinterpret_cast<void**>(&____ireference_1_t2809364818));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2809364818->IReference_1_get_Value_m4241848242(&returnValue);
	____ireference_1_t2809364818->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m3959947048 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2091189898* ____ireference_1_t2091189898 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2091189898::IID, reinterpret_cast<void**>(&____ireference_1_t2091189898));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2091189898->IReference_1_get_Value_m3959947048(&returnValue);
	____ireference_1_t2091189898->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_t4164953539  IReference_1_get_Value_m2248936515 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3418121964* ____ireference_1_t3418121964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3418121964::IID, reinterpret_cast<void**>(&____ireference_1_t3418121964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953539  returnValue = {};
	hr = ____ireference_1_t3418121964->IReference_1_get_Value_m2248936515(&returnValue);
	____ireference_1_t3418121964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Point_t4164953540  IReference_1_get_Value_m2248936516 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3418121965* ____ireference_1_t3418121965 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3418121965::IID, reinterpret_cast<void**>(&____ireference_1_t3418121965));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953540  returnValue = {};
	hr = ____ireference_1_t3418121965->IReference_1_get_Value_m2248936516(&returnValue);
	____ireference_1_t3418121965->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m4223149003 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2284596779* ____ireference_1_t2284596779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2284596779::IID, reinterpret_cast<void**>(&____ireference_1_t2284596779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2284596779->IReference_1_get_Value_m4223149003(&returnValue);
	____ireference_1_t2284596779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_t2695113488  IReference_1_get_Value_m2582268702 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1948281912* ____ireference_1_t1948281912 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1948281912::IID, reinterpret_cast<void**>(&____ireference_1_t1948281912));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113488  returnValue = {};
	hr = ____ireference_1_t1948281912->IReference_1_get_Value_m2582268702(&returnValue);
	____ireference_1_t1948281912->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Rect_t2695113487  IReference_1_get_Value_m2582268703 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1948281913* ____ireference_1_t1948281913 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1948281913::IID, reinterpret_cast<void**>(&____ireference_1_t1948281913));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113487  returnValue = {};
	hr = ____ireference_1_t1948281913->IReference_1_get_Value_m2582268703(&returnValue);
	____ireference_1_t1948281913->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_t550917639  IReference_1_get_Value_m3618386193 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4099053359* ____ireference_1_t4099053359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4099053359::IID, reinterpret_cast<void**>(&____ireference_1_t4099053359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917639  returnValue = {};
	hr = ____ireference_1_t4099053359->IReference_1_get_Value_m3618386193(&returnValue);
	____ireference_1_t4099053359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Size_t550917638  IReference_1_get_Value_m3618386194 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4099053360* ____ireference_1_t4099053360 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4099053360::IID, reinterpret_cast<void**>(&____ireference_1_t4099053360));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917638  returnValue = {};
	hr = ____ireference_1_t4099053360->IReference_1_get_Value_m3618386194(&returnValue);
	____ireference_1_t4099053360->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TimeSpan_t1755640982  IReference_1_get_Value_m3415674831 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1008809407* ____ireference_1_t1008809407 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1008809407::IID, reinterpret_cast<void**>(&____ireference_1_t1008809407));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t1755640982  returnValue = {};
	hr = ____ireference_1_t1008809407->IReference_1_get_Value_m3415674831(&returnValue);
	____ireference_1_t1008809407->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>::get_Value()
extern "C" IL2CPP_METHOD_ATTR UniversalApiContract_t3367004861  IReference_1_get_Value_m2468794183 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2620173286* ____ireference_1_t2620173286 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2620173286::IID, reinterpret_cast<void**>(&____ireference_1_t2620173286));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	UniversalApiContract_t3367004861  returnValue = {};
	hr = ____ireference_1_t2620173286->IReference_1_get_Value_m2468794183(&returnValue);
	____ireference_1_t2620173286->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m2990591067 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1526750185* ____ireference_1_t1526750185 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1526750185::IID, reinterpret_cast<void**>(&____ireference_1_t1526750185));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1526750185->IReference_1_get_Value_m2990591067(&returnValue);
	____ireference_1_t1526750185->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
extern "C" IL2CPP_METHOD_ATTR TypeName_t4208425108  IReference_1_get_Value_m3274607421 (RuntimeObject* __this, const RuntimeMethod* method)
{


	IReference_1_t3461593533* ____ireference_1_t3461593533 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3461593533::IID, reinterpret_cast<void**>(&____ireference_1_t3461593533));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TypeName_t4208425108_marshaled_windows_runtime returnValue = {};
	hr = ____ireference_1_t3461593533->IReference_1_get_Value_m3274607421(&returnValue);
	____ireference_1_t3461593533->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeName_t4208425108  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	TypeName_t4208425108_marshal_windows_runtime_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	TypeName_t4208425108_marshal_windows_runtime_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
