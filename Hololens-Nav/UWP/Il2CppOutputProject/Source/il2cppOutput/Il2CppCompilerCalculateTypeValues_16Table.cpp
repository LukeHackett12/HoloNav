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


// Mono.Security.ASN1
struct ASN1_t2114160833;
// Mono.Security.Interface.Alert
struct Alert_t1480305158;
// Mono.Security.Interface.CipherSuiteCode[]
struct CipherSuiteCodeU5BU5D_t3566916850;
// Mono.Security.Interface.ICertificateValidator
struct ICertificateValidator_t849923962;
// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct MonoLocalCertificateSelectionCallback_t1375878923;
// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct MonoRemoteCertificateValidationCallback_t2521872312;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3218159896;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168550;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t609554709;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t194917408;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// Windows.UI.Xaml.Interop.IBindableIterator
struct IBindableIterator_t667386168;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T692745526_H
#define U3CMODULEU3E_T692745526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745526 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745526_H
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
#ifndef LOCALE_T4128636108_H
#define LOCALE_T4128636108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t4128636108  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T4128636108_H
#ifndef ASN1_T2114160833_H
#define ASN1_T2114160833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2114160833  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t4116647657* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t2718874744 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___m_aValue_1)); }
	inline ByteU5BU5D_t4116647657* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t4116647657* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2114160833, ___elist_2)); }
	inline ArrayList_t2718874744 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t2718874744 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t2718874744 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2114160833_H
#ifndef ASN1CONVERT_T2839890153_H
#define ASN1CONVERT_T2839890153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2839890153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2839890153_H
#ifndef BITCONVERTERLE_T2108532979_H
#define BITCONVERTERLE_T2108532979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2108532979  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2108532979_H
#ifndef CERTIFICATEVALIDATIONHELPER_T2276302545_H
#define CERTIFICATEVALIDATIONHELPER_T2276302545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.CertificateValidationHelper
struct  CertificateValidationHelper_t2276302545  : public RuntimeObject
{
public:

public:
};

struct CertificateValidationHelper_t2276302545_StaticFields
{
public:
	// System.Boolean Mono.Security.Interface.CertificateValidationHelper::noX509Chain
	bool ___noX509Chain_0;
	// System.Boolean Mono.Security.Interface.CertificateValidationHelper::supportsTrustAnchors
	bool ___supportsTrustAnchors_1;

public:
	inline static int32_t get_offset_of_noX509Chain_0() { return static_cast<int32_t>(offsetof(CertificateValidationHelper_t2276302545_StaticFields, ___noX509Chain_0)); }
	inline bool get_noX509Chain_0() const { return ___noX509Chain_0; }
	inline bool* get_address_of_noX509Chain_0() { return &___noX509Chain_0; }
	inline void set_noX509Chain_0(bool value)
	{
		___noX509Chain_0 = value;
	}

	inline static int32_t get_offset_of_supportsTrustAnchors_1() { return static_cast<int32_t>(offsetof(CertificateValidationHelper_t2276302545_StaticFields, ___supportsTrustAnchors_1)); }
	inline bool get_supportsTrustAnchors_1() const { return ___supportsTrustAnchors_1; }
	inline bool* get_address_of_supportsTrustAnchors_1() { return &___supportsTrustAnchors_1; }
	inline void set_supportsTrustAnchors_1(bool value)
	{
		___supportsTrustAnchors_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CERTIFICATEVALIDATIONHELPER_T2276302545_H
#ifndef MONOTLSPROVIDER_T3152003291_H
#define MONOTLSPROVIDER_T3152003291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsProvider
struct  MonoTlsProvider_t3152003291  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSPROVIDER_T3152003291_H
#ifndef PKCS7_T1860834339_H
#define PKCS7_T1860834339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t1860834339  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T1860834339_H
#ifndef CONTENTINFO_T3218159896_H
#define CONTENTINFO_T3218159896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t3218159896  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t2114160833 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___content_1)); }
	inline ASN1_t2114160833 * get_content_1() const { return ___content_1; }
	inline ASN1_t2114160833 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t2114160833 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T3218159896_H
#ifndef ENCRYPTEDDATA_T3577548733_H
#define ENCRYPTEDDATA_T3577548733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t3577548733  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t3218159896 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t3218159896 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t4116647657* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____content_1)); }
	inline ContentInfo_t3218159896 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t3218159896 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t3218159896 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t3218159896 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t3218159896 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t3218159896 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____encrypted_3)); }
	inline ByteU5BU5D_t4116647657* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t4116647657* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T3577548733_H
#ifndef PKCS12_T4101533061_H
#define PKCS12_T4101533061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t4101533061  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t4116647657* ____password_0;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t2718874744 * ____keyBags_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t2718874744 * ____secretBags_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t1542168550 * ____certs_3;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_4;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_6;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_7;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t2718874744 * ____safeBags_8;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t386037858 * ____rng_9;

public:
	inline static int32_t get_offset_of__password_0() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____password_0)); }
	inline ByteU5BU5D_t4116647657* get__password_0() const { return ____password_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_0() { return &____password_0; }
	inline void set__password_0(ByteU5BU5D_t4116647657* value)
	{
		____password_0 = value;
		Il2CppCodeGenWriteBarrier((&____password_0), value);
	}

	inline static int32_t get_offset_of__keyBags_1() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____keyBags_1)); }
	inline ArrayList_t2718874744 * get__keyBags_1() const { return ____keyBags_1; }
	inline ArrayList_t2718874744 ** get_address_of__keyBags_1() { return &____keyBags_1; }
	inline void set__keyBags_1(ArrayList_t2718874744 * value)
	{
		____keyBags_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_1), value);
	}

	inline static int32_t get_offset_of__secretBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____secretBags_2)); }
	inline ArrayList_t2718874744 * get__secretBags_2() const { return ____secretBags_2; }
	inline ArrayList_t2718874744 ** get_address_of__secretBags_2() { return &____secretBags_2; }
	inline void set__secretBags_2(ArrayList_t2718874744 * value)
	{
		____secretBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_2), value);
	}

	inline static int32_t get_offset_of__certs_3() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____certs_3)); }
	inline X509CertificateCollection_t1542168550 * get__certs_3() const { return ____certs_3; }
	inline X509CertificateCollection_t1542168550 ** get_address_of__certs_3() { return &____certs_3; }
	inline void set__certs_3(X509CertificateCollection_t1542168550 * value)
	{
		____certs_3 = value;
		Il2CppCodeGenWriteBarrier((&____certs_3), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_4() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____keyBagsChanged_4)); }
	inline bool get__keyBagsChanged_4() const { return ____keyBagsChanged_4; }
	inline bool* get_address_of__keyBagsChanged_4() { return &____keyBagsChanged_4; }
	inline void set__keyBagsChanged_4(bool value)
	{
		____keyBagsChanged_4 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____secretBagsChanged_5)); }
	inline bool get__secretBagsChanged_5() const { return ____secretBagsChanged_5; }
	inline bool* get_address_of__secretBagsChanged_5() { return &____secretBagsChanged_5; }
	inline void set__secretBagsChanged_5(bool value)
	{
		____secretBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__certsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____certsChanged_6)); }
	inline bool get__certsChanged_6() const { return ____certsChanged_6; }
	inline bool* get_address_of__certsChanged_6() { return &____certsChanged_6; }
	inline void set__certsChanged_6(bool value)
	{
		____certsChanged_6 = value;
	}

	inline static int32_t get_offset_of__iterations_7() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____iterations_7)); }
	inline int32_t get__iterations_7() const { return ____iterations_7; }
	inline int32_t* get_address_of__iterations_7() { return &____iterations_7; }
	inline void set__iterations_7(int32_t value)
	{
		____iterations_7 = value;
	}

	inline static int32_t get_offset_of__safeBags_8() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____safeBags_8)); }
	inline ArrayList_t2718874744 * get__safeBags_8() const { return ____safeBags_8; }
	inline ArrayList_t2718874744 ** get_address_of__safeBags_8() { return &____safeBags_8; }
	inline void set__safeBags_8(ArrayList_t2718874744 * value)
	{
		____safeBags_8 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_8), value);
	}

	inline static int32_t get_offset_of__rng_9() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____rng_9)); }
	inline RandomNumberGenerator_t386037858 * get__rng_9() const { return ____rng_9; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_9() { return &____rng_9; }
	inline void set__rng_9(RandomNumberGenerator_t386037858 * value)
	{
		____rng_9 = value;
		Il2CppCodeGenWriteBarrier((&____rng_9), value);
	}
};

struct PKCS12_t4101533061_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_10;

public:
	inline static int32_t get_offset_of_password_max_length_10() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___password_max_length_10)); }
	inline int32_t get_password_max_length_10() const { return ___password_max_length_10; }
	inline int32_t* get_address_of_password_max_length_10() { return &___password_max_length_10; }
	inline void set_password_max_length_10(int32_t value)
	{
		___password_max_length_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T4101533061_H
#ifndef DERIVEBYTES_T1492915136_H
#define DERIVEBYTES_T1492915136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t1492915136  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t4116647657* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t4116647657* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____password_5)); }
	inline ByteU5BU5D_t4116647657* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t4116647657* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____salt_6)); }
	inline ByteU5BU5D_t4116647657* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t4116647657* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t1492915136_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t4116647657* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t4116647657* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t4116647657* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t4116647657* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t4116647657* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t4116647657* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t4116647657* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t4116647657* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t4116647657* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T1492915136_H
#ifndef SAFEBAG_T3961248200_H
#define SAFEBAG_T3961248200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t3961248200  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t2114160833 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t3961248200, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t3961248200, ____asn1_1)); }
	inline ASN1_t2114160833 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t2114160833 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t2114160833 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T3961248200_H
#ifndef X501_T1758824426_H
#define X501_T1758824426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t1758824426  : public RuntimeObject
{
public:

public:
};

struct X501_t1758824426_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t4116647657* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t4116647657* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t4116647657* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t4116647657* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t4116647657* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t4116647657* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t4116647657* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t4116647657* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t4116647657* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t4116647657* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t4116647657* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t4116647657* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t4116647657* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t4116647657* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t4116647657* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t4116647657* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t4116647657* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t4116647657* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t4116647657* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t4116647657* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t4116647657* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t4116647657* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t4116647657* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t4116647657* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t4116647657* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t4116647657* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t4116647657* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t4116647657* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t4116647657* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t4116647657* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t4116647657* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t4116647657* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t4116647657* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t4116647657* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t4116647657* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t4116647657* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t4116647657* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t4116647657* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t4116647657* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t4116647657* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t4116647657* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t4116647657* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t4116647657* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t4116647657* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t4116647657* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T1758824426_H
#ifndef X509CERTIFICATEENUMERATOR_T3515934698_H
#define X509CERTIFICATEENUMERATOR_T3515934698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3515934698  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3515934698, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3515934698_H
#ifndef X509EXTENSION_T3173393653_H
#define X509EXTENSION_T3173393653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t3173393653  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t2114160833 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnValue_2)); }
	inline ASN1_t2114160833 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t2114160833 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t2114160833 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T3173393653_H
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
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
#ifndef IBINDABLEITERABLETOIENUMERABLEADAPTER_T3609568223_H
#define IBINDABLEITERABLETOIENUMERABLEADAPTER_T3609568223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.IBindableIterableToIEnumerableAdapter
struct  IBindableIterableToIEnumerableAdapter_t3609568223  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IBINDABLEITERABLETOIENUMERABLEADAPTER_T3609568223_H
#ifndef IBINDABLEITERATORTOIENUMERATORADAPTER_T1455462238_H
#define IBINDABLEITERATORTOIENUMERATORADAPTER_T1455462238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter
struct  IBindableIteratorToIEnumeratorAdapter_t1455462238  : public RuntimeObject
{
public:
	// Windows.UI.Xaml.Interop.IBindableIterator System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::iterator
	RuntimeObject* ___iterator_0;
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::initialized
	bool ___initialized_1;
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::hadCurrent
	bool ___hadCurrent_2;
	// System.Object System.Runtime.InteropServices.WindowsRuntime.IBindableIteratorToIEnumeratorAdapter::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_iterator_0() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___iterator_0)); }
	inline RuntimeObject* get_iterator_0() const { return ___iterator_0; }
	inline RuntimeObject** get_address_of_iterator_0() { return &___iterator_0; }
	inline void set_iterator_0(RuntimeObject* value)
	{
		___iterator_0 = value;
		Il2CppCodeGenWriteBarrier((&___iterator_0), value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_hadCurrent_2() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___hadCurrent_2)); }
	inline bool get_hadCurrent_2() const { return ___hadCurrent_2; }
	inline bool* get_address_of_hadCurrent_2() { return &___hadCurrent_2; }
	inline void set_hadCurrent_2(bool value)
	{
		___hadCurrent_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(IBindableIteratorToIEnumeratorAdapter_t1455462238, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IBINDABLEITERATORTOIENUMERATORADAPTER_T1455462238_H
#ifndef IBINDABLEVECTORTOILISTADAPTER_T2194798_H
#define IBINDABLEVECTORTOILISTADAPTER_T2194798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.IBindableVectorToIListAdapter
struct  IBindableVectorToIListAdapter_t2194798  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IBINDABLEVECTORTOILISTADAPTER_T2194798_H
#ifndef ICLOSABLETOIDISPOSABLEADAPTER_T3213967014_H
#define ICLOSABLETOIDISPOSABLEADAPTER_T3213967014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.IClosableToIDisposableAdapter
struct  IClosableToIDisposableAdapter_t3213967014  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICLOSABLETOIDISPOSABLEADAPTER_T3213967014_H
#ifndef IINSPECTABLETOICOLLECTIONADAPTER_T2556582868_H
#define IINSPECTABLETOICOLLECTIONADAPTER_T2556582868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.IInspectableToICollectionAdapter
struct  IInspectableToICollectionAdapter_t2556582868  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IINSPECTABLETOICOLLECTIONADAPTER_T2556582868_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D1018_T2637921688_H
#define __STATICARRAYINITTYPESIZEU3D1018_T2637921688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
struct  __StaticArrayInitTypeSizeU3D1018_t2637921688 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t2637921688__padding[1018];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1018_T2637921688_H
#ifndef __STATICARRAYINITTYPESIZEU3D1080_T1828617616_H
#define __STATICARRAYINITTYPESIZEU3D1080_T1828617616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1080
struct  __StaticArrayInitTypeSizeU3D1080_t1828617616 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1080_t1828617616__padding[1080];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1080_T1828617616_H
#ifndef __STATICARRAYINITTYPESIZEU3D11614_T2244806902_H
#define __STATICARRAYINITTYPESIZEU3D11614_T2244806902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=11614
struct  __StaticArrayInitTypeSizeU3D11614_t2244806902 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11614_t2244806902__padding[11614];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D11614_T2244806902_H
#ifndef __STATICARRAYINITTYPESIZEU3D120_T3297148301_H
#define __STATICARRAYINITTYPESIZEU3D120_T3297148301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct  __StaticArrayInitTypeSizeU3D120_t3297148301 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_t3297148301__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D120_T3297148301_H
#ifndef __STATICARRAYINITTYPESIZEU3D1208_T1462068942_H
#define __STATICARRAYINITTYPESIZEU3D1208_T1462068942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1208
struct  __StaticArrayInitTypeSizeU3D1208_t1462068942 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1208_t1462068942__padding[1208];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1208_T1462068942_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529101 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529101__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529101_H
#ifndef __STATICARRAYINITTYPESIZEU3D130_T568264946_H
#define __STATICARRAYINITTYPESIZEU3D130_T568264946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
struct  __StaticArrayInitTypeSizeU3D130_t568264946 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t568264946__padding[130];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D130_T568264946_H
#ifndef __STATICARRAYINITTYPESIZEU3D1450_T1076996900_H
#define __STATICARRAYINITTYPESIZEU3D1450_T1076996900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1450
struct  __StaticArrayInitTypeSizeU3D1450_t1076996900 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1450_t1076996900__padding[1450];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1450_T1076996900_H
#ifndef __STATICARRAYINITTYPESIZEU3D162_T589212449_H
#define __STATICARRAYINITTYPESIZEU3D162_T589212449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=162
struct  __StaticArrayInitTypeSizeU3D162_t589212449 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D162_t589212449__padding[162];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D162_T589212449_H
#ifndef __STATICARRAYINITTYPESIZEU3D1665_T3813774423_H
#define __STATICARRAYINITTYPESIZEU3D1665_T3813774423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1665
struct  __StaticArrayInitTypeSizeU3D1665_t3813774423 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1665_t3813774423__padding[1665];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D1665_T3813774423_H
#ifndef __STATICARRAYINITTYPESIZEU3D174_T3302307462_H
#define __STATICARRAYINITTYPESIZEU3D174_T3302307462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
struct  __StaticArrayInitTypeSizeU3D174_t3302307462 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_t3302307462__padding[174];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D174_T3302307462_H
#ifndef __STATICARRAYINITTYPESIZEU3D2048_T1070431640_H
#define __STATICARRAYINITTYPESIZEU3D2048_T1070431640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
struct  __StaticArrayInitTypeSizeU3D2048_t1070431640 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t1070431640__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2048_T1070431640_H
#ifndef __STATICARRAYINITTYPESIZEU3D2100_T1871841525_H
#define __STATICARRAYINITTYPESIZEU3D2100_T1871841525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2100
struct  __StaticArrayInitTypeSizeU3D2100_t1871841525 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2100_t1871841525__padding[2100];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2100_T1871841525_H
#ifndef __STATICARRAYINITTYPESIZEU3D212_T3318292412_H
#define __STATICARRAYINITTYPESIZEU3D212_T3318292412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
struct  __StaticArrayInitTypeSizeU3D212_t3318292412 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_t3318292412__padding[212];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D212_T3318292412_H
#ifndef __STATICARRAYINITTYPESIZEU3D21252_T1490422002_H
#define __STATICARRAYINITTYPESIZEU3D21252_T1490422002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=21252
struct  __StaticArrayInitTypeSizeU3D21252_t1490422002 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D21252_t1490422002__padding[21252];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D21252_T1490422002_H
#ifndef __STATICARRAYINITTYPESIZEU3D2350_T1842999851_H
#define __STATICARRAYINITTYPESIZEU3D2350_T1842999851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct  __StaticArrayInitTypeSizeU3D2350_t1842999851 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t1842999851__padding[2350];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2350_T1842999851_H
#ifndef __STATICARRAYINITTYPESIZEU3D2382_T269021741_H
#define __STATICARRAYINITTYPESIZEU3D2382_T269021741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct  __StaticArrayInitTypeSizeU3D2382_t269021741 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_t269021741__padding[2382];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D2382_T269021741_H
#ifndef __STATICARRAYINITTYPESIZEU3D24_T3517759979_H
#define __STATICARRAYINITTYPESIZEU3D24_T3517759979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t3517759979 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3517759979__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D24_T3517759979_H
#ifndef __STATICARRAYINITTYPESIZEU3D240_T4103913963_H
#define __STATICARRAYINITTYPESIZEU3D240_T4103913963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct  __StaticArrayInitTypeSizeU3D240_t4103913963 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t4103913963__padding[240];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D240_T4103913963_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T1757367632_H
#define __STATICARRAYINITTYPESIZEU3D256_T1757367632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t1757367632 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t1757367632__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T1757367632_H
#ifndef __STATICARRAYINITTYPESIZEU3D262_T589409057_H
#define __STATICARRAYINITTYPESIZEU3D262_T589409057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
struct  __StaticArrayInitTypeSizeU3D262_t589409057 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t589409057__padding[262];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D262_T589409057_H
#ifndef __STATICARRAYINITTYPESIZEU3D288_T4020123951_H
#define __STATICARRAYINITTYPESIZEU3D288_T4020123951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct  __StaticArrayInitTypeSizeU3D288_t4020123951 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t4020123951__padding[288];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D288_T4020123951_H
#ifndef __STATICARRAYINITTYPESIZEU3D3132_T3825993975_H
#define __STATICARRAYINITTYPESIZEU3D3132_T3825993975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3132
struct  __StaticArrayInitTypeSizeU3D3132_t3825993975 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3132_t3825993975__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3132_T3825993975_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125389 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125389__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125389_H
#ifndef __STATICARRAYINITTYPESIZEU3D320_T3297279373_H
#define __STATICARRAYINITTYPESIZEU3D320_T3297279373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=320
struct  __StaticArrayInitTypeSizeU3D320_t3297279373 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D320_t3297279373__padding[320];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D320_T3297279373_H
#ifndef __STATICARRAYINITTYPESIZEU3D36_T385526561_H
#define __STATICARRAYINITTYPESIZEU3D36_T385526561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct  __StaticArrayInitTypeSizeU3D36_t385526561 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t385526561__padding[36];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D36_T385526561_H
#ifndef __STATICARRAYINITTYPESIZEU3D360_T971680545_H
#define __STATICARRAYINITTYPESIZEU3D360_T971680545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct  __StaticArrayInitTypeSizeU3D360_t971680545 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_t971680545__padding[360];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D360_T971680545_H
#ifndef __STATICARRAYINITTYPESIZEU3D38_T1904556335_H
#define __STATICARRAYINITTYPESIZEU3D38_T1904556335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct  __StaticArrayInitTypeSizeU3D38_t1904556335 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t1904556335__padding[38];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D38_T1904556335_H
#ifndef __STATICARRAYINITTYPESIZEU3D40_T1547998295_H
#define __STATICARRAYINITTYPESIZEU3D40_T1547998295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct  __StaticArrayInitTypeSizeU3D40_t1547998295 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1547998295__padding[40];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D40_T1547998295_H
#ifndef __STATICARRAYINITTYPESIZEU3D4096_T4160781710_H
#define __STATICARRAYINITTYPESIZEU3D4096_T4160781710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=4096
struct  __StaticArrayInitTypeSizeU3D4096_t4160781710 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D4096_t4160781710__padding[4096];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D4096_T4160781710_H
#ifndef __STATICARRAYINITTYPESIZEU3D42_T2710797709_H
#define __STATICARRAYINITTYPESIZEU3D42_T2710797709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct  __StaticArrayInitTypeSizeU3D42_t2710797709 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2710797709__padding[42];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D42_T2710797709_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366763_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366763 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366763__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366763_H
#ifndef __STATICARRAYINITTYPESIZEU3D48_T1904228655_H
#define __STATICARRAYINITTYPESIZEU3D48_T1904228655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct  __StaticArrayInitTypeSizeU3D48_t1904228655 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t1904228655__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D48_T1904228655_H
#ifndef __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#define __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct  __StaticArrayInitTypeSizeU3D52_t2710732173 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t2710732173__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D52_T2710732173_H
#ifndef __STATICARRAYINITTYPESIZEU3D56_T385133345_H
#define __STATICARRAYINITTYPESIZEU3D56_T385133345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct  __StaticArrayInitTypeSizeU3D56_t385133345 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t385133345__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D56_T385133345_H
#ifndef __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#define __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct  __StaticArrayInitTypeSizeU3D64_t3517497835 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t3517497835__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D64_T3517497835_H
#ifndef __STATICARRAYINITTYPESIZEU3D640_T4103651819_H
#define __STATICARRAYINITTYPESIZEU3D640_T4103651819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=640
struct  __StaticArrayInitTypeSizeU3D640_t4103651819 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D640_t4103651819__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D640_T4103651819_H
#ifndef __STATICARRAYINITTYPESIZEU3D72_T2710863245_H
#define __STATICARRAYINITTYPESIZEU3D72_T2710863245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct  __StaticArrayInitTypeSizeU3D72_t2710863245 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t2710863245__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D72_T2710863245_H
#ifndef __STATICARRAYINITTYPESIZEU3D76_T385264417_H
#define __STATICARRAYINITTYPESIZEU3D76_T385264417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct  __StaticArrayInitTypeSizeU3D76_t385264417 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t385264417__padding[76];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D76_T385264417_H
#ifndef __STATICARRAYINITTYPESIZEU3D82_T2711584141_H
#define __STATICARRAYINITTYPESIZEU3D82_T2711584141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=82
struct  __StaticArrayInitTypeSizeU3D82_t2711584141 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D82_t2711584141__padding[82];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D82_T2711584141_H
#ifndef __STATICARRAYINITTYPESIZEU3D84_T3518153195_H
#define __STATICARRAYINITTYPESIZEU3D84_T3518153195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=84
struct  __StaticArrayInitTypeSizeU3D84_t3518153195 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D84_t3518153195__padding[84];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D84_T3518153195_H
#ifndef __STATICARRAYINITTYPESIZEU3D94_T3518087659_H
#define __STATICARRAYINITTYPESIZEU3D94_T3518087659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
struct  __StaticArrayInitTypeSizeU3D94_t3518087659 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_t3518087659__padding[94];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D94_T3518087659_H
#ifndef __STATICARRAYINITTYPESIZEU3D998_T1291568276_H
#define __STATICARRAYINITTYPESIZEU3D998_T1291568276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
struct  __StaticArrayInitTypeSizeU3D998_t1291568276 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t1291568276__padding[998];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D998_T1291568276_H
#ifndef TLSEXCEPTION_T3204531704_H
#define TLSEXCEPTION_T3204531704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.TlsException
struct  TlsException_t3204531704  : public Exception_t
{
public:
	// Mono.Security.Interface.Alert Mono.Security.Interface.TlsException::alert
	Alert_t1480305158 * ___alert_17;

public:
	inline static int32_t get_offset_of_alert_17() { return static_cast<int32_t>(offsetof(TlsException_t3204531704, ___alert_17)); }
	inline Alert_t1480305158 * get_alert_17() const { return ___alert_17; }
	inline Alert_t1480305158 ** get_address_of_alert_17() { return &___alert_17; }
	inline void set_alert_17(Alert_t1480305158 * value)
	{
		___alert_17 = value;
		Il2CppCodeGenWriteBarrier((&___alert_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TLSEXCEPTION_T3204531704_H
#ifndef X509CERTIFICATECOLLECTION_T1542168550_H
#define X509CERTIFICATECOLLECTION_T1542168550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t1542168550  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T1542168550_H
#ifndef X509EXTENSIONCOLLECTION_T609554709_H
#define X509EXTENSIONCOLLECTION_T609554709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t609554709  : public CollectionBase_t2727926298
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t609554709, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T609554709_H
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
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
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
#endif // NULLABLE_1_T1819850047_H
#ifndef __IL2CPPCOMDELEGATE_T1102178620_H
#define __IL2CPPCOMDELEGATE_T1102178620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1102178620  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1102178620_H
#ifndef ALERTDESCRIPTION_T1176432216_H
#define ALERTDESCRIPTION_T1176432216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.AlertDescription
struct  AlertDescription_t1176432216 
{
public:
	// System.Byte Mono.Security.Interface.AlertDescription::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlertDescription_t1176432216, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTDESCRIPTION_T1176432216_H
#ifndef ALERTLEVEL_T886784433_H
#define ALERTLEVEL_T886784433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.AlertLevel
struct  AlertLevel_t886784433 
{
public:
	// System.Byte Mono.Security.Interface.AlertLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlertLevel_t886784433, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTLEVEL_T886784433_H
#ifndef CIPHERSUITECODE_T732562211_H
#define CIPHERSUITECODE_T732562211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.CipherSuiteCode
struct  CipherSuiteCode_t732562211 
{
public:
	// System.UInt16 Mono.Security.Interface.CipherSuiteCode::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherSuiteCode_t732562211, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITECODE_T732562211_H
#ifndef MONOSSLPOLICYERRORS_T2590217945_H
#define MONOSSLPOLICYERRORS_T2590217945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoSslPolicyErrors
struct  MonoSslPolicyErrors_t2590217945 
{
public:
	// System.Int32 Mono.Security.Interface.MonoSslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonoSslPolicyErrors_t2590217945, ___value___2)); }
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
#endif // MONOSSLPOLICYERRORS_T2590217945_H
#ifndef TLSPROTOCOLS_T3756552591_H
#define TLSPROTOCOLS_T3756552591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.TlsProtocols
struct  TlsProtocols_t3756552591 
{
public:
	// System.Int32 Mono.Security.Interface.TlsProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TlsProtocols_t3756552591, ___value___2)); }
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
#endif // TLSPROTOCOLS_T3756552591_H
#ifndef X509CERTIFICATE_T489243025_H
#define X509CERTIFICATE_T489243025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t489243025  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2114160833 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t4116647657* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t3738529785  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t3738529785  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2114160833 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t4116647657* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2114160833 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t4116647657* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t4116647657* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t4116647657* ___m_signaturealgoparams_13;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t2385438082 * ____rsa_14;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2386879874 * ____dsa_15;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_16;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t4116647657* ___serialnumber_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t4116647657* ___issuerUniqueID_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t4116647657* ___subjectUniqueID_19;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t609554709 * ___extensions_20;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___decoder_0)); }
	inline ASN1_t2114160833 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2114160833 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2114160833 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t4116647657* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t4116647657* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_from_2)); }
	inline DateTime_t3738529785  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t3738529785 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t3738529785  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_until_3)); }
	inline DateTime_t3738529785  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t3738529785 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t3738529785  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuer_4)); }
	inline ASN1_t2114160833 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2114160833 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2114160833 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t4116647657* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t4116647657* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subject_8)); }
	inline ASN1_t2114160833 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2114160833 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2114160833 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_publickey_10)); }
	inline ByteU5BU5D_t4116647657* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t4116647657* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___signature_11)); }
	inline ByteU5BU5D_t4116647657* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t4116647657* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t4116647657* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t4116647657* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of__rsa_14() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____rsa_14)); }
	inline RSA_t2385438082 * get__rsa_14() const { return ____rsa_14; }
	inline RSA_t2385438082 ** get_address_of__rsa_14() { return &____rsa_14; }
	inline void set__rsa_14(RSA_t2385438082 * value)
	{
		____rsa_14 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_14), value);
	}

	inline static int32_t get_offset_of__dsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____dsa_15)); }
	inline DSA_t2386879874 * get__dsa_15() const { return ____dsa_15; }
	inline DSA_t2386879874 ** get_address_of__dsa_15() { return &____dsa_15; }
	inline void set__dsa_15(DSA_t2386879874 * value)
	{
		____dsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_15), value);
	}

	inline static int32_t get_offset_of_version_16() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___version_16)); }
	inline int32_t get_version_16() const { return ___version_16; }
	inline int32_t* get_address_of_version_16() { return &___version_16; }
	inline void set_version_16(int32_t value)
	{
		___version_16 = value;
	}

	inline static int32_t get_offset_of_serialnumber_17() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___serialnumber_17)); }
	inline ByteU5BU5D_t4116647657* get_serialnumber_17() const { return ___serialnumber_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_serialnumber_17() { return &___serialnumber_17; }
	inline void set_serialnumber_17(ByteU5BU5D_t4116647657* value)
	{
		___serialnumber_17 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_17), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_18() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuerUniqueID_18)); }
	inline ByteU5BU5D_t4116647657* get_issuerUniqueID_18() const { return ___issuerUniqueID_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_issuerUniqueID_18() { return &___issuerUniqueID_18; }
	inline void set_issuerUniqueID_18(ByteU5BU5D_t4116647657* value)
	{
		___issuerUniqueID_18 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_18), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subjectUniqueID_19)); }
	inline ByteU5BU5D_t4116647657* get_subjectUniqueID_19() const { return ___subjectUniqueID_19; }
	inline ByteU5BU5D_t4116647657** get_address_of_subjectUniqueID_19() { return &___subjectUniqueID_19; }
	inline void set_subjectUniqueID_19(ByteU5BU5D_t4116647657* value)
	{
		___subjectUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_19), value);
	}

	inline static int32_t get_offset_of_extensions_20() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___extensions_20)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_20() const { return ___extensions_20; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_20() { return &___extensions_20; }
	inline void set_extensions_20(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_20 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_20), value);
	}
};

struct X509Certificate_t489243025_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_21;

public:
	inline static int32_t get_offset_of_encoding_error_21() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___encoding_error_21)); }
	inline String_t* get_encoding_error_21() const { return ___encoding_error_21; }
	inline String_t** get_address_of_encoding_error_21() { return &___encoding_error_21; }
	inline void set_encoding_error_21(String_t* value)
	{
		___encoding_error_21 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T489243025_H
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
#ifndef NULLABLE_1_T1166124571_H
#define NULLABLE_1_T1166124571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t1166124571 
{
public:
	// T System.Nullable`1::value
	DateTime_t3738529785  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___value_0)); }
	inline DateTime_t3738529785  get_value_0() const { return ___value_0; }
	inline DateTime_t3738529785 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3738529785  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1166124571, ___has_value_1)); }
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
#endif // NULLABLE_1_T1166124571_H
#ifndef ALERT_T1480305158_H
#define ALERT_T1480305158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.Alert
struct  Alert_t1480305158  : public RuntimeObject
{
public:
	// Mono.Security.Interface.AlertLevel Mono.Security.Interface.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Interface.AlertDescription Mono.Security.Interface.Alert::description
	uint8_t ___description_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Alert_t1480305158, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Alert_t1480305158, ___description_1)); }
	inline uint8_t get_description_1() const { return ___description_1; }
	inline uint8_t* get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(uint8_t value)
	{
		___description_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERT_T1480305158_H
#ifndef MONOTLSCONNECTIONINFO_T1391984550_H
#define MONOTLSCONNECTIONINFO_T1391984550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsConnectionInfo
struct  MonoTlsConnectionInfo_t1391984550  : public RuntimeObject
{
public:
	// Mono.Security.Interface.CipherSuiteCode Mono.Security.Interface.MonoTlsConnectionInfo::<CipherSuiteCode>k__BackingField
	uint16_t ___U3CCipherSuiteCodeU3Ek__BackingField_0;
	// Mono.Security.Interface.TlsProtocols Mono.Security.Interface.MonoTlsConnectionInfo::<ProtocolVersion>k__BackingField
	int32_t ___U3CProtocolVersionU3Ek__BackingField_1;
	// System.String Mono.Security.Interface.MonoTlsConnectionInfo::<PeerDomainName>k__BackingField
	String_t* ___U3CPeerDomainNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCipherSuiteCodeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CCipherSuiteCodeU3Ek__BackingField_0)); }
	inline uint16_t get_U3CCipherSuiteCodeU3Ek__BackingField_0() const { return ___U3CCipherSuiteCodeU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CCipherSuiteCodeU3Ek__BackingField_0() { return &___U3CCipherSuiteCodeU3Ek__BackingField_0; }
	inline void set_U3CCipherSuiteCodeU3Ek__BackingField_0(uint16_t value)
	{
		___U3CCipherSuiteCodeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CProtocolVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CProtocolVersionU3Ek__BackingField_1)); }
	inline int32_t get_U3CProtocolVersionU3Ek__BackingField_1() const { return ___U3CProtocolVersionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CProtocolVersionU3Ek__BackingField_1() { return &___U3CProtocolVersionU3Ek__BackingField_1; }
	inline void set_U3CProtocolVersionU3Ek__BackingField_1(int32_t value)
	{
		___U3CProtocolVersionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPeerDomainNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoTlsConnectionInfo_t1391984550, ___U3CPeerDomainNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CPeerDomainNameU3Ek__BackingField_2() const { return ___U3CPeerDomainNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPeerDomainNameU3Ek__BackingField_2() { return &___U3CPeerDomainNameU3Ek__BackingField_2; }
	inline void set_U3CPeerDomainNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CPeerDomainNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPeerDomainNameU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSCONNECTIONINFO_T1391984550_H
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
#ifndef NULLABLE_1_T17812731_H
#define NULLABLE_1_T17812731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors>
struct  Nullable_1_t17812731 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t17812731, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t17812731, ___has_value_1)); }
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
#endif // NULLABLE_1_T17812731_H
#ifndef NULLABLE_1_T1184147377_H
#define NULLABLE_1_T1184147377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<Mono.Security.Interface.TlsProtocols>
struct  Nullable_1_t1184147377 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1184147377, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1184147377, ___has_value_1)); }
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
#endif // NULLABLE_1_T1184147377_H
#ifndef MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#define MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoLocalCertificateSelectionCallback
struct  MonoLocalCertificateSelectionCallback_t1375878923  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOLOCALCERTIFICATESELECTIONCALLBACK_T1375878923_H
#ifndef MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#define MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoRemoteCertificateValidationCallback
struct  MonoRemoteCertificateValidationCallback_t2521872312  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOREMOTECERTIFICATEVALIDATIONCALLBACK_T2521872312_H
#ifndef MONOTLSSETTINGS_T3666008581_H
#define MONOTLSSETTINGS_T3666008581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.MonoTlsSettings
struct  MonoTlsSettings_t3666008581  : public RuntimeObject
{
public:
	// Mono.Security.Interface.MonoRemoteCertificateValidationCallback Mono.Security.Interface.MonoTlsSettings::<RemoteCertificateValidationCallback>k__BackingField
	MonoRemoteCertificateValidationCallback_t2521872312 * ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0;
	// Mono.Security.Interface.MonoLocalCertificateSelectionCallback Mono.Security.Interface.MonoTlsSettings::<ClientCertificateSelectionCallback>k__BackingField
	MonoLocalCertificateSelectionCallback_t1375878923 * ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1;
	// System.Nullable`1<System.DateTime> Mono.Security.Interface.MonoTlsSettings::<CertificateValidationTime>k__BackingField
	Nullable_1_t1166124571  ___U3CCertificateValidationTimeU3Ek__BackingField_2;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Interface.MonoTlsSettings::<TrustAnchors>k__BackingField
	X509CertificateCollection_t3399372417 * ___U3CTrustAnchorsU3Ek__BackingField_3;
	// System.Object Mono.Security.Interface.MonoTlsSettings::<UserSettings>k__BackingField
	RuntimeObject * ___U3CUserSettingsU3Ek__BackingField_4;
	// System.String[] Mono.Security.Interface.MonoTlsSettings::<CertificateSearchPaths>k__BackingField
	StringU5BU5D_t1281789340* ___U3CCertificateSearchPathsU3Ek__BackingField_5;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::<SendCloseNotify>k__BackingField
	bool ___U3CSendCloseNotifyU3Ek__BackingField_6;
	// System.Nullable`1<Mono.Security.Interface.TlsProtocols> Mono.Security.Interface.MonoTlsSettings::<EnabledProtocols>k__BackingField
	Nullable_1_t1184147377  ___U3CEnabledProtocolsU3Ek__BackingField_7;
	// Mono.Security.Interface.CipherSuiteCode[] Mono.Security.Interface.MonoTlsSettings::<EnabledCiphers>k__BackingField
	CipherSuiteCodeU5BU5D_t3566916850* ___U3CEnabledCiphersU3Ek__BackingField_8;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::cloned
	bool ___cloned_9;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertName
	bool ___checkCertName_10;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_11;
	// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::useServicePointManagerCallback
	Nullable_1_t1819850047  ___useServicePointManagerCallback_12;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::skipSystemValidators
	bool ___skipSystemValidators_13;
	// System.Boolean Mono.Security.Interface.MonoTlsSettings::callbackNeedsChain
	bool ___callbackNeedsChain_14;
	// Mono.Security.Interface.ICertificateValidator Mono.Security.Interface.MonoTlsSettings::certificateValidator
	RuntimeObject* ___certificateValidator_15;

public:
	inline static int32_t get_offset_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0)); }
	inline MonoRemoteCertificateValidationCallback_t2521872312 * get_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() const { return ___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0; }
	inline MonoRemoteCertificateValidationCallback_t2521872312 ** get_address_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0() { return &___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0; }
	inline void set_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0(MonoRemoteCertificateValidationCallback_t2521872312 * value)
	{
		___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1)); }
	inline MonoLocalCertificateSelectionCallback_t1375878923 * get_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() const { return ___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1; }
	inline MonoLocalCertificateSelectionCallback_t1375878923 ** get_address_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1() { return &___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1; }
	inline void set_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1(MonoLocalCertificateSelectionCallback_t1375878923 * value)
	{
		___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClientCertificateSelectionCallbackU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CCertificateValidationTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CCertificateValidationTimeU3Ek__BackingField_2)); }
	inline Nullable_1_t1166124571  get_U3CCertificateValidationTimeU3Ek__BackingField_2() const { return ___U3CCertificateValidationTimeU3Ek__BackingField_2; }
	inline Nullable_1_t1166124571 * get_address_of_U3CCertificateValidationTimeU3Ek__BackingField_2() { return &___U3CCertificateValidationTimeU3Ek__BackingField_2; }
	inline void set_U3CCertificateValidationTimeU3Ek__BackingField_2(Nullable_1_t1166124571  value)
	{
		___U3CCertificateValidationTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTrustAnchorsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CTrustAnchorsU3Ek__BackingField_3)); }
	inline X509CertificateCollection_t3399372417 * get_U3CTrustAnchorsU3Ek__BackingField_3() const { return ___U3CTrustAnchorsU3Ek__BackingField_3; }
	inline X509CertificateCollection_t3399372417 ** get_address_of_U3CTrustAnchorsU3Ek__BackingField_3() { return &___U3CTrustAnchorsU3Ek__BackingField_3; }
	inline void set_U3CTrustAnchorsU3Ek__BackingField_3(X509CertificateCollection_t3399372417 * value)
	{
		___U3CTrustAnchorsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrustAnchorsU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CUserSettingsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CUserSettingsU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CUserSettingsU3Ek__BackingField_4() const { return ___U3CUserSettingsU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CUserSettingsU3Ek__BackingField_4() { return &___U3CUserSettingsU3Ek__BackingField_4; }
	inline void set_U3CUserSettingsU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CUserSettingsU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserSettingsU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CCertificateSearchPathsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CCertificateSearchPathsU3Ek__BackingField_5)); }
	inline StringU5BU5D_t1281789340* get_U3CCertificateSearchPathsU3Ek__BackingField_5() const { return ___U3CCertificateSearchPathsU3Ek__BackingField_5; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CCertificateSearchPathsU3Ek__BackingField_5() { return &___U3CCertificateSearchPathsU3Ek__BackingField_5; }
	inline void set_U3CCertificateSearchPathsU3Ek__BackingField_5(StringU5BU5D_t1281789340* value)
	{
		___U3CCertificateSearchPathsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCertificateSearchPathsU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CSendCloseNotifyU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CSendCloseNotifyU3Ek__BackingField_6)); }
	inline bool get_U3CSendCloseNotifyU3Ek__BackingField_6() const { return ___U3CSendCloseNotifyU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CSendCloseNotifyU3Ek__BackingField_6() { return &___U3CSendCloseNotifyU3Ek__BackingField_6; }
	inline void set_U3CSendCloseNotifyU3Ek__BackingField_6(bool value)
	{
		___U3CSendCloseNotifyU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledProtocolsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CEnabledProtocolsU3Ek__BackingField_7)); }
	inline Nullable_1_t1184147377  get_U3CEnabledProtocolsU3Ek__BackingField_7() const { return ___U3CEnabledProtocolsU3Ek__BackingField_7; }
	inline Nullable_1_t1184147377 * get_address_of_U3CEnabledProtocolsU3Ek__BackingField_7() { return &___U3CEnabledProtocolsU3Ek__BackingField_7; }
	inline void set_U3CEnabledProtocolsU3Ek__BackingField_7(Nullable_1_t1184147377  value)
	{
		___U3CEnabledProtocolsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CEnabledCiphersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___U3CEnabledCiphersU3Ek__BackingField_8)); }
	inline CipherSuiteCodeU5BU5D_t3566916850* get_U3CEnabledCiphersU3Ek__BackingField_8() const { return ___U3CEnabledCiphersU3Ek__BackingField_8; }
	inline CipherSuiteCodeU5BU5D_t3566916850** get_address_of_U3CEnabledCiphersU3Ek__BackingField_8() { return &___U3CEnabledCiphersU3Ek__BackingField_8; }
	inline void set_U3CEnabledCiphersU3Ek__BackingField_8(CipherSuiteCodeU5BU5D_t3566916850* value)
	{
		___U3CEnabledCiphersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEnabledCiphersU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_cloned_9() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___cloned_9)); }
	inline bool get_cloned_9() const { return ___cloned_9; }
	inline bool* get_address_of_cloned_9() { return &___cloned_9; }
	inline void set_cloned_9(bool value)
	{
		___cloned_9 = value;
	}

	inline static int32_t get_offset_of_checkCertName_10() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___checkCertName_10)); }
	inline bool get_checkCertName_10() const { return ___checkCertName_10; }
	inline bool* get_address_of_checkCertName_10() { return &___checkCertName_10; }
	inline void set_checkCertName_10(bool value)
	{
		___checkCertName_10 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_11() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___checkCertRevocationStatus_11)); }
	inline bool get_checkCertRevocationStatus_11() const { return ___checkCertRevocationStatus_11; }
	inline bool* get_address_of_checkCertRevocationStatus_11() { return &___checkCertRevocationStatus_11; }
	inline void set_checkCertRevocationStatus_11(bool value)
	{
		___checkCertRevocationStatus_11 = value;
	}

	inline static int32_t get_offset_of_useServicePointManagerCallback_12() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___useServicePointManagerCallback_12)); }
	inline Nullable_1_t1819850047  get_useServicePointManagerCallback_12() const { return ___useServicePointManagerCallback_12; }
	inline Nullable_1_t1819850047 * get_address_of_useServicePointManagerCallback_12() { return &___useServicePointManagerCallback_12; }
	inline void set_useServicePointManagerCallback_12(Nullable_1_t1819850047  value)
	{
		___useServicePointManagerCallback_12 = value;
	}

	inline static int32_t get_offset_of_skipSystemValidators_13() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___skipSystemValidators_13)); }
	inline bool get_skipSystemValidators_13() const { return ___skipSystemValidators_13; }
	inline bool* get_address_of_skipSystemValidators_13() { return &___skipSystemValidators_13; }
	inline void set_skipSystemValidators_13(bool value)
	{
		___skipSystemValidators_13 = value;
	}

	inline static int32_t get_offset_of_callbackNeedsChain_14() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___callbackNeedsChain_14)); }
	inline bool get_callbackNeedsChain_14() const { return ___callbackNeedsChain_14; }
	inline bool* get_address_of_callbackNeedsChain_14() { return &___callbackNeedsChain_14; }
	inline void set_callbackNeedsChain_14(bool value)
	{
		___callbackNeedsChain_14 = value;
	}

	inline static int32_t get_offset_of_certificateValidator_15() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581, ___certificateValidator_15)); }
	inline RuntimeObject* get_certificateValidator_15() const { return ___certificateValidator_15; }
	inline RuntimeObject** get_address_of_certificateValidator_15() { return &___certificateValidator_15; }
	inline void set_certificateValidator_15(RuntimeObject* value)
	{
		___certificateValidator_15 = value;
		Il2CppCodeGenWriteBarrier((&___certificateValidator_15), value);
	}
};

struct MonoTlsSettings_t3666008581_StaticFields
{
public:
	// Mono.Security.Interface.MonoTlsSettings Mono.Security.Interface.MonoTlsSettings::defaultSettings
	MonoTlsSettings_t3666008581 * ___defaultSettings_16;

public:
	inline static int32_t get_offset_of_defaultSettings_16() { return static_cast<int32_t>(offsetof(MonoTlsSettings_t3666008581_StaticFields, ___defaultSettings_16)); }
	inline MonoTlsSettings_t3666008581 * get_defaultSettings_16() const { return ___defaultSettings_16; }
	inline MonoTlsSettings_t3666008581 ** get_address_of_defaultSettings_16() { return &___defaultSettings_16; }
	inline void set_defaultSettings_16(MonoTlsSettings_t3666008581 * value)
	{
		___defaultSettings_16 = value;
		Il2CppCodeGenWriteBarrier((&___defaultSettings_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTLSSETTINGS_T3666008581_H
#ifndef VALIDATIONRESULT_T2074029760_H
#define VALIDATIONRESULT_T2074029760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Interface.ValidationResult
struct  ValidationResult_t2074029760  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Interface.ValidationResult::trusted
	bool ___trusted_0;
	// System.Boolean Mono.Security.Interface.ValidationResult::user_denied
	bool ___user_denied_1;
	// System.Int32 Mono.Security.Interface.ValidationResult::error_code
	int32_t ___error_code_2;
	// System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors> Mono.Security.Interface.ValidationResult::policy_errors
	Nullable_1_t17812731  ___policy_errors_3;

public:
	inline static int32_t get_offset_of_trusted_0() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___trusted_0)); }
	inline bool get_trusted_0() const { return ___trusted_0; }
	inline bool* get_address_of_trusted_0() { return &___trusted_0; }
	inline void set_trusted_0(bool value)
	{
		___trusted_0 = value;
	}

	inline static int32_t get_offset_of_user_denied_1() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___user_denied_1)); }
	inline bool get_user_denied_1() const { return ___user_denied_1; }
	inline bool* get_address_of_user_denied_1() { return &___user_denied_1; }
	inline void set_user_denied_1(bool value)
	{
		___user_denied_1 = value;
	}

	inline static int32_t get_offset_of_error_code_2() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___error_code_2)); }
	inline int32_t get_error_code_2() const { return ___error_code_2; }
	inline int32_t* get_address_of_error_code_2() { return &___error_code_2; }
	inline void set_error_code_2(int32_t value)
	{
		___error_code_2 = value;
	}

	inline static int32_t get_offset_of_policy_errors_3() { return static_cast<int32_t>(offsetof(ValidationResult_t2074029760, ___policy_errors_3)); }
	inline Nullable_1_t17812731  get_policy_errors_3() const { return ___policy_errors_3; }
	inline Nullable_1_t17812731 * get_address_of_policy_errors_3() { return &___policy_errors_3; }
	inline void set_policy_errors_3(Nullable_1_t17812731  value)
	{
		___policy_errors_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONRESULT_T2074029760_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1600 = { sizeof (__StaticArrayInitTypeSizeU3D24_t3517759979)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D24_t3517759979 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1601 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2711125389)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2711125389 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1602 = { sizeof (__StaticArrayInitTypeSizeU3D36_t385526561)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D36_t385526561 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1603 = { sizeof (__StaticArrayInitTypeSizeU3D38_t1904556335)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D38_t1904556335 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1604 = { sizeof (__StaticArrayInitTypeSizeU3D40_t1547998295)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D40_t1547998295 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1605 = { sizeof (__StaticArrayInitTypeSizeU3D42_t2710797709)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D42_t2710797709 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1606 = { sizeof (__StaticArrayInitTypeSizeU3D44_t3517366763)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t3517366763 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1607 = { sizeof (__StaticArrayInitTypeSizeU3D48_t1904228655)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D48_t1904228655 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1608 = { sizeof (__StaticArrayInitTypeSizeU3D52_t2710732173)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D52_t2710732173 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1609 = { sizeof (__StaticArrayInitTypeSizeU3D56_t385133345)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D56_t385133345 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1610 = { sizeof (__StaticArrayInitTypeSizeU3D64_t3517497835)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D64_t3517497835 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1611 = { sizeof (__StaticArrayInitTypeSizeU3D72_t2710863245)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D72_t2710863245 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1612 = { sizeof (__StaticArrayInitTypeSizeU3D76_t385264417)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D76_t385264417 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1613 = { sizeof (__StaticArrayInitTypeSizeU3D82_t2711584141)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D82_t2711584141 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1614 = { sizeof (__StaticArrayInitTypeSizeU3D84_t3518153195)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D84_t3518153195 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1615 = { sizeof (__StaticArrayInitTypeSizeU3D94_t3518087659)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D94_t3518087659 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1616 = { sizeof (__StaticArrayInitTypeSizeU3D120_t3297148301)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D120_t3297148301 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1617 = { sizeof (__StaticArrayInitTypeSizeU3D128_t531529101)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D128_t531529101 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1618 = { sizeof (__StaticArrayInitTypeSizeU3D130_t568264946)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D130_t568264946 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1619 = { sizeof (__StaticArrayInitTypeSizeU3D162_t589212449)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D162_t589212449 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1620 = { sizeof (__StaticArrayInitTypeSizeU3D174_t3302307462)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D174_t3302307462 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1621 = { sizeof (__StaticArrayInitTypeSizeU3D212_t3318292412)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D212_t3318292412 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1622 = { sizeof (__StaticArrayInitTypeSizeU3D240_t4103913963)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D240_t4103913963 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1623 = { sizeof (__StaticArrayInitTypeSizeU3D256_t1757367632)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D256_t1757367632 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1624 = { sizeof (__StaticArrayInitTypeSizeU3D262_t589409057)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D262_t589409057 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1625 = { sizeof (__StaticArrayInitTypeSizeU3D288_t4020123951)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D288_t4020123951 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1626 = { sizeof (__StaticArrayInitTypeSizeU3D320_t3297279373)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D320_t3297279373 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1627 = { sizeof (__StaticArrayInitTypeSizeU3D360_t971680545)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D360_t971680545 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1628 = { sizeof (__StaticArrayInitTypeSizeU3D640_t4103651819)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D640_t4103651819 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1629 = { sizeof (__StaticArrayInitTypeSizeU3D998_t1291568276)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D998_t1291568276 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1630 = { sizeof (__StaticArrayInitTypeSizeU3D1018_t2637921688)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1018_t2637921688 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1631 = { sizeof (__StaticArrayInitTypeSizeU3D1080_t1828617616)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1080_t1828617616 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1632 = { sizeof (__StaticArrayInitTypeSizeU3D1208_t1462068942)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1208_t1462068942 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1633 = { sizeof (__StaticArrayInitTypeSizeU3D1450_t1076996900)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1450_t1076996900 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1634 = { sizeof (__StaticArrayInitTypeSizeU3D1665_t3813774423)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D1665_t3813774423 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1635 = { sizeof (__StaticArrayInitTypeSizeU3D2048_t1070431640)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2048_t1070431640 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1636 = { sizeof (__StaticArrayInitTypeSizeU3D2100_t1871841525)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2100_t1871841525 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1637 = { sizeof (__StaticArrayInitTypeSizeU3D2350_t1842999851)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2350_t1842999851 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1638 = { sizeof (__StaticArrayInitTypeSizeU3D2382_t269021741)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D2382_t269021741 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1639 = { sizeof (__StaticArrayInitTypeSizeU3D3132_t3825993975)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3132_t3825993975 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1640 = { sizeof (__StaticArrayInitTypeSizeU3D4096_t4160781710)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D4096_t4160781710 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1641 = { sizeof (__StaticArrayInitTypeSizeU3D11614_t2244806902)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D11614_t2244806902 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1642 = { sizeof (__StaticArrayInitTypeSizeU3D21252_t1490422002)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D21252_t1490422002 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1643 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1644 = { sizeof (__Il2CppComDelegate_t1102178620), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1645 = { sizeof (IBindableIteratorToIEnumeratorAdapter_t1455462238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1645[4] = 
{
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_iterator_0(),
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_initialized_1(),
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_hadCurrent_2(),
	IBindableIteratorToIEnumeratorAdapter_t1455462238::get_offset_of_current_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1646 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1646[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1647 = { sizeof (IClosableToIDisposableAdapter_t3213967014), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1648 = { sizeof (IBindableIterableToIEnumerableAdapter_t3609568223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1649 = { sizeof (IBindableVectorToIListAdapter_t2194798), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1650 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1651 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1651[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1652 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1652[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1653 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1653[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1654 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1654[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1655 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1656 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1657 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1658 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1658[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1659 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1659[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1660 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1660[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1661 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1661[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1662 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1663 = { sizeof (IInspectableToICollectionAdapter_t2556582868), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1664 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1665 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1666 = { sizeof (U3CModuleU3E_t692745526), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1667 = { sizeof (Locale_t4128636108), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1668 = { sizeof (ASN1_t2114160833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1668[3] = 
{
	ASN1_t2114160833::get_offset_of_m_nTag_0(),
	ASN1_t2114160833::get_offset_of_m_aValue_1(),
	ASN1_t2114160833::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1669 = { sizeof (ASN1Convert_t2839890153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1670 = { sizeof (BitConverterLE_t2108532979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1671 = { sizeof (PKCS7_t1860834339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1672 = { sizeof (ContentInfo_t3218159896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1672[2] = 
{
	ContentInfo_t3218159896::get_offset_of_contentType_0(),
	ContentInfo_t3218159896::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1673 = { sizeof (EncryptedData_t3577548733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1673[4] = 
{
	EncryptedData_t3577548733::get_offset_of__version_0(),
	EncryptedData_t3577548733::get_offset_of__content_1(),
	EncryptedData_t3577548733::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t3577548733::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1674 = { sizeof (SafeBag_t3961248200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1674[2] = 
{
	SafeBag_t3961248200::get_offset_of__bagOID_0(),
	SafeBag_t3961248200::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1675 = { sizeof (PKCS12_t4101533061), -1, sizeof(PKCS12_t4101533061_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1675[11] = 
{
	PKCS12_t4101533061::get_offset_of__password_0(),
	PKCS12_t4101533061::get_offset_of__keyBags_1(),
	PKCS12_t4101533061::get_offset_of__secretBags_2(),
	PKCS12_t4101533061::get_offset_of__certs_3(),
	PKCS12_t4101533061::get_offset_of__keyBagsChanged_4(),
	PKCS12_t4101533061::get_offset_of__secretBagsChanged_5(),
	PKCS12_t4101533061::get_offset_of__certsChanged_6(),
	PKCS12_t4101533061::get_offset_of__iterations_7(),
	PKCS12_t4101533061::get_offset_of__safeBags_8(),
	PKCS12_t4101533061::get_offset_of__rng_9(),
	PKCS12_t4101533061_StaticFields::get_offset_of_password_max_length_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1676 = { sizeof (DeriveBytes_t1492915136), -1, sizeof(DeriveBytes_t1492915136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1676[7] = 
{
	DeriveBytes_t1492915136_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1492915136_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1492915136_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1492915136::get_offset_of__hashName_3(),
	DeriveBytes_t1492915136::get_offset_of__iterations_4(),
	DeriveBytes_t1492915136::get_offset_of__password_5(),
	DeriveBytes_t1492915136::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1677 = { sizeof (X501_t1758824426), -1, sizeof(X501_t1758824426_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1677[15] = 
{
	X501_t1758824426_StaticFields::get_offset_of_countryName_0(),
	X501_t1758824426_StaticFields::get_offset_of_organizationName_1(),
	X501_t1758824426_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t1758824426_StaticFields::get_offset_of_commonName_3(),
	X501_t1758824426_StaticFields::get_offset_of_localityName_4(),
	X501_t1758824426_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t1758824426_StaticFields::get_offset_of_streetAddress_6(),
	X501_t1758824426_StaticFields::get_offset_of_domainComponent_7(),
	X501_t1758824426_StaticFields::get_offset_of_userid_8(),
	X501_t1758824426_StaticFields::get_offset_of_email_9(),
	X501_t1758824426_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t1758824426_StaticFields::get_offset_of_title_11(),
	X501_t1758824426_StaticFields::get_offset_of_surname_12(),
	X501_t1758824426_StaticFields::get_offset_of_givenName_13(),
	X501_t1758824426_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1678 = { sizeof (X509Certificate_t489243025), -1, sizeof(X509Certificate_t489243025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1678[22] = 
{
	X509Certificate_t489243025::get_offset_of_decoder_0(),
	X509Certificate_t489243025::get_offset_of_m_encodedcert_1(),
	X509Certificate_t489243025::get_offset_of_m_from_2(),
	X509Certificate_t489243025::get_offset_of_m_until_3(),
	X509Certificate_t489243025::get_offset_of_issuer_4(),
	X509Certificate_t489243025::get_offset_of_m_issuername_5(),
	X509Certificate_t489243025::get_offset_of_m_keyalgo_6(),
	X509Certificate_t489243025::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t489243025::get_offset_of_subject_8(),
	X509Certificate_t489243025::get_offset_of_m_subject_9(),
	X509Certificate_t489243025::get_offset_of_m_publickey_10(),
	X509Certificate_t489243025::get_offset_of_signature_11(),
	X509Certificate_t489243025::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t489243025::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t489243025::get_offset_of__rsa_14(),
	X509Certificate_t489243025::get_offset_of__dsa_15(),
	X509Certificate_t489243025::get_offset_of_version_16(),
	X509Certificate_t489243025::get_offset_of_serialnumber_17(),
	X509Certificate_t489243025::get_offset_of_issuerUniqueID_18(),
	X509Certificate_t489243025::get_offset_of_subjectUniqueID_19(),
	X509Certificate_t489243025::get_offset_of_extensions_20(),
	X509Certificate_t489243025_StaticFields::get_offset_of_encoding_error_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1679 = { sizeof (X509CertificateCollection_t1542168550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1680 = { sizeof (X509CertificateEnumerator_t3515934698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1680[1] = 
{
	X509CertificateEnumerator_t3515934698::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1681 = { sizeof (X509Extension_t3173393653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1681[3] = 
{
	X509Extension_t3173393653::get_offset_of_extnOid_0(),
	X509Extension_t3173393653::get_offset_of_extnCritical_1(),
	X509Extension_t3173393653::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1682 = { sizeof (X509ExtensionCollection_t609554709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1682[1] = 
{
	X509ExtensionCollection_t609554709::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1683 = { sizeof (AlertLevel_t886784433)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1683[3] = 
{
	AlertLevel_t886784433::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1684 = { sizeof (AlertDescription_t1176432216)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1684[26] = 
{
	AlertDescription_t1176432216::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1685 = { sizeof (Alert_t1480305158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1685[2] = 
{
	Alert_t1480305158::get_offset_of_level_0(),
	Alert_t1480305158::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1686 = { sizeof (ValidationResult_t2074029760), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1686[4] = 
{
	ValidationResult_t2074029760::get_offset_of_trusted_0(),
	ValidationResult_t2074029760::get_offset_of_user_denied_1(),
	ValidationResult_t2074029760::get_offset_of_error_code_2(),
	ValidationResult_t2074029760::get_offset_of_policy_errors_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1687 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1688 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1689 = { sizeof (CertificateValidationHelper_t2276302545), -1, sizeof(CertificateValidationHelper_t2276302545_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1689[2] = 
{
	CertificateValidationHelper_t2276302545_StaticFields::get_offset_of_noX509Chain_0(),
	CertificateValidationHelper_t2276302545_StaticFields::get_offset_of_supportsTrustAnchors_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1690 = { sizeof (CipherSuiteCode_t732562211)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1690[267] = 
{
	CipherSuiteCode_t732562211::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1691 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1692 = { sizeof (MonoTlsConnectionInfo_t1391984550), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1692[3] = 
{
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CCipherSuiteCodeU3Ek__BackingField_0(),
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CProtocolVersionU3Ek__BackingField_1(),
	MonoTlsConnectionInfo_t1391984550::get_offset_of_U3CPeerDomainNameU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1693 = { sizeof (MonoSslPolicyErrors_t2590217945)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1693[5] = 
{
	MonoSslPolicyErrors_t2590217945::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1694 = { sizeof (MonoRemoteCertificateValidationCallback_t2521872312), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1695 = { sizeof (MonoLocalCertificateSelectionCallback_t1375878923), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1696 = { sizeof (MonoTlsProvider_t3152003291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1697 = { sizeof (MonoTlsSettings_t3666008581), -1, sizeof(MonoTlsSettings_t3666008581_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1697[17] = 
{
	MonoTlsSettings_t3666008581::get_offset_of_U3CRemoteCertificateValidationCallbackU3Ek__BackingField_0(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CClientCertificateSelectionCallbackU3Ek__BackingField_1(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CCertificateValidationTimeU3Ek__BackingField_2(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CTrustAnchorsU3Ek__BackingField_3(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CUserSettingsU3Ek__BackingField_4(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CCertificateSearchPathsU3Ek__BackingField_5(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CSendCloseNotifyU3Ek__BackingField_6(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CEnabledProtocolsU3Ek__BackingField_7(),
	MonoTlsSettings_t3666008581::get_offset_of_U3CEnabledCiphersU3Ek__BackingField_8(),
	MonoTlsSettings_t3666008581::get_offset_of_cloned_9(),
	MonoTlsSettings_t3666008581::get_offset_of_checkCertName_10(),
	MonoTlsSettings_t3666008581::get_offset_of_checkCertRevocationStatus_11(),
	MonoTlsSettings_t3666008581::get_offset_of_useServicePointManagerCallback_12(),
	MonoTlsSettings_t3666008581::get_offset_of_skipSystemValidators_13(),
	MonoTlsSettings_t3666008581::get_offset_of_callbackNeedsChain_14(),
	MonoTlsSettings_t3666008581::get_offset_of_certificateValidator_15(),
	MonoTlsSettings_t3666008581_StaticFields::get_offset_of_defaultSettings_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1698 = { sizeof (TlsException_t3204531704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1698[1] = 
{
	TlsException_t3204531704::get_offset_of_alert_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1699 = { sizeof (TlsProtocols_t3756552591)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1699[13] = 
{
	TlsProtocols_t3756552591::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
