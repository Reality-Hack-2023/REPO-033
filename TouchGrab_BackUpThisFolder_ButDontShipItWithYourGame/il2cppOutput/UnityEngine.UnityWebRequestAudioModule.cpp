﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral482C58F2410F39B21000C8DC75196567E9BA1148;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandlerAudioClip_GetText_m1A79A62E53F03F61A4FB28A3A95AA0267FC52025_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_m3456936EBD08B92CF62DF1D4F1E835D517AC77C6_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct U3CModuleU3E_t8F678E72BB773092FE617E99B35968715F8BFE45 
{
};
struct Il2CppArrayBounds;

struct String_t  : public RuntimeObject
{
	int32_t ____stringLength_4;
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	String_t* ___Empty_6;
};

struct UnityWebRequestMultimedia_t8FD69E8BBA149FB441F4C9C84107B65C7776EAFE  : public RuntimeObject
{
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	String_t* ___m_String_16;
	String_t* ___m_originalUnicodeString_17;
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	String_t* ___m_DnsSafeHost_19;
	uint64_t ___m_Flags_20;
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	bool ___m_iriParsing_22;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	String_t* ___UriSchemeFile_0;
	String_t* ___UriSchemeFtp_1;
	String_t* ___UriSchemeGopher_2;
	String_t* ___UriSchemeHttp_3;
	String_t* ___UriSchemeHttps_4;
	String_t* ___UriSchemeWs_5;
	String_t* ___UriSchemeWss_6;
	String_t* ___UriSchemeMailto_7;
	String_t* ___UriSchemeNews_8;
	String_t* ___UriSchemeNntp_9;
	String_t* ___UriSchemeNetTcp_10;
	String_t* ___UriSchemeNetPipe_11;
	String_t* ___SchemeDelimiter_12;
	bool ___s_ConfigInitialized_23;
	bool ___s_ConfigInitializing_24;
	int32_t ___s_IdnScope_25;
	bool ___s_IriParsing_26;
	bool ___useDotNetRelativeOrAbsolute_27;
	bool ___IsWindowsFileSystem_29;
	RuntimeObject* ___s_initLock_30;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
};

struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString_5;
	String_t* ___FalseString_6;
};

struct IntPtr_t 
{
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	intptr_t ___Zero_1;
};

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

struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	intptr_t ___m_Ptr_0;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	intptr_t ___m_Ptr_0;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

struct Exception_t  : public RuntimeObject
{
	String_t* ____className_1;
	String_t* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t* ____innerException_4;
	String_t* ____helpURL_5;
	RuntimeObject* ____stackTrace_6;
	String_t* ____stackTraceString_7;
	String_t* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	RuntimeObject* ____dynamicMethods_10;
	int32_t ____HResult_11;
	String_t* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock_0;
};
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
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
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
	Il2CppSafeArray* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	intptr_t ___m_Ptr_0;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DownloadHandler_GetCheckedDownloader_TisRuntimeObject_mCD8E86885B6919DF07A065A18370EA15F37D0211_gshared (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerAudioClip_Create_mF088040A27BB328CB057563702E95B57418F1B71 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* ___obj0, String_t* ___url1, int32_t ___audioType2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip_InternalCreateAudioClip_m789B76138CF7B91F510EE1936A63A07C08975098 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, String_t* ___url0, int32_t ___audioType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandler_InternalGetNativeArray_mE622083BC3893B43BC8E7C467A1895664C3B6B89 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___nativeArray1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_DisposeNativeArray_m96514980A0A48921D17C059CAC2CC0CDA27B2398 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___data0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
inline DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_m3456936EBD08B92CF62DF1D4F1E835D517AC77C6 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method)
{
	return ((  DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* (*) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, const RuntimeMethod*))DownloadHandler_GetCheckedDownloader_TisRuntimeObject_mCD8E86885B6919DF07A065A18370EA15F37D0211_gshared)(___www0, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip__ctor_mB8C00870FDA938440C2E89BCAC682E636641B61F (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, String_t* ___url0, int32_t ___audioType1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___downloadHandler2, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___uploadHandler3, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C void DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshal_pinvoke(const DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC& unmarshaled, DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativeData_1 = unmarshaled.___m_NativeData_1;
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshal_pinvoke_back(const DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_pinvoke& marshaled, DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC& unmarshaled)
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledm_NativeData_temp_0;
	memset((&unmarshaledm_NativeData_temp_0), 0, sizeof(unmarshaledm_NativeData_temp_0));
	unmarshaledm_NativeData_temp_0 = marshaled.___m_NativeData_1;
	unmarshaled.___m_NativeData_1 = unmarshaledm_NativeData_temp_0;
	intptr_t unmarshaledm_Ptr_temp_1;
	memset((&unmarshaledm_Ptr_temp_1), 0, sizeof(unmarshaledm_Ptr_temp_1));
	unmarshaledm_Ptr_temp_1 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_1;
}
IL2CPP_EXTERN_C void DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshal_pinvoke_cleanup(DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshal_com(const DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC& unmarshaled, DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_com& marshaled)
{
	marshaled.___m_NativeData_1 = unmarshaled.___m_NativeData_1;
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshal_com_back(const DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_com& marshaled, DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC& unmarshaled)
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledm_NativeData_temp_0;
	memset((&unmarshaledm_NativeData_temp_0), 0, sizeof(unmarshaledm_NativeData_temp_0));
	unmarshaledm_NativeData_temp_0 = marshaled.___m_NativeData_1;
	unmarshaled.___m_NativeData_1 = unmarshaledm_NativeData_temp_0;
	intptr_t unmarshaledm_Ptr_temp_1;
	memset((&unmarshaledm_Ptr_temp_1), 0, sizeof(unmarshaledm_Ptr_temp_1));
	unmarshaledm_Ptr_temp_1 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_1;
}
IL2CPP_EXTERN_C void DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshal_com_cleanup(DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerAudioClip_Create_mF088040A27BB328CB057563702E95B57418F1B71 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* ___obj0, String_t* ___url1, int32_t ___audioType2, const RuntimeMethod* method) 
{
	typedef intptr_t (*DownloadHandlerAudioClip_Create_mF088040A27BB328CB057563702E95B57418F1B71_ftn) (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*, String_t*, int32_t);
	static DownloadHandlerAudioClip_Create_mF088040A27BB328CB057563702E95B57418F1B71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAudioClip_Create_mF088040A27BB328CB057563702E95B57418F1B71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAudioClip::Create(UnityEngine.Networking.DownloadHandlerAudioClip,System.String,UnityEngine.AudioType)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0, ___url1, ___audioType2);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip_InternalCreateAudioClip_m789B76138CF7B91F510EE1936A63A07C08975098 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, String_t* ___url0, int32_t ___audioType1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___url0;
		int32_t L_1 = ___audioType1;
		intptr_t L_2;
		L_2 = DownloadHandlerAudioClip_Create_mF088040A27BB328CB057563702E95B57418F1B71(__this, L_0, L_1, NULL);
		((DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)__this)->___m_Ptr_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip__ctor_mB8C00870FDA938440C2E89BCAC682E636641B61F (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, String_t* ___url0, int32_t ___audioType1, const RuntimeMethod* method) 
{
	{
		DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496(__this, NULL);
		String_t* L_0 = ___url0;
		int32_t L_1 = ___audioType1;
		DownloadHandlerAudioClip_InternalCreateAudioClip_m789B76138CF7B91F510EE1936A63A07C08975098(__this, L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip__ctor_mFF61AA21FD2F3655A0E5DE811467FD7A2426592F (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri0, int32_t ___audioType1, const RuntimeMethod* method) 
{
	{
		DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_0, NULL);
		int32_t L_2 = ___audioType1;
		DownloadHandlerAudioClip_InternalCreateAudioClip_m789B76138CF7B91F510EE1936A63A07C08975098(__this, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandlerAudioClip_GetNativeData_mE7E3D8ED446BE6E5ACAC630F1C2E99687E605766 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = (&__this->___m_NativeData_1);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1;
		L_1 = DownloadHandler_InternalGetNativeArray_mE622083BC3893B43BC8E7C467A1895664C3B6B89(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip_Dispose_mFE45B0B7E69D9AF774D2FDD484041FA374B112A6 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = (&__this->___m_NativeData_1);
		DownloadHandler_DisposeNativeArray_m96514980A0A48921D17C059CAC2CC0CDA27B2398(L_0, NULL);
		DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandlerAudioClip_GetText_m1A79A62E53F03F61A4FB28A3A95AA0267FC52025 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral482C58F2410F39B21000C8DC75196567E9BA1148)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DownloadHandlerAudioClip_GetText_m1A79A62E53F03F61A4FB28A3A95AA0267FC52025_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, const RuntimeMethod* method) 
{
	typedef AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262_ftn) (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*);
	static DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAudioClip::get_audioClip()");
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip_set_streamAudio_mD760F3FC0A37AE1DD889DDA0B3C0B39504B23E30 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*DownloadHandlerAudioClip_set_streamAudio_mD760F3FC0A37AE1DD889DDA0B3C0B39504B23E30_ftn) (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*, bool);
	static DownloadHandlerAudioClip_set_streamAudio_mD760F3FC0A37AE1DD889DDA0B3C0B39504B23E30_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAudioClip_set_streamAudio_mD760F3FC0A37AE1DD889DDA0B3C0B39504B23E30_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAudioClip::set_streamAudio(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerAudioClip_set_compressed_m212FF53AE2E93AC9029E459101F95E51155359A5 (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*DownloadHandlerAudioClip_set_compressed_m212FF53AE2E93AC9029E459101F95E51155359A5_ftn) (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*, bool);
	static DownloadHandlerAudioClip_set_compressed_m212FF53AE2E93AC9029E459101F95E51155359A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerAudioClip_set_compressed_m212FF53AE2E93AC9029E459101F95E51155359A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerAudioClip::set_compressed(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* DownloadHandlerAudioClip_GetContent_mF38CB6EDB5CE453D7C2A783560BCBEA924FA2EC9 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_m3456936EBD08B92CF62DF1D4F1E835D517AC77C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* V_0 = NULL;
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___www0;
		DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_1;
		L_1 = DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_m3456936EBD08B92CF62DF1D4F1E835D517AC77C6(L_0, DownloadHandler_GetCheckedDownloader_TisDownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_m3456936EBD08B92CF62DF1D4F1E835D517AC77C6_RuntimeMethod_var);
		NullCheck(L_1);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2;
		L_2 = DownloadHandlerAudioClip_get_audioClip_mBBA8B1C847780D3442649A0E52C822471F87C262(L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_3 = V_0;
		return L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestMultimedia_GetAudioClip_mADB031D0B0B718A0459E69114922128C35846F7B (String_t* ___uri0, int32_t ___audioType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	{
		String_t* L_0 = ___uri0;
		String_t* L_1 = ___uri0;
		int32_t L_2 = ___audioType1;
		DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC* L_3 = (DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC*)il2cpp_codegen_object_new(DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_il2cpp_TypeInfo_var);
		DownloadHandlerAudioClip__ctor_mB8C00870FDA938440C2E89BCAC682E636641B61F(L_3, L_1, L_2, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A(L_4, L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_3, (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*)NULL, NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
