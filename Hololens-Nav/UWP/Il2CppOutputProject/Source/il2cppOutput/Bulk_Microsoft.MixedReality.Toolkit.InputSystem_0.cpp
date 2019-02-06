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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep[]
struct RayStepU5BU5D_t3706455741;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityController
struct IMixedRealityController_t849956740;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t4060034189;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.ICursorModifier
struct ICursorModifier_t3480281113;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityCursor
struct IMixedRealityCursor_t3836960786;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource
struct IMixedRealityInputSource_t86469781;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t758185949;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t3090763169;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t1197427388;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IPointerResult
struct IPointerResult_t1929448974;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t1978348158;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_t1408459405;
// Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer
struct GenericPointer_t429146605;
// Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource
struct BaseGenericInputSource_t2600286248;
// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose
struct DebugInteractionSourcePose_t1033395397;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t253793507;

extern RuntimeClass* IBaseRayStabilizer_t1978348158_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityController_t849956740_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityEventSource_t3753294479_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityFocusProvider_t770724555_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityGazeProvider_t2162932150_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSource_t86469781_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityInputSystem_t758185949_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointerU5BU5D_t1197427388_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityPointer_t3090763169_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* RayStepU5BU5D_t3706455741_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m176711023_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m3822285555_RuntimeMethod_var;
extern const uint32_t BaseGenericInputSource_Equals_m1165034354_MetadataUsageId;
extern const uint32_t BaseGenericInputSource_Equals_m906800837_MetadataUsageId;
extern const uint32_t BaseGenericInputSource__ctor_m3514132871_MetadataUsageId;
extern const uint32_t DebugInteractionSourcePose_TryGetPointerRay_m3859713426_MetadataUsageId;
extern const uint32_t DebugInteractionSourcePose__ctor_m4032196296_MetadataUsageId;
extern const uint32_t GenericPointer_Equals_m1638976740_MetadataUsageId;
extern const uint32_t GenericPointer_Equals_m4289535493_MetadataUsageId;
extern const uint32_t GenericPointer_OnPreRaycast_m3597384523_MetadataUsageId;
extern const uint32_t GenericPointer_TryGetPointerPosition_m2768788553_MetadataUsageId;
extern const uint32_t GenericPointer_TryGetPointerRotation_m3389968377_MetadataUsageId;
extern const uint32_t GenericPointer__ctor_m2700389872_MetadataUsageId;
extern const uint32_t GenericPointer_set_Controller_m818613876_MetadataUsageId;

struct RayStepU5BU5D_t3706455741;
struct IMixedRealityPointerU5BU5D_t1197427388;
struct LayerMaskU5BU5D_t253793507;


#ifndef U3CMODULEU3E_T692745566_H
#define U3CMODULEU3E_T692745566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745566 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745566_H
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
#ifndef BASEGENERICINPUTSOURCE_T2600286248_H
#define BASEGENERICINPUTSOURCE_T2600286248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource
struct  BaseGenericInputSource_t2600286248  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::<Pointers>k__BackingField
	IMixedRealityPointerU5BU5D_t1197427388* ___U3CPointersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2600286248, ___U3CSourceIdU3Ek__BackingField_0)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_0() const { return ___U3CSourceIdU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_0() { return &___U3CSourceIdU3Ek__BackingField_0; }
	inline void set_U3CSourceIdU3Ek__BackingField_0(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2600286248, ___U3CSourceNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_1() const { return ___U3CSourceNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_1() { return &___U3CSourceNameU3Ek__BackingField_1; }
	inline void set_U3CSourceNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPointersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseGenericInputSource_t2600286248, ___U3CPointersU3Ek__BackingField_2)); }
	inline IMixedRealityPointerU5BU5D_t1197427388* get_U3CPointersU3Ek__BackingField_2() const { return ___U3CPointersU3Ek__BackingField_2; }
	inline IMixedRealityPointerU5BU5D_t1197427388** get_address_of_U3CPointersU3Ek__BackingField_2() { return &___U3CPointersU3Ek__BackingField_2; }
	inline void set_U3CPointersU3Ek__BackingField_2(IMixedRealityPointerU5BU5D_t1197427388* value)
	{
		___U3CPointersU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointersU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEGENERICINPUTSOURCE_T2600286248_H
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
#ifndef DEBUGINTERACTIONSOURCESTATE_T66132725_H
#define DEBUGINTERACTIONSOURCESTATE_T66132725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
struct  DebugInteractionSourceState_t66132725 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::Pressed
	bool ___Pressed_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::Grasped
	bool ___Grasped_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::MenuPressed
	bool ___MenuPressed_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::SelectPressed
	bool ___SelectPressed_3;
	// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState::SourcePose
	DebugInteractionSourcePose_t1033395397 * ___SourcePose_4;

public:
	inline static int32_t get_offset_of_Pressed_0() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___Pressed_0)); }
	inline bool get_Pressed_0() const { return ___Pressed_0; }
	inline bool* get_address_of_Pressed_0() { return &___Pressed_0; }
	inline void set_Pressed_0(bool value)
	{
		___Pressed_0 = value;
	}

	inline static int32_t get_offset_of_Grasped_1() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___Grasped_1)); }
	inline bool get_Grasped_1() const { return ___Grasped_1; }
	inline bool* get_address_of_Grasped_1() { return &___Grasped_1; }
	inline void set_Grasped_1(bool value)
	{
		___Grasped_1 = value;
	}

	inline static int32_t get_offset_of_MenuPressed_2() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___MenuPressed_2)); }
	inline bool get_MenuPressed_2() const { return ___MenuPressed_2; }
	inline bool* get_address_of_MenuPressed_2() { return &___MenuPressed_2; }
	inline void set_MenuPressed_2(bool value)
	{
		___MenuPressed_2 = value;
	}

	inline static int32_t get_offset_of_SelectPressed_3() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___SelectPressed_3)); }
	inline bool get_SelectPressed_3() const { return ___SelectPressed_3; }
	inline bool* get_address_of_SelectPressed_3() { return &___SelectPressed_3; }
	inline void set_SelectPressed_3(bool value)
	{
		___SelectPressed_3 = value;
	}

	inline static int32_t get_offset_of_SourcePose_4() { return static_cast<int32_t>(offsetof(DebugInteractionSourceState_t66132725, ___SourcePose_4)); }
	inline DebugInteractionSourcePose_t1033395397 * get_SourcePose_4() const { return ___SourcePose_4; }
	inline DebugInteractionSourcePose_t1033395397 ** get_address_of_SourcePose_4() { return &___SourcePose_4; }
	inline void set_SourcePose_4(DebugInteractionSourcePose_t1033395397 * value)
	{
		___SourcePose_4 = value;
		Il2CppCodeGenWriteBarrier((&___SourcePose_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
struct DebugInteractionSourceState_t66132725_marshaled_pinvoke
{
	int32_t ___Pressed_0;
	int32_t ___Grasped_1;
	int32_t ___MenuPressed_2;
	int32_t ___SelectPressed_3;
	DebugInteractionSourcePose_t1033395397 * ___SourcePose_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
struct DebugInteractionSourceState_t66132725_marshaled_com
{
	int32_t ___Pressed_0;
	int32_t ___Grasped_1;
	int32_t ___MenuPressed_2;
	int32_t ___SelectPressed_3;
	DebugInteractionSourcePose_t1033395397 * ___SourcePose_4;
};
#endif // DEBUGINTERACTIONSOURCESTATE_T66132725_H
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
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef RAYSTEP_T790153972_H
#define RAYSTEP_T790153972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep
struct  RayStep_t790153972 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::<Origin>k__BackingField
	Vector3_t3722313464  ___U3COriginU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::<Terminus>k__BackingField
	Vector3_t3722313464  ___U3CTerminusU3Ek__BackingField_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::<Direction>k__BackingField
	Vector3_t3722313464  ___U3CDirectionU3Ek__BackingField_2;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RayStep_t790153972, ___U3COriginU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3COriginU3Ek__BackingField_0() const { return ___U3COriginU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3COriginU3Ek__BackingField_0() { return &___U3COriginU3Ek__BackingField_0; }
	inline void set_U3COriginU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3COriginU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RayStep_t790153972, ___U3CTerminusU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CTerminusU3Ek__BackingField_1() const { return ___U3CTerminusU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CTerminusU3Ek__BackingField_1() { return &___U3CTerminusU3Ek__BackingField_1; }
	inline void set_U3CTerminusU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CTerminusU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RayStep_t790153972, ___U3CDirectionU3Ek__BackingField_2)); }
	inline Vector3_t3722313464  get_U3CDirectionU3Ek__BackingField_2() const { return ___U3CDirectionU3Ek__BackingField_2; }
	inline Vector3_t3722313464 * get_address_of_U3CDirectionU3Ek__BackingField_2() { return &___U3CDirectionU3Ek__BackingField_2; }
	inline void set_U3CDirectionU3Ek__BackingField_2(Vector3_t3722313464  value)
	{
		___U3CDirectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_t790153972, ___U3CLengthU3Ek__BackingField_3)); }
	inline float get_U3CLengthU3Ek__BackingField_3() const { return ___U3CLengthU3Ek__BackingField_3; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_3() { return &___U3CLengthU3Ek__BackingField_3; }
	inline void set_U3CLengthU3Ek__BackingField_3(float value)
	{
		___U3CLengthU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYSTEP_T790153972_H
#ifndef RAYCASTMODETYPE_T2113777595_H
#define RAYCASTMODETYPE_T2113777595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RaycastModeType
struct  RaycastModeType_t2113777595 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RaycastModeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastModeType_t2113777595, ___value___2)); }
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
#endif // RAYCASTMODETYPE_T2113777595_H
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
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef GENERICPOINTER_T429146605_H
#define GENERICPOINTER_T429146605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer
struct  GenericPointer_t429146605  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::controller
	RuntimeObject* ___controller_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerId>k__BackingField
	uint32_t ___U3CPointerIdU3Ek__BackingField_1;
	// System.String Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerName>k__BackingField
	String_t* ___U3CPointerNameU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::inputSourceParent
	RuntimeObject* ___inputSourceParent_3;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityCursor Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.ICursorModifier Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<TeleportHotSpot>k__BackingField
	RuntimeObject* ___U3CTeleportHotSpotU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<IsInteractionEnabled>k__BackingField
	bool ___U3CIsInteractionEnabledU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_8;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerExtent>k__BackingField
	float ___U3CPointerExtentU3Ek__BackingField_9;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<Rays>k__BackingField
	RayStepU5BU5D_t3706455741* ___U3CRaysU3Ek__BackingField_10;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_t253793507* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_12;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IPointerResult Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_14;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RaycastModeType Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<RaycastMode>k__BackingField
	int32_t ___U3CRaycastModeU3Ek__BackingField_15;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<SphereCastRadius>k__BackingField
	float ___U3CSphereCastRadiusU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::<PointerOrientation>k__BackingField
	float ___U3CPointerOrientationU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___controller_0), value);
	}

	inline static int32_t get_offset_of_U3CPointerIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerIdU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPointerIdU3Ek__BackingField_1() const { return ___U3CPointerIdU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPointerIdU3Ek__BackingField_1() { return &___U3CPointerIdU3Ek__BackingField_1; }
	inline void set_U3CPointerIdU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPointerIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPointerNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPointerNameU3Ek__BackingField_2() const { return ___U3CPointerNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPointerNameU3Ek__BackingField_2() { return &___U3CPointerNameU3Ek__BackingField_2; }
	inline void set_U3CPointerNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPointerNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_inputSourceParent_3() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___inputSourceParent_3)); }
	inline RuntimeObject* get_inputSourceParent_3() const { return ___inputSourceParent_3; }
	inline RuntimeObject** get_address_of_inputSourceParent_3() { return &___inputSourceParent_3; }
	inline void set_inputSourceParent_3(RuntimeObject* value)
	{
		___inputSourceParent_3 = value;
		Il2CppCodeGenWriteBarrier((&___inputSourceParent_3), value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CBaseCursorU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_4() const { return ___U3CBaseCursorU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_4() { return &___U3CBaseCursorU3Ek__BackingField_4; }
	inline void set_U3CBaseCursorU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBaseCursorU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CCursorModifierU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_5() const { return ___U3CCursorModifierU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_5() { return &___U3CCursorModifierU3Ek__BackingField_5; }
	inline void set_U3CCursorModifierU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCursorModifierU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CTeleportHotSpotU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CTeleportHotSpotU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CTeleportHotSpotU3Ek__BackingField_6() const { return ___U3CTeleportHotSpotU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CTeleportHotSpotU3Ek__BackingField_6() { return &___U3CTeleportHotSpotU3Ek__BackingField_6; }
	inline void set_U3CTeleportHotSpotU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CTeleportHotSpotU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTeleportHotSpotU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CIsInteractionEnabledU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CIsInteractionEnabledU3Ek__BackingField_7)); }
	inline bool get_U3CIsInteractionEnabledU3Ek__BackingField_7() const { return ___U3CIsInteractionEnabledU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsInteractionEnabledU3Ek__BackingField_7() { return &___U3CIsInteractionEnabledU3Ek__BackingField_7; }
	inline void set_U3CIsInteractionEnabledU3Ek__BackingField_7(bool value)
	{
		___U3CIsInteractionEnabledU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CIsFocusLockedU3Ek__BackingField_8)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_8() const { return ___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_8() { return &___U3CIsFocusLockedU3Ek__BackingField_8; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_8(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CPointerExtentU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerExtentU3Ek__BackingField_9)); }
	inline float get_U3CPointerExtentU3Ek__BackingField_9() const { return ___U3CPointerExtentU3Ek__BackingField_9; }
	inline float* get_address_of_U3CPointerExtentU3Ek__BackingField_9() { return &___U3CPointerExtentU3Ek__BackingField_9; }
	inline void set_U3CPointerExtentU3Ek__BackingField_9(float value)
	{
		___U3CPointerExtentU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CRaysU3Ek__BackingField_10)); }
	inline RayStepU5BU5D_t3706455741* get_U3CRaysU3Ek__BackingField_10() const { return ___U3CRaysU3Ek__BackingField_10; }
	inline RayStepU5BU5D_t3706455741** get_address_of_U3CRaysU3Ek__BackingField_10() { return &___U3CRaysU3Ek__BackingField_10; }
	inline void set_U3CRaysU3Ek__BackingField_10(RayStepU5BU5D_t3706455741* value)
	{
		___U3CRaysU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRaysU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11)); }
	inline LayerMaskU5BU5D_t253793507* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11; }
	inline LayerMaskU5BU5D_t253793507** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11(LayerMaskU5BU5D_t253793507* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11), value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CFocusTargetU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_12() const { return ___U3CFocusTargetU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_12() { return &___U3CFocusTargetU3Ek__BackingField_12; }
	inline void set_U3CFocusTargetU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFocusTargetU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CResultU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_13() const { return ___U3CResultU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_13() { return &___U3CResultU3Ek__BackingField_13; }
	inline void set_U3CResultU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultU3Ek__BackingField_13), value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CRayStabilizerU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_14() const { return ___U3CRayStabilizerU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_14() { return &___U3CRayStabilizerU3Ek__BackingField_14; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRayStabilizerU3Ek__BackingField_14), value);
	}

	inline static int32_t get_offset_of_U3CRaycastModeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CRaycastModeU3Ek__BackingField_15)); }
	inline int32_t get_U3CRaycastModeU3Ek__BackingField_15() const { return ___U3CRaycastModeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CRaycastModeU3Ek__BackingField_15() { return &___U3CRaycastModeU3Ek__BackingField_15; }
	inline void set_U3CRaycastModeU3Ek__BackingField_15(int32_t value)
	{
		___U3CRaycastModeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CSphereCastRadiusU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CSphereCastRadiusU3Ek__BackingField_16)); }
	inline float get_U3CSphereCastRadiusU3Ek__BackingField_16() const { return ___U3CSphereCastRadiusU3Ek__BackingField_16; }
	inline float* get_address_of_U3CSphereCastRadiusU3Ek__BackingField_16() { return &___U3CSphereCastRadiusU3Ek__BackingField_16; }
	inline void set_U3CSphereCastRadiusU3Ek__BackingField_16(float value)
	{
		___U3CSphereCastRadiusU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CPointerOrientationU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GenericPointer_t429146605, ___U3CPointerOrientationU3Ek__BackingField_17)); }
	inline float get_U3CPointerOrientationU3Ek__BackingField_17() const { return ___U3CPointerOrientationU3Ek__BackingField_17; }
	inline float* get_address_of_U3CPointerOrientationU3Ek__BackingField_17() { return &___U3CPointerOrientationU3Ek__BackingField_17; }
	inline void set_U3CPointerOrientationU3Ek__BackingField_17(float value)
	{
		___U3CPointerOrientationU3Ek__BackingField_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICPOINTER_T429146605_H
#ifndef NULLABLE_1_T1213446279_H
#define NULLABLE_1_T1213446279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<UnityEngine.Ray>
struct  Nullable_1_t1213446279 
{
public:
	// T System.Nullable`1::value
	Ray_t3785851493  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1213446279, ___value_0)); }
	inline Ray_t3785851493  get_value_0() const { return ___value_0; }
	inline Ray_t3785851493 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Ray_t3785851493  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1213446279, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1213446279_H
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
#ifndef DEBUGINTERACTIONSOURCEPOSE_T1033395397_H
#define DEBUGINTERACTIONSOURCEPOSE_T1033395397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose
struct  DebugInteractionSourcePose_t1033395397  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<TryGetFunctionsReturnTrue>k__BackingField
	bool ___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsGripPositionAvailable>k__BackingField
	bool ___U3CIsGripPositionAvailableU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<IsGripRotationAvailable>k__BackingField
	bool ___U3CIsGripRotationAvailableU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<Position>k__BackingField
	Vector3_t3722313464  ___U3CPositionU3Ek__BackingField_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<GripPosition>k__BackingField
	Vector3_t3722313464  ___U3CGripPositionU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<Velocity>k__BackingField
	Vector3_t3722313464  ___U3CVelocityU3Ek__BackingField_7;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<Rotation>k__BackingField
	Quaternion_t2301928331  ___U3CRotationU3Ek__BackingField_8;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<GripRotation>k__BackingField
	Quaternion_t2301928331  ___U3CGripRotationU3Ek__BackingField_9;
	// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::<PointerRay>k__BackingField
	Nullable_1_t1213446279  ___U3CPointerRayU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0)); }
	inline bool get_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0() const { return ___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0() { return &___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0; }
	inline void set_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0(bool value)
	{
		___U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsPositionAvailableU3Ek__BackingField_1)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_1() const { return ___U3CIsPositionAvailableU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_1() { return &___U3CIsPositionAvailableU3Ek__BackingField_1; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_1(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsRotationAvailableU3Ek__BackingField_2)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_2() const { return ___U3CIsRotationAvailableU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_2() { return &___U3CIsRotationAvailableU3Ek__BackingField_2; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_2(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CIsGripPositionAvailableU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsGripPositionAvailableU3Ek__BackingField_3)); }
	inline bool get_U3CIsGripPositionAvailableU3Ek__BackingField_3() const { return ___U3CIsGripPositionAvailableU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsGripPositionAvailableU3Ek__BackingField_3() { return &___U3CIsGripPositionAvailableU3Ek__BackingField_3; }
	inline void set_U3CIsGripPositionAvailableU3Ek__BackingField_3(bool value)
	{
		___U3CIsGripPositionAvailableU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsGripRotationAvailableU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CIsGripRotationAvailableU3Ek__BackingField_4)); }
	inline bool get_U3CIsGripRotationAvailableU3Ek__BackingField_4() const { return ___U3CIsGripRotationAvailableU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsGripRotationAvailableU3Ek__BackingField_4() { return &___U3CIsGripRotationAvailableU3Ek__BackingField_4; }
	inline void set_U3CIsGripRotationAvailableU3Ek__BackingField_4(bool value)
	{
		___U3CIsGripRotationAvailableU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CPositionU3Ek__BackingField_5)); }
	inline Vector3_t3722313464  get_U3CPositionU3Ek__BackingField_5() const { return ___U3CPositionU3Ek__BackingField_5; }
	inline Vector3_t3722313464 * get_address_of_U3CPositionU3Ek__BackingField_5() { return &___U3CPositionU3Ek__BackingField_5; }
	inline void set_U3CPositionU3Ek__BackingField_5(Vector3_t3722313464  value)
	{
		___U3CPositionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGripPositionU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CGripPositionU3Ek__BackingField_6)); }
	inline Vector3_t3722313464  get_U3CGripPositionU3Ek__BackingField_6() const { return ___U3CGripPositionU3Ek__BackingField_6; }
	inline Vector3_t3722313464 * get_address_of_U3CGripPositionU3Ek__BackingField_6() { return &___U3CGripPositionU3Ek__BackingField_6; }
	inline void set_U3CGripPositionU3Ek__BackingField_6(Vector3_t3722313464  value)
	{
		___U3CGripPositionU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CVelocityU3Ek__BackingField_7)); }
	inline Vector3_t3722313464  get_U3CVelocityU3Ek__BackingField_7() const { return ___U3CVelocityU3Ek__BackingField_7; }
	inline Vector3_t3722313464 * get_address_of_U3CVelocityU3Ek__BackingField_7() { return &___U3CVelocityU3Ek__BackingField_7; }
	inline void set_U3CVelocityU3Ek__BackingField_7(Vector3_t3722313464  value)
	{
		___U3CVelocityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CRotationU3Ek__BackingField_8)); }
	inline Quaternion_t2301928331  get_U3CRotationU3Ek__BackingField_8() const { return ___U3CRotationU3Ek__BackingField_8; }
	inline Quaternion_t2301928331 * get_address_of_U3CRotationU3Ek__BackingField_8() { return &___U3CRotationU3Ek__BackingField_8; }
	inline void set_U3CRotationU3Ek__BackingField_8(Quaternion_t2301928331  value)
	{
		___U3CRotationU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CGripRotationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CGripRotationU3Ek__BackingField_9)); }
	inline Quaternion_t2301928331  get_U3CGripRotationU3Ek__BackingField_9() const { return ___U3CGripRotationU3Ek__BackingField_9; }
	inline Quaternion_t2301928331 * get_address_of_U3CGripRotationU3Ek__BackingField_9() { return &___U3CGripRotationU3Ek__BackingField_9; }
	inline void set_U3CGripRotationU3Ek__BackingField_9(Quaternion_t2301928331  value)
	{
		___U3CGripRotationU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPointerRayU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DebugInteractionSourcePose_t1033395397, ___U3CPointerRayU3Ek__BackingField_10)); }
	inline Nullable_1_t1213446279  get_U3CPointerRayU3Ek__BackingField_10() const { return ___U3CPointerRayU3Ek__BackingField_10; }
	inline Nullable_1_t1213446279 * get_address_of_U3CPointerRayU3Ek__BackingField_10() { return &___U3CPointerRayU3Ek__BackingField_10; }
	inline void set_U3CPointerRayU3Ek__BackingField_10(Nullable_1_t1213446279  value)
	{
		___U3CPointerRayU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGINTERACTIONSOURCEPOSE_T1033395397_H
// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep[]
struct RayStepU5BU5D_t3706455741  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RayStep_t790153972  m_Items[1];

public:
	inline RayStep_t790153972  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RayStep_t790153972 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RayStep_t790153972  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RayStep_t790153972  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RayStep_t790153972 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RayStep_t790153972  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t253793507  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_t3493934918  m_Items[1];

public:
	inline LayerMask_t3493934918  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_t3493934918 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_t3493934918  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_t3493934918  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_t3493934918 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_t3493934918  value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[]
struct IMixedRealityPointerU5BU5D_t1197427388  : public RuntimeArray
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


// System.Boolean System.Nullable`1<UnityEngine.Ray>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m176711023_gshared (Nullable_1_t1213446279 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Ray>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Ray_t3785851493  Nullable_1_get_Value_m3822285555_gshared (Nullable_1_t1213446279 * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void RayStep__ctor_m3549305466 (RayStep_t790153972 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_InputSystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityToolkit_get_InputSystem_m171125196 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PointerName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PointerName_m65187794 (GenericPointer_t429146605 * __this, String_t* ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Rays()
extern "C" IL2CPP_METHOD_ATTR RayStepU5BU5D_t3706455741* GenericPointer_get_Rays_m958457738 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::CopyRay(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR void RayStep_CopyRay_m583328092 (RayStep_t790153972 * __this, Ray_t3785851493  p0, float p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_RayStabilizer()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_RayStabilizer_m140003548 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::get_Origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RayStep_get_Origin_m9912436 (RayStep_t790153972 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RayStep_get_Direction_m1702894149 (RayStep_t790153972 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m2948304386 (RuntimeObject * __this /* static, unused */, Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m1638976740 (GenericPointer_t429146605 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerId()
extern "C" IL2CPP_METHOD_ATTR uint32_t GenericPointer_get_PointerId_m877692364 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerName()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericPointer_get_PointerName_m3826680655 (GenericPointer_t429146605 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m1744302937 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m1165034354 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t BaseGenericInputSource_get_SourceId_m2823944238 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* BaseGenericInputSource_get_SourceName_m3647105171 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_TryGetFunctionsReturnTrue(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_TryGetFunctionsReturnTrue_m1607895322 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsPositionAvailable_m289670261 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsRotationAvailable_m3246614931 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripPositionAvailable_m2723484311 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripRotationAvailable_m2666079268 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Position_m1693592603 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Velocity_m1475492328 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Rotation_m3715431815 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Position_m4017137954 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_TryGetFunctionsReturnTrue()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Velocity_m2352156329 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_Rotation_m1585180741 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsRotationAvailable_m3836001831 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_PointerRay()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1213446279  DebugInteractionSourcePose_get_PointerRay_m2396427043 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.Ray>::get_HasValue()
inline bool Nullable_1_get_HasValue_m176711023 (Nullable_1_t1213446279 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t1213446279 *, const RuntimeMethod*))Nullable_1_get_HasValue_m176711023_gshared)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.Ray>::get_Value()
inline Ray_t3785851493  Nullable_1_get_Value_m3822285555 (Nullable_1_t1213446279 * __this, const RuntimeMethod* method)
{
	return ((  Ray_t3785851493  (*) (Nullable_1_t1213446279 *, const RuntimeMethod*))Nullable_1_get_Value_m3822285555_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_GripPosition_m2731351932 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_GripRotation_m344787494 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsGripRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsGripRotationAvailable_m360208536 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::.ctor(System.String,Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer__ctor_m2700389872 (GenericPointer_t429146605 * __this, String_t* ___pointerName0, RuntimeObject* ___inputSourceParent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer__ctor_m2700389872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual float PointerExtent { get; set; } = 10f;
		__this->set_U3CPointerExtentU3Ek__BackingField_9((10.0f));
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t3706455741* L_0 = (RayStepU5BU5D_t3706455741*)SZArrayNew(RayStepU5BU5D_t3706455741_il2cpp_TypeInfo_var, (uint32_t)1);
		RayStepU5BU5D_t3706455741* L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		RayStep_t790153972  L_4;
		memset(&L_4, 0, sizeof(L_4));
		RayStep__ctor_m3549305466((&L_4), L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RayStep_t790153972 )L_4);
		__this->set_U3CRaysU3Ek__BackingField_10(L_1);
		// public RaycastModeType RaycastMode { get; set; } = RaycastModeType.Simple;
		__this->set_U3CRaycastModeU3Ek__BackingField_15(0);
		// public float PointerOrientation { get; } = 0f;
		__this->set_U3CPointerOrientationU3Ek__BackingField_17((0.0f));
		// public GenericPointer(string pointerName, IMixedRealityInputSource inputSourceParent)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// PointerId = MixedRealityToolkit.InputSystem.FocusProvider.GenerateNewPointerId();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = MixedRealityToolkit_get_InputSystem_m171125196(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityFocusProvider Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::get_FocusProvider() */, IMixedRealityInputSystem_t758185949_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		uint32_t L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(7 /* System.UInt32 Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityFocusProvider::GenerateNewPointerId() */, IMixedRealityFocusProvider_t770724555_il2cpp_TypeInfo_var, L_6);
		__this->set_U3CPointerIdU3Ek__BackingField_1(L_7);
		// PointerName = pointerName;
		String_t* L_8 = ___pointerName0;
		GenericPointer_set_PointerName_m65187794(__this, L_8, /*hidden argument*/NULL);
		// this.inputSourceParent = inputSourceParent;
		RuntimeObject* L_9 = ___inputSourceParent1;
		__this->set_inputSourceParent_3(L_9);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Controller()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_Controller_m4224797995 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return controller; }
		RuntimeObject* L_0 = __this->get_controller_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return controller; }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_Controller(Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityController)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_Controller_m818613876 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_set_Controller_m818613876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = value;
		RuntimeObject* L_0 = ___value0;
		__this->set_controller_0(L_0);
		// inputSourceParent = controller.InputSource;
		RuntimeObject* L_1 = __this->get_controller_0();
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityController::get_InputSource() */, IMixedRealityController_t849956740_il2cpp_TypeInfo_var, L_1);
		__this->set_inputSourceParent_3(L_2);
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerId()
extern "C" IL2CPP_METHOD_ATTR uint32_t GenericPointer_get_PointerId_m877692364 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public uint PointerId { get; }
		uint32_t L_0 = __this->get_U3CPointerIdU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerName()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericPointer_get_PointerName_m3826680655 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public string PointerName { get; set; }
		String_t* L_0 = __this->get_U3CPointerNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PointerName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PointerName_m65187794 (GenericPointer_t429146605 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string PointerName { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CPointerNameU3Ek__BackingField_2(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_InputSourceParent()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_InputSourceParent_m2614052055 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return inputSourceParent; }
		RuntimeObject* L_0 = __this->get_inputSourceParent_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return inputSourceParent; }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_InputSourceParent(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_InputSourceParent_m891484476 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// protected set { inputSourceParent = value; }
		RuntimeObject* L_0 = ___value0;
		__this->set_inputSourceParent_3(L_0);
		// protected set { inputSourceParent = value; }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityCursor Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_BaseCursor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_BaseCursor_m2795801584 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityCursor BaseCursor { get; set; }
		RuntimeObject* L_0 = __this->get_U3CBaseCursorU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_BaseCursor(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityCursor)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_BaseCursor_m133570707 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IMixedRealityCursor BaseCursor { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CBaseCursorU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.ICursorModifier Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_CursorModifier()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_CursorModifier_m833190561 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public ICursorModifier CursorModifier { get; set; }
		RuntimeObject* L_0 = __this->get_U3CCursorModifierU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_CursorModifier(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.ICursorModifier)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_CursorModifier_m1491910125 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public ICursorModifier CursorModifier { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CCursorModifierU3Ek__BackingField_5(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_TeleportHotSpot()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_TeleportHotSpot_m2853780473 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityTeleportHotSpot TeleportHotSpot { get; set; }
		RuntimeObject* L_0 = __this->get_U3CTeleportHotSpotU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_TeleportHotSpot(Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_TeleportHotSpot_m2817762627 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IMixedRealityTeleportHotSpot TeleportHotSpot { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CTeleportHotSpotU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_IsInteractionEnabled()
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_get_IsInteractionEnabled_m1294466277 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsInteractionEnabled { get; set; }
		bool L_0 = __this->get_U3CIsInteractionEnabledU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_IsInteractionEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_IsInteractionEnabled_m4072269300 (GenericPointer_t429146605 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsInteractionEnabled { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsInteractionEnabledU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_IsFocusLocked()
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_get_IsFocusLocked_m2052317914 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsFocusLocked { get; set; }
		bool L_0 = __this->get_U3CIsFocusLockedU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_IsFocusLocked(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_IsFocusLocked_m2955144094 (GenericPointer_t429146605 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsFocusLocked { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsFocusLockedU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerExtent()
extern "C" IL2CPP_METHOD_ATTR float GenericPointer_get_PointerExtent_m2716762852 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public virtual float PointerExtent { get; set; } = 10f;
		float L_0 = __this->get_U3CPointerExtentU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PointerExtent(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PointerExtent_m187296707 (GenericPointer_t429146605 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public virtual float PointerExtent { get; set; } = 10f;
		float L_0 = ___value0;
		__this->set_U3CPointerExtentU3Ek__BackingField_9(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Rays()
extern "C" IL2CPP_METHOD_ATTR RayStepU5BU5D_t3706455741* GenericPointer_get_Rays_m958457738 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t3706455741* L_0 = __this->get_U3CRaysU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_Rays(Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RayStep[])
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_Rays_m413030307 (GenericPointer_t429146605 * __this, RayStepU5BU5D_t3706455741* ___value0, const RuntimeMethod* method)
{
	{
		// public RayStep[] Rays { get; protected set; } = { new RayStep(Vector3.zero, Vector3.forward) };
		RayStepU5BU5D_t3706455741* L_0 = ___value0;
		__this->set_U3CRaysU3Ek__BackingField_10(L_0);
		return;
	}
}
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PrioritizedLayerMasksOverride()
extern "C" IL2CPP_METHOD_ATTR LayerMaskU5BU5D_t253793507* GenericPointer_get_PrioritizedLayerMasksOverride_m1538343273 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; }
		LayerMaskU5BU5D_t253793507* L_0 = __this->get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_PrioritizedLayerMasksOverride(UnityEngine.LayerMask[])
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_PrioritizedLayerMasksOverride_m782681707 (GenericPointer_t429146605 * __this, LayerMaskU5BU5D_t253793507* ___value0, const RuntimeMethod* method)
{
	{
		// public LayerMask[] PrioritizedLayerMasksOverride { get; set; }
		LayerMaskU5BU5D_t253793507* L_0 = ___value0;
		__this->set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_11(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_FocusTarget()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_FocusTarget_m2654409625 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityFocusHandler FocusTarget { get; set; }
		RuntimeObject* L_0 = __this->get_U3CFocusTargetU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_FocusTarget(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.Handlers.IMixedRealityFocusHandler)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_FocusTarget_m3320654607 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IMixedRealityFocusHandler FocusTarget { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CFocusTargetU3Ek__BackingField_12(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IPointerResult Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_Result()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_Result_m3040104899 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IPointerResult Result { get; set; }
		RuntimeObject* L_0 = __this->get_U3CResultU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_Result(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IPointerResult)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_Result_m356627761 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IPointerResult Result { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_13(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_RayStabilizer()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GenericPointer_get_RayStabilizer_m140003548 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public IBaseRayStabilizer RayStabilizer { get; set; }
		RuntimeObject* L_0 = __this->get_U3CRayStabilizerU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_RayStabilizer(Microsoft.MixedReality.Toolkit.Core.Interfaces.Physics.IBaseRayStabilizer)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_RayStabilizer_m1045552848 (GenericPointer_t429146605 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// public IBaseRayStabilizer RayStabilizer { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CRayStabilizerU3Ek__BackingField_14(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RaycastModeType Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_RaycastMode()
extern "C" IL2CPP_METHOD_ATTR int32_t GenericPointer_get_RaycastMode_m1514642170 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public RaycastModeType RaycastMode { get; set; } = RaycastModeType.Simple;
		int32_t L_0 = __this->get_U3CRaycastModeU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_RaycastMode(Microsoft.MixedReality.Toolkit.Core.Definitions.Physics.RaycastModeType)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_RaycastMode_m3986954460 (GenericPointer_t429146605 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public RaycastModeType RaycastMode { get; set; } = RaycastModeType.Simple;
		int32_t L_0 = ___value0;
		__this->set_U3CRaycastModeU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_SphereCastRadius()
extern "C" IL2CPP_METHOD_ATTR float GenericPointer_get_SphereCastRadius_m2530147379 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public float SphereCastRadius { get; set; }
		float L_0 = __this->get_U3CSphereCastRadiusU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::set_SphereCastRadius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_set_SphereCastRadius_m3817110596 (GenericPointer_t429146605 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float SphereCastRadius { get; set; }
		float L_0 = ___value0;
		__this->set_U3CSphereCastRadiusU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerOrientation()
extern "C" IL2CPP_METHOD_ATTR float GenericPointer_get_PointerOrientation_m4222859637 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public float PointerOrientation { get; } = 0f;
		float L_0 = __this->get_U3CPointerOrientationU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::OnPreRaycast()
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_OnPreRaycast_m3597384523 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_OnPreRaycast_m3597384523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t3785851493  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (TryGetPointingRay(out pointingRay))
		bool L_0 = VirtFuncInvoker1< bool, Ray_t3785851493 * >::Invoke(51 /* System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointingRay(UnityEngine.Ray&) */, __this, (Ray_t3785851493 *)(&V_0));
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// Rays[0].CopyRay(pointingRay, PointerExtent);
		RayStepU5BU5D_t3706455741* L_2 = GenericPointer_get_Rays_m958457738(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Ray_t3785851493  L_3 = V_0;
		float L_4 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerExtent() */, __this);
		RayStep_CopyRay_m583328092((RayStep_t790153972 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_3, L_4, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if (RayStabilizer != null)
		RuntimeObject* L_5 = GenericPointer_get_RayStabilizer_m140003548(__this, /*hidden argument*/NULL);
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0088;
		}
	}
	{
		// RayStabilizer.UpdateStability(Rays[0].Origin, Rays[0].Direction);
		RuntimeObject* L_7 = GenericPointer_get_RayStabilizer_m140003548(__this, /*hidden argument*/NULL);
		RayStepU5BU5D_t3706455741* L_8 = GenericPointer_get_Rays_m958457738(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = RayStep_get_Origin_m9912436((RayStep_t790153972 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		RayStepU5BU5D_t3706455741* L_10 = GenericPointer_get_Rays_m958457738(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = RayStep_get_Direction_m1702894149((RayStep_t790153972 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Physics.IBaseRayStabilizer::UpdateStability(UnityEngine.Vector3,UnityEngine.Vector3) */, IBaseRayStabilizer_t1978348158_il2cpp_TypeInfo_var, L_7, L_9, L_11);
		// Rays[0].CopyRay(RayStabilizer.StableRay, PointerExtent);
		RayStepU5BU5D_t3706455741* L_12 = GenericPointer_get_Rays_m958457738(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		RuntimeObject* L_13 = GenericPointer_get_RayStabilizer_m140003548(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Ray_t3785851493  L_14 = InterfaceFuncInvoker0< Ray_t3785851493  >::Invoke(2 /* UnityEngine.Ray Microsoft.MixedReality.Toolkit.Core.Interfaces.Physics.IBaseRayStabilizer::get_StableRay() */, IBaseRayStabilizer_t1978348158_il2cpp_TypeInfo_var, L_13);
		float L_15 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::get_PointerExtent() */, __this);
		RayStep_CopyRay_m583328092((RayStep_t790153972 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_14, L_15, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::OnPostRaycast()
extern "C" IL2CPP_METHOD_ATTR void GenericPointer_OnPostRaycast_m2126427952 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void OnPostRaycast() { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointerPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_TryGetPointerPosition_m2768788553 (GenericPointer_t429146605 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_TryGetPointerPosition_m2768788553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// position = Vector3.zero;
		Vector3_t3722313464 * L_0 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// return false;
		V_0 = (bool)0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointingRay(UnityEngine.Ray&)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_TryGetPointingRay_m1499578754 (GenericPointer_t429146605 * __this, Ray_t3785851493 * ___pointingRay0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// pointingRay = default(Ray);
		Ray_t3785851493 * L_0 = ___pointingRay0;
		il2cpp_codegen_initobj(L_0, sizeof(Ray_t3785851493 ));
		// return false;
		V_0 = (bool)0;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::TryGetPointerRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_TryGetPointerRotation_m3389968377 (GenericPointer_t429146605 * __this, Quaternion_t2301928331 * ___rotation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_TryGetPointerRotation_m3389968377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// rotation = Quaternion.identity;
		Quaternion_t2301928331 * L_0 = ___rotation0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_1 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		*(Quaternion_t2301928331 *)L_0 = L_1;
		// return false;
		V_0 = (bool)0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer,Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m2215150150 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return left.Equals(right);
		RuntimeObject* L_0 = ___left0;
		RuntimeObject* L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_System_Collections_IEqualityComparer_Equals_m3780923954 (GenericPointer_t429146605 * __this, RuntimeObject * ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return left.Equals(right);
		RuntimeObject * L_0 = ___left0;
		RuntimeObject * L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m4289535493 (GenericPointer_t429146605 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_Equals_m4289535493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_000e:
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		RuntimeObject * L_2 = ___obj0;
		V_2 = (bool)((((RuntimeObject*)(GenericPointer_t429146605 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		V_1 = (bool)1;
		goto IL_0044;
	}

IL_001b:
	{
		// if (obj.GetType() != GetType()) { return false; }
		RuntimeObject * L_4 = ___obj0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		Type_t * L_6 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// if (obj.GetType() != GetType()) { return false; }
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_0035:
	{
		// return Equals((IMixedRealityPointer)obj);
		RuntimeObject * L_9 = ___obj0;
		bool L_10 = GenericPointer_Equals_m1638976740(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IMixedRealityPointer_t3090763169_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::Equals(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer)
extern "C" IL2CPP_METHOD_ATTR bool GenericPointer_Equals_m1638976740 (GenericPointer_t429146605 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GenericPointer_Equals_m1638976740_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return other != null && PointerId == other.PointerId && string.Equals(PointerName, other.PointerName);
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_1 = GenericPointer_get_PointerId_m877692364(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		uint32_t L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(2 /* System.UInt32 Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer::get_PointerId() */, IMixedRealityPointer_t3090763169_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = GenericPointer_get_PointerName_m3826680655(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer::get_PointerName() */, IMixedRealityPointer_t3090763169_il2cpp_TypeInfo_var, L_5);
		bool L_7 = String_Equals_m1744302937(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t GenericPointer_System_Collections_IEqualityComparer_GetHashCode_m3457308475 (GenericPointer_t429146605 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return obj.GetHashCode();
		RuntimeObject * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Pointers.GenericPointer::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t GenericPointer_GetHashCode_m2092518628 (GenericPointer_t429146605 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// int hashCode = 0;
		V_0 = 0;
		// hashCode = (hashCode * 397) ^ (int)PointerId;
		int32_t L_0 = V_0;
		uint32_t L_1 = GenericPointer_get_PointerId_m877692364(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_1));
		// hashCode = (hashCode * 397) ^ (PointerName != null ? PointerName.GetHashCode() : 0);
		int32_t L_2 = V_0;
		String_t* L_3 = GenericPointer_get_PointerName_m3826680655(__this, /*hidden argument*/NULL);
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)397)));
		if (L_3)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)397)));
			goto IL_0025;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_0025:
	{
		String_t* L_4 = GenericPointer_get_PointerName_m3826680655(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		V_0 = ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
		// return hashCode;
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
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
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::.ctor(System.String,Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[])
extern "C" IL2CPP_METHOD_ATTR void BaseGenericInputSource__ctor_m3514132871 (BaseGenericInputSource_t2600286248 * __this, String_t* ___name0, IMixedRealityPointerU5BU5D_t1197427388* ___pointers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseGenericInputSource__ctor_m3514132871_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IMixedRealityPointerU5BU5D_t1197427388* G_B2_0 = NULL;
	BaseGenericInputSource_t2600286248 * G_B2_1 = NULL;
	IMixedRealityPointerU5BU5D_t1197427388* G_B1_0 = NULL;
	BaseGenericInputSource_t2600286248 * G_B1_1 = NULL;
	{
		// public BaseGenericInputSource(string name, IMixedRealityPointer[] pointers = null)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// SourceId = MixedRealityToolkit.InputSystem.GenerateNewSourceId();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_InputSystem_m171125196(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		uint32_t L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(18 /* System.UInt32 Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::GenerateNewSourceId() */, IMixedRealityInputSystem_t758185949_il2cpp_TypeInfo_var, L_0);
		__this->set_U3CSourceIdU3Ek__BackingField_0(L_1);
		// SourceName = name;
		String_t* L_2 = ___name0;
		__this->set_U3CSourceNameU3Ek__BackingField_1(L_2);
		// Pointers = pointers ?? new[] { MixedRealityToolkit.InputSystem.GazeProvider.GazePointer };
		IMixedRealityPointerU5BU5D_t1197427388* L_3 = ___pointers1;
		IMixedRealityPointerU5BU5D_t1197427388* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_003d;
		}
	}
	{
		IMixedRealityPointerU5BU5D_t1197427388* L_5 = (IMixedRealityPointerU5BU5D_t1197427388*)SZArrayNew(IMixedRealityPointerU5BU5D_t1197427388_il2cpp_TypeInfo_var, (uint32_t)1);
		IMixedRealityPointerU5BU5D_t1197427388* L_6 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = MixedRealityToolkit_get_InputSystem_m171125196(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t758185949_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityGazeProvider::get_GazePointer() */, IMixedRealityGazeProvider_t2162932150_il2cpp_TypeInfo_var, L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003d:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_U3CPointersU3Ek__BackingField_2(G_B2_0);
		// }
		return;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t BaseGenericInputSource_get_SourceId_m2823944238 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public uint SourceId { get; }
		uint32_t L_0 = __this->get_U3CSourceIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_SourceName()
extern "C" IL2CPP_METHOD_ATTR String_t* BaseGenericInputSource_get_SourceName_m3647105171 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public string SourceName { get; }
		String_t* L_0 = __this->get_U3CSourceNameU3Ek__BackingField_1();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer[] Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::get_Pointers()
extern "C" IL2CPP_METHOD_ATTR IMixedRealityPointerU5BU5D_t1197427388* BaseGenericInputSource_get_Pointers_m322108051 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public virtual IMixedRealityPointer[] Pointers { get; }
		IMixedRealityPointerU5BU5D_t1197427388* L_0 = __this->get_U3CPointersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m110926662 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___left0, RuntimeObject* ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return left.Equals(right);
		RuntimeObject* L_0 = ___left0;
		RuntimeObject* L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_System_Collections_IEqualityComparer_Equals_m3554281125 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject * ___left0, RuntimeObject * ___right1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return left.Equals(right);
		RuntimeObject * L_0 = ___left0;
		RuntimeObject * L_1 = ___right1;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m906800837 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseGenericInputSource_Equals_m906800837_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (ReferenceEquals(null, obj)) { return false; }
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_000e:
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		RuntimeObject * L_2 = ___obj0;
		V_2 = (bool)((((RuntimeObject*)(BaseGenericInputSource_t2600286248 *)__this) == ((RuntimeObject*)(RuntimeObject *)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// if (ReferenceEquals(this, obj)) { return true; }
		V_1 = (bool)1;
		goto IL_0044;
	}

IL_001b:
	{
		// if (obj.GetType() != GetType()) { return false; }
		RuntimeObject * L_4 = ___obj0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		Type_t * L_6 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7 = Type_op_Inequality_m2948304386(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// if (obj.GetType() != GetType()) { return false; }
		V_1 = (bool)0;
		goto IL_0044;
	}

IL_0035:
	{
		// return Equals((IMixedRealityInputSource)obj);
		RuntimeObject * L_9 = ___obj0;
		bool L_10 = BaseGenericInputSource_Equals_m1165034354(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IMixedRealityInputSource_t86469781_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_10;
		goto IL_0044;
	}

IL_0044:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Equals(Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource)
extern "C" IL2CPP_METHOD_ATTR bool BaseGenericInputSource_Equals_m1165034354 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseGenericInputSource_Equals_m1165034354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return other != null && SourceId == other.SourceId && string.Equals(SourceName, other.SourceName);
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_1 = BaseGenericInputSource_get_SourceId_m2823944238(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		uint32_t L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource::get_SourceId() */, IMixedRealityEventSource_t3753294479_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = BaseGenericInputSource_get_SourceName_m3647105171(__this, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___other0;
		NullCheck(L_5);
		String_t* L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t3753294479_il2cpp_TypeInfo_var, L_5);
		bool L_7 = String_Equals_m1744302937(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_7));
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 0;
	}

IL_0026:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C" IL2CPP_METHOD_ATTR int32_t BaseGenericInputSource_System_Collections_IEqualityComparer_GetHashCode_m1136115561 (BaseGenericInputSource_t2600286248 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return obj.GetHashCode();
		RuntimeObject * L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t BaseGenericInputSource_GetHashCode_m1127679622 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// int hashCode = 0;
		V_0 = 0;
		// hashCode = (hashCode * 397) ^ (int)SourceId;
		int32_t L_0 = V_0;
		uint32_t L_1 = BaseGenericInputSource_get_SourceId_m2823944238(__this, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_1));
		// hashCode = (hashCode * 397) ^ (SourceName != null ? SourceName.GetHashCode() : 0);
		int32_t L_2 = V_0;
		String_t* L_3 = BaseGenericInputSource_get_SourceName_m3647105171(__this, /*hidden argument*/NULL);
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)397)));
		if (L_3)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)397)));
			goto IL_0025;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_0025:
	{
		String_t* L_4 = BaseGenericInputSource_get_SourceName_m3647105171(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		V_0 = ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
		// return hashCode;
		int32_t L_6 = V_0;
		V_1 = L_6;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Sources.BaseGenericInputSource::Dispose()
extern "C" IL2CPP_METHOD_ATTR void BaseGenericInputSource_Dispose_m3565946516 (BaseGenericInputSource_t2600286248 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void Dispose() { }
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
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_TryGetFunctionsReturnTrue()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool TryGetFunctionsReturnTrue { get; set; }
		bool L_0 = __this->get_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_TryGetFunctionsReturnTrue(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_TryGetFunctionsReturnTrue_m1607895322 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool TryGetFunctionsReturnTrue { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CTryGetFunctionsReturnTrueU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsPositionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsPositionAvailable_m344324191 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; set; }
		bool L_0 = __this->get_U3CIsPositionAvailableU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsPositionAvailable_m289670261 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsPositionAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsPositionAvailableU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsRotationAvailable_m3836001831 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; set; }
		bool L_0 = __this->get_U3CIsRotationAvailableU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsRotationAvailable_m3246614931 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsRotationAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsRotationAvailableU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsGripPositionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsGripPositionAvailable_m420468453 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGripPositionAvailable { get; set; }
		bool L_0 = __this->get_U3CIsGripPositionAvailableU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripPositionAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripPositionAvailable_m2723484311 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGripPositionAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGripPositionAvailableU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_IsGripRotationAvailable()
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_get_IsGripRotationAvailable_m360208536 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsGripRotationAvailable { get; set; }
		bool L_0 = __this->get_U3CIsGripRotationAvailableU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_IsGripRotationAvailable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_IsGripRotationAvailable_m2666079268 (DebugInteractionSourcePose_t1033395397 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsGripRotationAvailable { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CIsGripRotationAvailableU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Position_m4017137954 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; set; }
		Vector3_t3722313464  L_0 = __this->get_U3CPositionU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Position_m1693592603 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get; set; }
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CPositionU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_GripPosition_m2731351932 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GripPosition { get; set; }
		Vector3_t3722313464  L_0 = __this->get_U3CGripPositionU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_GripPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_GripPosition_m3255082746 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GripPosition { get; set; }
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CGripPositionU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  DebugInteractionSourcePose_get_Velocity_m2352156329 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Velocity { get; set; }
		Vector3_t3722313464  L_0 = __this->get_U3CVelocityU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Velocity_m1475492328 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Velocity { get; set; }
		Vector3_t3722313464  L_0 = ___value0;
		__this->set_U3CVelocityU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_Rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_Rotation_m1585180741 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get; set; }
		Quaternion_t2301928331  L_0 = __this->get_U3CRotationU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_Rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_Rotation_m3715431815 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get; set; }
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3CRotationU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_GripRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  DebugInteractionSourcePose_get_GripRotation_m344787494 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GripRotation { get; set; }
		Quaternion_t2301928331  L_0 = __this->get_U3CGripRotationU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_GripRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_GripRotation_m1452834212 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GripRotation { get; set; }
		Quaternion_t2301928331  L_0 = ___value0;
		__this->set_U3CGripRotationU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Nullable`1<UnityEngine.Ray> Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::get_PointerRay()
extern "C" IL2CPP_METHOD_ATTR Nullable_1_t1213446279  DebugInteractionSourcePose_get_PointerRay_m2396427043 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	{
		// public Ray? PointerRay { get; set; }
		Nullable_1_t1213446279  L_0 = __this->get_U3CPointerRayU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::set_PointerRay(System.Nullable`1<UnityEngine.Ray>)
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose_set_PointerRay_m257526264 (DebugInteractionSourcePose_t1033395397 * __this, Nullable_1_t1213446279  ___value0, const RuntimeMethod* method)
{
	{
		// public Ray? PointerRay { get; set; }
		Nullable_1_t1213446279  L_0 = ___value0;
		__this->set_U3CPointerRayU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DebugInteractionSourcePose__ctor_m4032196296 (DebugInteractionSourcePose_t1033395397 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugInteractionSourcePose__ctor_m4032196296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DebugInteractionSourcePose()
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// TryGetFunctionsReturnTrue = false;
		DebugInteractionSourcePose_set_TryGetFunctionsReturnTrue_m1607895322(__this, (bool)0, /*hidden argument*/NULL);
		// IsPositionAvailable = false;
		DebugInteractionSourcePose_set_IsPositionAvailable_m289670261(__this, (bool)0, /*hidden argument*/NULL);
		// IsRotationAvailable = false;
		DebugInteractionSourcePose_set_IsRotationAvailable_m3246614931(__this, (bool)0, /*hidden argument*/NULL);
		// IsGripPositionAvailable = false;
		DebugInteractionSourcePose_set_IsGripPositionAvailable_m2723484311(__this, (bool)0, /*hidden argument*/NULL);
		// IsGripRotationAvailable = false;
		DebugInteractionSourcePose_set_IsGripRotationAvailable_m2666079268(__this, (bool)0, /*hidden argument*/NULL);
		// Position = new Vector3(0, 0, 0);
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		DebugInteractionSourcePose_set_Position_m1693592603(__this, L_0, /*hidden argument*/NULL);
		// Velocity = new Vector3(0, 0, 0);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		DebugInteractionSourcePose_set_Velocity_m1475492328(__this, L_1, /*hidden argument*/NULL);
		// Rotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		DebugInteractionSourcePose_set_Rotation_m3715431815(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetPosition_m1485226412 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// position = Position;
		Vector3_t3722313464 * L_0 = ___position0;
		Vector3_t3722313464  L_1 = DebugInteractionSourcePose_get_Position_m4017137954(__this, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// if (!TryGetFunctionsReturnTrue)     // TODO: bug? does not test IsPositionAvailable (see TryGetRotation)
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0023;
	}

IL_001f:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetVelocity(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetVelocity_m1881433753 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464 * ___velocity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// velocity = Velocity;
		Vector3_t3722313464 * L_0 = ___velocity0;
		Vector3_t3722313464  L_1 = DebugInteractionSourcePose_get_Velocity_m2352156329(__this, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// return TryGetFunctionsReturnTrue;
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetRotation_m1640974396 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331 * ___rotation0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// rotation = Rotation;
		Quaternion_t2301928331 * L_0 = ___rotation0;
		Quaternion_t2301928331  L_1 = DebugInteractionSourcePose_get_Rotation_m1585180741(__this, /*hidden argument*/NULL);
		*(Quaternion_t2301928331 *)L_0 = L_1;
		// return TryGetFunctionsReturnTrue && IsRotationAvailable;
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = DebugInteractionSourcePose_get_IsRotationAvailable_m3836001831(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetPointerRay(UnityEngine.Ray&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetPointerRay_m3859713426 (DebugInteractionSourcePose_t1033395397 * __this, Ray_t3785851493 * ___pointerRay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugInteractionSourcePose_TryGetPointerRay_m3859713426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_t1213446279  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	{
		// pointerRay = default(Ray);
		Ray_t3785851493 * L_0 = ___pointerRay0;
		il2cpp_codegen_initobj(L_0, sizeof(Ray_t3785851493 ));
		// if (PointerRay == null)
		Nullable_1_t1213446279  L_1 = DebugInteractionSourcePose_get_PointerRay_m2396427043(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m176711023((Nullable_1_t1213446279 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m176711023_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_003a;
	}

IL_0022:
	{
		// pointerRay = (Ray)PointerRay;
		Ray_t3785851493 * L_4 = ___pointerRay0;
		Nullable_1_t1213446279  L_5 = DebugInteractionSourcePose_get_PointerRay_m2396427043(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		Ray_t3785851493  L_6 = Nullable_1_get_Value_m3822285555((Nullable_1_t1213446279 *)(&V_1), /*hidden argument*/Nullable_1_get_Value_m3822285555_RuntimeMethod_var);
		*(Ray_t3785851493 *)L_4 = L_6;
		// return true;
		V_2 = (bool)1;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetGripPosition(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetGripPosition_m2431393702 (DebugInteractionSourcePose_t1033395397 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// position = GripPosition;
		Vector3_t3722313464 * L_0 = ___position0;
		Vector3_t3722313464  L_1 = DebugInteractionSourcePose_get_GripPosition_m2731351932(__this, /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)L_0 = L_1;
		// if (!TryGetFunctionsReturnTrue)     // TODO: should test IsGripPositionAvailable? (see TryGetPosition)
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0023;
	}

IL_001f:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourcePose::TryGetGripRotation(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR bool DebugInteractionSourcePose_TryGetGripRotation_m2914408061 (DebugInteractionSourcePose_t1033395397 * __this, Quaternion_t2301928331 * ___rotation0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// rotation = GripRotation;
		Quaternion_t2301928331 * L_0 = ___rotation0;
		Quaternion_t2301928331  L_1 = DebugInteractionSourcePose_get_GripRotation_m344787494(__this, /*hidden argument*/NULL);
		*(Quaternion_t2301928331 *)L_0 = L_1;
		// if (!TryGetFunctionsReturnTrue || !IsGripRotationAvailable)
		bool L_2 = DebugInteractionSourcePose_get_TryGetFunctionsReturnTrue_m2579123757(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3 = DebugInteractionSourcePose_get_IsGripRotationAvailable_m360208536(__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002e;
	}

IL_002a:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_5 = V_1;
		return L_5;
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
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_pinvoke(const DebugInteractionSourceState_t66132725& unmarshaled, DebugInteractionSourceState_t66132725_marshaled_pinvoke& marshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
extern "C" void DebugInteractionSourceState_t66132725_marshal_pinvoke_back(const DebugInteractionSourceState_t66132725_marshaled_pinvoke& marshaled, DebugInteractionSourceState_t66132725& unmarshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_pinvoke_cleanup(DebugInteractionSourceState_t66132725_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_com(const DebugInteractionSourceState_t66132725& unmarshaled, DebugInteractionSourceState_t66132725_marshaled_com& marshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
extern "C" void DebugInteractionSourceState_t66132725_marshal_com_back(const DebugInteractionSourceState_t66132725_marshaled_com& marshaled, DebugInteractionSourceState_t66132725& unmarshaled)
{
	Exception_t* ___SourcePose_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'SourcePose' of type 'DebugInteractionSourceState': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___SourcePose_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.Toolkit.InputSystem.Utilities.DebugInteractionSourceState
extern "C" void DebugInteractionSourceState_t66132725_marshal_com_cleanup(DebugInteractionSourceState_t66132725_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
