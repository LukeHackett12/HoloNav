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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t885026589;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t1822382459;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t3348751306;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t3068621835;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t3301955079;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t1927754563;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_t4293407246;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t51159052;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t2916547576;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriInfo
struct UriInfo_t1092684687;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t2928496527;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t25761545;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1632706988_il2cpp_TypeInfo_var;
extern RuntimeClass* DownloadHandlerBuffer_t2928496527_il2cpp_TypeInfo_var;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1293755103_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_t1671470975_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringComparer_t3301955079_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityWebRequest_t463507806_il2cpp_TypeInfo_var;
extern RuntimeClass* UploadHandlerRaw_t25761545_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* WWWTranscoder_t272523958_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequestUtils_t3541624225_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1057238085;
extern String_t* _stringLiteral1130393535;
extern String_t* _stringLiteral1131442134;
extern String_t* _stringLiteral1153672764;
extern String_t* _stringLiteral1287409439;
extern String_t* _stringLiteral1361828523;
extern String_t* _stringLiteral1390680534;
extern String_t* _stringLiteral1612324208;
extern String_t* _stringLiteral2024966745;
extern String_t* _stringLiteral2045074213;
extern String_t* _stringLiteral2088176782;
extern String_t* _stringLiteral2255292849;
extern String_t* _stringLiteral2263792357;
extern String_t* _stringLiteral2410385622;
extern String_t* _stringLiteral2530579871;
extern String_t* _stringLiteral3074512661;
extern String_t* _stringLiteral314995292;
extern String_t* _stringLiteral3211556917;
extern String_t* _stringLiteral3256060902;
extern String_t* _stringLiteral3272455574;
extern String_t* _stringLiteral3445932352;
extern String_t* _stringLiteral3450713987;
extern String_t* _stringLiteral3451631507;
extern String_t* _stringLiteral3451762577;
extern String_t* _stringLiteral3452614522;
extern String_t* _stringLiteral3452614523;
extern String_t* _stringLiteral3452614526;
extern String_t* _stringLiteral3452614547;
extern String_t* _stringLiteral3453007779;
extern String_t* _stringLiteral3490508455;
extern String_t* _stringLiteral3514720613;
extern String_t* _stringLiteral3515428721;
extern String_t* _stringLiteral351986320;
extern String_t* _stringLiteral3767907038;
extern String_t* _stringLiteral3776665136;
extern String_t* _stringLiteral4013423584;
extern String_t* _stringLiteral4054833267;
extern String_t* _stringLiteral4274026319;
extern String_t* _stringLiteral45808443;
extern String_t* _stringLiteral463295005;
extern String_t* _stringLiteral463866407;
extern String_t* _stringLiteral587319919;
extern String_t* _stringLiteral598647136;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral831347629;
extern String_t* _stringLiteral897372452;
extern String_t* _stringLiteral97523668;
extern const RuntimeMethod* Dictionary_2_Add_m3045345476_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3370926710_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3312417965_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m444307833_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2798867217_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2198401511_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2940501554_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m578074249_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m865914345_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1897740815_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4232982637_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2882708797_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m660812737_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2439967551_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m883280456_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_InternalSetCustomMethod_m3670745235_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_InternalSetMethod_m287631745_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_InternalSetUrl_m1036291515_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_set_downloadHandler_m970510352_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_set_method_m3969249710_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_set_timeout_m3621399360_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_set_uploadHandler_m54574009_RuntimeMethod_var;
extern const RuntimeMethod* UploadHandlerRaw__ctor_m1397254157_RuntimeMethod_var;
extern const RuntimeMethod* WebRequestUtils_MakeInitialUrl_m973728695_RuntimeMethod_var;
extern const uint32_t CertificateHandler_Dispose_m2100863831_MetadataUsageId;
extern const uint32_t DownloadHandler_Dispose_m2747726581_MetadataUsageId;
extern const uint32_t DownloadHandler_GetTextEncoder_m3244408468_MetadataUsageId;
extern const uint32_t DownloadHandler_GetText_m600283602_MetadataUsageId;
extern const uint32_t UnityWebRequest_Delete_m2582172235_MetadataUsageId;
extern const uint32_t UnityWebRequest_Dispose_m3261105905_MetadataUsageId;
extern const uint32_t UnityWebRequest_EscapeURL_m1351912812_MetadataUsageId;
extern const uint32_t UnityWebRequest_GetResponseHeaders_m4205180634_MetadataUsageId;
extern const uint32_t UnityWebRequest_Get_m996521828_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalDestroy_m2954597795_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalSetCustomMethod_m3670745235_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalSetMethod_m287631745_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalSetUrl_m1036291515_MetadataUsageId;
extern const uint32_t UnityWebRequest_Post_m4193475377_MetadataUsageId;
extern const uint32_t UnityWebRequest_Post_m4211532029_MetadataUsageId;
extern const uint32_t UnityWebRequest_Put_m3448334644_MetadataUsageId;
extern const uint32_t UnityWebRequest_Put_m3541626144_MetadataUsageId;
extern const uint32_t UnityWebRequest_SetRequestHeader_m2927335855_MetadataUsageId;
extern const uint32_t UnityWebRequest_SetupPost_m467019117_MetadataUsageId;
extern const uint32_t UnityWebRequest_SetupPost_m862219238_MetadataUsageId;
extern const uint32_t UnityWebRequest_get_method_m1528248449_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_downloadHandler_m970510352_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_method_m3969249710_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_timeout_m3621399360_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_uploadHandler_m54574009_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_url_m2541992937_MetadataUsageId;
extern const uint32_t UploadHandlerRaw__ctor_m1397254157_MetadataUsageId;
extern const uint32_t UploadHandler_Dispose_m3057340132_MetadataUsageId;
extern const uint32_t WWWForm_AddBinaryData_m1593257607_MetadataUsageId;
extern const uint32_t WWWForm__ctor_m2465700452_MetadataUsageId;
extern const uint32_t WWWForm_get_data_m1071289232_MetadataUsageId;
extern const uint32_t WWWForm_get_headers_m1854290957_MetadataUsageId;
extern const uint32_t WWWTranscoder_Byte2Hex_m539526283_MetadataUsageId;
extern const uint32_t WWWTranscoder_DataEncode_m4189841407_MetadataUsageId;
extern const uint32_t WWWTranscoder_DataEncode_m692723224_MetadataUsageId;
extern const uint32_t WWWTranscoder_Decode_m157051313_MetadataUsageId;
extern const uint32_t WWWTranscoder_Encode_m471876733_MetadataUsageId;
extern const uint32_t WWWTranscoder_QPEncode_m4114472822_MetadataUsageId;
extern const uint32_t WWWTranscoder_SevenBitClean_m207206973_MetadataUsageId;
extern const uint32_t WWWTranscoder_URLDecode_m3587034544_MetadataUsageId;
extern const uint32_t WWWTranscoder_URLEncode_m3430768649_MetadataUsageId;
extern const uint32_t WWWTranscoder__cctor_m1887474915_MetadataUsageId;
extern const uint32_t WebRequestUtils_MakeInitialUrl_m973728695_MetadataUsageId;
extern const uint32_t WebRequestUtils_MakeUriString_m291605890_MetadataUsageId;
extern const uint32_t WebRequestUtils_RedirectTo_m55747000_MetadataUsageId;
extern const uint32_t WebRequestUtils_URLDecode_m2727298221_MetadataUsageId;
extern const uint32_t WebRequestUtils__cctor_m4190982137_MetadataUsageId;
struct CertificateHandler_t2739891000;;
struct CertificateHandler_t2739891000_marshaled_com;
struct CertificateHandler_t2739891000_marshaled_com;;
struct CertificateHandler_t2739891000_marshaled_pinvoke;
struct CertificateHandler_t2739891000_marshaled_pinvoke;;
struct DownloadHandler_t2937767557;;
struct DownloadHandler_t2937767557_marshaled_com;
struct DownloadHandler_t2937767557_marshaled_com;;
struct DownloadHandler_t2937767557_marshaled_pinvoke;
struct DownloadHandler_t2937767557_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t463507806;;
struct UnityWebRequest_t463507806_marshaled_com;
struct UnityWebRequest_t463507806_marshaled_com;;
struct UnityWebRequest_t463507806_marshaled_pinvoke;
struct UnityWebRequest_t463507806_marshaled_pinvoke;;
struct UploadHandler_t2993558019;;
struct UploadHandler_t2993558019_marshaled_com;
struct UploadHandler_t2993558019_marshaled_com;;
struct UploadHandler_t2993558019_marshaled_pinvoke;
struct UploadHandler_t2993558019_marshaled_pinvoke;;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745553_H
#define U3CMODULEU3E_T692745553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745553 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745553_H
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
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t885026589* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1822382459 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3348751306 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___entries_1)); }
	inline EntryU5BU5D_t885026589* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t885026589** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t885026589* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keys_7)); }
	inline KeyCollection_t1822382459 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1822382459 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1822382459 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___values_8)); }
	inline ValueCollection_t3348751306 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3348751306 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3348751306 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
#ifndef LIST_1_T1293755103_H
#define LIST_1_T1293755103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte[]>
struct  List_1_t1293755103  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t457913172* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____items_1)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__items_1() const { return ____items_1; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1293755103, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1293755103_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5DU5BU5D_t457913172* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1293755103_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5DU5BU5D_t457913172* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5DU5BU5D_t457913172* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1293755103_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t1281789340* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t1281789340* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t1281789340** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t1281789340* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
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
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t3301955079 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t3301955079 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t3301955079 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t3301955079 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t3301955079 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t3301955079 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t3301955079 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCulture_0), value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t3301955079 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t3301955079 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t3301955079 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCultureIgnoreCase_1), value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____ordinal_2)); }
	inline StringComparer_t3301955079 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t3301955079 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t3301955079 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((&____ordinal_2), value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t3301955079 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t3301955079 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t3301955079 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&____ordinalIgnoreCase_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_56)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_56), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_59)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_59), value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_60)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_60), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_61), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef WWWTRANSCODER_T272523958_H
#define WWWTRANSCODER_T272523958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWTranscoder
struct  WWWTranscoder_t272523958  : public RuntimeObject
{
public:

public:
};

struct WWWTranscoder_t272523958_StaticFields
{
public:
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_t4116647657* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_t4116647657* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_t4116647657* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_t4116647657* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_t4116647657* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_t4116647657* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_t4116647657* ___qpForbidden_8;

public:
	inline static int32_t get_offset_of_ucHexChars_0() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___ucHexChars_0)); }
	inline ByteU5BU5D_t4116647657* get_ucHexChars_0() const { return ___ucHexChars_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_ucHexChars_0() { return &___ucHexChars_0; }
	inline void set_ucHexChars_0(ByteU5BU5D_t4116647657* value)
	{
		___ucHexChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___ucHexChars_0), value);
	}

	inline static int32_t get_offset_of_lcHexChars_1() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___lcHexChars_1)); }
	inline ByteU5BU5D_t4116647657* get_lcHexChars_1() const { return ___lcHexChars_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_lcHexChars_1() { return &___lcHexChars_1; }
	inline void set_lcHexChars_1(ByteU5BU5D_t4116647657* value)
	{
		___lcHexChars_1 = value;
		Il2CppCodeGenWriteBarrier((&___lcHexChars_1), value);
	}

	inline static int32_t get_offset_of_urlEscapeChar_2() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___urlEscapeChar_2)); }
	inline uint8_t get_urlEscapeChar_2() const { return ___urlEscapeChar_2; }
	inline uint8_t* get_address_of_urlEscapeChar_2() { return &___urlEscapeChar_2; }
	inline void set_urlEscapeChar_2(uint8_t value)
	{
		___urlEscapeChar_2 = value;
	}

	inline static int32_t get_offset_of_urlSpace_3() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___urlSpace_3)); }
	inline ByteU5BU5D_t4116647657* get_urlSpace_3() const { return ___urlSpace_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_urlSpace_3() { return &___urlSpace_3; }
	inline void set_urlSpace_3(ByteU5BU5D_t4116647657* value)
	{
		___urlSpace_3 = value;
		Il2CppCodeGenWriteBarrier((&___urlSpace_3), value);
	}

	inline static int32_t get_offset_of_dataSpace_4() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___dataSpace_4)); }
	inline ByteU5BU5D_t4116647657* get_dataSpace_4() const { return ___dataSpace_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_dataSpace_4() { return &___dataSpace_4; }
	inline void set_dataSpace_4(ByteU5BU5D_t4116647657* value)
	{
		___dataSpace_4 = value;
		Il2CppCodeGenWriteBarrier((&___dataSpace_4), value);
	}

	inline static int32_t get_offset_of_urlForbidden_5() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___urlForbidden_5)); }
	inline ByteU5BU5D_t4116647657* get_urlForbidden_5() const { return ___urlForbidden_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_urlForbidden_5() { return &___urlForbidden_5; }
	inline void set_urlForbidden_5(ByteU5BU5D_t4116647657* value)
	{
		___urlForbidden_5 = value;
		Il2CppCodeGenWriteBarrier((&___urlForbidden_5), value);
	}

	inline static int32_t get_offset_of_qpEscapeChar_6() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___qpEscapeChar_6)); }
	inline uint8_t get_qpEscapeChar_6() const { return ___qpEscapeChar_6; }
	inline uint8_t* get_address_of_qpEscapeChar_6() { return &___qpEscapeChar_6; }
	inline void set_qpEscapeChar_6(uint8_t value)
	{
		___qpEscapeChar_6 = value;
	}

	inline static int32_t get_offset_of_qpSpace_7() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___qpSpace_7)); }
	inline ByteU5BU5D_t4116647657* get_qpSpace_7() const { return ___qpSpace_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_qpSpace_7() { return &___qpSpace_7; }
	inline void set_qpSpace_7(ByteU5BU5D_t4116647657* value)
	{
		___qpSpace_7 = value;
		Il2CppCodeGenWriteBarrier((&___qpSpace_7), value);
	}

	inline static int32_t get_offset_of_qpForbidden_8() { return static_cast<int32_t>(offsetof(WWWTranscoder_t272523958_StaticFields, ___qpForbidden_8)); }
	inline ByteU5BU5D_t4116647657* get_qpForbidden_8() const { return ___qpForbidden_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_qpForbidden_8() { return &___qpForbidden_8; }
	inline void set_qpForbidden_8(ByteU5BU5D_t4116647657* value)
	{
		___qpForbidden_8 = value;
		Il2CppCodeGenWriteBarrier((&___qpForbidden_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWTRANSCODER_T272523958_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef WEBREQUESTUTILS_T3541624225_H
#define WEBREQUESTUTILS_T3541624225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3541624225  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3541624225_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t3657309853 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3541624225_StaticFields, ___domainRegex_0)); }
	inline Regex_t3657309853 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t3657309853 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t3657309853 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T3541624225_H
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
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_3), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_4), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T3586889763_H
#define ENUMERATOR_T3586889763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct  Enumerator_t3586889763 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1632706988 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t4030379155  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___dictionary_0)); }
	inline Dictionary_2_t1632706988 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1632706988 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___current_3)); }
	inline KeyValuePair_2_t4030379155  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t4030379155 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t4030379155  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t3586889763, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3586889763_H
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
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_t4116647657* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t61518632 * ____lastReadTask_14;

public:
	inline static int32_t get_offset_of__buffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____buffer_5)); }
	inline ByteU5BU5D_t4116647657* get__buffer_5() const { return ____buffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_5() { return &____buffer_5; }
	inline void set__buffer_5(ByteU5BU5D_t4116647657* value)
	{
		____buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_5), value);
	}

	inline static int32_t get_offset_of__origin_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____origin_6)); }
	inline int32_t get__origin_6() const { return ____origin_6; }
	inline int32_t* get_address_of__origin_6() { return &____origin_6; }
	inline void set__origin_6(int32_t value)
	{
		____origin_6 = value;
	}

	inline static int32_t get_offset_of__position_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____position_7)); }
	inline int32_t get__position_7() const { return ____position_7; }
	inline int32_t* get_address_of__position_7() { return &____position_7; }
	inline void set__position_7(int32_t value)
	{
		____position_7 = value;
	}

	inline static int32_t get_offset_of__length_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____length_8)); }
	inline int32_t get__length_8() const { return ____length_8; }
	inline int32_t* get_address_of__length_8() { return &____length_8; }
	inline void set__length_8(int32_t value)
	{
		____length_8 = value;
	}

	inline static int32_t get_offset_of__capacity_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____capacity_9)); }
	inline int32_t get__capacity_9() const { return ____capacity_9; }
	inline int32_t* get_address_of__capacity_9() { return &____capacity_9; }
	inline void set__capacity_9(int32_t value)
	{
		____capacity_9 = value;
	}

	inline static int32_t get_offset_of__expandable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____expandable_10)); }
	inline bool get__expandable_10() const { return ____expandable_10; }
	inline bool* get_address_of__expandable_10() { return &____expandable_10; }
	inline void set__expandable_10(bool value)
	{
		____expandable_10 = value;
	}

	inline static int32_t get_offset_of__writable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____writable_11)); }
	inline bool get__writable_11() const { return ____writable_11; }
	inline bool* get_address_of__writable_11() { return &____writable_11; }
	inline void set__writable_11(bool value)
	{
		____writable_11 = value;
	}

	inline static int32_t get_offset_of__exposable_12() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____exposable_12)); }
	inline bool get__exposable_12() const { return ____exposable_12; }
	inline bool* get_address_of__exposable_12() { return &____exposable_12; }
	inline void set__exposable_12(bool value)
	{
		____exposable_12 = value;
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_14() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____lastReadTask_14)); }
	inline Task_1_t61518632 * get__lastReadTask_14() const { return ____lastReadTask_14; }
	inline Task_1_t61518632 ** get_address_of__lastReadTask_14() { return &____lastReadTask_14; }
	inline void set__lastReadTask_14(Task_1_t61518632 * value)
	{
		____lastReadTask_14 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___2)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___2)); }
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
#endif // REGEXOPTIONS_T92845595_H
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
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___2)); }
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
#endif // URIKIND_T3816567336_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef UNITYWEBREQUESTERROR_T359680823_H
#define UNITYWEBREQUESTERROR_T359680823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct  UnityWebRequestError_t359680823 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestError_t359680823, ___value___2)); }
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
#endif // UNITYWEBREQUESTERROR_T359680823_H
#ifndef UNITYWEBREQUESTMETHOD_T1119759680_H
#define UNITYWEBREQUESTMETHOD_T1119759680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
struct  UnityWebRequestMethod_t1119759680 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityWebRequestMethod_t1119759680, ___value___2)); }
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
#endif // UNITYWEBREQUESTMETHOD_T1119759680_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
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
#ifndef REGEX_T3657309853_H
#define REGEX_T3657309853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t3657309853  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t51159052 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t881159249  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t1853889766 * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t1853889766 * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t1281789340* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t1927754563 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t2916547576 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_t4293407246 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___factory_1)); }
	inline RegexRunnerFactory_t51159052 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_t51159052 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_t51159052 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((&___factory_1), value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___internalMatchTimeout_5)); }
	inline TimeSpan_t881159249  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t881159249 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t881159249  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___caps_8)); }
	inline Hashtable_t1853889766 * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t1853889766 ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t1853889766 * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((&___caps_8), value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capnames_9)); }
	inline Hashtable_t1853889766 * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t1853889766 ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t1853889766 * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_9), value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capslist_10)); }
	inline StringU5BU5D_t1281789340* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_t1281789340** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_t1281789340* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_10), value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___runnerref_12)); }
	inline ExclusiveReference_t1927754563 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t1927754563 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t1927754563 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((&___runnerref_12), value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___replref_13)); }
	inline SharedReference_t2916547576 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t2916547576 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t2916547576 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((&___replref_13), value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___code_14)); }
	inline RegexCode_t4293407246 * get_code_14() const { return ___code_14; }
	inline RegexCode_t4293407246 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_t4293407246 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((&___code_14), value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t3657309853_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t881159249  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t881159249  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t881159249  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t881159249  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t3068621835 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t881159249  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t881159249 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t881159249  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t881159249  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t881159249 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t881159249  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t881159249  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t881159249 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t881159249  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t881159249  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t881159249 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t881159249  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t3068621835 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t3068621835 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t3068621835 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((&___livecode_16), value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T3657309853_H
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
#ifndef DOWNLOADHANDLERBUFFER_T2928496527_H
#define DOWNLOADHANDLERBUFFER_T2928496527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerBuffer
struct  DownloadHandlerBuffer_t2928496527  : public DownloadHandler_t2937767557
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t2928496527_marshaled_pinvoke : public DownloadHandler_t2937767557_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t2928496527_marshaled_com : public DownloadHandler_t2937767557_marshaled_com
{
};
#endif // DOWNLOADHANDLERBUFFER_T2928496527_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t2739891000 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t100236324 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_CertificateHandler_3)); }
	inline CertificateHandler_t2739891000 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_t2739891000 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_t2739891000 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Uri_4)); }
	inline Uri_t100236324 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t100236324 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t100236324 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_com* ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T463507806_H
#ifndef UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#define UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t3852015985  : public AsyncOperation_t1445031843
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t463507806 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t3852015985, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	UnityWebRequest_t463507806_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	UnityWebRequest_t463507806_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};
#endif // UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifndef UPLOADHANDLERRAW_T25761545_H
#define UPLOADHANDLERRAW_T25761545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandlerRaw
struct  UploadHandlerRaw_t25761545  : public UploadHandler_t2993558019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t25761545_marshaled_pinvoke : public UploadHandler_t2993558019_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t25761545_marshaled_com : public UploadHandler_t2993558019_marshaled_com
{
};
#endif // UPLOADHANDLERRAW_T25761545_H
#ifndef ACTION_1_T1617499438_H
#define ACTION_1_T1617499438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_t1617499438  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1617499438_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
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

extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(const DownloadHandler_t2937767557_marshaled_pinvoke& marshaled, DownloadHandler_t2937767557& unmarshaled);
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(DownloadHandler_t2937767557_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(const UploadHandler_t2993558019_marshaled_pinvoke& marshaled, UploadHandler_t2993558019& unmarshaled);
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(UploadHandler_t2993558019_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(const CertificateHandler_t2739891000_marshaled_pinvoke& marshaled, CertificateHandler_t2739891000& unmarshaled);
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(CertificateHandler_t2739891000_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_com& marshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com_back(const DownloadHandler_t2937767557_marshaled_com& marshaled, DownloadHandler_t2937767557& unmarshaled);
extern "C" void DownloadHandler_t2937767557_marshal_com_cleanup(DownloadHandler_t2937767557_marshaled_com& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_com(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_com& marshaled);
extern "C" void UploadHandler_t2993558019_marshal_com_back(const UploadHandler_t2993558019_marshaled_com& marshaled, UploadHandler_t2993558019& unmarshaled);
extern "C" void UploadHandler_t2993558019_marshal_com_cleanup(UploadHandler_t2993558019_marshaled_com& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_com& marshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com_back(const CertificateHandler_t2739891000_marshaled_com& marshaled, CertificateHandler_t2739891000& unmarshaled);
extern "C" void CertificateHandler_t2739891000_marshal_com_cleanup(CertificateHandler_t2739891000_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_back(const UnityWebRequest_t463507806_marshaled_pinvoke& marshaled, UnityWebRequest_t463507806& unmarshaled);
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_cleanup(UnityWebRequest_t463507806_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_com(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t463507806_marshal_com_back(const UnityWebRequest_t463507806_marshaled_com& marshaled, UnityWebRequest_t463507806& unmarshaled);
extern "C" void UnityWebRequest_t463507806_marshal_com_cleanup(UnityWebRequest_t463507806_marshaled_com& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m173800218_gshared (Dictionary_2_t132545152 * __this, int32_t p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3105409630_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m1937322960_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2198442938_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m258553009_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_m2747726581 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3024555697 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * DownloadHandler_GetTextEncoder_m3244408468 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m4249877960 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1298810678 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2466398549 (String_t* __this, Il2CppChar p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Trim(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m3384720403 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_GetEncoding_m2599798446 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m2126376377 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_m301356089 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
extern "C" IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_m1196797347 (RuntimeObject * __this /* static, unused */, DownloadHandlerBuffer_t2928496527 * ___obj0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandlerBuffer_InternalGetData_m3771716959 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandler_InternalGetByteArray_m4277508027 (RuntimeObject * __this /* static, unused */, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m1328190473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_m3669466854 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m2541992937 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m3969249710 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m970510352 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m54574009 (UnityWebRequest_t463507806 * __this, UploadHandler_t2993558019 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m1490033122 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m2347155176 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m2026832119 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m2753289015 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m4266558538 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_m3575283268 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m2954597795 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C" IL2CPP_METHOD_ATTR UploadHandler_t2993558019 * UnityWebRequest_get_uploadHandler_m3692520788 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Dispose_m3057340132 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C" IL2CPP_METHOD_ATTR CertificateHandler_t2739891000 * UnityWebRequest_get_certificateHandler_m3453757623 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_BeginWebRequest_m464964044 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_m3712663211 (UnityWebRequestAsyncOperation_t3852015985 * __this, UnityWebRequest_t463507806 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m4181352937 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m3005196532 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m4076320575 (RuntimeObject * __this /* static, unused */, int32_t ___err0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m305650395 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod UnityEngine.Networking.UnityWebRequest::GetMethod()
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetMethod_m1423435596 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetCustomMethod()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetCustomMethod_m500186968 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToUpper_m3324454496 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_m287631745 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_m3670745235 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_m973728695 (RuntimeObject * __this /* static, unused */, String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_m1036291515 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m4135786364 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m2218760805 (UnityWebRequest_t463507806 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* UnityWebRequest_GetResponseHeaderKeys_m3683377341 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern "C" IL2CPP_METHOD_ATTR StringComparer_t3301955079 * StringComparer_get_OrdinalIgnoreCase_m2680809380 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<!0>)
inline void Dictionary_2__ctor_m3312417965 (Dictionary_2_t1632706988 * __this, int32_t p0, RuntimeObject* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m173800218_gshared)(__this, p0, p1, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_m1460842649 (UnityWebRequest_t463507806 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m3045345476 (Dictionary_2_t1632706988 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m3105409630_gshared)(__this, p0, p1, method);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_m2465141380 (UnityWebRequest_t463507806 * __this, UploadHandler_t2993558019 * ___uh0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2637095256 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_m1873195862 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m3688870318 (UnityWebRequest_t463507806 * __this, int32_t ___timeout0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m914761499 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m3895125645 (UnityWebRequest_t463507806 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t2937767557 * ___downloadHandler2, UploadHandler_t2993558019 * ___uploadHandler3, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m2386773268 (UnityWebRequest_t463507806 * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m1397254157 (UploadHandlerRaw_t25761545 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m862219238 (RuntimeObject * __this /* static, unused */, UnityWebRequest_t463507806 * ___request0, String_t* ___postData1, const RuntimeMethod* method);
// System.String UnityEngine.WWWTranscoder::DataEncode(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR String_t* WWWTranscoder_DataEncode_m692723224 (RuntimeObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_m2709466885 (UploadHandler_t2993558019 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,UnityEngine.WWWForm)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m467019117 (RuntimeObject * __this /* static, unused */, UnityWebRequest_t463507806 * ___request0, WWWForm_t4064702195 * ___formData1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWForm_get_data_m1071289232 (WWWForm_t4064702195 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * WWWForm_get_headers_m1854290957 (WWWForm_t4064702195 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t3586889763  Dictionary_2_GetEnumerator_m3370926710 (Dictionary_2_t1632706988 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3586889763  (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1937322960_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t4030379155  Enumerator_get_Current_m578074249 (Enumerator_t3586889763 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t4030379155  (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_get_Current_m2198442938_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m865914345 (KeyValuePair_2_t4030379155 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m1897740815 (KeyValuePair_2_t4030379155 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m2927335855 (UnityWebRequest_t463507806 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_m2940501554 (Enumerator_t3586889763 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m2198401511 (Enumerator_t3586889763 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3586889763 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1351912812 (RuntimeObject * __this /* static, unused */, String_t* ___s0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_URLEncode_m3430768649 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AsyncOperation__ctor_m410195587 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Release_m2289600429 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler__ctor_m1351468229 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m2571854625 (RuntimeObject * __this /* static, unused */, UploadHandlerRaw_t25761545 * ___self0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::InternalSetContentType(System.String)
extern "C" IL2CPP_METHOD_ATTR void UploadHandlerRaw_InternalSetContentType_m1631554169 (UploadHandlerRaw_t25761545 * __this, String_t* ___newContentType0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m2882708797 (List_1_t1293755103 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m706204246 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m1593257607 (WWWForm_t4064702195 * __this, String_t* ___fieldName0, ByteU5BU5D_t4116647657* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(!0)
inline void List_1_Add_m4232982637 (List_1_t1293755103 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1293755103 *, ByteU5BU5D_t4116647657*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m444307833 (Dictionary_2_t1632706988 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2798867217 (Dictionary_2_t1632706988 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1632706988 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m258553009_gshared)(__this, p0, p1, method);
}
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * WWWForm_get_DefaultEncoding_m4131957975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2128850779 (MemoryStream_t94973147 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m883280456 (List_1_t3319525431 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m207206973 (RuntimeObject * __this /* static, unused */, String_t* ___s0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m4114472822 (RuntimeObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
inline ByteU5BU5D_t4116647657* List_1_get_Item_m2439967551 (List_1_t1293755103 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_t4116647657* (*) (List_1_t1293755103 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_m660812737 (List_1_t1293755103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1293755103 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Byte[] UnityEngine.WWWTranscoder::DataEncode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_DataEncode_m4189841407 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_Encode_m471876733 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t4116647657* ___space2, ByteU5BU5D_t4116647657* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_m3595214252 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, uint8_t ___b1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_Byte2Hex_m539526283 (RuntimeObject * __this /* static, unused */, uint8_t ___b0, ByteU5BU5D_t4116647657* ___hexChars1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_Decode_m157051313 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t4116647657* ___space2, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_m2163464440 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, int32_t ___index1, ByteU5BU5D_t4116647657* ___comperand2, const RuntimeMethod* method);
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m4102152163 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___b0, int32_t ___offset1, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m4023411958 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m391584135 (Uri_t100236324 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m3834080655 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m637273031 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m253204164 (Uri_t100236324 * __this, Uri_t100236324 * p0, Uri_t100236324 * p1, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m1474792120 (Uri_t100236324 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m279432735 (Uri_t100236324 * __this, Uri_t100236324 * p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Equality_m2988156441 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * p0, Uri_t100236324 * p1, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Regex_IsMatch_m3802225320 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m1686732325 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_m291605890 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsFile()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsFile_m2450018824 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsLoopback()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsLoopback_m2492530169 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m2551181575 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_m590948575 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m2727298221 (RuntimeObject * __this /* static, unused */, String_t* ___encoded0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2502310956 (StringBuilder_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m2383614642 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Uri::get_PathAndQuery()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m2396197970 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Fragment()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m575158891 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_URLDecode_m3587034544 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m3948448025 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_back(const CertificateHandler_t2739891000_marshaled_pinvoke& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_pinvoke_cleanup(CertificateHandler_t2739891000_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com(const CertificateHandler_t2739891000& unmarshaled, CertificateHandler_t2739891000_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_t2739891000_marshal_com_back(const CertificateHandler_t2739891000_marshaled_com& marshaled, CertificateHandler_t2739891000& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_t2739891000_marshal_com_cleanup(CertificateHandler_t2739891000_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m648790222 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m648790222_ftn) (CertificateHandler_t2739891000 *);
	static CertificateHandler_Release_m648790222_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m648790222_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.CertificateHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Finalize_m2289088740 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CertificateHandler_Dispose_m2100863831(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m937187171 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m2315002656 (CertificateHandler_t2739891000 * __this, ByteU5BU5D_t4116647657* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___certificateData0;
		bool L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m2100863831 (CertificateHandler_t2739891000 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CertificateHandler_Dispose_m2100863831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m648790222(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_back(const DownloadHandler_t2937767557_marshaled_pinvoke& marshaled, DownloadHandler_t2937767557& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_pinvoke_cleanup(DownloadHandler_t2937767557_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_com(const DownloadHandler_t2937767557& unmarshaled, DownloadHandler_t2937767557_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t2937767557_marshal_com_back(const DownloadHandler_t2937767557_marshaled_com& marshaled, DownloadHandler_t2937767557& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t2937767557_marshal_com_cleanup(DownloadHandler_t2937767557_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m2126376377 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Release_m3024555697 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	typedef void (*DownloadHandler_Release_m3024555697_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_Release_m3024555697_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_m3024555697_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Finalize_m3135872287 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		DownloadHandler_Dispose_m2747726581(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_m2747726581 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_Dispose_m2747726581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		DownloadHandler_Release_m3024555697(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandler_get_data_m1669096410 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m2427232382 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.Networking.DownloadHandler::GetText() */, __this);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandler_GetData_m364367605 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_0 = V_0;
		return L_0;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetText()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetText_m600283602 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_GetText_m600283602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		Encoding_t1523322056 * L_3 = DownloadHandler_GetTextEncoder_m3244408468(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		V_1 = L_6;
		goto IL_003a;
	}

IL_002e:
	{
		V_1 = _stringLiteral757602046;
		goto IL_003a;
	}

IL_003a:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * DownloadHandler_GetTextEncoder_m3244408468 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_GetTextEncoder_m3244408468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	Encoding_t1523322056 * V_5 = NULL;
	ArgumentException_t132251570 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = DownloadHandler_GetContentType_m4249877960(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_IndexOf_m1298810678(L_3, _stringLiteral3515428721, 5, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)(-1))))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = String_IndexOf_m2466398549(L_6, ((int32_t)61), L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) <= ((int32_t)(-1))))
		{
			goto IL_00af;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = String_Substring_m2848979100(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = String_Trim_m923598732(L_12, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_14 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t3528271667* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		CharU5BU5D_t3528271667* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)34));
		NullCheck(L_13);
		String_t* L_17 = String_Trim_m3384720403(L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = String_Trim_m923598732(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		String_t* L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20 = String_IndexOf_m363431711(L_19, ((int32_t)59), /*hidden argument*/NULL);
		V_4 = L_20;
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) <= ((int32_t)(-1))))
		{
			goto IL_0080;
		}
	}
	{
		String_t* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		String_t* L_24 = String_Substring_m1610150815(L_22, 0, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
	}

IL_0080:
	try
	{ // begin try (depth: 1)
		String_t* L_25 = V_3;
		Encoding_t1523322056 * L_26 = Encoding_GetEncoding_m2599798446(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		goto IL_00bd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_008e;
		throw e;
	}

CATCH_008e:
	{ // begin catch(System.ArgumentException)
		V_6 = ((ArgumentException_t132251570 *)__exception_local);
		String_t* L_27 = V_3;
		ArgumentException_t132251570 * L_28 = V_6;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_28);
		String_t* L_30 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral463295005, L_27, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		goto IL_00ae;
	} // end catch (depth: 1)

IL_00ae:
	{
	}

IL_00af:
	{
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		Encoding_t1523322056 * L_31 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_00bd;
	}

IL_00bd:
	{
		Encoding_t1523322056 * L_32 = V_5;
		return L_32;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
extern "C" IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m4249877960 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*DownloadHandler_GetContentType_m4249877960_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_GetContentType_m4249877960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_GetContentType_m4249877960_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::GetContentType()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandler_InternalGetByteArray_m4277508027 (RuntimeObject * __this /* static, unused */, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_t4116647657* (*DownloadHandler_InternalGetByteArray_m4277508027_ftn) (DownloadHandler_t2937767557 *);
	static DownloadHandler_InternalGetByteArray_m4277508027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_InternalGetByteArray_m4277508027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)");
	ByteU5BU5D_t4116647657* retVal = _il2cpp_icall_func(___dh0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke(const DownloadHandlerBuffer_t2928496527& unmarshaled, DownloadHandlerBuffer_t2928496527_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_back(const DownloadHandlerBuffer_t2928496527_marshaled_pinvoke& marshaled, DownloadHandlerBuffer_t2928496527& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_pinvoke_cleanup(DownloadHandlerBuffer_t2928496527_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_com(const DownloadHandlerBuffer_t2928496527& unmarshaled, DownloadHandlerBuffer_t2928496527_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_com_back(const DownloadHandlerBuffer_t2928496527_marshaled_com& marshaled, DownloadHandlerBuffer_t2928496527& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_t2928496527_marshal_com_cleanup(DownloadHandlerBuffer_t2928496527_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m914761499 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m2126376377(__this, /*hidden argument*/NULL);
		DownloadHandlerBuffer_InternalCreateBuffer_m301356089(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
extern "C" IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_m1196797347 (RuntimeObject * __this /* static, unused */, DownloadHandlerBuffer_t2928496527 * ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerBuffer_Create_m1196797347_ftn) (DownloadHandlerBuffer_t2928496527 *);
	static DownloadHandlerBuffer_Create_m1196797347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerBuffer_Create_m1196797347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)");
	intptr_t retVal = _il2cpp_icall_func(___obj0);
	return retVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_m301356089 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = DownloadHandlerBuffer_Create_m1196797347(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		((DownloadHandler_t2937767557 *)__this)->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::GetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandlerBuffer_GetData_m752341367 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = DownloadHandlerBuffer_InternalGetData_m3771716959(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandlerBuffer_InternalGetData_m3771716959 (DownloadHandlerBuffer_t2928496527 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = DownloadHandler_InternalGetByteArray_m4277508027(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t4116647657* L_1 = V_0;
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






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_back(const UnityWebRequest_t463507806_marshaled_pinvoke& marshaled, UnityWebRequest_t463507806& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_pinvoke_cleanup(UnityWebRequest_t463507806_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_com(const UnityWebRequest_t463507806& unmarshaled, UnityWebRequest_t463507806_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t463507806_marshal_com_back(const UnityWebRequest_t463507806_marshaled_com& marshaled, UnityWebRequest_t463507806& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t463507806_marshal_com_cleanup(UnityWebRequest_t463507806_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m2386773268 (UnityWebRequest_t463507806 * __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = UnityWebRequest_Create_m1328190473(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		UnityWebRequest_InternalSetDefaults_m3669466854(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_m2541992937(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m3969249710(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m3895125645 (UnityWebRequest_t463507806 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t2937767557 * ___downloadHandler2, UploadHandler_t2993558019 * ___uploadHandler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = UnityWebRequest_Create_m1328190473(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		UnityWebRequest_InternalSetDefaults_m3669466854(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_m2541992937(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m3969249710(__this, L_2, /*hidden argument*/NULL);
		DownloadHandler_t2937767557 * L_3 = ___downloadHandler2;
		UnityWebRequest_set_downloadHandler_m970510352(__this, L_3, /*hidden argument*/NULL);
		UploadHandler_t2993558019 * L_4 = ___uploadHandler3;
		UnityWebRequest_set_uploadHandler_m54574009(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m4076320575 (RuntimeObject * __this /* static, unused */, int32_t ___err0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m4076320575_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m4076320575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m4076320575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* retVal = _il2cpp_icall_func(___err0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m4266558538 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m2026832119 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_m2753289015 (UnityWebRequest_t463507806 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m1328190473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (*UnityWebRequest_Create_m1328190473_ftn) ();
	static UnityWebRequest_Create_m1328190473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Create_m1328190473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Create()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m2347155176 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Release_m2347155176_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_Release_m2347155176_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_m2347155176_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_m2954597795 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalDestroy_m2954597795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		UnityWebRequest_Abort_m1490033122(__this, /*hidden argument*/NULL);
		UnityWebRequest_Release_m2347155176(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_m3669466854 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m2026832119(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeUploadHandlerOnDispose_m2753289015(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeCertificateHandlerOnDispose_m4266558538(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Finalize_m2219008825 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UnityWebRequest_DisposeHandlers_m3575283268(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m2954597795(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_JUMP_TBL(0x19, IL_0019)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m3261105905 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Dispose_m3261105905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWebRequest_DisposeHandlers_m3575283268(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_m2954597795(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_m3575283268 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t2937767557 * V_0 = NULL;
	UploadHandler_t2993558019 * V_1 = NULL;
	CertificateHandler_t2739891000 * V_2 = NULL;
	{
		bool L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3413606992(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		DownloadHandler_t2937767557 * L_1 = UnityWebRequest_get_downloadHandler_m534911913(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		DownloadHandler_t2937767557 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DownloadHandler_t2937767557 * L_3 = V_0;
		NullCheck(L_3);
		DownloadHandler_Dispose_m2747726581(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
	}

IL_0023:
	{
		bool L_4 = UnityWebRequest_get_disposeUploadHandlerOnDispose_m2375741633(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		UploadHandler_t2993558019 * L_5 = UnityWebRequest_get_uploadHandler_m3692520788(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		UploadHandler_t2993558019 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		UploadHandler_t2993558019 * L_7 = V_1;
		NullCheck(L_7);
		UploadHandler_Dispose_m3057340132(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
	}

IL_0045:
	{
		bool L_8 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m4051074453(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		CertificateHandler_t2739891000 * L_9 = UnityWebRequest_get_certificateHandler_m3453757623(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		CertificateHandler_t2739891000 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		CertificateHandler_t2739891000 * L_11 = V_2;
		NullCheck(L_11);
		CertificateHandler_Dispose_m2100863831(L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_BeginWebRequest_m464964044 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef UnityWebRequestAsyncOperation_t3852015985 * (*UnityWebRequest_BeginWebRequest_m464964044_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_BeginWebRequest_m464964044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_BeginWebRequest_m464964044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::BeginWebRequest()");
	UnityWebRequestAsyncOperation_t3852015985 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_SendWebRequest_m489860187 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	UnityWebRequestAsyncOperation_t3852015985 * V_0 = NULL;
	UnityWebRequestAsyncOperation_t3852015985 * V_1 = NULL;
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_0 = UnityWebRequest_BeginWebRequest_m464964044(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		UnityWebRequestAsyncOperation_t3852015985 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_2 = V_0;
		NullCheck(L_2);
		UnityWebRequestAsyncOperation_set_webRequest_m3712663211(L_2, __this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_3 = V_0;
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequestAsyncOperation_t3852015985 * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m1490033122 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Abort_m1490033122_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_Abort_m1490033122_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_m1490033122_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_m3005196532 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetMethod_m3005196532_ftn) (UnityWebRequest_t463507806 *, int32_t);
	static UnityWebRequest_SetMethod_m3005196532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetMethod_m3005196532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)");
	int32_t retVal = _il2cpp_icall_func(__this, ___methodType0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_m287631745 (UnityWebRequest_t463507806 * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetMethod_m287631745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral2024966745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetMethod_m287631745_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = ___methodType0;
		int32_t L_3 = UnityWebRequest_SetMethod_m3005196532(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetMethod_m287631745_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_m305650395 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetCustomMethod_m305650395_ftn) (UnityWebRequest_t463507806 *, String_t*);
	static UnityWebRequest_SetCustomMethod_m305650395_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCustomMethod_m305650395_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___customMethodName0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_m3670745235 (UnityWebRequest_t463507806 * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetCustomMethod_m3670745235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral2024966745, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetCustomMethod_m3670745235_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___customMethodName0;
		int32_t L_3 = UnityWebRequest_SetCustomMethod_m305650395(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetCustomMethod_m3670745235_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod UnityEngine.Networking.UnityWebRequest::GetMethod()
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetMethod_m1423435596 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_GetMethod_m1423435596_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_GetMethod_m1423435596_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetMethod_m1423435596_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetMethod()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetCustomMethod()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetCustomMethod_m500186968 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetCustomMethod_m500186968_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_GetCustomMethod_m500186968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetCustomMethod_m500186968_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetCustomMethod()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_method_m1528248449 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_get_method_m1528248449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = UnityWebRequest_GetMethod_m1423435596(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_0044;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_0023:
	{
		V_1 = _stringLiteral1130393535;
		goto IL_005b;
	}

IL_002e:
	{
		V_1 = _stringLiteral45808443;
		goto IL_005b;
	}

IL_0039:
	{
		V_1 = _stringLiteral1131442134;
		goto IL_005b;
	}

IL_0044:
	{
		V_1 = _stringLiteral831347629;
		goto IL_005b;
	}

IL_004f:
	{
		String_t* L_2 = UnityWebRequest_GetCustomMethod_m500186968(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_005b;
	}

IL_005b:
	{
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m3969249710 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_method_m3969249710_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3514720613, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UnityWebRequest_set_method_m3969249710_RuntimeMethod_var);
	}

IL_0018:
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4 = String_ToUpper_m3324454496(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = String_op_Equality_m920492651(NULL /*static, unused*/, L_6, _stringLiteral1130393535, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, _stringLiteral45808443, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral1131442134, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral831347629, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008e;
		}
	}
	{
		goto IL_009a;
	}

IL_006a:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 0, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_0076:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 1, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_0082:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 2, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_008e:
	{
		UnityWebRequest_InternalSetMethod_m287631745(__this, 3, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_009a:
	{
		String_t* L_14 = ___value0;
		NullCheck(L_14);
		String_t* L_15 = String_ToUpper_m3324454496(L_14, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetCustomMethod_m3670745235(__this, L_15, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m2541992937 (UnityWebRequest_t463507806 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_url_m2541992937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral2530579871;
		String_t* L_0 = ___value0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_2 = WebRequestUtils_MakeInitialUrl_m973728695(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetUrl_m1036291515(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m4135786364 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUrl_m4135786364_ftn) (UnityWebRequest_t463507806 *, String_t*);
	static UnityWebRequest_SetUrl_m4135786364_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUrl_m4135786364_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___url0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_m1036291515 (UnityWebRequest_t463507806 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetUrl_m1036291515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral314995292, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetUrl_m1036291515_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___url0;
		int32_t L_3 = UnityWebRequest_SetUrl_m4135786364(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetUrl_m1036291515_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C" IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m1090830473 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef int64_t (*UnityWebRequest_get_responseCode_m1090830473_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_responseCode_m1090830473_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_responseCode_m1090830473_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_responseCode()");
	int64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m4181352937 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isModifiable_m4181352937_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isModifiable_m4181352937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isModifiable_m4181352937_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m1231611882 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isNetworkError_m1231611882_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isNetworkError_m1231611882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isNetworkError_m1231611882_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isNetworkError()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m797082501 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isHttpError_m797082501_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_get_isHttpError_m797082501_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isHttpError_m797082501_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isHttpError()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetRequestHeader_m1019420783 (UnityWebRequest_t463507806 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetRequestHeader_m1019420783_ftn) (UnityWebRequest_t463507806 *, String_t*);
	static UnityWebRequest_GetRequestHeader_m1019420783_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetRequestHeader_m1019420783_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetRequestHeader(System.String)");
	String_t* retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m2218760805 (UnityWebRequest_t463507806 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_InternalSetRequestHeader_m2218760805_ftn) (UnityWebRequest_t463507806 *, String_t*, String_t*);
	static UnityWebRequest_InternalSetRequestHeader_m2218760805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_InternalSetRequestHeader_m2218760805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___name0, ___value1);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m2927335855 (UnityWebRequest_t463507806 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_SetRequestHeader_m2927335855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3272455574, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_3 = ___value1;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral1361828523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_0028:
	{
		bool L_5 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, _stringLiteral3767907038, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_003e:
	{
		String_t* L_7 = ___name0;
		String_t* L_8 = ___value1;
		int32_t L_9 = UnityWebRequest_InternalSetRequestHeader_m2218760805(__this, L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_11 = V_0;
		String_t* L_12 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_13 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, UnityWebRequest_SetRequestHeader_m2927335855_RuntimeMethod_var);
	}

IL_0059:
	{
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetResponseHeader_m1460842649 (UnityWebRequest_t463507806 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetResponseHeader_m1460842649_ftn) (UnityWebRequest_t463507806 *, String_t*);
	static UnityWebRequest_GetResponseHeader_m1460842649_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeader_m1460842649_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeader(System.String)");
	String_t* retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.String[] UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* UnityWebRequest_GetResponseHeaderKeys_m3683377341 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	typedef StringU5BU5D_t1281789340* (*UnityWebRequest_GetResponseHeaderKeys_m3683377341_ftn) (UnityWebRequest_t463507806 *);
	static UnityWebRequest_GetResponseHeaderKeys_m3683377341_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetResponseHeaderKeys_m3683377341_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetResponseHeaderKeys()");
	StringU5BU5D_t1281789340* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * UnityWebRequest_GetResponseHeaders_m4205180634 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_GetResponseHeaders_m4205180634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	Dictionary_2_t1632706988 * V_1 = NULL;
	Dictionary_2_t1632706988 * V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = UnityWebRequest_GetResponseHeaderKeys_m3683377341(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StringU5BU5D_t1281789340* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		StringU5BU5D_t1281789340* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_001e;
		}
	}

IL_0016:
	{
		V_1 = (Dictionary_2_t1632706988 *)NULL;
		goto IL_005f;
	}

IL_001e:
	{
		StringU5BU5D_t1281789340* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t3301955079_il2cpp_TypeInfo_var);
		StringComparer_t3301955079 * L_4 = StringComparer_get_OrdinalIgnoreCase_m2680809380(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t1632706988 * L_5 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3312417965(L_5, (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), L_4, /*hidden argument*/Dictionary_2__ctor_m3312417965_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_004f;
	}

IL_0033:
	{
		StringU5BU5D_t1281789340* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		String_t* L_10 = UnityWebRequest_GetResponseHeader_m1460842649(__this, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		Dictionary_2_t1632706988 * L_11 = V_2;
		StringU5BU5D_t1281789340* L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		String_t* L_16 = V_4;
		NullCheck(L_11);
		Dictionary_2_Add_m3045345476(L_11, L_15, L_16, /*hidden argument*/Dictionary_2_Add_m3045345476_RuntimeMethod_var);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_18 = V_3;
		StringU5BU5D_t1281789340* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0033;
		}
	}
	{
		Dictionary_2_t1632706988 * L_20 = V_2;
		V_1 = L_20;
		goto IL_005f;
	}

IL_005f:
	{
		Dictionary_2_t1632706988 * L_21 = V_1;
		return L_21;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_m2465141380 (UnityWebRequest_t463507806 * __this, UploadHandler_t2993558019 * ___uh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUploadHandler_m2465141380_ftn) (UnityWebRequest_t463507806 *, UploadHandler_t2993558019 *);
	static UnityWebRequest_SetUploadHandler_m2465141380_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUploadHandler_m2465141380_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)");
	int32_t retVal = _il2cpp_icall_func(__this, ___uh0);
	return retVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C" IL2CPP_METHOD_ATTR UploadHandler_t2993558019 * UnityWebRequest_get_uploadHandler_m3692520788 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	UploadHandler_t2993558019 * V_0 = NULL;
	{
		UploadHandler_t2993558019 * L_0 = __this->get_m_UploadHandler_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		UploadHandler_t2993558019 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m54574009 (UnityWebRequest_t463507806 * __this, UploadHandler_t2993558019 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_uploadHandler_m54574009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral3211556917, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_uploadHandler_m54574009_RuntimeMethod_var);
	}

IL_0017:
	{
		UploadHandler_t2993558019 * L_2 = ___value0;
		int32_t L_3 = UnityWebRequest_SetUploadHandler_m2465141380(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_set_uploadHandler_m54574009_RuntimeMethod_var);
	}

IL_0031:
	{
		UploadHandler_t2993558019 * L_8 = ___value0;
		__this->set_m_UploadHandler_2(L_8);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m2637095256 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * ___dh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetDownloadHandler_m2637095256_ftn) (UnityWebRequest_t463507806 *, DownloadHandler_t2937767557 *);
	static UnityWebRequest_SetDownloadHandler_m2637095256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetDownloadHandler_m2637095256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)");
	int32_t retVal = _il2cpp_icall_func(__this, ___dh0);
	return retVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t2937767557 * V_0 = NULL;
	{
		DownloadHandler_t2937767557 * L_0 = __this->get_m_DownloadHandler_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		DownloadHandler_t2937767557 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m970510352 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_downloadHandler_m970510352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral1287409439, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_downloadHandler_m970510352_RuntimeMethod_var);
	}

IL_0017:
	{
		DownloadHandler_t2937767557 * L_2 = ___value0;
		int32_t L_3 = UnityWebRequest_SetDownloadHandler_m2637095256(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_7 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_set_downloadHandler_m970510352_RuntimeMethod_var);
	}

IL_0031:
	{
		DownloadHandler_t2937767557 * L_8 = ___value0;
		__this->set_m_DownloadHandler_1(L_8);
		return;
	}
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C" IL2CPP_METHOD_ATTR CertificateHandler_t2739891000 * UnityWebRequest_get_certificateHandler_m3453757623 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method)
{
	CertificateHandler_t2739891000 * V_0 = NULL;
	{
		CertificateHandler_t2739891000 * L_0 = __this->get_m_CertificateHandler_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		CertificateHandler_t2739891000 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetTimeoutMsec_m3688870318 (UnityWebRequest_t463507806 * __this, int32_t ___timeout0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetTimeoutMsec_m3688870318_ftn) (UnityWebRequest_t463507806 *, int32_t);
	static UnityWebRequest_SetTimeoutMsec_m3688870318_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetTimeoutMsec_m3688870318_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetTimeoutMsec(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___timeout0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_m3621399360 (UnityWebRequest_t463507806 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_timeout_m3621399360_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_m4181352937(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral2255292849, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_timeout_m3621399360_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_t1671470975_il2cpp_TypeInfo_var);
		int32_t L_3 = Math_Max_m1873195862(NULL /*static, unused*/, L_2, 0, /*hidden argument*/NULL);
		___value0 = L_3;
		int32_t L_4 = ___value0;
		int32_t L_5 = UnityWebRequest_SetTimeoutMsec_m3688870318(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)1000))), /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8 = UnityWebRequest_GetWebErrorString_m4076320575(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_9 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, UnityWebRequest_set_timeout_m3621399360_RuntimeMethod_var);
	}

IL_0040:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Get_m996521828 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Get_m996521828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t463507806 * V_0 = NULL;
	UnityWebRequest_t463507806 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t2928496527 * L_1 = (DownloadHandlerBuffer_t2928496527 *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t2928496527_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m914761499(L_1, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_2 = (UnityWebRequest_t463507806 *)il2cpp_codegen_object_new(UnityWebRequest_t463507806_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m3895125645(L_2, L_0, _stringLiteral1130393535, L_1, (UploadHandler_t2993558019 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		UnityWebRequest_t463507806 * L_3 = V_0;
		V_1 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		UnityWebRequest_t463507806 * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Delete_m2582172235 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Delete_m2582172235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t463507806 * V_0 = NULL;
	UnityWebRequest_t463507806 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_t463507806 * L_1 = (UnityWebRequest_t463507806 *)il2cpp_codegen_object_new(UnityWebRequest_t463507806_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m2386773268(L_1, L_0, _stringLiteral897372452, /*hidden argument*/NULL);
		V_0 = L_1;
		UnityWebRequest_t463507806 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		UnityWebRequest_t463507806 * L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Put_m3541626144 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, ByteU5BU5D_t4116647657* ___bodyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Put_m3541626144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t463507806 * V_0 = NULL;
	UnityWebRequest_t463507806 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t2928496527 * L_1 = (DownloadHandlerBuffer_t2928496527 *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t2928496527_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m914761499(L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = ___bodyData1;
		UploadHandlerRaw_t25761545 * L_3 = (UploadHandlerRaw_t25761545 *)il2cpp_codegen_object_new(UploadHandlerRaw_t25761545_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m1397254157(L_3, L_2, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_4 = (UnityWebRequest_t463507806 *)il2cpp_codegen_object_new(UnityWebRequest_t463507806_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m3895125645(L_4, L_0, _stringLiteral1131442134, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		UnityWebRequest_t463507806 * L_5 = V_0;
		V_1 = L_5;
		goto IL_001f;
	}

IL_001f:
	{
		UnityWebRequest_t463507806 * L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Put_m3448334644 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, String_t* ___bodyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Put_m3448334644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t463507806 * V_0 = NULL;
	UnityWebRequest_t463507806 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t2928496527 * L_1 = (DownloadHandlerBuffer_t2928496527 *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t2928496527_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m914761499(L_1, /*hidden argument*/NULL);
		Encoding_t1523322056 * L_2 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___bodyData1;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		UploadHandlerRaw_t25761545 * L_5 = (UploadHandlerRaw_t25761545 *)il2cpp_codegen_object_new(UploadHandlerRaw_t25761545_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m1397254157(L_5, L_4, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_6 = (UnityWebRequest_t463507806 *)il2cpp_codegen_object_new(UnityWebRequest_t463507806_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m3895125645(L_6, L_0, _stringLiteral1131442134, L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		UnityWebRequest_t463507806 * L_7 = V_0;
		V_1 = L_7;
		goto IL_0029;
	}

IL_0029:
	{
		UnityWebRequest_t463507806 * L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Post_m4211532029 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, String_t* ___postData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Post_m4211532029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t463507806 * V_0 = NULL;
	UnityWebRequest_t463507806 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_t463507806 * L_1 = (UnityWebRequest_t463507806 *)il2cpp_codegen_object_new(UnityWebRequest_t463507806_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m2386773268(L_1, L_0, _stringLiteral45808443, /*hidden argument*/NULL);
		V_0 = L_1;
		UnityWebRequest_t463507806 * L_2 = V_0;
		String_t* L_3 = ___postData1;
		UnityWebRequest_SetupPost_m862219238(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		UnityWebRequest_t463507806 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m862219238 (RuntimeObject * __this /* static, unused */, UnityWebRequest_t463507806 * ___request0, String_t* ___postData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_SetupPost_m862219238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		String_t* L_0 = ___postData1;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = ___postData1;
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		String_t* L_4 = WWWTranscoder_DataEncode_m692723224(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Encoding_t1523322056 * L_5 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		V_0 = L_7;
	}

IL_0028:
	{
		UnityWebRequest_t463507806 * L_8 = ___request0;
		ByteU5BU5D_t4116647657* L_9 = V_0;
		UploadHandlerRaw_t25761545 * L_10 = (UploadHandlerRaw_t25761545 *)il2cpp_codegen_object_new(UploadHandlerRaw_t25761545_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m1397254157(L_10, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		UnityWebRequest_set_uploadHandler_m54574009(L_8, L_10, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_11 = ___request0;
		NullCheck(L_11);
		UploadHandler_t2993558019 * L_12 = UnityWebRequest_get_uploadHandler_m3692520788(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		UploadHandler_set_contentType_m2709466885(L_12, _stringLiteral3776665136, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_13 = ___request0;
		DownloadHandlerBuffer_t2928496527 * L_14 = (DownloadHandlerBuffer_t2928496527 *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t2928496527_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m914761499(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		UnityWebRequest_set_downloadHandler_m970510352(L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Post_m4193475377 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, WWWForm_t4064702195 * ___formData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Post_m4193475377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t463507806 * V_0 = NULL;
	UnityWebRequest_t463507806 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_t463507806 * L_1 = (UnityWebRequest_t463507806 *)il2cpp_codegen_object_new(UnityWebRequest_t463507806_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m2386773268(L_1, L_0, _stringLiteral45808443, /*hidden argument*/NULL);
		V_0 = L_1;
		UnityWebRequest_t463507806 * L_2 = V_0;
		WWWForm_t4064702195 * L_3 = ___formData1;
		UnityWebRequest_SetupPost_m467019117(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		UnityWebRequest_t463507806 * L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,UnityEngine.WWWForm)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m467019117 (RuntimeObject * __this /* static, unused */, UnityWebRequest_t463507806 * ___request0, WWWForm_t4064702195 * ___formData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_SetupPost_m467019117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	Dictionary_2_t1632706988 * V_1 = NULL;
	KeyValuePair_2_t4030379155  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Enumerator_t3586889763  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
		WWWForm_t4064702195 * L_0 = ___formData1;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		WWWForm_t4064702195 * L_1 = ___formData1;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = WWWForm_get_data_m1071289232(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		V_0 = (ByteU5BU5D_t4116647657*)NULL;
	}

IL_001b:
	{
	}

IL_001c:
	{
		UnityWebRequest_t463507806 * L_4 = ___request0;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		UploadHandlerRaw_t25761545 * L_6 = (UploadHandlerRaw_t25761545 *)il2cpp_codegen_object_new(UploadHandlerRaw_t25761545_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m1397254157(L_6, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityWebRequest_set_uploadHandler_m54574009(L_4, L_6, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_7 = ___request0;
		DownloadHandlerBuffer_t2928496527 * L_8 = (DownloadHandlerBuffer_t2928496527 *)il2cpp_codegen_object_new(DownloadHandlerBuffer_t2928496527_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m914761499(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		UnityWebRequest_set_downloadHandler_m970510352(L_7, L_8, /*hidden argument*/NULL);
		WWWForm_t4064702195 * L_9 = ___formData1;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		WWWForm_t4064702195 * L_10 = ___formData1;
		NullCheck(L_10);
		Dictionary_2_t1632706988 * L_11 = WWWForm_get_headers_m1854290957(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		Dictionary_2_t1632706988 * L_12 = V_1;
		NullCheck(L_12);
		Enumerator_t3586889763  L_13 = Dictionary_2_GetEnumerator_m3370926710(L_12, /*hidden argument*/Dictionary_2_GetEnumerator_m3370926710_RuntimeMethod_var);
		V_3 = L_13;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006a;
		}

IL_004e:
		{
			KeyValuePair_2_t4030379155  L_14 = Enumerator_get_Current_m578074249((Enumerator_t3586889763 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m578074249_RuntimeMethod_var);
			V_2 = L_14;
			UnityWebRequest_t463507806 * L_15 = ___request0;
			String_t* L_16 = KeyValuePair_2_get_Key_m865914345((KeyValuePair_2_t4030379155 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m865914345_RuntimeMethod_var);
			String_t* L_17 = KeyValuePair_2_get_Value_m1897740815((KeyValuePair_2_t4030379155 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m1897740815_RuntimeMethod_var);
			NullCheck(L_15);
			UnityWebRequest_SetRequestHeader_m2927335855(L_15, L_16, L_17, /*hidden argument*/NULL);
		}

IL_006a:
		{
			bool L_18 = Enumerator_MoveNext_m2940501554((Enumerator_t3586889763 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m2940501554_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_004e;
			}
		}

IL_0076:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2198401511((Enumerator_t3586889763 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2198401511_RuntimeMethod_var);
		IL2CPP_END_FINALLY(123)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0089:
	{
	}

IL_008a:
	{
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1544092040 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		Encoding_t1523322056 * L_1 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = UnityWebRequest_EscapeURL_m1351912812(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1351912812 (RuntimeObject * __this /* static, unused */, String_t* ___s0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_EscapeURL_m1351912812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (String_t*)NULL;
		goto IL_0056;
	}

IL_000e:
	{
		String_t* L_1 = ___s0;
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral757602046, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		V_0 = _stringLiteral757602046;
		goto IL_0056;
	}

IL_0029:
	{
		Encoding_t1523322056 * L_3 = ___e1;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		V_0 = (String_t*)NULL;
		goto IL_0056;
	}

IL_0036:
	{
		Encoding_t1523322056 * L_4 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___s0;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_1 = L_6;
		ByteU5BU5D_t4116647657* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_8 = WWWTranscoder_URLEncode_m3430768649(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Encoding_t1523322056 * L_9 = ___e1;
		ByteU5BU5D_t4116647657* L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_9, L_10);
		V_0 = L_11;
		goto IL_0056;
	}

IL_0056:
	{
		String_t* L_12 = V_0;
		return L_12;
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


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke(const UnityWebRequestAsyncOperation_t3852015985& unmarshaled, UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_back(const UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke& marshaled, UnityWebRequestAsyncOperation_t3852015985& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_pinvoke_cleanup(UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_com(const UnityWebRequestAsyncOperation_t3852015985& unmarshaled, UnityWebRequestAsyncOperation_t3852015985_marshaled_com& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_com_back(const UnityWebRequestAsyncOperation_t3852015985_marshaled_com& marshaled, UnityWebRequestAsyncOperation_t3852015985& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t3852015985_marshal_com_cleanup(UnityWebRequestAsyncOperation_t3852015985_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation__ctor_m1252495487 (UnityWebRequestAsyncOperation_t3852015985 * __this, const RuntimeMethod* method)
{
	{
		AsyncOperation__ctor_m410195587(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_m3712663211 (UnityWebRequestAsyncOperation_t3852015985 * __this, UnityWebRequest_t463507806 * ___value0, const RuntimeMethod* method)
{
	{
		UnityWebRequest_t463507806 * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_pinvoke(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_back(const UploadHandler_t2993558019_marshaled_pinvoke& marshaled, UploadHandler_t2993558019& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_pinvoke_cleanup(UploadHandler_t2993558019_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_com(const UploadHandler_t2993558019& unmarshaled, UploadHandler_t2993558019_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t2993558019_marshal_com_back(const UploadHandler_t2993558019_marshaled_com& marshaled, UploadHandler_t2993558019& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t2993558019_marshal_com_cleanup(UploadHandler_t2993558019_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler__ctor_m1351468229 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Release_m2289600429 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_Release_m2289600429_ftn) (UploadHandler_t2993558019 *);
	static UploadHandler_Release_m2289600429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_m2289600429_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Finalize_m3322774190 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UploadHandler_Dispose_m3057340132(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Dispose_m3057340132 (UploadHandler_t2993558019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadHandler_Dispose_m3057340132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		UploadHandler_Release_m2289600429(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_m2709466885 (UploadHandler_t2993558019 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String) */, __this, L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String)
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_SetContentType_m411406960 (UploadHandler_t2993558019 * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	{
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke(const UploadHandlerRaw_t25761545& unmarshaled, UploadHandlerRaw_t25761545_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_back(const UploadHandlerRaw_t25761545_marshaled_pinvoke& marshaled, UploadHandlerRaw_t25761545& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_pinvoke_cleanup(UploadHandlerRaw_t25761545_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_com(const UploadHandlerRaw_t25761545& unmarshaled, UploadHandlerRaw_t25761545_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandlerRaw_t25761545_marshal_com_back(const UploadHandlerRaw_t25761545_marshaled_com& marshaled, UploadHandlerRaw_t25761545& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
extern "C" void UploadHandlerRaw_t25761545_marshal_com_cleanup(UploadHandlerRaw_t25761545_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m1397254157 (UploadHandlerRaw_t25761545 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadHandlerRaw__ctor_m1397254157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UploadHandler__ctor_m1351468229(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___data0;
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral4274026319, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UploadHandlerRaw__ctor_m1397254157_RuntimeMethod_var);
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		intptr_t L_4 = UploadHandlerRaw_Create_m2571854625(NULL /*static, unused*/, __this, L_3, /*hidden argument*/NULL);
		((UploadHandler_t2993558019 *)__this)->set_m_Ptr_0((intptr_t)L_4);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m2571854625 (RuntimeObject * __this /* static, unused */, UploadHandlerRaw_t25761545 * ___self0, ByteU5BU5D_t4116647657* ___data1, const RuntimeMethod* method)
{
	typedef intptr_t (*UploadHandlerRaw_Create_m2571854625_ftn) (UploadHandlerRaw_t25761545 *, ByteU5BU5D_t4116647657*);
	static UploadHandlerRaw_Create_m2571854625_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_Create_m2571854625_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte[])");
	intptr_t retVal = _il2cpp_icall_func(___self0, ___data1);
	return retVal;
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::InternalSetContentType(System.String)
extern "C" IL2CPP_METHOD_ATTR void UploadHandlerRaw_InternalSetContentType_m1631554169 (UploadHandlerRaw_t25761545 * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	typedef void (*UploadHandlerRaw_InternalSetContentType_m1631554169_ftn) (UploadHandlerRaw_t25761545 *, String_t*);
	static UploadHandlerRaw_InternalSetContentType_m1631554169_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_InternalSetContentType_m1631554169_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::InternalSetContentType(System.String)");
	_il2cpp_icall_func(__this, ___newContentType0);
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::SetContentType(System.String)
extern "C" IL2CPP_METHOD_ATTR void UploadHandlerRaw_SetContentType_m888678374 (UploadHandlerRaw_t25761545 * __this, String_t* ___newContentType0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___newContentType0;
		UploadHandlerRaw_InternalSetContentType_m1631554169(__this, L_0, /*hidden argument*/NULL);
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
// System.Void UnityEngine.WWWForm::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm__ctor_m2465700452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->set_containsFiles_5((bool)0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t1293755103 * L_0 = (List_1_t1293755103 *)il2cpp_codegen_object_new(List_1_t1293755103_il2cpp_TypeInfo_var);
		List_1__ctor_m2882708797(L_0, /*hidden argument*/List_1__ctor_m2882708797_RuntimeMethod_var);
		__this->set_formData_0(L_0);
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_1, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_fieldNames_1(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_fileNames_2(L_2);
		List_1_t3319525431 * L_3 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_3, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_types_3(L_3);
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->set_boundary_4(L_4);
		V_0 = 0;
		goto IL_0080;
	}

IL_004e:
	{
		int32_t L_5 = Random_Range_m4054026115(NULL /*static, unused*/, ((int32_t)48), ((int32_t)110), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)7));
	}

IL_0065:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)6));
	}

IL_0071:
	{
		ByteU5BU5D_t4116647657* L_10 = __this->get_boundary_4();
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)(((int32_t)((uint8_t)L_12))));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0080:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)40))))
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * WWWForm_get_DefaultEncoding_m4131957975 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Encoding_t1523322056 * V_0 = NULL;
	{
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Encoding_t1523322056 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m344280980 (WWWForm_t4064702195 * __this, String_t* ___fieldName0, ByteU5BU5D_t4116647657* ___contents1, String_t* ___fileName2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fieldName0;
		ByteU5BU5D_t4116647657* L_1 = ___contents1;
		String_t* L_2 = ___fileName2;
		WWWForm_AddBinaryData_m1593257607(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m1593257607 (WWWForm_t4064702195 * __this, String_t* ___fieldName0, ByteU5BU5D_t4116647657* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_AddBinaryData_m1593257607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B10_0 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	{
		__this->set_containsFiles_5((bool)1);
		ByteU5BU5D_t4116647657* L_0 = ___contents1;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)8)))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___contents1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)137)))))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = ___contents1;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_7 = ___contents1;
		NullCheck(L_7);
		int32_t L_8 = 2;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_10 = ___contents1;
		NullCheck(L_10);
		int32_t L_11 = 3;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_13 = ___contents1;
		NullCheck(L_13);
		int32_t L_14 = 4;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_16 = ___contents1;
		NullCheck(L_16);
		int32_t L_17 = 5;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_19 = ___contents1;
		NullCheck(L_19);
		int32_t L_20 = 6;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_0063;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_22 = ___contents1;
		NullCheck(L_22);
		int32_t L_23 = 7;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B10_0 = ((((int32_t)L_24) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B10_0 = 0;
	}

IL_0064:
	{
		V_0 = (bool)G_B10_0;
		String_t* L_25 = ___fileName2;
		if (L_25)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_26 = ___fieldName0;
		bool L_27 = V_0;
		G_B12_0 = L_26;
		if (!L_27)
		{
			G_B13_0 = L_26;
			goto IL_007d;
		}
	}
	{
		G_B14_0 = _stringLiteral2410385622;
		G_B14_1 = G_B12_0;
		goto IL_0082;
	}

IL_007d:
	{
		G_B14_0 = _stringLiteral3490508455;
		G_B14_1 = G_B13_0;
	}

IL_0082:
	{
		String_t* L_28 = String_Concat_m3937257545(NULL /*static, unused*/, G_B14_1, G_B14_0, /*hidden argument*/NULL);
		___fileName2 = L_28;
	}

IL_008a:
	{
		String_t* L_29 = ___mimeType3;
		if (L_29)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_00a4;
		}
	}
	{
		___mimeType3 = _stringLiteral2045074213;
		goto IL_00ab;
	}

IL_00a4:
	{
		___mimeType3 = _stringLiteral1612324208;
	}

IL_00ab:
	{
	}

IL_00ac:
	{
		List_1_t3319525431 * L_31 = __this->get_fieldNames_1();
		String_t* L_32 = ___fieldName0;
		NullCheck(L_31);
		List_1_Add_m1685793073(L_31, L_32, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_33 = __this->get_fileNames_2();
		String_t* L_34 = ___fileName2;
		NullCheck(L_33);
		List_1_Add_m1685793073(L_33, L_34, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t1293755103 * L_35 = __this->get_formData_0();
		ByteU5BU5D_t4116647657* L_36 = ___contents1;
		NullCheck(L_35);
		List_1_Add_m4232982637(L_35, L_36, /*hidden argument*/List_1_Add_m4232982637_RuntimeMethod_var);
		List_1_t3319525431 * L_37 = __this->get_types_3();
		String_t* L_38 = ___mimeType3;
		NullCheck(L_37);
		List_1_Add_m1685793073(L_37, L_38, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * WWWForm_get_headers_m1854290957 (WWWForm_t4064702195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_get_headers_m1854290957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1632706988 * V_0 = NULL;
	Dictionary_2_t1632706988 * V_1 = NULL;
	{
		Dictionary_2_t1632706988 * L_0 = (Dictionary_2_t1632706988 *)il2cpp_codegen_object_new(Dictionary_2_t1632706988_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m444307833(L_0, /*hidden argument*/Dictionary_2__ctor_m444307833_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->get_containsFiles_5();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		Dictionary_2_t1632706988 * L_2 = V_0;
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = __this->get_boundary_4();
		ByteU5BU5D_t4116647657* L_5 = __this->get_boundary_4();
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral587319919, L_6, _stringLiteral3452614526, /*hidden argument*/NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_m2798867217(L_2, _stringLiteral2263792357, L_7, /*hidden argument*/Dictionary_2_set_Item_m2798867217_RuntimeMethod_var);
		goto IL_005a;
	}

IL_004a:
	{
		Dictionary_2_t1632706988 * L_8 = V_0;
		NullCheck(L_8);
		Dictionary_2_set_Item_m2798867217(L_8, _stringLiteral2263792357, _stringLiteral3776665136, /*hidden argument*/Dictionary_2_set_Item_m2798867217_RuntimeMethod_var);
	}

IL_005a:
	{
		Dictionary_2_t1632706988 * L_9 = V_0;
		V_1 = L_9;
		goto IL_0061;
	}

IL_0061:
	{
		Dictionary_2_t1632706988 * L_10 = V_1;
		return L_10;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWForm_get_data_m1071289232 (WWWForm_t4064702195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_get_data_m1071289232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	MemoryStream_t94973147 * V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_t4116647657* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	ByteU5BU5D_t4116647657* V_11 = NULL;
	String_t* V_12 = NULL;
	ByteU5BU5D_t4116647657* V_13 = NULL;
	ByteU5BU5D_t4116647657* V_14 = NULL;
	ByteU5BU5D_t4116647657* V_15 = NULL;
	ByteU5BU5D_t4116647657* V_16 = NULL;
	ByteU5BU5D_t4116647657* V_17 = NULL;
	MemoryStream_t94973147 * V_18 = NULL;
	int32_t V_19 = 0;
	ByteU5BU5D_t4116647657* V_20 = NULL;
	ByteU5BU5D_t4116647657* V_21 = NULL;
	ByteU5BU5D_t4116647657* V_22 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_containsFiles_5();
		if (!L_0)
		{
			goto IL_0317;
		}
	}
	{
		Encoding_t1523322056 * L_1 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, _stringLiteral3450713987);
		V_0 = L_2;
		Encoding_t1523322056 * L_3 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral3453007779);
		V_1 = L_4;
		Encoding_t1523322056 * L_5 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, _stringLiteral463866407);
		V_2 = L_6;
		Encoding_t1523322056 * L_7 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_7, _stringLiteral4013423584);
		V_3 = L_8;
		Encoding_t1523322056 * L_9 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, _stringLiteral3452614526);
		V_4 = L_10;
		Encoding_t1523322056 * L_11 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t4116647657* L_12 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, _stringLiteral2088176782);
		V_5 = L_12;
		MemoryStream_t94973147 * L_13 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2128850779(L_13, ((int32_t)1024), /*hidden argument*/NULL);
		V_6 = L_13;
	}

IL_007b:
	try
	{ // begin try (depth: 1)
		{
			V_7 = 0;
			goto IL_02a2;
		}

IL_0084:
		{
			MemoryStream_t94973147 * L_14 = V_6;
			ByteU5BU5D_t4116647657* L_15 = V_1;
			ByteU5BU5D_t4116647657* L_16 = V_1;
			NullCheck(L_16);
			NullCheck(L_14);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))));
			MemoryStream_t94973147 * L_17 = V_6;
			ByteU5BU5D_t4116647657* L_18 = V_0;
			ByteU5BU5D_t4116647657* L_19 = V_0;
			NullCheck(L_19);
			NullCheck(L_17);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))));
			MemoryStream_t94973147 * L_20 = V_6;
			ByteU5BU5D_t4116647657* L_21 = __this->get_boundary_4();
			ByteU5BU5D_t4116647657* L_22 = __this->get_boundary_4();
			NullCheck(L_22);
			NullCheck(L_20);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))));
			MemoryStream_t94973147 * L_23 = V_6;
			ByteU5BU5D_t4116647657* L_24 = V_1;
			ByteU5BU5D_t4116647657* L_25 = V_1;
			NullCheck(L_25);
			NullCheck(L_23);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))));
			MemoryStream_t94973147 * L_26 = V_6;
			ByteU5BU5D_t4116647657* L_27 = V_2;
			ByteU5BU5D_t4116647657* L_28 = V_2;
			NullCheck(L_28);
			NullCheck(L_26);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))));
			Encoding_t1523322056 * L_29 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t3319525431 * L_30 = __this->get_types_3();
			int32_t L_31 = V_7;
			NullCheck(L_30);
			String_t* L_32 = List_1_get_Item_m883280456(L_30, L_31, /*hidden argument*/List_1_get_Item_m883280456_RuntimeMethod_var);
			NullCheck(L_29);
			ByteU5BU5D_t4116647657* L_33 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_29, L_32);
			V_8 = L_33;
			MemoryStream_t94973147 * L_34 = V_6;
			ByteU5BU5D_t4116647657* L_35 = V_8;
			ByteU5BU5D_t4116647657* L_36 = V_8;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))));
			MemoryStream_t94973147 * L_37 = V_6;
			ByteU5BU5D_t4116647657* L_38 = V_1;
			ByteU5BU5D_t4116647657* L_39 = V_1;
			NullCheck(L_39);
			NullCheck(L_37);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))));
			MemoryStream_t94973147 * L_40 = V_6;
			ByteU5BU5D_t4116647657* L_41 = V_3;
			ByteU5BU5D_t4116647657* L_42 = V_3;
			NullCheck(L_42);
			NullCheck(L_40);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length)))));
			Encoding_t1523322056 * L_43 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_43);
			String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Text.Encoding::get_HeaderName() */, L_43);
			V_9 = L_44;
			List_1_t3319525431 * L_45 = __this->get_fieldNames_1();
			int32_t L_46 = V_7;
			NullCheck(L_45);
			String_t* L_47 = List_1_get_Item_m883280456(L_45, L_46, /*hidden argument*/List_1_get_Item_m883280456_RuntimeMethod_var);
			V_10 = L_47;
			String_t* L_48 = V_10;
			Encoding_t1523322056 * L_49 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			bool L_50 = WWWTranscoder_SevenBitClean_m207206973(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0148;
			}
		}

IL_0136:
		{
			String_t* L_51 = V_10;
			NullCheck(L_51);
			int32_t L_52 = String_IndexOf_m1977622757(L_51, _stringLiteral3451631507, /*hidden argument*/NULL);
			if ((((int32_t)L_52) <= ((int32_t)(-1))))
			{
				goto IL_0183;
			}
		}

IL_0148:
		{
			StringU5BU5D_t1281789340* L_53 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t1281789340* L_54 = L_53;
			NullCheck(L_54);
			ArrayElementTypeCheck (L_54, _stringLiteral3451631507);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3451631507);
			StringU5BU5D_t1281789340* L_55 = L_54;
			String_t* L_56 = V_9;
			NullCheck(L_55);
			ArrayElementTypeCheck (L_55, L_56);
			(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_56);
			StringU5BU5D_t1281789340* L_57 = L_55;
			NullCheck(L_57);
			ArrayElementTypeCheck (L_57, _stringLiteral351986320);
			(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral351986320);
			StringU5BU5D_t1281789340* L_58 = L_57;
			String_t* L_59 = V_10;
			Encoding_t1523322056 * L_60 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			String_t* L_61 = WWWTranscoder_QPEncode_m4114472822(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
			NullCheck(L_58);
			ArrayElementTypeCheck (L_58, L_61);
			(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_61);
			StringU5BU5D_t1281789340* L_62 = L_58;
			NullCheck(L_62);
			ArrayElementTypeCheck (L_62, _stringLiteral3451762577);
			(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451762577);
			String_t* L_63 = String_Concat_m1809518182(NULL /*static, unused*/, L_62, /*hidden argument*/NULL);
			V_10 = L_63;
		}

IL_0183:
		{
			Encoding_t1523322056 * L_64 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_65 = V_10;
			NullCheck(L_64);
			ByteU5BU5D_t4116647657* L_66 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_64, L_65);
			V_11 = L_66;
			MemoryStream_t94973147 * L_67 = V_6;
			ByteU5BU5D_t4116647657* L_68 = V_11;
			ByteU5BU5D_t4116647657* L_69 = V_11;
			NullCheck(L_69);
			NullCheck(L_67);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_67, L_68, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_69)->max_length)))));
			MemoryStream_t94973147 * L_70 = V_6;
			ByteU5BU5D_t4116647657* L_71 = V_4;
			ByteU5BU5D_t4116647657* L_72 = V_4;
			NullCheck(L_72);
			NullCheck(L_70);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_70, L_71, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_72)->max_length)))));
			List_1_t3319525431 * L_73 = __this->get_fileNames_2();
			int32_t L_74 = V_7;
			NullCheck(L_73);
			String_t* L_75 = List_1_get_Item_m883280456(L_73, L_74, /*hidden argument*/List_1_get_Item_m883280456_RuntimeMethod_var);
			if (!L_75)
			{
				goto IL_0266;
			}
		}

IL_01bf:
		{
			List_1_t3319525431 * L_76 = __this->get_fileNames_2();
			int32_t L_77 = V_7;
			NullCheck(L_76);
			String_t* L_78 = List_1_get_Item_m883280456(L_76, L_77, /*hidden argument*/List_1_get_Item_m883280456_RuntimeMethod_var);
			V_12 = L_78;
			String_t* L_79 = V_12;
			Encoding_t1523322056 * L_80 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			bool L_81 = WWWTranscoder_SevenBitClean_m207206973(NULL /*static, unused*/, L_79, L_80, /*hidden argument*/NULL);
			if (!L_81)
			{
				goto IL_01f2;
			}
		}

IL_01e0:
		{
			String_t* L_82 = V_12;
			NullCheck(L_82);
			int32_t L_83 = String_IndexOf_m1977622757(L_82, _stringLiteral3451631507, /*hidden argument*/NULL);
			if ((((int32_t)L_83) <= ((int32_t)(-1))))
			{
				goto IL_022d;
			}
		}

IL_01f2:
		{
			StringU5BU5D_t1281789340* L_84 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t1281789340* L_85 = L_84;
			NullCheck(L_85);
			ArrayElementTypeCheck (L_85, _stringLiteral3451631507);
			(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3451631507);
			StringU5BU5D_t1281789340* L_86 = L_85;
			String_t* L_87 = V_9;
			NullCheck(L_86);
			ArrayElementTypeCheck (L_86, L_87);
			(L_86)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_87);
			StringU5BU5D_t1281789340* L_88 = L_86;
			NullCheck(L_88);
			ArrayElementTypeCheck (L_88, _stringLiteral351986320);
			(L_88)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral351986320);
			StringU5BU5D_t1281789340* L_89 = L_88;
			String_t* L_90 = V_12;
			Encoding_t1523322056 * L_91 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			String_t* L_92 = WWWTranscoder_QPEncode_m4114472822(NULL /*static, unused*/, L_90, L_91, /*hidden argument*/NULL);
			NullCheck(L_89);
			ArrayElementTypeCheck (L_89, L_92);
			(L_89)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_92);
			StringU5BU5D_t1281789340* L_93 = L_89;
			NullCheck(L_93);
			ArrayElementTypeCheck (L_93, _stringLiteral3451762577);
			(L_93)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3451762577);
			String_t* L_94 = String_Concat_m1809518182(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
			V_12 = L_94;
		}

IL_022d:
		{
			Encoding_t1523322056 * L_95 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			String_t* L_96 = V_12;
			NullCheck(L_95);
			ByteU5BU5D_t4116647657* L_97 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_95, L_96);
			V_13 = L_97;
			MemoryStream_t94973147 * L_98 = V_6;
			ByteU5BU5D_t4116647657* L_99 = V_5;
			ByteU5BU5D_t4116647657* L_100 = V_5;
			NullCheck(L_100);
			NullCheck(L_98);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_98, L_99, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_100)->max_length)))));
			MemoryStream_t94973147 * L_101 = V_6;
			ByteU5BU5D_t4116647657* L_102 = V_13;
			ByteU5BU5D_t4116647657* L_103 = V_13;
			NullCheck(L_103);
			NullCheck(L_101);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_101, L_102, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_103)->max_length)))));
			MemoryStream_t94973147 * L_104 = V_6;
			ByteU5BU5D_t4116647657* L_105 = V_4;
			ByteU5BU5D_t4116647657* L_106 = V_4;
			NullCheck(L_106);
			NullCheck(L_104);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_104, L_105, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_106)->max_length)))));
		}

IL_0266:
		{
			MemoryStream_t94973147 * L_107 = V_6;
			ByteU5BU5D_t4116647657* L_108 = V_1;
			ByteU5BU5D_t4116647657* L_109 = V_1;
			NullCheck(L_109);
			NullCheck(L_107);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_107, L_108, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_109)->max_length)))));
			MemoryStream_t94973147 * L_110 = V_6;
			ByteU5BU5D_t4116647657* L_111 = V_1;
			ByteU5BU5D_t4116647657* L_112 = V_1;
			NullCheck(L_112);
			NullCheck(L_110);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_110, L_111, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_112)->max_length)))));
			List_1_t1293755103 * L_113 = __this->get_formData_0();
			int32_t L_114 = V_7;
			NullCheck(L_113);
			ByteU5BU5D_t4116647657* L_115 = List_1_get_Item_m2439967551(L_113, L_114, /*hidden argument*/List_1_get_Item_m2439967551_RuntimeMethod_var);
			V_14 = L_115;
			MemoryStream_t94973147 * L_116 = V_6;
			ByteU5BU5D_t4116647657* L_117 = V_14;
			ByteU5BU5D_t4116647657* L_118 = V_14;
			NullCheck(L_118);
			NullCheck(L_116);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_116, L_117, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_118)->max_length)))));
			int32_t L_119 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)1));
		}

IL_02a2:
		{
			int32_t L_120 = V_7;
			List_1_t1293755103 * L_121 = __this->get_formData_0();
			NullCheck(L_121);
			int32_t L_122 = List_1_get_Count_m660812737(L_121, /*hidden argument*/List_1_get_Count_m660812737_RuntimeMethod_var);
			if ((((int32_t)L_120) < ((int32_t)L_122)))
			{
				goto IL_0084;
			}
		}

IL_02b4:
		{
			MemoryStream_t94973147 * L_123 = V_6;
			ByteU5BU5D_t4116647657* L_124 = V_1;
			ByteU5BU5D_t4116647657* L_125 = V_1;
			NullCheck(L_125);
			NullCheck(L_123);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_123, L_124, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_125)->max_length)))));
			MemoryStream_t94973147 * L_126 = V_6;
			ByteU5BU5D_t4116647657* L_127 = V_0;
			ByteU5BU5D_t4116647657* L_128 = V_0;
			NullCheck(L_128);
			NullCheck(L_126);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_126, L_127, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_128)->max_length)))));
			MemoryStream_t94973147 * L_129 = V_6;
			ByteU5BU5D_t4116647657* L_130 = __this->get_boundary_4();
			ByteU5BU5D_t4116647657* L_131 = __this->get_boundary_4();
			NullCheck(L_131);
			NullCheck(L_129);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_129, L_130, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_131)->max_length)))));
			MemoryStream_t94973147 * L_132 = V_6;
			ByteU5BU5D_t4116647657* L_133 = V_0;
			ByteU5BU5D_t4116647657* L_134 = V_0;
			NullCheck(L_134);
			NullCheck(L_132);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_132, L_133, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_134)->max_length)))));
			MemoryStream_t94973147 * L_135 = V_6;
			ByteU5BU5D_t4116647657* L_136 = V_1;
			ByteU5BU5D_t4116647657* L_137 = V_1;
			NullCheck(L_137);
			NullCheck(L_135);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_135, L_136, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_137)->max_length)))));
			MemoryStream_t94973147 * L_138 = V_6;
			NullCheck(L_138);
			ByteU5BU5D_t4116647657* L_139 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_138);
			V_15 = L_139;
			IL2CPP_LEAVE(0x3FC, FINALLY_0308);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0308;
	}

FINALLY_0308:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_140 = V_6;
			if (!L_140)
			{
				goto IL_0316;
			}
		}

IL_030f:
		{
			MemoryStream_t94973147 * L_141 = V_6;
			NullCheck(L_141);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_141);
		}

IL_0316:
		{
			IL2CPP_END_FINALLY(776)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(776)
	{
		IL2CPP_JUMP_TBL(0x3FC, IL_03fc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0317:
	{
		Encoding_t1523322056 * L_142 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_142);
		ByteU5BU5D_t4116647657* L_143 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_142, _stringLiteral3452614522);
		V_16 = L_143;
		Encoding_t1523322056 * L_144 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_144);
		ByteU5BU5D_t4116647657* L_145 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_144, _stringLiteral3452614547);
		V_17 = L_145;
		MemoryStream_t94973147 * L_146 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2128850779(L_146, ((int32_t)1024), /*hidden argument*/NULL);
		V_18 = L_146;
	}

IL_0346:
	try
	{ // begin try (depth: 1)
		{
			V_19 = 0;
			goto IL_03cd;
		}

IL_034f:
		{
			Encoding_t1523322056 * L_147 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
			List_1_t3319525431 * L_148 = __this->get_fieldNames_1();
			int32_t L_149 = V_19;
			NullCheck(L_148);
			String_t* L_150 = List_1_get_Item_m883280456(L_148, L_149, /*hidden argument*/List_1_get_Item_m883280456_RuntimeMethod_var);
			NullCheck(L_147);
			ByteU5BU5D_t4116647657* L_151 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_147, L_150);
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4116647657* L_152 = WWWTranscoder_DataEncode_m4189841407(NULL /*static, unused*/, L_151, /*hidden argument*/NULL);
			V_20 = L_152;
			List_1_t1293755103 * L_153 = __this->get_formData_0();
			int32_t L_154 = V_19;
			NullCheck(L_153);
			ByteU5BU5D_t4116647657* L_155 = List_1_get_Item_m2439967551(L_153, L_154, /*hidden argument*/List_1_get_Item_m2439967551_RuntimeMethod_var);
			V_21 = L_155;
			ByteU5BU5D_t4116647657* L_156 = V_21;
			ByteU5BU5D_t4116647657* L_157 = WWWTranscoder_DataEncode_m4189841407(NULL /*static, unused*/, L_156, /*hidden argument*/NULL);
			V_22 = L_157;
			int32_t L_158 = V_19;
			if ((((int32_t)L_158) <= ((int32_t)0)))
			{
				goto IL_039c;
			}
		}

IL_038e:
		{
			MemoryStream_t94973147 * L_159 = V_18;
			ByteU5BU5D_t4116647657* L_160 = V_16;
			ByteU5BU5D_t4116647657* L_161 = V_16;
			NullCheck(L_161);
			NullCheck(L_159);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_159, L_160, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_161)->max_length)))));
		}

IL_039c:
		{
			MemoryStream_t94973147 * L_162 = V_18;
			ByteU5BU5D_t4116647657* L_163 = V_20;
			ByteU5BU5D_t4116647657* L_164 = V_20;
			NullCheck(L_164);
			NullCheck(L_162);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_162, L_163, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_164)->max_length)))));
			MemoryStream_t94973147 * L_165 = V_18;
			ByteU5BU5D_t4116647657* L_166 = V_17;
			ByteU5BU5D_t4116647657* L_167 = V_17;
			NullCheck(L_167);
			NullCheck(L_165);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_165, L_166, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_167)->max_length)))));
			MemoryStream_t94973147 * L_168 = V_18;
			ByteU5BU5D_t4116647657* L_169 = V_22;
			ByteU5BU5D_t4116647657* L_170 = V_22;
			NullCheck(L_170);
			NullCheck(L_168);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_168, L_169, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_170)->max_length)))));
			int32_t L_171 = V_19;
			V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)1));
		}

IL_03cd:
		{
			int32_t L_172 = V_19;
			List_1_t1293755103 * L_173 = __this->get_formData_0();
			NullCheck(L_173);
			int32_t L_174 = List_1_get_Count_m660812737(L_173, /*hidden argument*/List_1_get_Count_m660812737_RuntimeMethod_var);
			if ((((int32_t)L_172) < ((int32_t)L_174)))
			{
				goto IL_034f;
			}
		}

IL_03df:
		{
			MemoryStream_t94973147 * L_175 = V_18;
			NullCheck(L_175);
			ByteU5BU5D_t4116647657* L_176 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_175);
			V_15 = L_176;
			IL2CPP_LEAVE(0x3FC, FINALLY_03ed);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03ed;
	}

FINALLY_03ed:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_177 = V_18;
			if (!L_177)
			{
				goto IL_03fb;
			}
		}

IL_03f4:
		{
			MemoryStream_t94973147 * L_178 = V_18;
			NullCheck(L_178);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_178);
		}

IL_03fb:
		{
			IL2CPP_END_FINALLY(1005)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1005)
	{
		IL2CPP_JUMP_TBL(0x3FC, IL_03fc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_03fc:
	{
		ByteU5BU5D_t4116647657* L_179 = V_15;
		return L_179;
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
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m4102152163 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___b0, int32_t ___offset1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		V_0 = (uint8_t)0;
		int32_t L_0 = ___offset1;
		V_1 = L_0;
		goto IL_007a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_2 = ___b0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		goto IL_005e;
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)75))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)55)));
		goto IL_005e;
	}

IL_0049:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)87)));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)15))))
		{
			goto IL_006f;
		}
	}
	{
		V_3 = (uint8_t)((int32_t)63);
		goto IL_008a;
	}

IL_006f:
	{
		uint8_t L_16 = V_0;
		int32_t L_17 = V_2;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)(((int32_t)((uint8_t)L_17))))))));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___offset1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2)))))
		{
			goto IL_000a;
		}
	}
	{
		uint8_t L_21 = V_0;
		V_3 = L_21;
		goto IL_008a;
	}

IL_008a:
	{
		uint8_t L_22 = V_3;
		return L_22;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_Byte2Hex_m539526283 (RuntimeObject * __this /* static, unused */, uint8_t ___b0, ByteU5BU5D_t4116647657* ___hexChars1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Byte2Hex_m539526283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = V_0;
		ByteU5BU5D_t4116647657* L_2 = ___hexChars1;
		uint8_t L_3 = ___b0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)((int32_t)L_3>>(int32_t)4));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_5);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = ___hexChars1;
		uint8_t L_8 = ___b0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)15)));
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_10);
		ByteU5BU5D_t4116647657* L_11 = V_0;
		V_1 = L_11;
		goto IL_0020;
	}

IL_0020:
	{
		ByteU5BU5D_t4116647657* L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLEncode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_URLEncode_m3430768649 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLEncode_m3430768649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_t4116647657* L_2 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlSpace_3();
		ByteU5BU5D_t4116647657* L_3 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlForbidden_5();
		ByteU5BU5D_t4116647657* L_4 = WWWTranscoder_Encode_m471876733(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		ByteU5BU5D_t4116647657* L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.WWWTranscoder::DataEncode(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR String_t* WWWTranscoder_DataEncode_m692723224 (RuntimeObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_DataEncode_m692723224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Encoding_t1523322056 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_t4116647657* L_4 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_dataSpace_4();
		ByteU5BU5D_t4116647657* L_5 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlForbidden_5();
		ByteU5BU5D_t4116647657* L_6 = WWWTranscoder_Encode_m471876733(NULL /*static, unused*/, L_2, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t1523322056 * L_7 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = V_0;
		ByteU5BU5D_t4116647657* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))));
		V_1 = L_10;
		goto IL_0033;
	}

IL_0033:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::DataEncode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_DataEncode_m4189841407 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_DataEncode_m4189841407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_t4116647657* L_2 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_dataSpace_4();
		ByteU5BU5D_t4116647657* L_3 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlForbidden_5();
		ByteU5BU5D_t4116647657* L_4 = WWWTranscoder_Encode_m471876733(NULL /*static, unused*/, L_0, L_1, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		ByteU5BU5D_t4116647657* L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m4114472822 (RuntimeObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_QPEncode_m4114472822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Encoding_t1523322056 * L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_qpEscapeChar_6();
		ByteU5BU5D_t4116647657* L_4 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_qpSpace_7();
		ByteU5BU5D_t4116647657* L_5 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_qpForbidden_8();
		ByteU5BU5D_t4116647657* L_6 = WWWTranscoder_Encode_m471876733(NULL /*static, unused*/, L_2, L_3, L_4, L_5, (bool)1, /*hidden argument*/NULL);
		V_0 = L_6;
		Encoding_t1523322056 * L_7 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_8 = V_0;
		ByteU5BU5D_t4116647657* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))));
		V_1 = L_10;
		goto IL_0033;
	}

IL_0033:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_Encode_m471876733 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t4116647657* ___space2, ByteU5BU5D_t4116647657* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Encode_m471876733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B9_0 = 0;
	MemoryStream_t94973147 * G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	MemoryStream_t94973147 * G_B8_1 = NULL;
	ByteU5BU5D_t4116647657* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	MemoryStream_t94973147 * G_B10_2 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t94973147 * L_1 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2128850779(L_1, ((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0097;
		}

IL_0014:
		{
			ByteU5BU5D_t4116647657* L_2 = ___input0;
			int32_t L_3 = V_1;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)32)))))
			{
				goto IL_0031;
			}
		}

IL_001f:
		{
			MemoryStream_t94973147 * L_6 = V_0;
			ByteU5BU5D_t4116647657* L_7 = ___space2;
			ByteU5BU5D_t4116647657* L_8 = ___space2;
			NullCheck(L_8);
			NullCheck(L_6);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))));
			goto IL_0092;
		}

IL_0031:
		{
			ByteU5BU5D_t4116647657* L_9 = ___input0;
			int32_t L_10 = V_1;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			if ((((int32_t)L_12) < ((int32_t)((int32_t)32))))
			{
				goto IL_0053;
			}
		}

IL_003b:
		{
			ByteU5BU5D_t4116647657* L_13 = ___input0;
			int32_t L_14 = V_1;
			NullCheck(L_13);
			int32_t L_15 = L_14;
			uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
			if ((((int32_t)L_16) > ((int32_t)((int32_t)126))))
			{
				goto IL_0053;
			}
		}

IL_0045:
		{
			ByteU5BU5D_t4116647657* L_17 = ___forbidden3;
			ByteU5BU5D_t4116647657* L_18 = ___input0;
			int32_t L_19 = V_1;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			bool L_22 = WWWTranscoder_ByteArrayContains_m3595214252(NULL /*static, unused*/, L_17, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0087;
			}
		}

IL_0053:
		{
			MemoryStream_t94973147 * L_23 = V_0;
			uint8_t L_24 = ___escapeChar1;
			NullCheck(L_23);
			VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_23, L_24);
			MemoryStream_t94973147 * L_25 = V_0;
			ByteU5BU5D_t4116647657* L_26 = ___input0;
			int32_t L_27 = V_1;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			bool L_30 = ___uppercase4;
			G_B8_0 = ((int32_t)(L_29));
			G_B8_1 = L_25;
			if (!L_30)
			{
				G_B9_0 = ((int32_t)(L_29));
				G_B9_1 = L_25;
				goto IL_0070;
			}
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4116647657* L_31 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_ucHexChars_0();
			G_B10_0 = L_31;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_0075;
		}

IL_0070:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4116647657* L_32 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_lcHexChars_1();
			G_B10_0 = L_32;
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_0075:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4116647657* L_33 = WWWTranscoder_Byte2Hex_m539526283(NULL /*static, unused*/, (uint8_t)G_B10_1, G_B10_0, /*hidden argument*/NULL);
			NullCheck(G_B10_2);
			VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, G_B10_2, L_33, 0, 2);
			goto IL_0092;
		}

IL_0087:
		{
			MemoryStream_t94973147 * L_34 = V_0;
			ByteU5BU5D_t4116647657* L_35 = ___input0;
			int32_t L_36 = V_1;
			NullCheck(L_35);
			int32_t L_37 = L_36;
			uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
			NullCheck(L_34);
			VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_34, L_38);
		}

IL_0092:
		{
			int32_t L_39 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		}

IL_0097:
		{
			int32_t L_40 = V_1;
			ByteU5BU5D_t4116647657* L_41 = ___input0;
			NullCheck(L_41);
			if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
			{
				goto IL_0014;
			}
		}

IL_00a0:
		{
			MemoryStream_t94973147 * L_42 = V_0;
			NullCheck(L_42);
			ByteU5BU5D_t4116647657* L_43 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_42);
			V_2 = L_43;
			IL2CPP_LEAVE(0xB9, FINALLY_00ac);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ac;
	}

FINALLY_00ac:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_44 = V_0;
			if (!L_44)
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			MemoryStream_t94973147 * L_45 = V_0;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_45);
		}

IL_00b8:
		{
			IL2CPP_END_FINALLY(172)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(172)
	{
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b9:
	{
		ByteU5BU5D_t4116647657* L_46 = V_2;
		return L_46;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_m3595214252 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, uint8_t ___b1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		V_1 = 0;
		goto IL_0022;
	}

IL_000c:
	{
		ByteU5BU5D_t4116647657* L_1 = ___array0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___b1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_001d;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0030;
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_URLDecode_m3587034544 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLDecode_m3587034544_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_t4116647657* L_2 = ((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->get_urlSpace_3();
		ByteU5BU5D_t4116647657* L_3 = WWWTranscoder_Decode_m157051313(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_t4116647657* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_m2163464440 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___array0, int32_t ___index1, ByteU5BU5D_t4116647657* ___comperand2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___array0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		ByteU5BU5D_t4116647657* L_2 = ___comperand2;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0044;
	}

IL_0015:
	{
		V_1 = 0;
		goto IL_0034;
	}

IL_001c:
	{
		ByteU5BU5D_t4116647657* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		uint8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_t4116647657* L_8 = ___comperand2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0044;
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_13 = V_1;
		ByteU5BU5D_t4116647657* L_14 = ___comperand2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* WWWTranscoder_Decode_m157051313 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t4116647657* ___space2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Decode_m157051313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_t94973147 * L_1 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2128850779(L_1, (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0077;
		}

IL_0012:
		{
			ByteU5BU5D_t4116647657* L_2 = ___input0;
			int32_t L_3 = V_1;
			ByteU5BU5D_t4116647657* L_4 = ___space2;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			bool L_5 = WWWTranscoder_ByteSubArrayEquals_m2163464440(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0037;
			}
		}

IL_0020:
		{
			int32_t L_6 = V_1;
			ByteU5BU5D_t4116647657* L_7 = ___space2;
			NullCheck(L_7);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)1))));
			MemoryStream_t94973147 * L_8 = V_0;
			NullCheck(L_8);
			VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_8, (uint8_t)((int32_t)32));
			goto IL_0072;
		}

IL_0037:
		{
			ByteU5BU5D_t4116647657* L_9 = ___input0;
			int32_t L_10 = V_1;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			uint8_t L_13 = ___escapeChar1;
			if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
			{
				goto IL_0067;
			}
		}

IL_0040:
		{
			int32_t L_14 = V_1;
			ByteU5BU5D_t4116647657* L_15 = ___input0;
			NullCheck(L_15);
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
			{
				goto IL_0067;
			}
		}

IL_004b:
		{
			int32_t L_16 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
			MemoryStream_t94973147 * L_17 = V_0;
			ByteU5BU5D_t4116647657* L_18 = ___input0;
			int32_t L_19 = V_1;
			int32_t L_20 = L_19;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
			uint8_t L_21 = WWWTranscoder_Hex2Byte_m4102152163(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/NULL);
			NullCheck(L_17);
			VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_17, L_21);
			goto IL_0072;
		}

IL_0067:
		{
			MemoryStream_t94973147 * L_22 = V_0;
			ByteU5BU5D_t4116647657* L_23 = ___input0;
			int32_t L_24 = V_1;
			NullCheck(L_23);
			int32_t L_25 = L_24;
			uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			NullCheck(L_22);
			VirtActionInvoker1< uint8_t >::Invoke(28 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_22, L_26);
		}

IL_0072:
		{
			int32_t L_27 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_0077:
		{
			int32_t L_28 = V_1;
			ByteU5BU5D_t4116647657* L_29 = ___input0;
			NullCheck(L_29);
			if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
			{
				goto IL_0012;
			}
		}

IL_0080:
		{
			MemoryStream_t94973147 * L_30 = V_0;
			NullCheck(L_30);
			ByteU5BU5D_t4116647657* L_31 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_30);
			V_2 = L_31;
			IL2CPP_LEAVE(0x99, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		{
			MemoryStream_t94973147 * L_32 = V_0;
			if (!L_32)
			{
				goto IL_0098;
			}
		}

IL_0092:
		{
			MemoryStream_t94973147 * L_33 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_33);
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x99, IL_0099)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0099:
	{
		ByteU5BU5D_t4116647657* L_34 = V_2;
		return L_34;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m207206973 (RuntimeObject * __this /* static, unused */, String_t* ___s0, Encoding_t1523322056 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_SevenBitClean_m207206973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Encoding_t1523322056 * L_0 = ___e1;
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		bool L_3 = WWWTranscoder_SevenBitClean_m4023411958(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m4023411958 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		goto IL_0029;
	}

IL_0008:
	{
		ByteU5BU5D_t4116647657* L_0 = ___input0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((((int32_t)L_3) < ((int32_t)((int32_t)32))))
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = ___input0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)126))))
		{
			goto IL_0024;
		}
	}

IL_001d:
	{
		V_1 = (bool)0;
		goto IL_0039;
	}

IL_0024:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		ByteU5BU5D_t4116647657* L_10 = ___input0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0008;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_m1887474915 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder__cctor_m1887474915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t1523322056 * L_0 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral598647136);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_ucHexChars_0(L_1);
		Encoding_t1523322056 * L_2 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_3 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral3445932352);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_lcHexChars_1(L_3);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_urlEscapeChar_2((uint8_t)((int32_t)37));
		ByteU5BU5D_t4116647657* L_4 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t4116647657* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_urlSpace_3(L_5);
		Encoding_t1523322056 * L_6 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral3074512661);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_dataSpace_4(L_7);
		Encoding_t1523322056 * L_8 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral1153672764);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_urlForbidden_5(L_9);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_qpEscapeChar_6((uint8_t)((int32_t)61));
		ByteU5BU5D_t4116647657* L_10 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t4116647657* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_qpSpace_7(L_11);
		Encoding_t1523322056 * L_12 = WWWForm_get_DefaultEncoding_m4131957975(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t4116647657* L_13 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral3256060902);
		((WWWTranscoder_t272523958_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t272523958_il2cpp_TypeInfo_var))->set_qpForbidden_8(L_13);
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
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m55747000 (RuntimeObject * __this /* static, unused */, String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_RedirectTo_m55747000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t100236324 * V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_t100236324 * V_2 = NULL;
	Uri_t100236324 * V_3 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1 = String_get_Chars_m2986988803(L_0, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___redirectUri1;
		Uri_t100236324 * L_3 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m391584135(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_001c:
	{
		String_t* L_4 = ___redirectUri1;
		Uri_t100236324 * L_5 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m391584135(L_5, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		Uri_t100236324 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsAbsoluteUri_m3834080655(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Uri_t100236324 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_AbsoluteUri_m637273031(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0057;
	}

IL_003b:
	{
		String_t* L_10 = ___baseUri0;
		Uri_t100236324 * L_11 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m391584135(L_11, L_10, 1, /*hidden argument*/NULL);
		V_2 = L_11;
		Uri_t100236324 * L_12 = V_2;
		Uri_t100236324 * L_13 = V_0;
		Uri_t100236324 * L_14 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m253204164(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		Uri_t100236324 * L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16 = Uri_get_AbsoluteUri_m637273031(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0057;
	}

IL_0057:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_m973728695 (RuntimeObject * __this /* static, unused */, String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_MakeInitialUrl_m973728695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Uri_t100236324 * V_2 = NULL;
	Uri_t100236324 * V_3 = NULL;
	FormatException_t154580423 * V_4 = NULL;
	FormatException_t154580423 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___targetUrl0;
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		V_0 = _stringLiteral757602046;
		goto IL_00d7;
	}

IL_0017:
	{
		V_1 = (bool)0;
		String_t* L_2 = ___localUrl1;
		Uri_t100236324 * L_3 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m1474792120(L_3, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		V_3 = (Uri_t100236324 *)NULL;
		String_t* L_4 = ___targetUrl0;
		NullCheck(L_4);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_4, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_003c;
		}
	}
	{
		Uri_t100236324 * L_6 = V_2;
		String_t* L_7 = ___targetUrl0;
		Uri_t100236324 * L_8 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m279432735(L_8, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		V_1 = (bool)1;
	}

IL_003c:
	{
		Uri_t100236324 * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_10 = Uri_op_Equality_m2988156441(NULL /*static, unused*/, L_9, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		Regex_t3657309853 * L_11 = ((WebRequestUtils_t3541624225_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var))->get_domainRegex_0();
		String_t* L_12 = ___targetUrl0;
		NullCheck(L_11);
		bool L_13 = Regex_IsMatch_m3802225320(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006f;
		}
	}
	{
		Uri_t100236324 * L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15 = Uri_get_Scheme_m1686732325(L_14, /*hidden argument*/NULL);
		String_t* L_16 = ___targetUrl0;
		String_t* L_17 = String_Concat_m3755062657(NULL /*static, unused*/, L_15, _stringLiteral1057238085, L_16, /*hidden argument*/NULL);
		___targetUrl0 = L_17;
		V_1 = (bool)1;
	}

IL_006f:
	{
		V_4 = (FormatException_t154580423 *)NULL;
	}

IL_0072:
	try
	{ // begin try (depth: 1)
		{
			Uri_t100236324 * L_18 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
			bool L_19 = Uri_op_Equality_m2988156441(NULL /*static, unused*/, L_18, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0094;
			}
		}

IL_007f:
		{
			String_t* L_20 = ___targetUrl0;
			NullCheck(L_20);
			Il2CppChar L_21 = String_get_Chars_m2986988803(L_20, 0, /*hidden argument*/NULL);
			if ((((int32_t)L_21) == ((int32_t)((int32_t)46))))
			{
				goto IL_0094;
			}
		}

IL_008d:
		{
			String_t* L_22 = ___targetUrl0;
			Uri_t100236324 * L_23 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
			Uri__ctor_m1474792120(L_23, L_22, /*hidden argument*/NULL);
			V_3 = L_23;
		}

IL_0094:
		{
			goto IL_00a7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t154580423_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009a;
		throw e;
	}

CATCH_009a:
	{ // begin catch(System.FormatException)
		V_5 = ((FormatException_t154580423 *)__exception_local);
		FormatException_t154580423 * L_24 = V_5;
		V_4 = L_24;
		goto IL_00a7;
	} // end catch (depth: 1)

IL_00a7:
	{
		Uri_t100236324 * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		bool L_26 = Uri_op_Equality_m2988156441(NULL /*static, unused*/, L_25, (Uri_t100236324 *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00c9;
		}
	}

IL_00b3:
	try
	{ // begin try (depth: 1)
		Uri_t100236324 * L_27 = V_2;
		String_t* L_28 = ___targetUrl0;
		Uri_t100236324 * L_29 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m279432735(L_29, L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		V_1 = (bool)1;
		goto IL_00c9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t154580423_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c4;
		throw e;
	}

CATCH_00c4:
	{ // begin catch(System.FormatException)
		FormatException_t154580423 * L_30 = V_4;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, WebRequestUtils_MakeInitialUrl_m973728695_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00c9:
	{
		Uri_t100236324 * L_31 = V_3;
		String_t* L_32 = ___targetUrl0;
		bool L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_34 = WebRequestUtils_MakeUriString_m291605890(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_00d7;
	}

IL_00d7:
	{
		String_t* L_35 = V_0;
		return L_35;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_m291605890 (RuntimeObject * __this /* static, unused */, Uri_t100236324 * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_MakeUriString_m291605890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		Uri_t100236324 * L_0 = ___targetUri0;
		NullCheck(L_0);
		bool L_1 = Uri_get_IsFile_m2450018824(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		Uri_t100236324 * L_2 = ___targetUri0;
		NullCheck(L_2);
		bool L_3 = Uri_get_IsLoopback_m2492530169(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		Uri_t100236324 * L_4 = ___targetUri0;
		NullCheck(L_4);
		String_t* L_5 = Uri_get_OriginalString_m2551181575(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_015d;
	}

IL_0024:
	{
		Uri_t100236324 * L_6 = ___targetUri0;
		NullCheck(L_6);
		String_t* L_7 = Uri_get_AbsolutePath_m590948575(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = String_Contains_m1147431944(L_8, _stringLiteral3452614523, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_11 = WebRequestUtils_URLDecode_m2727298221(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_0042:
	{
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar L_15 = String_get_Chars_m2986988803(L_14, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)47))))
		{
			goto IL_006a;
		}
	}
	{
		Il2CppChar L_16 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_17 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = V_1;
		String_t* L_19 = String_Concat_m904156431(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
	}

IL_006a:
	{
		String_t* L_20 = V_1;
		String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4054833267, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_015d;
	}

IL_007b:
	{
		String_t* L_22 = ___targetUrl1;
		NullCheck(L_22);
		bool L_23 = String_Contains_m1147431944(L_22, _stringLiteral3452614523, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		Uri_t100236324 * L_24 = ___targetUri0;
		NullCheck(L_24);
		String_t* L_25 = Uri_get_OriginalString_m2551181575(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_015d;
	}

IL_0097:
	{
		Uri_t100236324 * L_26 = ___targetUri0;
		NullCheck(L_26);
		String_t* L_27 = Uri_get_Scheme_m1686732325(L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		bool L_28 = ___prependProtocol2;
		if (L_28)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_29 = ___targetUrl1;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m3847582255(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m3847582255(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)2)))))
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_33 = ___targetUrl1;
		String_t* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Il2CppChar L_36 = String_get_Chars_m2986988803(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)47))))
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_37 = V_2;
		String_t* L_38 = ___targetUrl1;
		NullCheck(L_38);
		int32_t L_39 = String_get_Length_m3847582255(L_38, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2502310956(L_40, L_37, L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		StringBuilder_t * L_41 = V_3;
		NullCheck(L_41);
		StringBuilder_Append_m2383614642(L_41, ((int32_t)58), /*hidden argument*/NULL);
		String_t* L_42 = V_2;
		bool L_43 = String_op_Equality_m920492651(NULL /*static, unused*/, L_42, _stringLiteral1390680534, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_012b;
		}
	}
	{
		Uri_t100236324 * L_44 = ___targetUri0;
		NullCheck(L_44);
		String_t* L_45 = Uri_get_AbsolutePath_m590948575(L_44, /*hidden argument*/NULL);
		V_4 = L_45;
		String_t* L_46 = V_4;
		NullCheck(L_46);
		bool L_47 = String_Contains_m1147431944(L_46, _stringLiteral3452614523, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0116;
		}
	}
	{
		String_t* L_48 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var);
		String_t* L_49 = WebRequestUtils_URLDecode_m2727298221(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		V_4 = L_49;
	}

IL_0116:
	{
		StringBuilder_t * L_50 = V_3;
		String_t* L_51 = V_4;
		NullCheck(L_50);
		StringBuilder_Append_m1965104174(L_50, L_51, /*hidden argument*/NULL);
		StringBuilder_t * L_52 = V_3;
		NullCheck(L_52);
		String_t* L_53 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
		V_0 = L_53;
		goto IL_015d;
	}

IL_012b:
	{
		StringBuilder_t * L_54 = V_3;
		Uri_t100236324 * L_55 = ___targetUri0;
		NullCheck(L_55);
		String_t* L_56 = Uri_get_PathAndQuery_m2396197970(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		StringBuilder_Append_m1965104174(L_54, L_56, /*hidden argument*/NULL);
		StringBuilder_t * L_57 = V_3;
		Uri_t100236324 * L_58 = ___targetUri0;
		NullCheck(L_58);
		String_t* L_59 = Uri_get_Fragment_m575158891(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		StringBuilder_Append_m1965104174(L_57, L_59, /*hidden argument*/NULL);
		StringBuilder_t * L_60 = V_3;
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		V_0 = L_61;
		goto IL_015d;
	}

IL_0151:
	{
		Uri_t100236324 * L_62 = ___targetUri0;
		NullCheck(L_62);
		String_t* L_63 = Uri_get_AbsoluteUri_m637273031(L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		goto IL_015d;
	}

IL_015d:
	{
		String_t* L_64 = V_0;
		return L_64;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m2727298221 (RuntimeObject * __this /* static, unused */, String_t* ___encoded0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_URLDecode_m2727298221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___encoded0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t272523958_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_4 = WWWTranscoder_URLDecode_m3587034544(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Encoding_t1523322056 * L_5 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_6);
		V_2 = L_7;
		goto IL_0025;
	}

IL_0025:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m4190982137 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils__cctor_m4190982137_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t3657309853 * L_0 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m3948448025(L_0, _stringLiteral97523668, /*hidden argument*/NULL);
		((WebRequestUtils_t3541624225_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t3541624225_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
