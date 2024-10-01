#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PowensConnectBase, PowensConnectMutableSet<E>, PowensConnectMutableDictionary<K, V>, PowensConnectNumber, PowensConnectByte, PowensConnectUByte, PowensConnectShort, PowensConnectUShort, PowensConnectInt, PowensConnectUInt, PowensConnectLong, PowensConnectULong, PowensConnectFloat, PowensConnectDouble, PowensConnectBoolean, PowensConnectKotlinException, PowensConnectKotlinThrowable, PowensConnectKotlinEnum<E>, PowensConnectKotlinEnumCompanion, PowensConnectKotlinCancellationException, PowensConnectKotlinIllegalStateException, PowensConnectKotlinRuntimeException, PowensConnectKotlinIllegalArgumentException, PowensConnectKotlinArray<T>, PowensConnectKotlinUnit, PowensConnectKotlinByteArray, PowensConnectKotlinAbstractCoroutineContextElement, PowensConnectKotlinByteIterator, PowensConnectKotlinNothing, PowensConnectKotlinLongRange, PowensConnectKotlinLongRangeCompanion, PowensConnectKotlinLongProgression, PowensConnectKotlinLongProgressionCompanion, PowensConnectKotlinAbstractCoroutineContextKey<B, E>, PowensConnectKotlinKTypeProjection, PowensConnectKotlinKTypeProjectionCompanion, PowensConnectKotlinLongIterator, PowensConnectKotlinKVariance, PowensConnectSkieColdFlowIterator<E>, PowensConnectSkieKotlinFlow<T>, PowensConnectSkieKotlinMutableSharedFlow<T>, PowensConnectSkieKotlinMutableStateFlow<T>, PowensConnectSkieKotlinOptionalFlow<T>, PowensConnectSkieKotlinOptionalMutableSharedFlow<T>, PowensConnectSkieKotlinOptionalMutableStateFlow<T>, PowensConnectSkieKotlinOptionalSharedFlow<T>, PowensConnectSkieKotlinOptionalStateFlow<T>, PowensConnectSkieKotlinSharedFlow<T>, PowensConnectSkieKotlinStateFlow<T>, PowensConnectSkie_CancellationHandler, PowensConnectSkie_SuspendHandler, PowensConnectSkie_SuspendResult, PowensConnectSkie_SuspendResultCanceled, PowensConnectSkie_SuspendResultError, PowensConnectSkie_SuspendResultSuccess, PowensConnectKotlinx_coroutines_coreCoroutineDispatcher, PowensConnectKotlinx_coroutines_coreCoroutineDispatcherKey, PowensConnectFlowHandle, PowensConnectPowens, PowensConnectWebviewHandler, PowensConnectWebviewLauncher, PowensConnectApiKeyAuth, PowensConnectHttpBasicAuth, PowensConnectHttpBearerAuth, PowensConnectOAuth, PowensConnectPowensApiClient, PowensConnectPowensApiClientCompanion, PowensConnectServiceException, PowensConnectWebviewClient, PowensConnectWebviewClientCompanion, PowensConnectAuthenticationApi, PowensConnectAuthenticationApiTypeGetAuthCode, PowensConnectAuthenticationApiTypeGetAuthCodeCompanion, PowensConnectApiClient, PowensConnectApiClientCompanion, PowensConnectBankAccountTypesApi, PowensConnectBankAccountsApi, PowensConnectBankTransactionsApi, PowensConnectBankTransactionsApiExpandGetUserTransaction, PowensConnectBankTransactionsApiExpandGetUserTransactionCompanion, PowensConnectBankTransactionsApiExpandListUserTransactions, PowensConnectBankTransactionsApiExpandListUserTransactionsCompanion, PowensConnectBankTransactionsApiExpandUpdateUserTransaction, PowensConnectBankTransactionsApiExpandUpdateUserTransactionCompanion, PowensConnectConnectionsApi, PowensConnectConnectorsApi, PowensConnectUsersApi, PowensConnectBase64ByteArray, PowensConnectBase64ByteArrayCompanion, PowensConnectExpand, PowensConnectHttpResponse<T>, PowensConnectHttpResponseCompanion, PowensConnectIdsAsStringSerializer, PowensConnectMappedBodyProvider<S, T>, PowensConnectOctetByteArray, PowensConnectOctetByteArrayCompanion, PowensConnectPartConfig<T>, PowensConnectRequestConfig<T>, PowensConnectRequestMethod, PowensConnectStringSerializer, PowensConnectTypedBodyProvider<T>, PowensConnectAccessToken, PowensConnectAccessTokenCompanion, PowensConnectAccessTokenRequest, PowensConnectAccessTokenRequestCompanion, PowensConnectAccessTokenType, PowensConnectAccessTokenTypeCompanion, PowensConnectAccountSchemeName, PowensConnectAccountSchemeNameCompanion, PowensConnectAuthCode, PowensConnectAuthCodeCompanion, PowensConnectAuthCodeAccess, PowensConnectAuthCodeAccessCompanion, PowensConnectAuthCodeType, PowensConnectAuthCodeTypeCompanion, PowensConnectAuthMechanism, PowensConnectAuthMechanismCompanion, PowensConnectBankAccount, PowensConnectBankAccountCompanion, PowensConnectBankAccountExpand, PowensConnectBankAccountExpandCompanion, PowensConnectBankAccountExpandField, PowensConnectBankAccountExpandFieldCompanion, PowensConnectBankAccountType, PowensConnectBankAccountTypeCompanion, PowensConnectBankAccountTypeName, PowensConnectBankAccountTypeNameCompanion, PowensConnectBankAccountTypesList, PowensConnectBankAccountTypesListCompanion, PowensConnectBankAccountUpdateRequest, PowensConnectBankAccountUpdateRequestCompanion, PowensConnectBankAccountUsage, PowensConnectBankAccountUsageCompanion, PowensConnectBankAccountsList, PowensConnectBankAccountsListCompanion, PowensConnectBanksList, PowensConnectBanksListCompanion, PowensConnectCalendarBound, PowensConnectCalendarBoundCompanion, PowensConnectCalendarBoundDate, PowensConnectCalendarBoundSerializer, PowensConnectCalendarBoundYear, PowensConnectCalendarBoundYearMonth, PowensConnectConnection, PowensConnectConnectionCompanion, PowensConnectConnectionExpand, PowensConnectConnectionExpandCompanion, PowensConnectConnectionExpandField, PowensConnectConnectionExpandFieldCompanion, PowensConnectConnectionSource, PowensConnectConnectionSourceCompanion, PowensConnectConnectionState, PowensConnectConnectionStateCompanion, PowensConnectConnectionsList, PowensConnectConnectionsListCompanion, PowensConnectConnector, PowensConnectConnectorCompanion, PowensConnectConnectorCapability, PowensConnectConnectorCapabilityCompanion, PowensConnectConnectorCountry, PowensConnectConnectorCountryCompanion, PowensConnectConnectorExpand, PowensConnectConnectorExpandCompanion, PowensConnectConnectorExpandField, PowensConnectConnectorExpandFieldCompanion, PowensConnectConnectorPatch, PowensConnectConnectorPatchCompanion, PowensConnectConnectorSource, PowensConnectConnectorSourceCompanion, PowensConnectConnectorsList, PowensConnectConnectorsListCompanion, PowensConnectCredentialsField, PowensConnectCredentialsFieldCompanion, PowensConnectCredentialsFieldType, PowensConnectCredentialsFieldTypeCompanion, PowensConnectCredentialsFieldValue, PowensConnectCredentialsFieldValueCompanion, PowensConnectCurrency, PowensConnectCurrencyCompanion, PowensConnectDateBoundedList, PowensConnectDateBoundedListCompanion, PowensConnectExchangeAccessToken, PowensConnectExchangeAccessTokenCompanion, PowensConnectExchangeAccessTokenTokenType, PowensConnectExchangeAccessTokenTokenTypeCompanion, PowensConnectExchangeAccessTokenRequest, PowensConnectExchangeAccessTokenRequestCompanion, PowensConnectExchangeAccessTokenRequestGrantType, PowensConnectExchangeAccessTokenRequestGrantTypeCompanion, PowensConnectLoan, PowensConnectLoanCompanion, PowensConnectLoanType, PowensConnectLoanTypeCompanion, PowensConnectProvidersList, PowensConnectProvidersListCompanion, PowensConnectRenewAccessTokenRequest, PowensConnectRenewAccessTokenRequestCompanion, PowensConnectRenewAccessTokenRequestGrantType, PowensConnectRenewAccessTokenRequestGrantTypeCompanion, PowensConnectServiceAccessToken, PowensConnectServiceAccessTokenCompanion, PowensConnectServiceAccessTokenRequest, PowensConnectServiceAccessTokenRequestCompanion, PowensConnectServiceAccessTokenRequestGrantType, PowensConnectServiceAccessTokenRequestGrantTypeCompanion, PowensConnectServiceError, PowensConnectServiceErrorCompanion, PowensConnectServiceErrorCode, PowensConnectServiceErrorCodeCompanion, PowensConnectServiceTokenScope, PowensConnectServiceTokenScopeCompanion, PowensConnectTransaction, PowensConnectTransactionCompanion, PowensConnectTransactionCounterparty, PowensConnectTransactionCounterpartyCompanion, PowensConnectTransactionCounterpartyType, PowensConnectTransactionCounterpartyTypeCompanion, PowensConnectTransactionType, PowensConnectTransactionTypeCompanion, PowensConnectTransactionUpdateRequest, PowensConnectTransactionUpdateRequestCompanion, PowensConnectTransactionValueFilter, PowensConnectTransactionValueFilterCompanion, PowensConnectTransactionValueFilterSerializer, PowensConnectTransactionsList, PowensConnectTransactionsListCompanion, PowensConnectUser, PowensConnectUserCompanion, PowensConnectWebviewCallbackError, PowensConnectWebviewCallbackErrorCompanion, PowensConnectWebviewCallbackSuccess, PowensConnectWebviewCallbackSuccessCompanion, PowensConnectWebviewConnectCallbackSuccess, PowensConnectWebviewConnectCallbackSuccessCompanion, PowensConnectWebviewConnectOptions, PowensConnectWebviewConnectOptionsCompanion, PowensConnectWebviewOptions, PowensConnectWebviewOptionsCompanion, PowensConnectWebviewErrorCode, PowensConnectWebviewErrorCodeCompanion, PowensConnectWebviewManageCallbackSuccess, PowensConnectWebviewManageCallbackSuccessCompanion, PowensConnectWebviewManageOptions, PowensConnectWebviewManageOptionsCompanion, PowensConnectWebviewPath, PowensConnectWebviewPathCompanion, PowensConnectApiAbstractionsKt, PowensConnectMonetaryValue_iosKt, PowensConnectKotlinx_serialization_corePolymorphicKind, PowensConnectKotlinx_serialization_corePolymorphicKindOPEN, PowensConnectKotlinx_serialization_corePolymorphicKindSEALED, PowensConnectKotlinx_serialization_coreSerialKind, PowensConnectKotlinx_serialization_coreSerialKindCONTEXTUAL, PowensConnectKotlinx_serialization_coreSerialKindENUM, PowensConnectKotlinx_serialization_corePrimitiveKind, PowensConnectKotlinx_serialization_corePrimitiveKindBOOLEAN, PowensConnectKotlinx_serialization_corePrimitiveKindBYTE, PowensConnectKotlinx_serialization_corePrimitiveKindCHAR, PowensConnectKotlinx_serialization_corePrimitiveKindDOUBLE, PowensConnectKotlinx_serialization_corePrimitiveKindFLOAT, PowensConnectKotlinx_serialization_corePrimitiveKindINT, PowensConnectKotlinx_serialization_corePrimitiveKindLONG, PowensConnectKotlinx_serialization_corePrimitiveKindSHORT, PowensConnectKotlinx_serialization_corePrimitiveKindSTRING, PowensConnectKotlinx_serialization_coreStructureKind, PowensConnectKotlinx_serialization_coreStructureKindCLASS, PowensConnectKotlinx_serialization_coreStructureKindLIST, PowensConnectKotlinx_serialization_coreStructureKindMAP, PowensConnectKotlinx_serialization_coreStructureKindOBJECT, PowensConnectKotlinx_serialization_coreSerializersModule, PowensConnectKtor_client_coreHttpResponse, PowensConnectKtor_client_coreResponseException, PowensConnectKtor_client_coreHttpClient, PowensConnectKtor_client_coreHttpClientConfig<T>, PowensConnectKtor_client_coreHttpClientCall, PowensConnectKtor_client_coreHttpClientCallCompanion, PowensConnectKtor_client_coreHttpRequestData, PowensConnectKtor_client_coreHttpClientEngineConfig, PowensConnectKtor_client_coreHttpReceivePipeline, PowensConnectKtor_client_coreHttpReceivePipelinePhases, PowensConnectKtor_client_coreHttpRequestPipeline, PowensConnectKtor_client_coreHttpRequestPipelinePhases, PowensConnectKtor_client_coreHttpResponsePipeline, PowensConnectKtor_client_coreHttpResponsePipelinePhases, PowensConnectKtor_client_coreHttpSendPipeline, PowensConnectKtor_client_coreHttpSendPipelinePhases, PowensConnectKtor_client_coreHttpResponseData, PowensConnectKtor_client_coreProxyConfig, PowensConnectKtor_client_coreHttpRequestBuilder, PowensConnectKtor_client_coreHttpRequestBuilderCompanion, PowensConnectKtor_client_coreHttpResponseContainer, PowensConnectKtor_httpHttpStatusCode, PowensConnectKtor_httpHttpStatusCodeCompanion, PowensConnectKtor_httpPartData, PowensConnectKtor_httpPartDataBinaryChannelItem, PowensConnectKtor_httpPartDataBinaryItem, PowensConnectKtor_httpPartDataFileItem, PowensConnectKtor_httpPartDataFormItem, PowensConnectKtor_httpHttpProtocolVersion, PowensConnectKtor_httpHttpProtocolVersionCompanion, PowensConnectKtor_httpOutgoingContent, PowensConnectKtor_httpOutgoingContentProtocolUpgrade, PowensConnectKtor_httpOutgoingContentWriteChannelContent, PowensConnectKtor_httpOutgoingContentByteArrayContent, PowensConnectKtor_httpOutgoingContentNoContent, PowensConnectKtor_httpOutgoingContentReadChannelContent, PowensConnectKtor_httpContentDisposition, PowensConnectKtor_httpContentDispositionCompanion, PowensConnectKtor_httpHeaderValueWithParameters, PowensConnectKtor_httpHeaderValueWithParametersCompanion, PowensConnectKtor_httpContentType, PowensConnectKtor_httpContentTypeCompanion, PowensConnectKtor_httpUrl, PowensConnectKtor_httpUrlCompanion, PowensConnectKtor_httpHttpMethod, PowensConnectKtor_httpHttpMethodCompanion, PowensConnectKtor_httpHeaderValueParam, PowensConnectKtor_httpURLProtocol, PowensConnectKtor_httpURLProtocolCompanion, PowensConnectKtor_httpHeadersBuilder, PowensConnectKtor_httpURLBuilder, PowensConnectKtor_httpURLBuilderCompanion, PowensConnectKtor_ioMemory, PowensConnectKtor_ioMemoryCompanion, PowensConnectKtor_ioChunkBuffer, PowensConnectKtor_ioChunkBufferCompanion, PowensConnectKtor_ioBuffer, PowensConnectKtor_ioBufferCompanion, PowensConnectKtor_ioByteReadPacket, PowensConnectKtor_ioByteReadPacketCompanion, PowensConnectKtor_ioInput, PowensConnectKtor_ioInputCompanion, PowensConnectKotlinx_serialization_jsonJson, PowensConnectKotlinx_serialization_jsonJsonDefault, PowensConnectKotlinx_serialization_jsonJsonPrimitive, PowensConnectKotlinx_serialization_jsonJsonPrimitiveCompanion, PowensConnectKotlinx_serialization_jsonJsonElement, PowensConnectKotlinx_serialization_jsonJsonElementCompanion, PowensConnectKotlinx_serialization_jsonJsonNull, PowensConnectKotlinx_serialization_jsonJsonConfiguration, PowensConnectKtor_utilsTypeInfo, PowensConnectKtor_utilsGMTDate, PowensConnectKtor_utilsGMTDateCompanion, PowensConnectKtor_utilsPipeline<TSubject, TContext>, PowensConnectKtor_utilsWeekDay, PowensConnectKtor_utilsWeekDayCompanion, PowensConnectKtor_utilsMonth, PowensConnectKtor_utilsMonthCompanion, PowensConnectKtor_utilsAttributeKey<T>, PowensConnectKtor_utilsPipelinePhase, PowensConnectKtor_utilsStringValuesBuilderImpl, PowensConnectKotlinx_datetimeLocalDateTime, PowensConnectKotlinx_datetimeLocalDateTimeCompanion, PowensConnectKotlinx_datetimeLocalDate, PowensConnectKotlinx_datetimeLocalDateCompanion, PowensConnectKotlinx_datetimeMonth, PowensConnectKotlinx_datetimeLocalTime, PowensConnectKotlinx_datetimeLocalTimeCompanion, PowensConnectKotlinx_datetimeDayOfWeek, PowensConnectKtor_eventsEvents, PowensConnectKtor_eventsEventDefinition<T>, PowensConnect__SkieSuspendWrappersKt, PowensConnect__SkieTypeExportsKt, NSObject, NSError, NSString, NSArray<E>, NSMutableArray<E>, NSSet<E>, NSDictionary<K, V>, NSMutableSet, NSMutableDictionary, NSNumber, UIViewController, NSURL;

@protocol PowensConnectKotlinComparable, PowensConnectKotlinCoroutineContext, PowensConnectKotlinCoroutineContextElement, PowensConnectKotlinCoroutineContextKey, PowensConnectKotlinSuspendFunction1, PowensConnectKotlinFunction, PowensConnectKotlinAppendable, PowensConnectKotlinSuspendFunction2, PowensConnectKotlinIterator, PowensConnectKotlinContinuationInterceptor, PowensConnectKotlinMapEntry, PowensConnectKotlinAnnotation, PowensConnectKotlinKClass, PowensConnectKotlinKDeclarationContainer, PowensConnectKotlinKAnnotatedElement, PowensConnectKotlinKClassifier, PowensConnectKotlinKType, PowensConnectKotlinSequence, PowensConnectKotlinIterable, PowensConnectKotlinClosedRange, PowensConnectKotlinOpenEndRange, PowensConnectKotlinContinuation, PowensConnectSkie_DispatcherDelegate, PowensConnectKotlinx_coroutines_coreFlow, PowensConnectKotlinx_coroutines_coreMutableSharedFlow, PowensConnectKotlinx_coroutines_coreSharedFlow, PowensConnectKotlinx_coroutines_coreFlowCollector, PowensConnectKotlinx_coroutines_coreMutableStateFlow, PowensConnectKotlinx_coroutines_coreStateFlow, PowensConnectKotlinx_coroutines_coreCoroutineScope, PowensConnectKotlinx_coroutines_coreRunnable, PowensConnectKotlinx_coroutines_coreJob, PowensConnectKotlinx_coroutines_coreSelectClause1, PowensConnectKotlinx_coroutines_coreSelectClause, PowensConnectKotlinx_coroutines_coreSelectClause2, PowensConnectKotlinx_coroutines_coreChildHandle, PowensConnectKotlinx_coroutines_coreDisposableHandle, PowensConnectKotlinx_coroutines_coreChildJob, PowensConnectKotlinx_coroutines_coreSelectClause0, PowensConnectKotlinx_coroutines_coreSelectInstance, PowensConnectKotlinx_coroutines_coreParentJob, PowensConnectAuthentication, PowensConnectBodyProvider, PowensConnectParcelable, PowensConnectWebviewCallback, PowensConnectWebviewCallbackResult, PowensConnectWebviewConnectCallbackResult, PowensConnectWebviewManageCallbackResult, PowensConnectKotlinx_serialization_coreKSerializer, PowensConnectKotlinx_serialization_coreSerializationStrategy, PowensConnectKotlinx_serialization_coreDeserializationStrategy, PowensConnectKotlinx_serialization_coreStringFormat, PowensConnectKotlinx_serialization_coreSerialFormat, PowensConnectKotlinx_serialization_coreEncoder, PowensConnectKotlinx_serialization_coreSerialDescriptor, PowensConnectKotlinx_serialization_coreDecoder, PowensConnectKotlinx_serialization_coreCompositeEncoder, PowensConnectKotlinx_serialization_coreCompositeDecoder, PowensConnectKotlinx_serialization_coreSerializersModuleCollector, PowensConnectKtor_client_coreHttpClientEngine, PowensConnectKtor_client_coreHttpClientEngineCapability, PowensConnectKtor_client_coreHttpClientPlugin, PowensConnectKtor_client_coreHttpRequest, PowensConnectKtor_httpHttpMessage, PowensConnectKtor_httpParameters, PowensConnectKtor_httpHeaders, PowensConnectKtor_httpHttpMessageBuilder, PowensConnectKtor_httpParametersBuilder, PowensConnectKtor_ioCloseable, PowensConnectKtor_ioByteReadChannel, PowensConnectKtor_ioByteWriteChannel, PowensConnectKtor_ioReadSession, PowensConnectKtor_ioObjectPool, PowensConnectKotlinx_serialization_jsonJsonNamingStrategy, PowensConnectKtor_utilsStringValues, PowensConnectKtor_utilsAttributes, PowensConnectKtor_utilsStringValuesBuilder, NSCopying;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end


NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PowensConnectBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PowensConnectBase (PowensConnectBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PowensConnectMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PowensConnectMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPowensConnectKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PowensConnectNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PowensConnectByte : PowensConnectNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PowensConnectUByte : PowensConnectNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PowensConnectShort : PowensConnectNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PowensConnectUShort : PowensConnectNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PowensConnectInt : PowensConnectNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PowensConnectUInt : PowensConnectNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PowensConnectLong : PowensConnectNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PowensConnectULong : PowensConnectNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PowensConnectFloat : PowensConnectNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PowensConnectDouble : PowensConnectNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PowensConnectBoolean : PowensConnectNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface PowensConnectSkieColdFlowIterator<E> : PowensConnectBase
- (instancetype)initWithFlow:(id<PowensConnectKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(PowensConnectBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol PowensConnectKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface PowensConnectSkieKotlinFlow<__covariant T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol PowensConnectKotlinx_coroutines_coreSharedFlow <PowensConnectKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol PowensConnectKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol PowensConnectKotlinx_coroutines_coreMutableSharedFlow <PowensConnectKotlinx_coroutines_coreSharedFlow, PowensConnectKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface PowensConnectSkieKotlinMutableSharedFlow<T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol PowensConnectKotlinx_coroutines_coreStateFlow <PowensConnectKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol PowensConnectKotlinx_coroutines_coreMutableStateFlow <PowensConnectKotlinx_coroutines_coreStateFlow, PowensConnectKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface PowensConnectSkieKotlinMutableStateFlow<T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface PowensConnectSkieKotlinOptionalFlow<__covariant T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface PowensConnectSkieKotlinOptionalMutableSharedFlow<T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface PowensConnectSkieKotlinOptionalMutableStateFlow<T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface PowensConnectSkieKotlinOptionalSharedFlow<__covariant T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface PowensConnectSkieKotlinOptionalStateFlow<__covariant T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface PowensConnectSkieKotlinSharedFlow<__covariant T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface PowensConnectSkieKotlinStateFlow<__covariant T> : PowensConnectBase <PowensConnectKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<PowensConnectKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface PowensConnectSkie_CancellationHandler : PowensConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol PowensConnectSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<PowensConnectKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface PowensConnectSkie_SuspendHandler : PowensConnectBase
- (instancetype)initWithCancellationHandler:(PowensConnectSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<PowensConnectSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(PowensConnectSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface PowensConnectSkie_SuspendResult : PowensConnectBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface PowensConnectSkie_SuspendResultCanceled : PowensConnectSkie_SuspendResult
@property (class, readonly, getter=shared) PowensConnectSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface PowensConnectSkie_SuspendResultError : PowensConnectSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface PowensConnectSkie_SuspendResultSuccess : PowensConnectSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowHandle")))
@interface PowensConnectFlowHandle : PowensConnectBase
- (void)presentOnSourceViewController:(UIViewController *)sourceViewController __attribute__((swift_name("presentOn(sourceViewController:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Powens")))
@interface PowensConnectPowens : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectPowens *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectWebviewHandler *handler __attribute__((swift_name("handler")));
@property (readonly) PowensConnectWebviewLauncher *launcher __attribute__((swift_name("launcher")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)powens __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewHandler")))
@interface PowensConnectWebviewHandler : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewHandler *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webviewHandler __attribute__((swift_name("init()")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)handleConnectCallbackUrl:(NSURL *)url error:(NSError * _Nullable * _Nullable)error completionHandler:(void (^)(id<PowensConnectWebviewConnectCallbackResult>))completionHandler __attribute__((swift_name("handleConnectCallback(url:completionHandler:)")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)handleManageCallbackUrl:(NSURL *)url error:(NSError * _Nullable * _Nullable)error completionHandler:(void (^)(id<PowensConnectWebviewManageCallbackResult>))completionHandler __attribute__((swift_name("handleManageCallback(url:completionHandler:)")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)handleReconnectCallbackUrl:(NSURL *)url error:(NSError * _Nullable * _Nullable)error completionHandler:(void (^)(id<PowensConnectWebviewCallbackResult>))completionHandler __attribute__((swift_name("handleReconnectCallback(url:completionHandler:)")));
- (void)registerWebviewCallbackSourceViewController:(UIViewController *)sourceViewController __attribute__((swift_name("registerWebviewCallback(sourceViewController:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewLauncher")))
@interface PowensConnectWebviewLauncher : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewLauncher *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webviewLauncher __attribute__((swift_name("init()")));

/**
 * @note This method converts instances of CancellationException, IllegalArgumentException, ServiceException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)connectFlowAccessToken:(NSString * _Nullable)accessToken state:(NSString * _Nullable)state options:(PowensConnectWebviewConnectOptions * _Nullable)options completionHandler:(void (^)(PowensConnectFlowHandle * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("connectFlow(accessToken:state:options:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException, IllegalArgumentException, ServiceException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)manageFlowAccessToken:(NSString *)accessToken connectionId:(PowensConnectLong * _Nullable)connectionId state:(NSString * _Nullable)state options:(PowensConnectWebviewManageOptions * _Nullable)options completionHandler:(void (^)(PowensConnectFlowHandle * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("manageFlow(accessToken:connectionId:state:options:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException, IllegalArgumentException, ServiceException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reconnectFlowAccessToken:(NSString *)accessToken connectionId:(int64_t)connectionId resetCredentials:(BOOL)resetCredentials state:(NSString * _Nullable)state completionHandler:(void (^)(PowensConnectFlowHandle * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reconnectFlow(accessToken:connectionId:resetCredentials:state:completionHandler:)")));
@end

__attribute__((swift_name("Authentication")))
@protocol PowensConnectAuthentication
@required
- (void)applyQuery:(PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiKeyAuth")))
@interface PowensConnectApiKeyAuth : PowensConnectBase <PowensConnectAuthentication>
@property NSString * _Nullable apiKey __attribute__((swift_name("apiKey")));
@property NSString * _Nullable apiKeyPrefix __attribute__((swift_name("apiKeyPrefix")));
@property (readonly) NSString *paramName __attribute__((swift_name("paramName")));
- (instancetype)initWithLocation:(NSString *)location paramName:(NSString *)paramName __attribute__((swift_name("init(location:paramName:)"))) __attribute__((objc_designated_initializer));
- (void)applyQuery:(PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBasicAuth")))
@interface PowensConnectHttpBasicAuth : PowensConnectBase <PowensConnectAuthentication>
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)applyQuery:(PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpBearerAuth")))
@interface PowensConnectHttpBearerAuth : PowensConnectBase <PowensConnectAuthentication>
@property NSString * _Nullable bearerToken __attribute__((swift_name("bearerToken")));
- (instancetype)initWithScheme:(NSString * _Nullable)scheme __attribute__((swift_name("init(scheme:)"))) __attribute__((objc_designated_initializer));
- (void)applyQuery:(PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OAuth")))
@interface PowensConnectOAuth : PowensConnectBase <PowensConnectAuthentication>
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)applyQuery:(PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *)query headers:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers __attribute__((swift_name("apply(query:headers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowensApiClient")))
@interface PowensConnectPowensApiClient : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectPowensApiClientCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectAuthenticationApi *auth __attribute__((swift_name("auth")));
@property (readonly) PowensConnectBankAccountTypesApi *bankAccountTypes __attribute__((swift_name("bankAccountTypes")));
@property (readonly) PowensConnectBankAccountsApi *bankAccounts __attribute__((swift_name("bankAccounts")));
@property (readonly) PowensConnectBankTransactionsApi *bankTransactions __attribute__((swift_name("bankTransactions")));
@property (readonly) PowensConnectConnectionsApi *connections __attribute__((swift_name("connections")));
@property (readonly) PowensConnectConnectorsApi *connectors __attribute__((swift_name("connectors")));
@property (readonly) PowensConnectUsersApi *users __attribute__((swift_name("users")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (instancetype _Nullable)initWithRoot:(NSString *)root clientId:(NSString *)clientId error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("init(root:clientId:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PowensApiClient.Companion")))
@interface PowensConnectPowensApiClientCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectPowensApiClientCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (PowensConnectPowensApiClient * _Nullable)forPowensDomainDomain:(NSString *)domain clientId:(NSString *)clientId error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("forPowensDomain(domain:clientId:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PowensConnectKotlinThrowable : PowensConnectBase
@property (readonly) PowensConnectKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PowensConnectKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PowensConnectKotlinException : PowensConnectKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceException")))
@interface PowensConnectServiceException : PowensConnectKotlinException
@property (readonly) PowensConnectServiceError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
- (instancetype)initWithStatusCode:(PowensConnectKtor_httpHttpStatusCode *)statusCode error:(PowensConnectServiceError * _Nullable)error cause:(PowensConnectKtor_client_coreResponseException *)cause __attribute__((swift_name("init(statusCode:error:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewClient")))
@interface PowensConnectWebviewClient : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectWebviewClientCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (instancetype _Nullable)initWithDomain:(NSString *)domain clientId:(NSString *)clientId error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("init(domain:clientId:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of IllegalArgumentException, CancellationException, ServiceException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)buildConnectUrlAccessToken:(NSString * _Nullable)accessToken redirectUri:(NSString *)redirectUri state:(NSString * _Nullable)state options:(PowensConnectWebviewConnectOptions * _Nullable)options completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("buildConnectUrl(accessToken:redirectUri:state:options:completionHandler:)")));

/**
 * @note This method converts instances of IllegalArgumentException, CancellationException, ServiceException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)buildManageUrlConnectionId:(PowensConnectLong * _Nullable)connectionId accessToken:(NSString *)accessToken redirectUri:(NSString * _Nullable)redirectUri state:(NSString * _Nullable)state options:(PowensConnectWebviewManageOptions * _Nullable)options completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("buildManageUrl(connectionId:accessToken:redirectUri:state:options:completionHandler:)")));

/**
 * @note This method converts instances of IllegalArgumentException, CancellationException, ServiceException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)buildReconnectUrlConnectionId:(int64_t)connectionId resetCredentials:(BOOL)resetCredentials accessToken:(NSString *)accessToken redirectUri:(NSString *)redirectUri state:(NSString * _Nullable)state completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("buildReconnectUrl(connectionId:resetCredentials:accessToken:redirectUri:state:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewClient.Companion")))
@interface PowensConnectWebviewClientCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewClientCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (PowensConnectWebviewClient * _Nullable)forPowensDomainDomain:(NSString *)domain clientId:(NSString *)clientId error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("forPowensDomain(domain:clientId:)")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<PowensConnectWebviewCallbackResult> _Nullable)parseCallbackQuery:(NSString * _Nullable)query error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseCallback(query:)")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<PowensConnectWebviewConnectCallbackResult> _Nullable)parseConnectCallbackQuery:(NSString * _Nullable)query error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseConnectCallback(query:)")));

/**
 * @note This method converts instances of IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id<PowensConnectWebviewManageCallbackResult> _Nullable)parseManageCallbackQuery:(NSString * _Nullable)query error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parseManageCallback(query:)")));
@end

__attribute__((swift_name("ApiClient")))
@interface PowensConnectApiClient : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectApiClientCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)jsonRequestRequestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(PowensConnectKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("jsonRequest(requestConfig:body:authNames:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)multipartFormRequestRequestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(NSArray<PowensConnectKtor_httpPartData *> * _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(PowensConnectKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("multipartFormRequest(requestConfig:body:authNames:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)requestRequestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(PowensConnectKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(requestConfig:body:authNames:completionHandler:)")));
- (void)setAccessTokenAccessToken:(NSString *)accessToken __attribute__((swift_name("setAccessToken(accessToken:)")));
- (void)setApiKeyApiKey:(NSString *)apiKey paramName:(NSString * _Nullable)paramName __attribute__((swift_name("setApiKey(apiKey:paramName:)")));
- (void)setApiKeyPrefixApiKeyPrefix:(NSString *)apiKeyPrefix paramName:(NSString * _Nullable)paramName __attribute__((swift_name("setApiKeyPrefix(apiKeyPrefix:paramName:)")));
- (void)setBearerTokenBearerToken:(NSString *)bearerToken __attribute__((swift_name("setBearerToken(bearerToken:)")));
- (void)setPasswordPassword:(NSString *)password __attribute__((swift_name("setPassword(password:)")));
- (void)setUsernameUsername:(NSString *)username __attribute__((swift_name("setUsername(username:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)urlEncodedFormRequestRequestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(id<PowensConnectKtor_httpParameters> _Nullable)body authNames:(NSArray<NSString *> *)authNames completionHandler:(void (^)(PowensConnectKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("urlEncodedFormRequest(requestConfig:body:authNames:completionHandler:)")));
@end

__attribute__((swift_name("AuthenticationApi")))
@interface PowensConnectAuthenticationApi : PowensConnectApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(PowensConnectKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)exchangeAccessTokenExchangeAccessTokenRequest:(PowensConnectExchangeAccessTokenRequest * _Nullable)exchangeAccessTokenRequest completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectExchangeAccessToken *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exchangeAccessToken(exchangeAccessTokenRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAuthCodeType:(PowensConnectAuthenticationApiTypeGetAuthCode * _Nullable)type completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectAuthCode *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAuthCode(type:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getServiceAccessTokenServiceAccessTokenRequest:(PowensConnectServiceAccessTokenRequest * _Nullable)serviceAccessTokenRequest completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectServiceAccessToken *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getServiceAccessToken(serviceAccessTokenRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doInitUserTokenAccessTokenRequest:(PowensConnectAccessTokenRequest * _Nullable)accessTokenRequest completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectAccessToken *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doInitUserToken(accessTokenRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)renewAccessTokenRenewAccessTokenRequest:(PowensConnectRenewAccessTokenRequest * _Nullable)renewAccessTokenRequest completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectExchangeAccessToken *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("renewAccessToken(renewAccessTokenRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)revokeAccessTokenWithCompletionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("revokeAccessToken(completionHandler:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PowensConnectKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PowensConnectKotlinEnum<E> : PowensConnectBase <PowensConnectKotlinComparable>
@property (class, readonly, getter=companion) PowensConnectKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationApi.TypeGetAuthCode")))
@interface PowensConnectAuthenticationApiTypeGetAuthCode : PowensConnectKotlinEnum<PowensConnectAuthenticationApiTypeGetAuthCode *>
@property (class, readonly, getter=companion) PowensConnectAuthenticationApiTypeGetAuthCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectAuthenticationApiTypeGetAuthCode *requestaccess __attribute__((swift_name("requestaccess")));
@property (class, readonly) PowensConnectAuthenticationApiTypeGetAuthCode *singleaccess __attribute__((swift_name("singleaccess")));
@property (class, readonly) NSArray<PowensConnectAuthenticationApiTypeGetAuthCode *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectAuthenticationApiTypeGetAuthCode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationApi.TypeGetAuthCodeCompanion")))
@interface PowensConnectAuthenticationApiTypeGetAuthCodeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAuthenticationApiTypeGetAuthCodeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("BankAccountTypesApi")))
@interface PowensConnectBankAccountTypesApi : PowensConnectApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(PowensConnectKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBankAccountTypeTypeId:(uint64_t)typeId completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectBankAccountType *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBankAccountType(typeId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listBankAccountTypesWithCompletionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectBankAccountTypesList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listBankAccountTypes(completionHandler:)")));
@end

__attribute__((swift_name("BankAccountsApi")))
@interface PowensConnectBankAccountsApi : PowensConnectApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(PowensConnectKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserAccountAccountId:(uint64_t)accountId all:(PowensConnectBoolean * _Nullable)all expand:(NSSet<PowensConnectBankAccountExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectBankAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserAccount(accountId:all:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listUserAccountsAll:(PowensConnectBoolean * _Nullable)all expand:(NSSet<PowensConnectBankAccountExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectBankAccountsList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listUserAccounts(all:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserAccountAccountId:(uint64_t)accountId bankAccountUpdateRequest:(PowensConnectBankAccountUpdateRequest *)bankAccountUpdateRequest all:(PowensConnectBoolean * _Nullable)all expand:(NSSet<PowensConnectBankAccountExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectBankAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUserAccount(accountId:bankAccountUpdateRequest:all:expand:completionHandler:)")));
@end

__attribute__((swift_name("BankTransactionsApi")))
@interface PowensConnectBankTransactionsApi : PowensConnectApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(PowensConnectKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserTransactionTransactionId:(uint64_t)transactionId all:(PowensConnectBoolean * _Nullable)all expand:(NSArray<PowensConnectBankTransactionsApiExpandGetUserTransaction *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectTransaction *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserTransaction(transactionId:all:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listUserTransactionsExpand:(NSArray<PowensConnectBankTransactionsApiExpandListUserTransactions *> * _Nullable)expand all:(PowensConnectBoolean * _Nullable)all minDate:(PowensConnectCalendarBound * _Nullable)minDate maxDate:(PowensConnectCalendarBound * _Nullable)maxDate income:(PowensConnectBoolean * _Nullable)income deleted:(PowensConnectBoolean * _Nullable)deleted lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate wording:(NSString * _Nullable)wording value:(NSArray<PowensConnectTransactionValueFilter *> * _Nullable)value search:(NSString * _Nullable)search offset:(PowensConnectInt * _Nullable)offset limit:(PowensConnectInt * _Nullable)limit completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectTransactionsList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listUserTransactions(expand:all:minDate:maxDate:income:deleted:lastUpdate:wording:value:search:offset:limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserTransactionTransactionId:(uint64_t)transactionId transactionUpdateRequest:(PowensConnectTransactionUpdateRequest *)transactionUpdateRequest all:(PowensConnectBoolean * _Nullable)all expand:(NSArray<PowensConnectBankTransactionsApiExpandUpdateUserTransaction *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectTransaction *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUserTransaction(transactionId:transactionUpdateRequest:all:expand:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankTransactionsApi.ExpandGetUserTransaction")))
@interface PowensConnectBankTransactionsApiExpandGetUserTransaction : PowensConnectKotlinEnum<PowensConnectBankTransactionsApiExpandGetUserTransaction *>
@property (class, readonly, getter=companion) PowensConnectBankTransactionsApiExpandGetUserTransactionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectBankTransactionsApiExpandGetUserTransaction *account __attribute__((swift_name("account")));
@property (class, readonly) PowensConnectBankTransactionsApiExpandGetUserTransaction *documents __attribute__((swift_name("documents")));
@property (class, readonly) NSArray<PowensConnectBankTransactionsApiExpandGetUserTransaction *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectBankTransactionsApiExpandGetUserTransaction *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankTransactionsApi.ExpandGetUserTransactionCompanion")))
@interface PowensConnectBankTransactionsApiExpandGetUserTransactionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankTransactionsApiExpandGetUserTransactionCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankTransactionsApi.ExpandListUserTransactions")))
@interface PowensConnectBankTransactionsApiExpandListUserTransactions : PowensConnectKotlinEnum<PowensConnectBankTransactionsApiExpandListUserTransactions *>
@property (class, readonly, getter=companion) PowensConnectBankTransactionsApiExpandListUserTransactionsCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectBankTransactionsApiExpandListUserTransactions *account __attribute__((swift_name("account")));
@property (class, readonly) PowensConnectBankTransactionsApiExpandListUserTransactions *documents __attribute__((swift_name("documents")));
@property (class, readonly) NSArray<PowensConnectBankTransactionsApiExpandListUserTransactions *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectBankTransactionsApiExpandListUserTransactions *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankTransactionsApi.ExpandListUserTransactionsCompanion")))
@interface PowensConnectBankTransactionsApiExpandListUserTransactionsCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankTransactionsApiExpandListUserTransactionsCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankTransactionsApi.ExpandUpdateUserTransaction")))
@interface PowensConnectBankTransactionsApiExpandUpdateUserTransaction : PowensConnectKotlinEnum<PowensConnectBankTransactionsApiExpandUpdateUserTransaction *>
@property (class, readonly, getter=companion) PowensConnectBankTransactionsApiExpandUpdateUserTransactionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectBankTransactionsApiExpandUpdateUserTransaction *account __attribute__((swift_name("account")));
@property (class, readonly) PowensConnectBankTransactionsApiExpandUpdateUserTransaction *documents __attribute__((swift_name("documents")));
@property (class, readonly) NSArray<PowensConnectBankTransactionsApiExpandUpdateUserTransaction *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectBankTransactionsApiExpandUpdateUserTransaction *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankTransactionsApi.ExpandUpdateUserTransactionCompanion")))
@interface PowensConnectBankTransactionsApiExpandUpdateUserTransactionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankTransactionsApiExpandUpdateUserTransactionCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("ConnectionsApi")))
@interface PowensConnectConnectionsApi : PowensConnectApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(PowensConnectKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createUserConnectionConnectionRequest:(NSDictionary<NSString *, NSString *> *)connectionRequest source:(NSString * _Nullable)source expand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnection *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createUserConnection(connectionRequest:source:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserConnectionConnectionId:(uint64_t)connectionId completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUserConnection(connectionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserConnectionConnectionId:(uint64_t)connectionId expand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnection *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserConnection(connectionId:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listUserConnectionsExpand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnectionsList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listUserConnections(expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openWebAuthClientId:(uint64_t)clientId token:(NSString *)token redirectUri:(NSString *)redirectUri idConnector:(PowensConnectULong * _Nullable)idConnector connectorUuid:(NSString * _Nullable)connectorUuid idConnection:(PowensConnectULong * _Nullable)idConnection source:(NSString * _Nullable)source state:(NSString * _Nullable)state completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("openWebAuth(clientId:token:redirectUri:idConnector:connectorUuid:idConnection:source:state:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateSyncUserConnectionConnectionId:(uint64_t)connectionId source:(NSString * _Nullable)source background:(PowensConnectBoolean * _Nullable)background expand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand connectionUpdateRequest:(NSDictionary<NSString *, NSString *> * _Nullable)connectionUpdateRequest completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnection *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateSyncUserConnection(connectionId:source:background:expand:connectionUpdateRequest:completionHandler:)")));
@end

__attribute__((swift_name("ConnectorsApi")))
@interface PowensConnectConnectorsApi : PowensConnectApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(PowensConnectKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)batchEnableConnectorsByIdConnectorIds:(NSSet<PowensConnectULong *> *)connectorIds expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnectorsList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("batchEnableConnectorsById(connectorIds:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBankConnectorId:(uint64_t)connectorId expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnector *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBank(connectorId:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConnectorConnectorId:(uint64_t)connectorId expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnector *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConnector(connectorId:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConnectorByUuidConnectorUuid:(NSString *)connectorUuid expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnector *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConnectorByUuid(connectorUuid:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProviderConnectorId:(uint64_t)connectorId expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnector *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProvider(connectorId:expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listBanksExpand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectBanksList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listBanks(expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listConnectorsExpand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnectorsList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listConnectors(expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listProvidersExpand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectProvidersList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listProviders(expand:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateConnectorsRequestBody:(NSDictionary<NSString *, PowensConnectConnectorPatch *> *)requestBody expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand completionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectConnectorsList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateConnectors(requestBody:expand:completionHandler:)")));
@end

__attribute__((swift_name("UsersApi")))
@interface PowensConnectUsersApi : PowensConnectApiClient
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClient:(PowensConnectKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(baseUrl:httpClient:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonSerializer:(PowensConnectKotlinx_serialization_jsonJson *)jsonSerializer __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonSerializer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl __attribute__((swift_name("init(baseUrl:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithBaseUrl:(NSString *)baseUrl httpClientEngine:(id<PowensConnectKtor_client_coreHttpClientEngine> _Nullable)httpClientEngine httpClientConfig:(void (^ _Nullable)(PowensConnectKtor_client_coreHttpClientConfig<id> *))httpClientConfig jsonBlock:(PowensConnectKotlinx_serialization_jsonJson *)jsonBlock __attribute__((swift_name("init(baseUrl:httpClientEngine:httpClientConfig:jsonBlock:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserWithCompletionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserWithCompletionHandler:(void (^)(PowensConnectHttpResponse<PowensConnectUser *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUser(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiClient.Companion")))
@interface PowensConnectApiClientCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectApiClientCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@property (readonly) PowensConnectKotlinx_serialization_jsonJson *JSON_DEFAULT __attribute__((swift_name("JSON_DEFAULT")));
@property (readonly) NSArray<NSString *> *UNSAFE_HEADERS __attribute__((swift_name("UNSAFE_HEADERS")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/powens/sdk/infrastructure/Base64ByteArray.Companion))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64ByteArray")))
@interface PowensConnectBase64ByteArray : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectBase64ByteArrayCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectKotlinByteArray *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(PowensConnectKotlinByteArray *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PowensConnectKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PowensConnectKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PowensConnectKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PowensConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PowensConnectKotlinx_serialization_coreKSerializer <PowensConnectKotlinx_serialization_coreSerializationStrategy, PowensConnectKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64ByteArray.Companion")))
@interface PowensConnectBase64ByteArrayCompanion : PowensConnectBase <PowensConnectKotlinx_serialization_coreKSerializer>
@property (class, readonly, getter=shared) PowensConnectBase64ByteArrayCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectBase64ByteArray *)deserializeDecoder:(id<PowensConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PowensConnectKotlinx_serialization_coreEncoder>)encoder value:(PowensConnectBase64ByteArray *)value __attribute__((swift_name("serialize(encoder:value:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("BodyProvider")))
@protocol PowensConnectBodyProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(PowensConnectKtor_client_coreHttpResponse *)response completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(PowensConnectKtor_client_coreHttpResponse *)response type:(PowensConnectKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end

__attribute__((swift_name("Expand")))
@interface PowensConnectExpand : PowensConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("HttpResponse")))
@interface PowensConnectHttpResponse<T> : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectHttpResponseCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) id<PowensConnectBodyProvider> provider __attribute__((swift_name("provider")));
@property (readonly) PowensConnectKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
- (instancetype)initWithResponse:(PowensConnectKtor_client_coreHttpResponse *)response provider:(id<PowensConnectBodyProvider>)provider __attribute__((swift_name("init(response:provider:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyWithCompletionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyType:(PowensConnectKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(type:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpResponseCompanion")))
@interface PowensConnectHttpResponseCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectHttpResponseCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdsAsStringSerializer")))
@interface PowensConnectIdsAsStringSerializer : PowensConnectBase <PowensConnectKotlinx_serialization_coreKSerializer>
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<PowensConnectLong *> *)deserializeDecoder:(id<PowensConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PowensConnectKotlinx_serialization_coreEncoder>)encoder value:(NSArray<PowensConnectLong *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MappedBodyProvider")))
@interface PowensConnectMappedBodyProvider<S, T> : PowensConnectBase <PowensConnectBodyProvider>
- (instancetype)initWithProvider:(id<PowensConnectBodyProvider>)provider block:(T (^)(S))block __attribute__((swift_name("init(provider:block:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(PowensConnectKtor_client_coreHttpResponse *)response completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(PowensConnectKtor_client_coreHttpResponse *)response type:(PowensConnectKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/powens/sdk/infrastructure/OctetByteArray.Companion))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OctetByteArray")))
@interface PowensConnectOctetByteArray : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectOctetByteArrayCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectKotlinByteArray *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(PowensConnectKotlinByteArray *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OctetByteArray.Companion")))
@interface PowensConnectOctetByteArrayCompanion : PowensConnectBase <PowensConnectKotlinx_serialization_coreKSerializer>
@property (class, readonly, getter=shared) PowensConnectOctetByteArrayCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectOctetByteArray *)deserializeDecoder:(id<PowensConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PowensConnectKotlinx_serialization_coreEncoder>)encoder value:(PowensConnectOctetByteArray *)value __attribute__((swift_name("serialize(encoder:value:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Parcelable")))
@protocol PowensConnectParcelable
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartConfig")))
@interface PowensConnectPartConfig<T> : PowensConnectBase
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) PowensConnectMutableDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
- (instancetype)initWithHeaders:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers body:(T _Nullable)body __attribute__((swift_name("init(headers:body:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectPartConfig<T> *)doCopyHeaders:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers body:(T _Nullable)body __attribute__((swift_name("doCopy(headers:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestConfig")))
@interface PowensConnectRequestConfig<T> : PowensConnectBase
@property (readonly) T _Nullable body __attribute__((swift_name("body")));
@property (readonly) PowensConnectMutableDictionary<NSString *, NSString *> *headers __attribute__((swift_name("headers")));
@property (readonly) PowensConnectRequestMethod *method __attribute__((swift_name("method")));
@property (readonly) PowensConnectMutableDictionary<NSString *, id> *params __attribute__((swift_name("params")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *query __attribute__((swift_name("query")));
@property (readonly) BOOL requiresAuthentication __attribute__((swift_name("requiresAuthentication")));
- (instancetype)initWithMethod:(PowensConnectRequestMethod *)method path:(NSString *)path headers:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers params:(PowensConnectMutableDictionary<NSString *, id> *)params query:(PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *)query requiresAuthentication:(BOOL)requiresAuthentication body:(T _Nullable)body __attribute__((swift_name("init(method:path:headers:params:query:requiresAuthentication:body:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectRequestConfig<T> *)doCopyMethod:(PowensConnectRequestMethod *)method path:(NSString *)path headers:(PowensConnectMutableDictionary<NSString *, NSString *> *)headers params:(PowensConnectMutableDictionary<NSString *, id> *)params query:(PowensConnectMutableDictionary<NSString *, NSArray<NSString *> *> *)query requiresAuthentication:(BOOL)requiresAuthentication body:(T _Nullable)body __attribute__((swift_name("doCopy(method:path:headers:params:query:requiresAuthentication:body:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestMethod")))
@interface PowensConnectRequestMethod : PowensConnectKotlinEnum<PowensConnectRequestMethod *>
@property (class, readonly) PowensConnectRequestMethod *get __attribute__((swift_name("get")));
@property (class, readonly) PowensConnectRequestMethod *delete_ __attribute__((swift_name("delete_")));
@property (class, readonly) PowensConnectRequestMethod *head __attribute__((swift_name("head")));
@property (class, readonly) PowensConnectRequestMethod *options __attribute__((swift_name("options")));
@property (class, readonly) PowensConnectRequestMethod *patch __attribute__((swift_name("patch")));
@property (class, readonly) PowensConnectRequestMethod *post __attribute__((swift_name("post")));
@property (class, readonly) PowensConnectRequestMethod *put __attribute__((swift_name("put")));
@property (class, readonly) NSArray<PowensConnectRequestMethod *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectRequestMethod *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringSerializer")))
@interface PowensConnectStringSerializer : PowensConnectBase <PowensConnectKotlinx_serialization_coreKSerializer>
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)deserializeDecoder:(id<PowensConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PowensConnectKotlinx_serialization_coreEncoder>)encoder value:(NSString *)value __attribute__((swift_name("serialize(encoder:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TypedBodyProvider")))
@interface PowensConnectTypedBodyProvider<T> : PowensConnectBase <PowensConnectBodyProvider>
- (instancetype)initWithType:(PowensConnectKtor_utilsTypeInfo *)type __attribute__((swift_name("init(type:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyResponse:(PowensConnectKtor_client_coreHttpResponse *)response completionHandler:(void (^)(T _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)typedBodyResponse:(PowensConnectKtor_client_coreHttpResponse *)response type:(PowensConnectKtor_utilsTypeInfo *)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("typedBody(response:type:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessToken")))
@interface PowensConnectAccessToken : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectAccessTokenCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *authToken __attribute__((swift_name("authToken")));
@property (readonly) PowensConnectInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));
@property (readonly) PowensConnectAccessTokenType *type __attribute__((swift_name("type")));
@property (readonly) uint64_t userId __attribute__((swift_name("userId")));
- (instancetype)initWithAuthToken:(NSString *)authToken type:(PowensConnectAccessTokenType *)type userId:(uint64_t)userId expiresIn:(PowensConnectInt * _Nullable)expiresIn __attribute__((swift_name("init(authToken:type:userId:expiresIn:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectAccessToken *)doCopyAuthToken:(NSString *)authToken type:(PowensConnectAccessTokenType *)type userId:(uint64_t)userId expiresIn:(PowensConnectInt * _Nullable)expiresIn __attribute__((swift_name("doCopy(authToken:type:userId:expiresIn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="auth_token")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_in")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_user")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessToken.Companion")))
@interface PowensConnectAccessTokenCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAccessTokenCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessTokenRequest")))
@interface PowensConnectAccessTokenRequest : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectAccessTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
- (instancetype)initWithClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret __attribute__((swift_name("init(clientId:clientSecret:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectAccessTokenRequest *)doCopyClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret __attribute__((swift_name("doCopy(clientId:clientSecret:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_id")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_secret")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessTokenRequest.Companion")))
@interface PowensConnectAccessTokenRequestCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAccessTokenRequestCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessTokenType")))
@interface PowensConnectAccessTokenType : PowensConnectKotlinEnum<PowensConnectAccessTokenType *>
@property (class, readonly, getter=companion) PowensConnectAccessTokenTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectAccessTokenType *permanent __attribute__((swift_name("permanent")));
@property (class, readonly) PowensConnectAccessTokenType *temporary __attribute__((swift_name("temporary")));
@property (class, readonly) NSArray<PowensConnectAccessTokenType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectAccessTokenType *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessTokenType.Companion")))
@interface PowensConnectAccessTokenTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAccessTokenTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectAccessTokenType * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountSchemeName")))
@interface PowensConnectAccountSchemeName : PowensConnectKotlinEnum<PowensConnectAccountSchemeName *>
@property (class, readonly, getter=companion) PowensConnectAccountSchemeNameCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectAccountSchemeName *iban __attribute__((swift_name("iban")));
@property (class, readonly) PowensConnectAccountSchemeName *bban __attribute__((swift_name("bban")));
@property (class, readonly) PowensConnectAccountSchemeName *sortcodeaccountnumber __attribute__((swift_name("sortcodeaccountnumber")));
@property (class, readonly) NSArray<PowensConnectAccountSchemeName *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectAccountSchemeName *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountSchemeName.Companion")))
@interface PowensConnectAccountSchemeNameCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAccountSchemeNameCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectAccountSchemeName * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("AdditionalPropertiesRequest")))
@interface PowensConnectAdditionalPropertiesRequest : NSObject
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthCode")))
@interface PowensConnectAuthCode : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectAuthCodeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectAuthCodeAccess *access __attribute__((swift_name("access")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) PowensConnectInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));
@property (readonly) PowensConnectAuthCodeType *type __attribute__((swift_name("type")));
- (instancetype)initWithCode:(NSString *)code type:(PowensConnectAuthCodeType *)type access:(PowensConnectAuthCodeAccess *)access expiresIn:(PowensConnectInt * _Nullable)expiresIn __attribute__((swift_name("init(code:type:access:expiresIn:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectAuthCode *)doCopyCode:(NSString *)code type:(PowensConnectAuthCodeType *)type access:(PowensConnectAuthCodeAccess *)access expiresIn:(PowensConnectInt * _Nullable)expiresIn __attribute__((swift_name("doCopy(code:type:access:expiresIn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_in")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthCode.Companion")))
@interface PowensConnectAuthCodeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAuthCodeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthCodeAccess")))
@interface PowensConnectAuthCodeAccess : PowensConnectKotlinEnum<PowensConnectAuthCodeAccess *>
@property (class, readonly, getter=companion) PowensConnectAuthCodeAccessCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectAuthCodeAccess *single __attribute__((swift_name("single")));
@property (class, readonly) PowensConnectAuthCodeAccess *standard __attribute__((swift_name("standard")));
@property (class, readonly) NSArray<PowensConnectAuthCodeAccess *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectAuthCodeAccess *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthCodeAccess.Companion")))
@interface PowensConnectAuthCodeAccessCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAuthCodeAccessCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectAuthCodeAccess * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthCodeType")))
@interface PowensConnectAuthCodeType : PowensConnectKotlinEnum<PowensConnectAuthCodeType *>
@property (class, readonly, getter=companion) PowensConnectAuthCodeTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectAuthCodeType *temporary __attribute__((swift_name("temporary")));
@property (class, readonly) NSArray<PowensConnectAuthCodeType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectAuthCodeType *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthCodeType.Companion")))
@interface PowensConnectAuthCodeTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAuthCodeTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectAuthCodeType * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthMechanism")))
@interface PowensConnectAuthMechanism : PowensConnectKotlinEnum<PowensConnectAuthMechanism *>
@property (class, readonly, getter=companion) PowensConnectAuthMechanismCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectAuthMechanism *credentials __attribute__((swift_name("credentials")));
@property (class, readonly) PowensConnectAuthMechanism *webauth __attribute__((swift_name("webauth")));
@property (class, readonly) NSArray<PowensConnectAuthMechanism *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectAuthMechanism *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthMechanism.Companion")))
@interface PowensConnectAuthMechanismCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectAuthMechanismCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectAuthMechanism * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccount")))
@interface PowensConnectBankAccount : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectBankAccountCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable balance __attribute__((swift_name("balance")));
@property (readonly) BOOL bookmarked __attribute__((swift_name("bookmarked")));
@property (readonly) NSString * _Nullable coming __attribute__((swift_name("coming")));
@property (readonly) PowensConnectConnection * _Nullable connection __attribute__((swift_name("connection")));
@property (readonly) uint64_t connectionId __attribute__((swift_name("connectionId")));
@property (readonly) PowensConnectCurrency * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable deleted __attribute__((swift_name("deleted")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable disabled __attribute__((swift_name("disabled")));
@property (readonly) BOOL display __attribute__((swift_name("display")));
@property (readonly) NSString * _Nullable iban __attribute__((swift_name("iban")));
@property (readonly) uint64_t id __attribute__((swift_name("id")));
@property (readonly) uint64_t idSource __attribute__((swift_name("idSource")));
@property (readonly) uint64_t idType __attribute__((swift_name("idType")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) PowensConnectLoan * _Nullable loan __attribute__((swift_name("loan")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable number __attribute__((swift_name("number")));
@property (readonly) NSString *originalName __attribute__((swift_name("originalName")));
@property (readonly) PowensConnectULong * _Nullable parentId __attribute__((swift_name("parentId")));
@property (readonly) PowensConnectBankAccountTypeName *type __attribute__((swift_name("type")));
@property (readonly) PowensConnectBankAccountUsage *usage __attribute__((swift_name("usage")));
@property (readonly) uint64_t userId __attribute__((swift_name("userId")));
- (instancetype)initWithId:(uint64_t)id connectionId:(uint64_t)connectionId userId:(uint64_t)userId idSource:(uint64_t)idSource display:(BOOL)display name:(NSString *)name bookmarked:(BOOL)bookmarked usage:(PowensConnectBankAccountUsage *)usage originalName:(NSString *)originalName type:(PowensConnectBankAccountTypeName *)type idType:(uint64_t)idType parentId:(PowensConnectULong * _Nullable)parentId balance:(NSString * _Nullable)balance coming:(NSString * _Nullable)coming currency:(PowensConnectCurrency * _Nullable)currency lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate deleted:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)deleted disabled:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)disabled number:(NSString * _Nullable)number iban:(NSString * _Nullable)iban loan:(PowensConnectLoan * _Nullable)loan connection:(PowensConnectConnection * _Nullable)connection __attribute__((swift_name("init(id:connectionId:userId:idSource:display:name:bookmarked:usage:originalName:type:idType:parentId:balance:coming:currency:lastUpdate:deleted:disabled:number:iban:loan:connection:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectBankAccount *)doCopyId:(uint64_t)id connectionId:(uint64_t)connectionId userId:(uint64_t)userId idSource:(uint64_t)idSource display:(BOOL)display name:(NSString *)name bookmarked:(BOOL)bookmarked usage:(PowensConnectBankAccountUsage *)usage originalName:(NSString *)originalName type:(PowensConnectBankAccountTypeName *)type idType:(uint64_t)idType parentId:(PowensConnectULong * _Nullable)parentId balance:(NSString * _Nullable)balance coming:(NSString * _Nullable)coming currency:(PowensConnectCurrency * _Nullable)currency lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate deleted:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)deleted disabled:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)disabled number:(NSString * _Nullable)number iban:(NSString * _Nullable)iban loan:(PowensConnectLoan * _Nullable)loan connection:(PowensConnectConnection * _Nullable)connection __attribute__((swift_name("doCopy(id:connectionId:userId:idSource:display:name:bookmarked:usage:originalName:type:idType:parentId:balance:coming:currency:lastUpdate:deleted:disabled:number:iban:loan:connection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balance")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarked")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="coming")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connection")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_connection")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="currency")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="disabled")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="iban")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_source")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_type")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_update")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="loan")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="number")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_parent")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="usage")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_user")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccount.Companion")))
@interface PowensConnectBankAccountCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountExpand")))
@interface PowensConnectBankAccountExpand : PowensConnectExpand
@property (class, readonly, getter=companion) PowensConnectBankAccountExpandCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectConnectionExpand * _Nullable connection __attribute__((swift_name("connection")));
- (instancetype)initWithConnection:(PowensConnectConnectionExpand * _Nullable)connection __attribute__((swift_name("init(connection:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PowensConnectBankAccountExpand *)doCopyConnection:(PowensConnectConnectionExpand * _Nullable)connection __attribute__((swift_name("doCopy(connection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountExpand.Companion")))
@interface PowensConnectBankAccountExpandCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountExpandCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountExpandField")))
@interface PowensConnectBankAccountExpandField : PowensConnectKotlinEnum<PowensConnectBankAccountExpandField *>
@property (class, readonly, getter=companion) PowensConnectBankAccountExpandFieldCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectBankAccountExpandField *connection __attribute__((swift_name("connection")));
@property (class, readonly) NSArray<PowensConnectBankAccountExpandField *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectBankAccountExpandField *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountExpandField.Companion")))
@interface PowensConnectBankAccountExpandFieldCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountExpandFieldCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectBankAccountExpandField * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountType")))
@interface PowensConnectBankAccountType : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectBankAccountTypeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *displayNamePlural __attribute__((swift_name("displayNamePlural")));
@property (readonly) PowensConnectCalendarBound *id __attribute__((swift_name("id")));
@property (readonly) BOOL isInvest __attribute__((swift_name("isInvest")));
@property (readonly) PowensConnectBankAccountTypeName *name __attribute__((swift_name("name")));
@property (readonly) PowensConnectULong * _Nullable parentId __attribute__((swift_name("parentId")));
- (instancetype)initWithId:(PowensConnectCalendarBound *)id name:(PowensConnectBankAccountTypeName *)name isInvest:(BOOL)isInvest displayName:(NSString *)displayName displayNamePlural:(NSString *)displayNamePlural parentId:(PowensConnectULong * _Nullable)parentId __attribute__((swift_name("init(id:name:isInvest:displayName:displayNamePlural:parentId:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectBankAccountType *)doCopyId:(PowensConnectCalendarBound *)id name:(PowensConnectBankAccountTypeName *)name isInvest:(BOOL)isInvest displayName:(NSString *)displayName displayNamePlural:(NSString *)displayNamePlural parentId:(PowensConnectULong * _Nullable)parentId __attribute__((swift_name("doCopy(id:name:isInvest:displayName:displayNamePlural:parentId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name_p")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_invest")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_parent")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountType.Companion")))
@interface PowensConnectBankAccountTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountTypeName")))
@interface PowensConnectBankAccountTypeName : PowensConnectKotlinEnum<PowensConnectBankAccountTypeName *>
@property (class, readonly, getter=companion) PowensConnectBankAccountTypeNameCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectBankAccountTypeName *article83 __attribute__((swift_name("article83")));
@property (class, readonly) PowensConnectBankAccountTypeName *capitalization __attribute__((swift_name("capitalization")));
@property (class, readonly) PowensConnectBankAccountTypeName *card __attribute__((swift_name("card")));
@property (class, readonly) PowensConnectBankAccountTypeName *checking __attribute__((swift_name("checking")));
@property (class, readonly) PowensConnectBankAccountTypeName *crowdlending __attribute__((swift_name("crowdlending")));
@property (class, readonly) PowensConnectBankAccountTypeName *deposit __attribute__((swift_name("deposit")));
@property (class, readonly) PowensConnectBankAccountTypeName *joint __attribute__((swift_name("joint")));
@property (class, readonly) PowensConnectBankAccountTypeName *lifeinsurance __attribute__((swift_name("lifeinsurance")));
@property (class, readonly) PowensConnectBankAccountTypeName *loan __attribute__((swift_name("loan")));
@property (class, readonly) PowensConnectBankAccountTypeName *madelin __attribute__((swift_name("madelin")));
@property (class, readonly) PowensConnectBankAccountTypeName *market __attribute__((swift_name("market")));
@property (class, readonly) PowensConnectBankAccountTypeName *pea __attribute__((swift_name("pea")));
@property (class, readonly) PowensConnectBankAccountTypeName *pee __attribute__((swift_name("pee")));
@property (class, readonly) PowensConnectBankAccountTypeName *per __attribute__((swift_name("per")));
@property (class, readonly) PowensConnectBankAccountTypeName *perco __attribute__((swift_name("perco")));
@property (class, readonly) PowensConnectBankAccountTypeName *perp __attribute__((swift_name("perp")));
@property (class, readonly) PowensConnectBankAccountTypeName *realestate __attribute__((swift_name("realestate")));
@property (class, readonly) PowensConnectBankAccountTypeName *rsp __attribute__((swift_name("rsp")));
@property (class, readonly) PowensConnectBankAccountTypeName *savings __attribute__((swift_name("savings")));
@property (class, readonly) PowensConnectBankAccountTypeName *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NSArray<PowensConnectBankAccountTypeName *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectBankAccountTypeName *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountTypeName.Companion")))
@interface PowensConnectBankAccountTypeNameCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountTypeNameCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectBankAccountTypeName * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountTypesList")))
@interface PowensConnectBankAccountTypesList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectBankAccountTypesListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<PowensConnectBankAccountType *> *accountTypes __attribute__((swift_name("accountTypes")));
- (instancetype)initWithAccountTypes:(NSArray<PowensConnectBankAccountType *> *)accountTypes __attribute__((swift_name("init(accountTypes:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectBankAccountTypesList *)doCopyAccountTypes:(NSArray<PowensConnectBankAccountType *> *)accountTypes __attribute__((swift_name("doCopy(accountTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounttypes")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountTypesList.Companion")))
@interface PowensConnectBankAccountTypesListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountTypesListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountUpdateRequest")))
@interface PowensConnectBankAccountUpdateRequest : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectBankAccountUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectBoolean * _Nullable bookmarked __attribute__((swift_name("bookmarked")));
@property (readonly) PowensConnectBoolean * _Nullable disabled __attribute__((swift_name("disabled")));
@property (readonly) PowensConnectBoolean * _Nullable display __attribute__((swift_name("display")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) PowensConnectBankAccountUsage * _Nullable usage __attribute__((swift_name("usage")));
- (instancetype)initWithDisplay:(PowensConnectBoolean * _Nullable)display name:(NSString * _Nullable)name disabled:(PowensConnectBoolean * _Nullable)disabled bookmarked:(PowensConnectBoolean * _Nullable)bookmarked usage:(PowensConnectBankAccountUsage * _Nullable)usage __attribute__((swift_name("init(display:name:disabled:bookmarked:usage:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectBankAccountUpdateRequest *)doCopyDisplay:(PowensConnectBoolean * _Nullable)display name:(NSString * _Nullable)name disabled:(PowensConnectBoolean * _Nullable)disabled bookmarked:(PowensConnectBoolean * _Nullable)bookmarked usage:(PowensConnectBankAccountUsage * _Nullable)usage __attribute__((swift_name("doCopy(display:name:disabled:bookmarked:usage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarked")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="disabled")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="usage")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountUpdateRequest.Companion")))
@interface PowensConnectBankAccountUpdateRequestCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountUsage")))
@interface PowensConnectBankAccountUsage : PowensConnectKotlinEnum<PowensConnectBankAccountUsage *>
@property (class, readonly, getter=companion) PowensConnectBankAccountUsageCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectBankAccountUsage *privatepersonal __attribute__((swift_name("privatepersonal")));
@property (class, readonly) PowensConnectBankAccountUsage *professional __attribute__((swift_name("professional")));
@property (class, readonly) PowensConnectBankAccountUsage *community __attribute__((swift_name("community")));
@property (class, readonly) NSArray<PowensConnectBankAccountUsage *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectBankAccountUsage *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountUsage.Companion")))
@interface PowensConnectBankAccountUsageCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountUsageCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectBankAccountUsage * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountsList")))
@interface PowensConnectBankAccountsList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectBankAccountsListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<PowensConnectBankAccount *> *accounts __attribute__((swift_name("accounts")));
@property (readonly) NSDictionary<NSString *, NSString *> *balances __attribute__((swift_name("balances")));
- (instancetype)initWithAccounts:(NSArray<PowensConnectBankAccount *> *)accounts balances:(NSDictionary<NSString *, NSString *> *)balances __attribute__((swift_name("init(accounts:balances:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectBankAccountsList *)doCopyAccounts:(NSArray<PowensConnectBankAccount *> *)accounts balances:(NSDictionary<NSString *, NSString *> *)balances __attribute__((swift_name("doCopy(accounts:balances:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="balances")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BankAccountsList.Companion")))
@interface PowensConnectBankAccountsListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBankAccountsListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BanksList")))
@interface PowensConnectBanksList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectBanksListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<PowensConnectConnector *> *banks __attribute__((swift_name("banks")));
- (instancetype)initWithBanks:(NSArray<PowensConnectConnector *> *)banks __attribute__((swift_name("init(banks:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This schema is deprecated.")));
- (PowensConnectBanksList *)doCopyBanks:(NSArray<PowensConnectConnector *> *)banks __attribute__((swift_name("doCopy(banks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="banks")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BanksList.Companion")))
@interface PowensConnectBanksListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectBanksListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/powens/sdk/model/CalendarBound.Serializer))
*/
__attribute__((swift_name("CalendarBound")))
@interface PowensConnectCalendarBound : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectCalendarBoundCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalendarBound.Companion")))
@interface PowensConnectCalendarBoundCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectCalendarBoundCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalendarBound.Date")))
@interface PowensConnectCalendarBoundDate : PowensConnectCalendarBound
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
- (instancetype)initWithDate:(PowensConnectKotlinx_datetimeLocalDate *)date __attribute__((swift_name("init(date:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectCalendarBoundDate *)doCopyDate:(PowensConnectKotlinx_datetimeLocalDate *)date __attribute__((swift_name("doCopy(date:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalendarBound.Serializer")))
@interface PowensConnectCalendarBoundSerializer : PowensConnectBase <PowensConnectKotlinx_serialization_coreKSerializer>
@property (class, readonly, getter=shared) PowensConnectCalendarBoundSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
- (PowensConnectCalendarBound *)deserializeDecoder:(id<PowensConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PowensConnectKotlinx_serialization_coreEncoder>)encoder value:(PowensConnectCalendarBound *)value __attribute__((swift_name("serialize(encoder:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalendarBound.Year")))
@interface PowensConnectCalendarBoundYear : PowensConnectCalendarBound
@property (readonly) uint32_t year __attribute__((swift_name("year")));
- (instancetype)initWithYear:(uint32_t)year __attribute__((swift_name("init(year:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectCalendarBoundYear *)doCopyYear:(uint32_t)year __attribute__((swift_name("doCopy(year:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalendarBound.YearMonth")))
@interface PowensConnectCalendarBoundYearMonth : PowensConnectCalendarBound
@property (readonly) PowensConnectKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) uint32_t year __attribute__((swift_name("year")));
- (instancetype)initWithYear:(uint32_t)year month:(PowensConnectKotlinx_datetimeMonth *)month __attribute__((swift_name("init(year:month:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectCalendarBoundYearMonth *)doCopyYear:(uint32_t)year month:(PowensConnectKotlinx_datetimeMonth *)month __attribute__((swift_name("doCopy(year:month:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Connection")))
@interface PowensConnectConnection : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<PowensConnectBankAccount *> * _Nullable accounts __attribute__((swift_name("accounts")));
@property (readonly) BOOL active __attribute__((swift_name("active")));
@property (readonly) NSArray<PowensConnectBankAccount *> * _Nullable allAccounts __attribute__((swift_name("allAccounts")));
@property (readonly) PowensConnectULong * _Nullable bankId __attribute__((swift_name("bankId")));
@property (readonly) PowensConnectConnector * _Nullable connector __attribute__((swift_name("connector")));
@property (readonly) uint64_t connectorId __attribute__((swift_name("connectorId")));
@property (readonly) NSString * _Nullable connectorUuid __attribute__((swift_name("connectorUuid")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime *created __attribute__((swift_name("created")));
@property (readonly) PowensConnectConnectionState * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable expire __attribute__((swift_name("expire")));
@property (readonly) NSArray<PowensConnectCredentialsField *> * _Nullable fields __attribute__((swift_name("fields")));
@property (readonly) uint64_t id __attribute__((swift_name("id")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable lastPush __attribute__((swift_name("lastPush")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable nextTry __attribute__((swift_name("nextTry")));
@property (readonly) PowensConnectULong * _Nullable providerId __attribute__((swift_name("providerId")));
@property (readonly) NSArray<PowensConnectConnectionSource *> * _Nullable sources __attribute__((swift_name("sources")));
@property (readonly) PowensConnectConnectionState * _Nullable state __attribute__((swift_name("state")));
@property (readonly) PowensConnectULong * _Nullable userId __attribute__((swift_name("userId")));
- (instancetype)initWithId:(uint64_t)id connectorId:(uint64_t)connectorId created:(PowensConnectKotlinx_datetimeLocalDateTime *)created active:(BOOL)active userId:(PowensConnectULong * _Nullable)userId providerId:(PowensConnectULong * _Nullable)providerId bankId:(PowensConnectULong * _Nullable)bankId state:(PowensConnectConnectionState * _Nullable)state error:(PowensConnectConnectionState * _Nullable)error errorMessage:(NSString * _Nullable)errorMessage fields:(NSArray<PowensConnectCredentialsField *> * _Nullable)fields lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate lastPush:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastPush expire:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)expire connectorUuid:(NSString * _Nullable)connectorUuid nextTry:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)nextTry connector:(PowensConnectConnector * _Nullable)connector sources:(NSArray<PowensConnectConnectionSource *> * _Nullable)sources accounts:(NSArray<PowensConnectBankAccount *> * _Nullable)accounts allAccounts:(NSArray<PowensConnectBankAccount *> * _Nullable)allAccounts __attribute__((swift_name("init(id:connectorId:created:active:userId:providerId:bankId:state:error:errorMessage:fields:lastUpdate:lastPush:expire:connectorUuid:nextTry:connector:sources:accounts:allAccounts:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnection *)doCopyId:(uint64_t)id connectorId:(uint64_t)connectorId created:(PowensConnectKotlinx_datetimeLocalDateTime *)created active:(BOOL)active userId:(PowensConnectULong * _Nullable)userId providerId:(PowensConnectULong * _Nullable)providerId bankId:(PowensConnectULong * _Nullable)bankId state:(PowensConnectConnectionState * _Nullable)state error:(PowensConnectConnectionState * _Nullable)error errorMessage:(NSString * _Nullable)errorMessage fields:(NSArray<PowensConnectCredentialsField *> * _Nullable)fields lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate lastPush:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastPush expire:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)expire connectorUuid:(NSString * _Nullable)connectorUuid nextTry:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)nextTry connector:(PowensConnectConnector * _Nullable)connector sources:(NSArray<PowensConnectConnectionSource *> * _Nullable)sources accounts:(NSArray<PowensConnectBankAccount *> * _Nullable)accounts allAccounts:(NSArray<PowensConnectBankAccount *> * _Nullable)allAccounts __attribute__((swift_name("doCopy(id:connectorId:created:active:userId:providerId:bankId:state:error:errorMessage:fields:lastUpdate:lastPush:expire:connectorUuid:nextTry:connector:sources:accounts:allAccounts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="active")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="all_accounts")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_bank")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connector")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_connector")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connector_uuid")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error_message")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expire")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_push")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_update")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_try")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_provider")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sources")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_user")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Connection.Companion")))
@interface PowensConnectConnectionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectionCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionExpand")))
@interface PowensConnectConnectionExpand : PowensConnectExpand
@property (class, readonly, getter=companion) PowensConnectConnectionExpandCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectBankAccountExpand * _Nullable accounts __attribute__((swift_name("accounts")));
@property (readonly) PowensConnectBankAccountExpand * _Nullable allAccounts __attribute__((swift_name("allAccounts")));
@property (readonly) PowensConnectConnectorExpand * _Nullable connector __attribute__((swift_name("connector")));
@property (readonly) BOOL sources __attribute__((swift_name("sources")));
- (instancetype)initWithConnector:(PowensConnectConnectorExpand * _Nullable)connector sources:(BOOL)sources accounts:(PowensConnectBankAccountExpand * _Nullable)accounts allAccounts:(PowensConnectBankAccountExpand * _Nullable)allAccounts __attribute__((swift_name("init(connector:sources:accounts:allAccounts:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PowensConnectConnectionExpand *)doCopyConnector:(PowensConnectConnectorExpand * _Nullable)connector sources:(BOOL)sources accounts:(PowensConnectBankAccountExpand * _Nullable)accounts allAccounts:(PowensConnectBankAccountExpand * _Nullable)allAccounts __attribute__((swift_name("doCopy(connector:sources:accounts:allAccounts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="all_accounts")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionExpand.Companion")))
@interface PowensConnectConnectionExpandCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectionExpandCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionExpandField")))
@interface PowensConnectConnectionExpandField : PowensConnectKotlinEnum<PowensConnectConnectionExpandField *>
@property (class, readonly, getter=companion) PowensConnectConnectionExpandFieldCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectConnectionExpandField *connector __attribute__((swift_name("connector")));
@property (class, readonly) PowensConnectConnectionExpandField *sources __attribute__((swift_name("sources")));
@property (class, readonly) PowensConnectConnectionExpandField *accounts __attribute__((swift_name("accounts")));
@property (class, readonly) PowensConnectConnectionExpandField *allaccounts __attribute__((swift_name("allaccounts")));
@property (class, readonly) NSArray<PowensConnectConnectionExpandField *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectConnectionExpandField *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionExpandField.Companion")))
@interface PowensConnectConnectionExpandFieldCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectionExpandFieldCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectConnectionExpandField * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("ConnectionRequest")))
@interface PowensConnectConnectionRequest : NSObject
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionSource")))
@interface PowensConnectConnectionSource : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectionSourceCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable accessExpire __attribute__((swift_name("accessExpire")));
@property (readonly) uint64_t connectionId __attribute__((swift_name("connectionId")));
@property (readonly) uint64_t connectorSourceId __attribute__((swift_name("connectorSourceId")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime *created __attribute__((swift_name("created")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable disabled __attribute__((swift_name("disabled")));
@property (readonly) uint64_t id __attribute__((swift_name("id")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable nextTry __attribute__((swift_name("nextTry")));
@property (readonly) PowensConnectConnectionState * _Nullable state __attribute__((swift_name("state")));
- (instancetype)initWithId:(uint64_t)id connectionId:(uint64_t)connectionId connectorSourceId:(uint64_t)connectorSourceId name:(NSString *)name created:(PowensConnectKotlinx_datetimeLocalDateTime *)created state:(PowensConnectConnectionState * _Nullable)state lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate disabled:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)disabled nextTry:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)nextTry accessExpire:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)accessExpire __attribute__((swift_name("init(id:connectionId:connectorSourceId:name:created:state:lastUpdate:disabled:nextTry:accessExpire:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnectionSource *)doCopyId:(uint64_t)id connectionId:(uint64_t)connectionId connectorSourceId:(uint64_t)connectorSourceId name:(NSString *)name created:(PowensConnectKotlinx_datetimeLocalDateTime *)created state:(PowensConnectConnectionState * _Nullable)state lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate disabled:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)disabled nextTry:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)nextTry accessExpire:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)accessExpire __attribute__((swift_name("doCopy(id:connectionId:connectorSourceId:name:created:state:lastUpdate:disabled:nextTry:accessExpire:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_expire")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_connection")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_connector_source")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="disabled")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_update")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_try")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="state")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionSource.Companion")))
@interface PowensConnectConnectionSourceCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectionSourceCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionState")))
@interface PowensConnectConnectionState : PowensConnectKotlinEnum<PowensConnectConnectionState *>
@property (class, readonly, getter=companion) PowensConnectConnectionStateCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectConnectionState *scarequired __attribute__((swift_name("scarequired")));
@property (class, readonly) PowensConnectConnectionState *webauthrequired __attribute__((swift_name("webauthrequired")));
@property (class, readonly) PowensConnectConnectionState *additionalinformationneeded __attribute__((swift_name("additionalinformationneeded")));
@property (class, readonly) PowensConnectConnectionState *decoupled __attribute__((swift_name("decoupled")));
@property (class, readonly) PowensConnectConnectionState *validating __attribute__((swift_name("validating")));
@property (class, readonly) PowensConnectConnectionState *actionneeded __attribute__((swift_name("actionneeded")));
@property (class, readonly) PowensConnectConnectionState *passwordexpired __attribute__((swift_name("passwordexpired")));
@property (class, readonly) PowensConnectConnectionState *wrongpass __attribute__((swift_name("wrongpass")));
@property (class, readonly) PowensConnectConnectionState *ratelimiting __attribute__((swift_name("ratelimiting")));
@property (class, readonly) PowensConnectConnectionState *websiteunavailable __attribute__((swift_name("websiteunavailable")));
@property (class, readonly) PowensConnectConnectionState *bug __attribute__((swift_name("bug")));
@property (class, readonly) NSArray<PowensConnectConnectionState *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectConnectionState *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionState.Companion")))
@interface PowensConnectConnectionStateCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectionStateCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectConnectionState * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("ConnectionUpdateRequest")))
@interface PowensConnectConnectionUpdateRequest : NSObject
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsList")))
@interface PowensConnectConnectionsList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectionsListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<PowensConnectConnection *> *connections __attribute__((swift_name("connections")));
- (instancetype)initWithConnections:(NSArray<PowensConnectConnection *> *)connections __attribute__((swift_name("init(connections:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnectionsList *)doCopyConnections:(NSArray<PowensConnectConnection *> *)connections __attribute__((swift_name("doCopy(connections:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connections")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionsList.Companion")))
@interface PowensConnectConnectionsListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectionsListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Connector")))
@interface PowensConnectConnector : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectAuthMechanism *authMechanism __attribute__((swift_name("authMechanism")));
@property (readonly) BOOL beta __attribute__((swift_name("beta")));
@property (readonly) NSSet<PowensConnectConnectorCapability *> *capabilities __attribute__((swift_name("capabilities")));
@property (readonly) BOOL charged __attribute__((swift_name("charged")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) NSArray<PowensConnectConnectorCountry *> * _Nullable countries __attribute__((swift_name("countries")));
@property (readonly) NSArray<PowensConnectCredentialsField *> * _Nullable fields __attribute__((swift_name("fields")));
@property (readonly) PowensConnectBoolean * _Nullable hidden __attribute__((swift_name("hidden")));
@property (readonly) uint64_t id __attribute__((swift_name("id")));
@property (readonly) PowensConnectInt * _Nullable monthsToFetch __attribute__((swift_name("monthsToFetch")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) BOOL restricted __attribute__((swift_name("restricted")));
@property (readonly) NSString * _Nullable siret __attribute__((swift_name("siret")));
@property (readonly) NSString * _Nullable slug __attribute__((swift_name("slug")));
@property (readonly) NSArray<PowensConnectConnectorSource *> * _Nullable sources __attribute__((swift_name("sources")));
@property (readonly) PowensConnectFloat * _Nullable syncPeriodicity __attribute__((swift_name("syncPeriodicity")));
@property (readonly) PowensConnectAuthMechanism * _Nullable transferMechanism __attribute__((swift_name("transferMechanism")));
@property (readonly) NSArray<NSString *> * _Nullable urls __attribute__((swift_name("urls")));
@property (readonly) NSString *uuid __attribute__((swift_name("uuid")));
- (instancetype)initWithId:(uint64_t)id uuid:(NSString *)uuid name:(NSString *)name charged:(BOOL)charged beta:(BOOL)beta capabilities:(NSSet<PowensConnectConnectorCapability *> *)capabilities authMechanism:(PowensConnectAuthMechanism *)authMechanism restricted:(BOOL)restricted hidden:(PowensConnectBoolean * _Nullable)hidden code:(NSString * _Nullable)code color:(NSString * _Nullable)color slug:(NSString * _Nullable)slug urls:(NSArray<NSString *> * _Nullable)urls syncPeriodicity:(PowensConnectFloat * _Nullable)syncPeriodicity monthsToFetch:(PowensConnectInt * _Nullable)monthsToFetch transferMechanism:(PowensConnectAuthMechanism * _Nullable)transferMechanism siret:(NSString * _Nullable)siret sources:(NSArray<PowensConnectConnectorSource *> * _Nullable)sources fields:(NSArray<PowensConnectCredentialsField *> * _Nullable)fields countries:(NSArray<PowensConnectConnectorCountry *> * _Nullable)countries __attribute__((swift_name("init(id:uuid:name:charged:beta:capabilities:authMechanism:restricted:hidden:code:color:slug:urls:syncPeriodicity:monthsToFetch:transferMechanism:siret:sources:fields:countries:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnector *)doCopyId:(uint64_t)id uuid:(NSString *)uuid name:(NSString *)name charged:(BOOL)charged beta:(BOOL)beta capabilities:(NSSet<PowensConnectConnectorCapability *> *)capabilities authMechanism:(PowensConnectAuthMechanism *)authMechanism restricted:(BOOL)restricted hidden:(PowensConnectBoolean * _Nullable)hidden code:(NSString * _Nullable)code color:(NSString * _Nullable)color slug:(NSString * _Nullable)slug urls:(NSArray<NSString *> * _Nullable)urls syncPeriodicity:(PowensConnectFloat * _Nullable)syncPeriodicity monthsToFetch:(PowensConnectInt * _Nullable)monthsToFetch transferMechanism:(PowensConnectAuthMechanism * _Nullable)transferMechanism siret:(NSString * _Nullable)siret sources:(NSArray<PowensConnectConnectorSource *> * _Nullable)sources fields:(NSArray<PowensConnectCredentialsField *> * _Nullable)fields countries:(NSArray<PowensConnectConnectorCountry *> * _Nullable)countries __attribute__((swift_name("doCopy(id:uuid:name:charged:beta:capabilities:authMechanism:restricted:hidden:code:color:slug:urls:syncPeriodicity:monthsToFetch:transferMechanism:siret:sources:fields:countries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="auth_mechanism")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="beta")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="capabilities")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="charged")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="color")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="countries")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hidden")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="months_to_fetch")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="restricted")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="siret")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slug")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sources")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sync_periodicity")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transfer_mechanism")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="urls")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uuid")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Connector.Companion")))
@interface PowensConnectConnectorCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorCapability")))
@interface PowensConnectConnectorCapability : PowensConnectKotlinEnum<PowensConnectConnectorCapability *>
@property (class, readonly, getter=companion) PowensConnectConnectorCapabilityCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectConnectorCapability *bank __attribute__((swift_name("bank")));
@property (class, readonly) PowensConnectConnectorCapability *bankwealth __attribute__((swift_name("bankwealth")));
@property (class, readonly) PowensConnectConnectorCapability *transfer __attribute__((swift_name("transfer")));
@property (class, readonly) PowensConnectConnectorCapability *document __attribute__((swift_name("document")));
@property (class, readonly) PowensConnectConnectorCapability *profile __attribute__((swift_name("profile")));
@property (class, readonly) PowensConnectConnectorCapability *contact __attribute__((swift_name("contact")));
@property (class, readonly) NSArray<PowensConnectConnectorCapability *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectConnectorCapability *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorCapability.Companion")))
@interface PowensConnectConnectorCapabilityCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorCapabilityCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectConnectorCapability * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorCountry")))
@interface PowensConnectConnectorCountry : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectorCountryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnectorCountry *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorCountry.Companion")))
@interface PowensConnectConnectorCountryCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorCountryCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorExpand")))
@interface PowensConnectConnectorExpand : PowensConnectExpand
@property (class, readonly, getter=companion) PowensConnectConnectorExpandCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL countries __attribute__((swift_name("countries")));
@property (readonly) BOOL fields __attribute__((swift_name("fields")));
@property (readonly) BOOL sources __attribute__((swift_name("sources")));
- (instancetype)initWithFields:(BOOL)fields sources:(BOOL)sources countries:(BOOL)countries __attribute__((swift_name("init(fields:sources:countries:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (PowensConnectConnectorExpand *)doCopyFields:(BOOL)fields sources:(BOOL)sources countries:(BOOL)countries __attribute__((swift_name("doCopy(fields:sources:countries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorExpand.Companion")))
@interface PowensConnectConnectorExpandCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorExpandCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorExpandField")))
@interface PowensConnectConnectorExpandField : PowensConnectKotlinEnum<PowensConnectConnectorExpandField *>
@property (class, readonly, getter=companion) PowensConnectConnectorExpandFieldCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectConnectorExpandField *fields __attribute__((swift_name("fields")));
@property (class, readonly) PowensConnectConnectorExpandField *sources __attribute__((swift_name("sources")));
@property (class, readonly) PowensConnectConnectorExpandField *countries __attribute__((swift_name("countries")));
@property (class, readonly) NSArray<PowensConnectConnectorExpandField *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectConnectorExpandField *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorExpandField.Companion")))
@interface PowensConnectConnectorExpandFieldCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorExpandFieldCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectConnectorExpandField * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorPatch")))
@interface PowensConnectConnectorPatch : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectorPatchCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectBoolean * _Nullable hidden __attribute__((swift_name("hidden")));
- (instancetype)initWithHidden:(PowensConnectBoolean * _Nullable)hidden __attribute__((swift_name("init(hidden:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnectorPatch *)doCopyHidden:(PowensConnectBoolean * _Nullable)hidden __attribute__((swift_name("doCopy(hidden:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hidden")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorPatch.Companion")))
@interface PowensConnectConnectorPatchCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorPatchCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorSource")))
@interface PowensConnectConnectorSource : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectorSourceCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectAuthMechanism *authMechanism __attribute__((swift_name("authMechanism")));
@property (readonly) uint64_t connectorId __attribute__((swift_name("connectorId")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable disabled __attribute__((swift_name("disabled")));
@property (readonly) uint64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
- (instancetype)initWithId:(uint64_t)id connectorId:(uint64_t)connectorId name:(NSString *)name authMechanism:(PowensConnectAuthMechanism *)authMechanism priority:(int32_t)priority disabled:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)disabled __attribute__((swift_name("init(id:connectorId:name:authMechanism:priority:disabled:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnectorSource *)doCopyId:(uint64_t)id connectorId:(uint64_t)connectorId name:(NSString *)name authMechanism:(PowensConnectAuthMechanism *)authMechanism priority:(int32_t)priority disabled:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)disabled __attribute__((swift_name("doCopy(id:connectorId:name:authMechanism:priority:disabled:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="auth_mechanism")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_connector")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="disabled")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="priority")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorSource.Companion")))
@interface PowensConnectConnectorSourceCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorSourceCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorsList")))
@interface PowensConnectConnectorsList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectConnectorsListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<PowensConnectConnector *> *connectors __attribute__((swift_name("connectors")));
- (instancetype)initWithConnectors:(NSArray<PowensConnectConnector *> *)connectors __attribute__((swift_name("init(connectors:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectConnectorsList *)doCopyConnectors:(NSArray<PowensConnectConnector *> *)connectors __attribute__((swift_name("doCopy(connectors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connectors")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectorsList.Companion")))
@interface PowensConnectConnectorsListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectConnectorsListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsField")))
@interface PowensConnectCredentialsField : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectCredentialsFieldCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSSet<PowensConnectAuthMechanism *> *authMechanisms __attribute__((swift_name("authMechanisms")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<PowensConnectCredentialsFieldValue *> * _Nullable propertyValues __attribute__((swift_name("propertyValues")));
@property (readonly) NSString * _Nullable regex __attribute__((swift_name("regex")));
@property (readonly) BOOL required __attribute__((swift_name("required")));
@property (readonly) PowensConnectCredentialsFieldType *type __attribute__((swift_name("type")));
- (instancetype)initWithName:(NSString *)name type:(PowensConnectCredentialsFieldType *)type authMechanisms:(NSSet<PowensConnectAuthMechanism *> *)authMechanisms label:(NSString *)label required:(BOOL)required description:(NSString * _Nullable)description regex:(NSString * _Nullable)regex propertyValues:(NSArray<PowensConnectCredentialsFieldValue *> * _Nullable)propertyValues __attribute__((swift_name("init(name:type:authMechanisms:label:required:description:regex:propertyValues:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectCredentialsField *)doCopyName:(NSString *)name type:(PowensConnectCredentialsFieldType *)type authMechanisms:(NSSet<PowensConnectAuthMechanism *> *)authMechanisms label:(NSString *)label required:(BOOL)required description:(NSString * _Nullable)description regex:(NSString * _Nullable)regex propertyValues:(NSArray<PowensConnectCredentialsFieldValue *> * _Nullable)propertyValues __attribute__((swift_name("doCopy(name:type:authMechanisms:label:required:description:regex:propertyValues:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="auth_mechanisms")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="label")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="values")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="regex")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="required")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsField.Companion")))
@interface PowensConnectCredentialsFieldCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectCredentialsFieldCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsFieldType")))
@interface PowensConnectCredentialsFieldType : PowensConnectKotlinEnum<PowensConnectCredentialsFieldType *>
@property (class, readonly, getter=companion) PowensConnectCredentialsFieldTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectCredentialsFieldType *text __attribute__((swift_name("text")));
@property (class, readonly) PowensConnectCredentialsFieldType *list __attribute__((swift_name("list")));
@property (class, readonly) PowensConnectCredentialsFieldType *date __attribute__((swift_name("date")));
@property (class, readonly) PowensConnectCredentialsFieldType *number __attribute__((swift_name("number")));
@property (class, readonly) PowensConnectCredentialsFieldType *password __attribute__((swift_name("password")));
@property (class, readonly) NSArray<PowensConnectCredentialsFieldType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectCredentialsFieldType *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsFieldType.Companion")))
@interface PowensConnectCredentialsFieldTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectCredentialsFieldTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectCredentialsFieldType * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsFieldValue")))
@interface PowensConnectCredentialsFieldValue : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectCredentialsFieldValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(NSString *)value label:(NSString *)label __attribute__((swift_name("init(value:label:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectCredentialsFieldValue *)doCopyValue:(NSString *)value label:(NSString *)label __attribute__((swift_name("doCopy(value:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="label")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CredentialsFieldValue.Companion")))
@interface PowensConnectCredentialsFieldValueCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectCredentialsFieldValueCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency")))
@interface PowensConnectCurrency : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectCurrencyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t precision __attribute__((swift_name("precision")));
@property (readonly) NSString *symbol __attribute__((swift_name("symbol")));
- (instancetype)initWithId:(NSString *)id name:(NSString *)name symbol:(NSString *)symbol precision:(int32_t)precision __attribute__((swift_name("init(id:name:symbol:precision:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectCurrency *)doCopyId:(NSString *)id name:(NSString *)name symbol:(NSString *)symbol precision:(int32_t)precision __attribute__((swift_name("doCopy(id:name:symbol:precision:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="precision")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="symbol")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Currency.Companion")))
@interface PowensConnectCurrencyCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectCurrencyCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateBoundedList")))
@interface PowensConnectDateBoundedList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectDateBoundedListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *firstDate __attribute__((swift_name("firstDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *lastDate __attribute__((swift_name("lastDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *resultMaxDate __attribute__((swift_name("resultMaxDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *resultMinDate __attribute__((swift_name("resultMinDate")));
- (instancetype)initWithFirstDate:(PowensConnectKotlinx_datetimeLocalDate *)firstDate lastDate:(PowensConnectKotlinx_datetimeLocalDate *)lastDate resultMinDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMinDate resultMaxDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMaxDate __attribute__((swift_name("init(firstDate:lastDate:resultMinDate:resultMaxDate:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectDateBoundedList *)doCopyFirstDate:(PowensConnectKotlinx_datetimeLocalDate *)firstDate lastDate:(PowensConnectKotlinx_datetimeLocalDate *)lastDate resultMinDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMinDate resultMaxDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMaxDate __attribute__((swift_name("doCopy(firstDate:lastDate:resultMinDate:resultMaxDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="first_date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result_max_date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result_min_date")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateBoundedList.Companion")))
@interface PowensConnectDateBoundedListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectDateBoundedListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessToken")))
@interface PowensConnectExchangeAccessToken : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectExchangeAccessTokenCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property (readonly) PowensConnectExchangeAccessTokenTokenType * _Nullable tokenType __attribute__((swift_name("tokenType")));
- (instancetype)initWithAccessToken:(NSString * _Nullable)accessToken tokenType:(PowensConnectExchangeAccessTokenTokenType * _Nullable)tokenType __attribute__((swift_name("init(accessToken:tokenType:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectExchangeAccessToken *)doCopyAccessToken:(NSString * _Nullable)accessToken tokenType:(PowensConnectExchangeAccessTokenTokenType * _Nullable)tokenType __attribute__((swift_name("doCopy(accessToken:tokenType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessToken.Companion")))
@interface PowensConnectExchangeAccessTokenCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectExchangeAccessTokenCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessToken.TokenType")))
@interface PowensConnectExchangeAccessTokenTokenType : PowensConnectKotlinEnum<PowensConnectExchangeAccessTokenTokenType *>
@property (class, readonly, getter=companion) PowensConnectExchangeAccessTokenTokenTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectExchangeAccessTokenTokenType *bearer __attribute__((swift_name("bearer")));
@property (class, readonly) NSArray<PowensConnectExchangeAccessTokenTokenType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectExchangeAccessTokenTokenType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessToken.TokenTypeCompanion")))
@interface PowensConnectExchangeAccessTokenTokenTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectExchangeAccessTokenTokenTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessTokenRequest")))
@interface PowensConnectExchangeAccessTokenRequest : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectExchangeAccessTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) PowensConnectExchangeAccessTokenRequestGrantType * _Nullable grantType __attribute__((swift_name("grantType")));
@property (readonly) NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
- (instancetype)initWithClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret code:(NSString *)code grantType:(PowensConnectExchangeAccessTokenRequestGrantType * _Nullable)grantType redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("init(clientId:clientSecret:code:grantType:redirectUri:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectExchangeAccessTokenRequest *)doCopyClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret code:(NSString *)code grantType:(PowensConnectExchangeAccessTokenRequestGrantType * _Nullable)grantType redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("doCopy(clientId:clientSecret:code:grantType:redirectUri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_secret")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="grant_type")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="redirect_uri")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessTokenRequest.Companion")))
@interface PowensConnectExchangeAccessTokenRequestCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectExchangeAccessTokenRequestCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessTokenRequest.GrantType")))
@interface PowensConnectExchangeAccessTokenRequestGrantType : PowensConnectKotlinEnum<PowensConnectExchangeAccessTokenRequestGrantType *>
@property (class, readonly, getter=companion) PowensConnectExchangeAccessTokenRequestGrantTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectExchangeAccessTokenRequestGrantType *authorizationcode __attribute__((swift_name("authorizationcode")));
@property (class, readonly) NSArray<PowensConnectExchangeAccessTokenRequestGrantType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectExchangeAccessTokenRequestGrantType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExchangeAccessTokenRequest.GrantTypeCompanion")))
@interface PowensConnectExchangeAccessTokenRequestGrantTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectExchangeAccessTokenRequestGrantTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Loan")))
@interface PowensConnectLoan : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectLoanCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable accountLabel __attribute__((swift_name("accountLabel")));
@property (readonly) NSString * _Nullable availableAmount __attribute__((swift_name("availableAmount")));
@property (readonly) PowensConnectInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString * _Nullable insuranceLabel __attribute__((swift_name("insuranceLabel")));
@property (readonly) NSString * _Nullable lastPaymentAmount __attribute__((swift_name("lastPaymentAmount")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable lastPaymentDate __attribute__((swift_name("lastPaymentDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable maturityDate __attribute__((swift_name("maturityDate")));
@property (readonly) PowensConnectInt * _Nullable nbPaymentsDone __attribute__((swift_name("nbPaymentsDone")));
@property (readonly) PowensConnectInt * _Nullable nbPaymentsLeft __attribute__((swift_name("nbPaymentsLeft")));
@property (readonly) PowensConnectInt * _Nullable nbPaymentsTotal __attribute__((swift_name("nbPaymentsTotal")));
@property (readonly) NSString * _Nullable nextPaymentAmount __attribute__((swift_name("nextPaymentAmount")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable nextPaymentDate __attribute__((swift_name("nextPaymentDate")));
@property (readonly) PowensConnectDouble * _Nullable rate __attribute__((swift_name("rate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable subscriptionDate __attribute__((swift_name("subscriptionDate")));
@property (readonly) NSString * _Nullable totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) PowensConnectLoanType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable usedAmount __attribute__((swift_name("usedAmount")));
- (instancetype)initWithTotalAmount:(NSString * _Nullable)totalAmount availableAmount:(NSString * _Nullable)availableAmount usedAmount:(NSString * _Nullable)usedAmount subscriptionDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)subscriptionDate maturityDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)maturityDate nextPaymentAmount:(NSString * _Nullable)nextPaymentAmount nextPaymentDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)nextPaymentDate rate:(PowensConnectDouble * _Nullable)rate nbPaymentsLeft:(PowensConnectInt * _Nullable)nbPaymentsLeft nbPaymentsDone:(PowensConnectInt * _Nullable)nbPaymentsDone nbPaymentsTotal:(PowensConnectInt * _Nullable)nbPaymentsTotal lastPaymentAmount:(NSString * _Nullable)lastPaymentAmount lastPaymentDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)lastPaymentDate accountLabel:(NSString * _Nullable)accountLabel insuranceLabel:(NSString * _Nullable)insuranceLabel duration:(PowensConnectInt * _Nullable)duration type:(PowensConnectLoanType * _Nullable)type __attribute__((swift_name("init(totalAmount:availableAmount:usedAmount:subscriptionDate:maturityDate:nextPaymentAmount:nextPaymentDate:rate:nbPaymentsLeft:nbPaymentsDone:nbPaymentsTotal:lastPaymentAmount:lastPaymentDate:accountLabel:insuranceLabel:duration:type:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectLoan *)doCopyTotalAmount:(NSString * _Nullable)totalAmount availableAmount:(NSString * _Nullable)availableAmount usedAmount:(NSString * _Nullable)usedAmount subscriptionDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)subscriptionDate maturityDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)maturityDate nextPaymentAmount:(NSString * _Nullable)nextPaymentAmount nextPaymentDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)nextPaymentDate rate:(PowensConnectDouble * _Nullable)rate nbPaymentsLeft:(PowensConnectInt * _Nullable)nbPaymentsLeft nbPaymentsDone:(PowensConnectInt * _Nullable)nbPaymentsDone nbPaymentsTotal:(PowensConnectInt * _Nullable)nbPaymentsTotal lastPaymentAmount:(NSString * _Nullable)lastPaymentAmount lastPaymentDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)lastPaymentDate accountLabel:(NSString * _Nullable)accountLabel insuranceLabel:(NSString * _Nullable)insuranceLabel duration:(PowensConnectInt * _Nullable)duration type:(PowensConnectLoanType * _Nullable)type __attribute__((swift_name("doCopy(totalAmount:availableAmount:usedAmount:subscriptionDate:maturityDate:nextPaymentAmount:nextPaymentDate:rate:nbPaymentsLeft:nbPaymentsDone:nbPaymentsTotal:lastPaymentAmount:lastPaymentDate:accountLabel:insuranceLabel:duration:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_label")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="available_amount")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="duration")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="insurance_label")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_payment_amount")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_payment_date")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="maturity_date")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nb_payments_done")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nb_payments_left")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nb_payments_total")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_payment_amount")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_payment_date")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rate")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="subscription_date")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="total_amount")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="used_amount")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Loan.Companion")))
@interface PowensConnectLoanCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectLoanCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoanType")))
@interface PowensConnectLoanType : PowensConnectKotlinEnum<PowensConnectLoanType *>
@property (class, readonly, getter=companion) PowensConnectLoanTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectLoanType *mortgage __attribute__((swift_name("mortgage")));
@property (class, readonly) PowensConnectLoanType *consumercredit __attribute__((swift_name("consumercredit")));
@property (class, readonly) PowensConnectLoanType *revolvingcredit __attribute__((swift_name("revolvingcredit")));
@property (class, readonly) NSArray<PowensConnectLoanType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectLoanType *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoanType.Companion")))
@interface PowensConnectLoanTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectLoanTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectLoanType * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProvidersList")))
@interface PowensConnectProvidersList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectProvidersListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<PowensConnectConnector *> *providers __attribute__((swift_name("providers")));
- (instancetype)initWithProviders:(NSArray<PowensConnectConnector *> *)providers __attribute__((swift_name("init(providers:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This schema is deprecated.")));
- (PowensConnectProvidersList *)doCopyProviders:(NSArray<PowensConnectConnector *> *)providers __attribute__((swift_name("doCopy(providers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="providers")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProvidersList.Companion")))
@interface PowensConnectProvidersListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectProvidersListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RenewAccessTokenRequest")))
@interface PowensConnectRenewAccessTokenRequest : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectRenewAccessTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property (readonly) PowensConnectRenewAccessTokenRequestGrantType *grantType __attribute__((swift_name("grantType")));
@property (readonly) PowensConnectBoolean * _Nullable revokePrevious __attribute__((swift_name("revokePrevious")));
@property (readonly) PowensConnectULong * _Nullable userId __attribute__((swift_name("userId")));
- (instancetype)initWithClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret grantType:(PowensConnectRenewAccessTokenRequestGrantType *)grantType userId:(PowensConnectULong * _Nullable)userId revokePrevious:(PowensConnectBoolean * _Nullable)revokePrevious __attribute__((swift_name("init(clientId:clientSecret:grantType:userId:revokePrevious:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectRenewAccessTokenRequest *)doCopyClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret grantType:(PowensConnectRenewAccessTokenRequestGrantType *)grantType userId:(PowensConnectULong * _Nullable)userId revokePrevious:(PowensConnectBoolean * _Nullable)revokePrevious __attribute__((swift_name("doCopy(clientId:clientSecret:grantType:userId:revokePrevious:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_secret")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="grant_type")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="revoke_previous")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_user")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RenewAccessTokenRequest.Companion")))
@interface PowensConnectRenewAccessTokenRequestCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectRenewAccessTokenRequestCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RenewAccessTokenRequest.GrantType")))
@interface PowensConnectRenewAccessTokenRequestGrantType : PowensConnectKotlinEnum<PowensConnectRenewAccessTokenRequestGrantType *>
@property (class, readonly, getter=companion) PowensConnectRenewAccessTokenRequestGrantTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectRenewAccessTokenRequestGrantType *clientcredentials __attribute__((swift_name("clientcredentials")));
@property (class, readonly) NSArray<PowensConnectRenewAccessTokenRequestGrantType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectRenewAccessTokenRequestGrantType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RenewAccessTokenRequest.GrantTypeCompanion")))
@interface PowensConnectRenewAccessTokenRequestGrantTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectRenewAccessTokenRequestGrantTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAccessToken")))
@interface PowensConnectServiceAccessToken : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectServiceAccessTokenCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@property (readonly) NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
- (instancetype)initWithToken:(NSString * _Nullable)token tokenType:(NSString * _Nullable)tokenType __attribute__((swift_name("init(token:tokenType:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectServiceAccessToken *)doCopyToken:(NSString * _Nullable)token tokenType:(NSString * _Nullable)tokenType __attribute__((swift_name("doCopy(token:tokenType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAccessToken.Companion")))
@interface PowensConnectServiceAccessTokenCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectServiceAccessTokenCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAccessTokenRequest")))
@interface PowensConnectServiceAccessTokenRequest : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectServiceAccessTokenRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property (readonly) PowensConnectServiceAccessTokenRequestGrantType *grantType __attribute__((swift_name("grantType")));
@property (readonly) NSSet<PowensConnectServiceTokenScope *> *scope __attribute__((swift_name("scope")));
- (instancetype)initWithClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret grantType:(PowensConnectServiceAccessTokenRequestGrantType *)grantType scope:(NSSet<PowensConnectServiceTokenScope *> *)scope __attribute__((swift_name("init(clientId:clientSecret:grantType:scope:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectServiceAccessTokenRequest *)doCopyClientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret grantType:(PowensConnectServiceAccessTokenRequestGrantType *)grantType scope:(NSSet<PowensConnectServiceTokenScope *> *)scope __attribute__((swift_name("doCopy(clientId:clientSecret:grantType:scope:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_secret")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="grant_type")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scope")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAccessTokenRequest.Companion")))
@interface PowensConnectServiceAccessTokenRequestCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectServiceAccessTokenRequestCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAccessTokenRequest.GrantType")))
@interface PowensConnectServiceAccessTokenRequestGrantType : PowensConnectKotlinEnum<PowensConnectServiceAccessTokenRequestGrantType *>
@property (class, readonly, getter=companion) PowensConnectServiceAccessTokenRequestGrantTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectServiceAccessTokenRequestGrantType *clientcredentials __attribute__((swift_name("clientcredentials")));
@property (class, readonly) NSArray<PowensConnectServiceAccessTokenRequestGrantType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectServiceAccessTokenRequestGrantType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceAccessTokenRequest.GrantTypeCompanion")))
@interface PowensConnectServiceAccessTokenRequestGrantTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectServiceAccessTokenRequestGrantTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceError")))
@interface PowensConnectServiceError : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectServiceErrorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectServiceErrorCode *code __attribute__((swift_name("code")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable requestId __attribute__((swift_name("requestId")));
- (instancetype)initWithCode:(PowensConnectServiceErrorCode *)code description:(NSString *)description message:(NSString * _Nullable)message requestId:(NSString * _Nullable)requestId __attribute__((swift_name("init(code:description:message:requestId:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectServiceError *)doCopyCode:(PowensConnectServiceErrorCode *)code description:(NSString *)description message:(NSString * _Nullable)message requestId:(NSString * _Nullable)requestId __attribute__((swift_name("doCopy(code:description:message:requestId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="code")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="request_id")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceError.Companion")))
@interface PowensConnectServiceErrorCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectServiceErrorCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceErrorCode")))
@interface PowensConnectServiceErrorCode : PowensConnectKotlinEnum<PowensConnectServiceErrorCode *>
@property (class, readonly, getter=companion) PowensConnectServiceErrorCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectServiceErrorCode *noaccount __attribute__((swift_name("noaccount")));
@property (class, readonly) PowensConnectServiceErrorCode *wrongpass __attribute__((swift_name("wrongpass")));
@property (class, readonly) PowensConnectServiceErrorCode *websiteunavailable __attribute__((swift_name("websiteunavailable")));
@property (class, readonly) PowensConnectServiceErrorCode *toomanysync __attribute__((swift_name("toomanysync")));
@property (class, readonly) PowensConnectServiceErrorCode *connectionlocked __attribute__((swift_name("connectionlocked")));
@property (class, readonly) PowensConnectServiceErrorCode *bankmessage __attribute__((swift_name("bankmessage")));
@property (class, readonly) PowensConnectServiceErrorCode *actionneeded __attribute__((swift_name("actionneeded")));
@property (class, readonly) PowensConnectServiceErrorCode *bug __attribute__((swift_name("bug")));
@property (class, readonly) PowensConnectServiceErrorCode *notsupported __attribute__((swift_name("notsupported")));
@property (class, readonly) PowensConnectServiceErrorCode *config __attribute__((swift_name("config")));
@property (class, readonly) PowensConnectServiceErrorCode *keymanager __attribute__((swift_name("keymanager")));
@property (class, readonly) PowensConnectServiceErrorCode *dataerror __attribute__((swift_name("dataerror")));
@property (class, readonly) PowensConnectServiceErrorCode *forbidden __attribute__((swift_name("forbidden")));
@property (class, readonly) NSArray<PowensConnectServiceErrorCode *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectServiceErrorCode *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceErrorCode.Companion")))
@interface PowensConnectServiceErrorCodeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectServiceErrorCodeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectServiceErrorCode * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceTokenScope")))
@interface PowensConnectServiceTokenScope : PowensConnectKotlinEnum<PowensConnectServiceTokenScope *>
@property (class, readonly, getter=companion) PowensConnectServiceTokenScopeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectServiceTokenScope *paymentsadmin __attribute__((swift_name("paymentsadmin")));
@property (class, readonly) PowensConnectServiceTokenScope *paymentsreadonly __attribute__((swift_name("paymentsreadonly")));
@property (class, readonly) PowensConnectServiceTokenScope *paymentsallowsensitive __attribute__((swift_name("paymentsallowsensitive")));
@property (class, readonly) PowensConnectServiceTokenScope *paymentsvalidate __attribute__((swift_name("paymentsvalidate")));
@property (class, readonly) PowensConnectServiceTokenScope *paymentscancel __attribute__((swift_name("paymentscancel")));
@property (class, readonly) PowensConnectServiceTokenScope *payments __attribute__((swift_name("payments")));
@property (class, readonly) NSArray<PowensConnectServiceTokenScope *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectServiceTokenScope *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServiceTokenScope.Companion")))
@interface PowensConnectServiceTokenScopeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectServiceTokenScopeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectServiceTokenScope * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction")))
@interface PowensConnectTransaction : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectTransactionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectBankAccount * _Nullable account __attribute__((swift_name("account")));
@property (readonly) uint64_t accountId __attribute__((swift_name("accountId")));
@property (readonly) BOOL active __attribute__((swift_name("active")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable applicationDate __attribute__((swift_name("applicationDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable bankDate __attribute__((swift_name("bankDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable bankDateTime __attribute__((swift_name("bankDateTime")));
@property (readonly) NSString * _Nullable card __attribute__((swift_name("card")));
@property (readonly) PowensConnectULong * _Nullable categoryId __attribute__((swift_name("categoryId")));
@property (readonly) PowensConnectULong * _Nullable clusterId __attribute__((swift_name("clusterId")));
@property (readonly) BOOL coming __attribute__((swift_name("coming")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString * _Nullable commission __attribute__((swift_name("commission")));
@property (readonly) PowensConnectCurrency * _Nullable commissionCurrency __attribute__((swift_name("commissionCurrency")));
@property (readonly) PowensConnectTransactionCounterparty * _Nullable counterparty __attribute__((swift_name("counterparty")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime *dateScraped __attribute__((swift_name("dateScraped")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable datetime __attribute__((swift_name("datetime")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable deleted __attribute__((swift_name("deleted")));
@property (readonly) NSString * _Nullable grossValue __attribute__((swift_name("grossValue")));
@property (readonly) uint64_t id __attribute__((swift_name("id")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) PowensConnectCurrency * _Nullable originalCurrency __attribute__((swift_name("originalCurrency")));
@property (readonly) NSString * _Nullable originalGrossValue __attribute__((swift_name("originalGrossValue")));
@property (readonly) NSString * _Nullable originalValue __attribute__((swift_name("originalValue")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *realizationDate __attribute__((swift_name("realizationDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable realizationDateTime __attribute__((swift_name("realizationDateTime")));
@property (readonly) PowensConnectTransactionType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable valueDate __attribute__((swift_name("valueDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime * _Nullable valueDateTime __attribute__((swift_name("valueDateTime")));
@property (readonly) NSString * _Nullable wording __attribute__((swift_name("wording")));
- (instancetype)initWithId:(uint64_t)id accountId:(uint64_t)accountId date:(PowensConnectKotlinx_datetimeLocalDate *)date type:(PowensConnectTransactionType *)type dateScraped:(PowensConnectKotlinx_datetimeLocalDateTime *)dateScraped realizationDate:(PowensConnectKotlinx_datetimeLocalDate *)realizationDate coming:(BOOL)coming active:(BOOL)active applicationDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)applicationDate datetime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)datetime value:(NSString * _Nullable)value grossValue:(NSString * _Nullable)grossValue originalValue:(NSString * _Nullable)originalValue originalGrossValue:(NSString * _Nullable)originalGrossValue originalCurrency:(PowensConnectCurrency * _Nullable)originalCurrency commission:(NSString * _Nullable)commission commissionCurrency:(PowensConnectCurrency * _Nullable)commissionCurrency wording:(NSString * _Nullable)wording categoryId:(PowensConnectULong * _Nullable)categoryId realizationDateTime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)realizationDateTime valueDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)valueDate valueDateTime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)valueDateTime bankDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)bankDate bankDateTime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)bankDateTime clusterId:(PowensConnectULong * _Nullable)clusterId country:(NSString * _Nullable)country card:(NSString * _Nullable)card counterparty:(PowensConnectTransactionCounterparty * _Nullable)counterparty comment:(NSString * _Nullable)comment lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate deleted:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)deleted account:(PowensConnectBankAccount * _Nullable)account __attribute__((swift_name("init(id:accountId:date:type:dateScraped:realizationDate:coming:active:applicationDate:datetime:value:grossValue:originalValue:originalGrossValue:originalCurrency:commission:commissionCurrency:wording:categoryId:realizationDateTime:valueDate:valueDateTime:bankDate:bankDateTime:clusterId:country:card:counterparty:comment:lastUpdate:deleted:account:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectTransaction *)doCopyId:(uint64_t)id accountId:(uint64_t)accountId date:(PowensConnectKotlinx_datetimeLocalDate *)date type:(PowensConnectTransactionType *)type dateScraped:(PowensConnectKotlinx_datetimeLocalDateTime *)dateScraped realizationDate:(PowensConnectKotlinx_datetimeLocalDate *)realizationDate coming:(BOOL)coming active:(BOOL)active applicationDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)applicationDate datetime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)datetime value:(NSString * _Nullable)value grossValue:(NSString * _Nullable)grossValue originalValue:(NSString * _Nullable)originalValue originalGrossValue:(NSString * _Nullable)originalGrossValue originalCurrency:(PowensConnectCurrency * _Nullable)originalCurrency commission:(NSString * _Nullable)commission commissionCurrency:(PowensConnectCurrency * _Nullable)commissionCurrency wording:(NSString * _Nullable)wording categoryId:(PowensConnectULong * _Nullable)categoryId realizationDateTime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)realizationDateTime valueDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)valueDate valueDateTime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)valueDateTime bankDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)bankDate bankDateTime:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)bankDateTime clusterId:(PowensConnectULong * _Nullable)clusterId country:(NSString * _Nullable)country card:(NSString * _Nullable)card counterparty:(PowensConnectTransactionCounterparty * _Nullable)counterparty comment:(NSString * _Nullable)comment lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate deleted:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)deleted account:(PowensConnectBankAccount * _Nullable)account __attribute__((swift_name("doCopy(id:accountId:date:type:dateScraped:realizationDate:coming:active:applicationDate:datetime:value:grossValue:originalValue:originalGrossValue:originalCurrency:commission:commissionCurrency:wording:categoryId:realizationDateTime:valueDate:valueDateTime:bankDate:bankDateTime:clusterId:country:card:counterparty:comment:lastUpdate:deleted:account:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_account")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="active")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="application_date")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bdate")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bdatetime")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="card")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_category")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_cluster")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="coming")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="comment")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="commission")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="commission_currency")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="counterparty")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="country")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_scraped")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="datetime")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="gross_value")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_update")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_currency")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_gross_value")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_value")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rdate")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rdatetime")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="value")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vdate")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vdatetime")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="wording")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction.Companion")))
@interface PowensConnectTransactionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectTransactionCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionCounterparty")))
@interface PowensConnectTransactionCounterparty : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectTransactionCounterpartyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable accountIdentification __attribute__((swift_name("accountIdentification")));
@property (readonly) PowensConnectAccountSchemeName * _Nullable accountSchemeName __attribute__((swift_name("accountSchemeName")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) PowensConnectTransactionCounterpartyType * _Nullable type __attribute__((swift_name("type")));
- (instancetype)initWithLabel:(NSString * _Nullable)label accountSchemeName:(PowensConnectAccountSchemeName * _Nullable)accountSchemeName accountIdentification:(NSString * _Nullable)accountIdentification type:(PowensConnectTransactionCounterpartyType * _Nullable)type __attribute__((swift_name("init(label:accountSchemeName:accountIdentification:type:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectTransactionCounterparty *)doCopyLabel:(NSString * _Nullable)label accountSchemeName:(PowensConnectAccountSchemeName * _Nullable)accountSchemeName accountIdentification:(NSString * _Nullable)accountIdentification type:(PowensConnectTransactionCounterpartyType * _Nullable)type __attribute__((swift_name("doCopy(label:accountSchemeName:accountIdentification:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_identification")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account_scheme_name")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="label")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionCounterparty.Companion")))
@interface PowensConnectTransactionCounterpartyCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectTransactionCounterpartyCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionCounterpartyType")))
@interface PowensConnectTransactionCounterpartyType : PowensConnectKotlinEnum<PowensConnectTransactionCounterpartyType *>
@property (class, readonly, getter=companion) PowensConnectTransactionCounterpartyTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectTransactionCounterpartyType *creditor __attribute__((swift_name("creditor")));
@property (class, readonly) PowensConnectTransactionCounterpartyType *debtor __attribute__((swift_name("debtor")));
@property (class, readonly) NSArray<PowensConnectTransactionCounterpartyType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectTransactionCounterpartyType *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionCounterpartyType.Companion")))
@interface PowensConnectTransactionCounterpartyTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectTransactionCounterpartyTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectTransactionCounterpartyType * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType")))
@interface PowensConnectTransactionType : PowensConnectKotlinEnum<PowensConnectTransactionType *>
@property (class, readonly, getter=companion) PowensConnectTransactionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectTransactionType *transfer __attribute__((swift_name("transfer")));
@property (class, readonly) PowensConnectTransactionType *order __attribute__((swift_name("order")));
@property (class, readonly) PowensConnectTransactionType *check __attribute__((swift_name("check")));
@property (class, readonly) PowensConnectTransactionType *deposit __attribute__((swift_name("deposit")));
@property (class, readonly) PowensConnectTransactionType *payback __attribute__((swift_name("payback")));
@property (class, readonly) PowensConnectTransactionType *withdrawal __attribute__((swift_name("withdrawal")));
@property (class, readonly) PowensConnectTransactionType *loanpayment __attribute__((swift_name("loanpayment")));
@property (class, readonly) PowensConnectTransactionType *bank __attribute__((swift_name("bank")));
@property (class, readonly) PowensConnectTransactionType *card __attribute__((swift_name("card")));
@property (class, readonly) PowensConnectTransactionType *deferredcard __attribute__((swift_name("deferredcard")));
@property (class, readonly) PowensConnectTransactionType *summarycard __attribute__((swift_name("summarycard")));
@property (class, readonly) PowensConnectTransactionType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) NSArray<PowensConnectTransactionType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectTransactionType *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionType.Companion")))
@interface PowensConnectTransactionTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectTransactionTypeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectTransactionType * _Nullable)decodeData:(id _Nullable)data __attribute__((swift_name("decode(data:)")));
- (NSString * _Nullable)encodeData:(id _Nullable)data __attribute__((swift_name("encode(data:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionUpdateRequest")))
@interface PowensConnectTransactionUpdateRequest : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectTransactionUpdateRequestCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectBoolean * _Nullable active __attribute__((swift_name("active")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate * _Nullable applicationDate __attribute__((swift_name("applicationDate")));
@property (readonly) PowensConnectULong * _Nullable categoryId __attribute__((swift_name("categoryId")));
@property (readonly) NSString * _Nullable comment __attribute__((swift_name("comment")));
@property (readonly) NSString * _Nullable wording __attribute__((swift_name("wording")));
- (instancetype)initWithWording:(NSString * _Nullable)wording applicationDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)applicationDate categoryId:(PowensConnectULong * _Nullable)categoryId comment:(NSString * _Nullable)comment active:(PowensConnectBoolean * _Nullable)active __attribute__((swift_name("init(wording:applicationDate:categoryId:comment:active:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectTransactionUpdateRequest *)doCopyWording:(NSString * _Nullable)wording applicationDate:(PowensConnectKotlinx_datetimeLocalDate * _Nullable)applicationDate categoryId:(PowensConnectULong * _Nullable)categoryId comment:(NSString * _Nullable)comment active:(PowensConnectBoolean * _Nullable)active __attribute__((swift_name("doCopy(wording:applicationDate:categoryId:comment:active:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="active")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="application_date")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_category")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="comment")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="wording")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionUpdateRequest.Companion")))
@interface PowensConnectTransactionUpdateRequestCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectTransactionUpdateRequestCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/powens/sdk/model/TransactionValueFilter.Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionValueFilter")))
@interface PowensConnectTransactionValueFilter : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectTransactionValueFilterCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL absolute __attribute__((swift_name("absolute")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(NSString *)value absolute:(BOOL)absolute __attribute__((swift_name("init(value:absolute:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectTransactionValueFilter *)doCopyValue:(NSString *)value absolute:(BOOL)absolute __attribute__((swift_name("doCopy(value:absolute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionValueFilter.Companion")))
@interface PowensConnectTransactionValueFilterCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectTransactionValueFilterCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionValueFilter.Serializer")))
@interface PowensConnectTransactionValueFilterSerializer : PowensConnectBase <PowensConnectKotlinx_serialization_coreKSerializer>
@property (class, readonly, getter=shared) PowensConnectTransactionValueFilterSerializer *shared __attribute__((swift_name("shared")));
@property (readonly) id<PowensConnectKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
- (PowensConnectTransactionValueFilter *)deserializeDecoder:(id<PowensConnectKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PowensConnectKotlinx_serialization_coreEncoder>)encoder value:(PowensConnectTransactionValueFilter *)value __attribute__((swift_name("serialize(encoder:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionsList")))
@interface PowensConnectTransactionsList : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectTransactionsListCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *firstDate __attribute__((swift_name("firstDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *lastDate __attribute__((swift_name("lastDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *resultMaxDate __attribute__((swift_name("resultMaxDate")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *resultMinDate __attribute__((swift_name("resultMinDate")));
@property (readonly) NSArray<PowensConnectTransaction *> *transactions __attribute__((swift_name("transactions")));
- (instancetype)initWithFirstDate:(PowensConnectKotlinx_datetimeLocalDate *)firstDate lastDate:(PowensConnectKotlinx_datetimeLocalDate *)lastDate resultMinDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMinDate resultMaxDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMaxDate transactions:(NSArray<PowensConnectTransaction *> *)transactions __attribute__((swift_name("init(firstDate:lastDate:resultMinDate:resultMaxDate:transactions:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectTransactionsList *)doCopyFirstDate:(PowensConnectKotlinx_datetimeLocalDate *)firstDate lastDate:(PowensConnectKotlinx_datetimeLocalDate *)lastDate resultMinDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMinDate resultMaxDate:(PowensConnectKotlinx_datetimeLocalDate *)resultMaxDate transactions:(NSArray<PowensConnectTransaction *> *)transactions __attribute__((swift_name("doCopy(firstDate:lastDate:resultMinDate:resultMaxDate:transactions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="first_date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result_max_date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="result_min_date")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="transactions")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionsList.Companion")))
@interface PowensConnectTransactionsListCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectTransactionsListCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface PowensConnectUser : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectUserCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) uint64_t id __attribute__((swift_name("id")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDateTime *signIn __attribute__((swift_name("signIn")));
- (instancetype)initWithId:(uint64_t)id signIn:(PowensConnectKotlinx_datetimeLocalDateTime *)signIn __attribute__((swift_name("init(id:signIn:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectUser *)doCopyId:(uint64_t)id signIn:(PowensConnectKotlinx_datetimeLocalDateTime *)signIn __attribute__((swift_name("doCopy(id:signIn:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
 *   kotlinx.serialization.Required
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="signin")
 *   kotlinx.serialization.Required
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface PowensConnectUserCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectUserCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("WebviewCallback")))
@protocol PowensConnectWebviewCallback
@required
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@end

__attribute__((swift_name("WebviewCallbackResult")))
@protocol PowensConnectWebviewCallbackResult <PowensConnectWebviewCallback>
@required
@end

__attribute__((swift_name("WebviewConnectCallbackResult")))
@protocol PowensConnectWebviewConnectCallbackResult <PowensConnectWebviewCallback>
@required
@end

__attribute__((swift_name("WebviewManageCallbackResult")))
@protocol PowensConnectWebviewManageCallbackResult <PowensConnectWebviewCallback>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewCallbackError")))
@interface PowensConnectWebviewCallbackError : PowensConnectBase <PowensConnectWebviewCallbackResult, PowensConnectWebviewConnectCallbackResult, PowensConnectWebviewManageCallbackResult>
@property (class, readonly, getter=companion) PowensConnectWebviewCallbackErrorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectWebviewErrorCode * _Nullable errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString * _Nullable errorDescription __attribute__((swift_name("errorDescription")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
- (instancetype)initWithErrorCode:(PowensConnectWebviewErrorCode * _Nullable)errorCode errorDescription:(NSString * _Nullable)errorDescription state:(NSString * _Nullable)state __attribute__((swift_name("init(errorCode:errorDescription:state:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectWebviewCallbackError *)doCopyErrorCode:(PowensConnectWebviewErrorCode * _Nullable)errorCode errorDescription:(NSString * _Nullable)errorDescription state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(errorCode:errorDescription:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="error_description")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewCallbackError.Companion")))
@interface PowensConnectWebviewCallbackErrorCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewCallbackErrorCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewCallbackSuccess")))
@interface PowensConnectWebviewCallbackSuccess : PowensConnectBase <PowensConnectWebviewCallbackResult>
@property (class, readonly, getter=companion) PowensConnectWebviewCallbackSuccessCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
- (instancetype)initWithState:(NSString * _Nullable)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectWebviewCallbackSuccess *)doCopyState:(NSString * _Nullable)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewCallbackSuccess.Companion")))
@interface PowensConnectWebviewCallbackSuccessCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewCallbackSuccessCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewConnectCallbackSuccess")))
@interface PowensConnectWebviewConnectCallbackSuccess : PowensConnectBase <PowensConnectWebviewConnectCallbackResult>
@property (class, readonly, getter=companion) PowensConnectWebviewConnectCallbackSuccessCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) int64_t connectionId __attribute__((swift_name("connectionId")));
@property (readonly) NSArray<PowensConnectLong *> * _Nullable connectionIds __attribute__((swift_name("connectionIds")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
- (instancetype)initWithConnectionId:(int64_t)connectionId connectionIds:(NSArray<PowensConnectLong *> * _Nullable)connectionIds code:(NSString * _Nullable)code state:(NSString * _Nullable)state __attribute__((swift_name("init(connectionId:connectionIds:code:state:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectWebviewConnectCallbackSuccess *)doCopyConnectionId:(int64_t)connectionId connectionIds:(NSArray<PowensConnectLong *> * _Nullable)connectionIds code:(NSString * _Nullable)code state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(connectionId:connectionIds:code:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connection_id")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connection_ids")
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/powens/sdk/infrastructure/IdsAsStringSerializer))
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewConnectCallbackSuccess.Companion")))
@interface PowensConnectWebviewConnectCallbackSuccessCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewConnectCallbackSuccessCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("WebviewOptions")))
@interface PowensConnectWebviewOptions : PowensConnectBase <PowensConnectParcelable>
@property (class, readonly, getter=companion) PowensConnectWebviewOptionsCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<PowensConnectBankAccountTypeName *> * _Nullable accountTypes __attribute__((swift_name("accountTypes")));
@property NSArray<PowensConnectBankAccountUsage *> * _Nullable accountUsages __attribute__((swift_name("accountUsages")));
@property NSArray<PowensConnectConnectorCapability *> * _Nullable connectorCapabilities __attribute__((swift_name("connectorCapabilities")));
@property NSString * _Nullable connectorCountry __attribute__((swift_name("connectorCountry")));
@property NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> * _Nullable connectorFieldValues __attribute__((swift_name("connectorFieldValues")));
@property NSArray<NSString *> * _Nullable connectorUuids __attribute__((swift_name("connectorUuids")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewConnectOptions")))
@interface PowensConnectWebviewConnectOptions : PowensConnectWebviewOptions <PowensConnectParcelable>
@property (class, readonly, getter=companion) PowensConnectWebviewConnectOptionsCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<NSString *> * _Nullable accountIbans __attribute__((swift_name("accountIbans")));
@property PowensConnectInt * _Nullable maxConnections __attribute__((swift_name("maxConnections")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewConnectOptions.Companion")))
@interface PowensConnectWebviewConnectOptionsCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewConnectOptionsCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewErrorCode")))
@interface PowensConnectWebviewErrorCode : PowensConnectKotlinEnum<PowensConnectWebviewErrorCode *>
@property (class, readonly, getter=companion) PowensConnectWebviewErrorCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectWebviewErrorCode *accessdenied __attribute__((swift_name("accessdenied")));
@property (class, readonly) PowensConnectWebviewErrorCode *servererror __attribute__((swift_name("servererror")));
@property (class, readonly) PowensConnectWebviewErrorCode *tosdeclined __attribute__((swift_name("tosdeclined")));
@property (class, readonly) PowensConnectWebviewErrorCode *sessionexpired __attribute__((swift_name("sessionexpired")));
@property (class, readonly) NSArray<PowensConnectWebviewErrorCode *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectWebviewErrorCode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewErrorCode.Companion")))
@interface PowensConnectWebviewErrorCodeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewErrorCodeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewManageCallbackSuccess")))
@interface PowensConnectWebviewManageCallbackSuccess : PowensConnectBase <PowensConnectWebviewManageCallbackResult>
@property (class, readonly, getter=companion) PowensConnectWebviewManageCallbackSuccessCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL connectionDeleted __attribute__((swift_name("connectionDeleted")));
@property (readonly) PowensConnectLong * _Nullable connectionId __attribute__((swift_name("connectionId")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
- (instancetype)initWithConnectionId:(PowensConnectLong * _Nullable)connectionId connectionDeleted:(BOOL)connectionDeleted state:(NSString * _Nullable)state __attribute__((swift_name("init(connectionId:connectionDeleted:state:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectWebviewManageCallbackSuccess *)doCopyConnectionId:(PowensConnectLong * _Nullable)connectionId connectionDeleted:(BOOL)connectionDeleted state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(connectionId:connectionDeleted:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connection_deleted")
*/

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connection_id")
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewManageCallbackSuccess.Companion")))
@interface PowensConnectWebviewManageCallbackSuccessCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewManageCallbackSuccessCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewManageOptions")))
@interface PowensConnectWebviewManageOptions : PowensConnectWebviewOptions <PowensConnectParcelable>
@property (class, readonly, getter=companion) PowensConnectWebviewManageOptionsCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewManageOptions.Companion")))
@interface PowensConnectWebviewManageOptionsCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewManageOptionsCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewOptions.Companion")))
@interface PowensConnectWebviewOptionsCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewOptionsCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewPath")))
@interface PowensConnectWebviewPath : PowensConnectKotlinEnum<PowensConnectWebviewPath *>
@property (class, readonly, getter=companion) PowensConnectWebviewPathCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectWebviewPath *connect __attribute__((swift_name("connect")));
@property (class, readonly) PowensConnectWebviewPath *reconnect __attribute__((swift_name("reconnect")));
@property (class, readonly) PowensConnectWebviewPath *manage __attribute__((swift_name("manage")));
@property (class, readonly) NSArray<PowensConnectWebviewPath *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectWebviewPath *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebviewPath.Companion")))
@interface PowensConnectWebviewPathCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectWebviewPathCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

@interface PowensConnectHttpResponse (Extensions)
- (PowensConnectHttpResponse<id> *)mapBlock:(id (^)(id))block __attribute__((swift_name("map(block:)")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol PowensConnectKtor_httpHttpMessage
@required
@property (readonly) id<PowensConnectKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol PowensConnectKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<PowensConnectKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface PowensConnectKtor_client_coreHttpResponse : PowensConnectBase <PowensConnectKtor_httpHttpMessage, PowensConnectKotlinx_coroutines_coreCoroutineScope>
@property (readonly) PowensConnectKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<PowensConnectKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) PowensConnectKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PowensConnectKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) PowensConnectKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface PowensConnectKtor_client_coreHttpResponse (Extensions)
- (PowensConnectHttpResponse<id> *)wrap __attribute__((swift_name("wrap()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiAbstractionsKt")))
@interface PowensConnectApiAbstractionsKt : PowensConnectBase
@property (class, readonly) NSString *(^defaultMultiValueConverter)(id _Nullable) __attribute__((swift_name("defaultMultiValueConverter")));
+ (NSString *)collectionDelimiterCollectionFormat:(NSString *)collectionFormat __attribute__((swift_name("collectionDelimiter(collectionFormat:)")));
+ (NSArray<NSString *> *)toMultiValueItems:(PowensConnectKotlinArray<id> *)items collectionFormat:(NSString *)collectionFormat map:(NSString *(^)(id _Nullable))map __attribute__((swift_name("toMultiValue(items:collectionFormat:map:)")));
+ (NSArray<NSString *> *)toMultiValueItems:(id)items collectionFormat:(NSString *)collectionFormat map_:(NSString *(^)(id _Nullable))map __attribute__((swift_name("toMultiValue(items:collectionFormat:map_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MonetaryValue_iosKt")))
@interface PowensConnectMonetaryValue_iosKt : PowensConnectBase
+ (NSString *)absoluteValue:(NSString *)receiver __attribute__((swift_name("absoluteValue(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface PowensConnect__SkieSuspendWrappersKt : PowensConnectBase
+ (void)Skie_Suspend__0__hasNextDispatchReceiver:(PowensConnectSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__10__getAuthCodeDispatchReceiver:(PowensConnectAuthenticationApi *)dispatchReceiver type:(PowensConnectAuthenticationApiTypeGetAuthCode * _Nullable)type suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__10__getAuthCode(dispatchReceiver:type:suspendHandler:)")));
+ (void)Skie_Suspend__11__getServiceAccessTokenDispatchReceiver:(PowensConnectAuthenticationApi *)dispatchReceiver serviceAccessTokenRequest:(PowensConnectServiceAccessTokenRequest * _Nullable)serviceAccessTokenRequest suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__11__getServiceAccessToken(dispatchReceiver:serviceAccessTokenRequest:suspendHandler:)")));
+ (void)Skie_Suspend__12__initUserTokenDispatchReceiver:(PowensConnectAuthenticationApi *)dispatchReceiver accessTokenRequest:(PowensConnectAccessTokenRequest * _Nullable)accessTokenRequest suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__12__initUserToken(dispatchReceiver:accessTokenRequest:suspendHandler:)")));
+ (void)Skie_Suspend__13__renewAccessTokenDispatchReceiver:(PowensConnectAuthenticationApi *)dispatchReceiver renewAccessTokenRequest:(PowensConnectRenewAccessTokenRequest * _Nullable)renewAccessTokenRequest suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__13__renewAccessToken(dispatchReceiver:renewAccessTokenRequest:suspendHandler:)")));
+ (void)Skie_Suspend__14__revokeAccessTokenDispatchReceiver:(PowensConnectAuthenticationApi *)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__14__revokeAccessToken(dispatchReceiver:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__15__jsonRequestDispatchReceiver:(PowensConnectApiClient *)dispatchReceiver requestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__15__jsonRequest(dispatchReceiver:requestConfig:body:authNames:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__16__multipartFormRequestDispatchReceiver:(PowensConnectApiClient *)dispatchReceiver requestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(NSArray<PowensConnectKtor_httpPartData *> * _Nullable)body authNames:(NSArray<NSString *> *)authNames suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__16__multipartFormRequest(dispatchReceiver:requestConfig:body:authNames:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__17__requestDispatchReceiver:(PowensConnectApiClient *)dispatchReceiver requestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(id _Nullable)body authNames:(NSArray<NSString *> *)authNames suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__17__request(dispatchReceiver:requestConfig:body:authNames:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__18__urlEncodedFormRequestDispatchReceiver:(PowensConnectApiClient *)dispatchReceiver requestConfig:(PowensConnectRequestConfig<id> *)requestConfig body:(id<PowensConnectKtor_httpParameters> _Nullable)body authNames:(NSArray<NSString *> *)authNames suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__18__urlEncodedFormRequest(dispatchReceiver:requestConfig:body:authNames:suspendHandler:)")));
+ (void)Skie_Suspend__19__getBankAccountTypeDispatchReceiver:(PowensConnectBankAccountTypesApi *)dispatchReceiver typeId:(uint64_t)typeId suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__19__getBankAccountType(dispatchReceiver:typeId:suspendHandler:)")));
+ (void)Skie_Suspend__1__collectDispatchReceiver:(id<PowensConnectKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__20__listBankAccountTypesDispatchReceiver:(PowensConnectBankAccountTypesApi *)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__20__listBankAccountTypes(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__21__getUserAccountDispatchReceiver:(PowensConnectBankAccountsApi *)dispatchReceiver accountId:(uint64_t)accountId all:(PowensConnectBoolean * _Nullable)all expand:(NSSet<PowensConnectBankAccountExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__21__getUserAccount(dispatchReceiver:accountId:all:expand:suspendHandler:)")));
+ (void)Skie_Suspend__22__listUserAccountsDispatchReceiver:(PowensConnectBankAccountsApi *)dispatchReceiver all:(PowensConnectBoolean * _Nullable)all expand:(NSSet<PowensConnectBankAccountExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__22__listUserAccounts(dispatchReceiver:all:expand:suspendHandler:)")));
+ (void)Skie_Suspend__23__updateUserAccountDispatchReceiver:(PowensConnectBankAccountsApi *)dispatchReceiver accountId:(uint64_t)accountId bankAccountUpdateRequest:(PowensConnectBankAccountUpdateRequest *)bankAccountUpdateRequest all:(PowensConnectBoolean * _Nullable)all expand:(NSSet<PowensConnectBankAccountExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__23__updateUserAccount(dispatchReceiver:accountId:bankAccountUpdateRequest:all:expand:suspendHandler:)")));
+ (void)Skie_Suspend__24__getUserTransactionDispatchReceiver:(PowensConnectBankTransactionsApi *)dispatchReceiver transactionId:(uint64_t)transactionId all:(PowensConnectBoolean * _Nullable)all expand:(NSArray<PowensConnectBankTransactionsApiExpandGetUserTransaction *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__24__getUserTransaction(dispatchReceiver:transactionId:all:expand:suspendHandler:)")));
+ (void)Skie_Suspend__25__listUserTransactionsDispatchReceiver:(PowensConnectBankTransactionsApi *)dispatchReceiver expand:(NSArray<PowensConnectBankTransactionsApiExpandListUserTransactions *> * _Nullable)expand all:(PowensConnectBoolean * _Nullable)all minDate:(PowensConnectCalendarBound * _Nullable)minDate maxDate:(PowensConnectCalendarBound * _Nullable)maxDate income:(PowensConnectBoolean * _Nullable)income deleted:(PowensConnectBoolean * _Nullable)deleted lastUpdate:(PowensConnectKotlinx_datetimeLocalDateTime * _Nullable)lastUpdate wording:(NSString * _Nullable)wording value:(NSArray<PowensConnectTransactionValueFilter *> * _Nullable)value search:(NSString * _Nullable)search offset:(PowensConnectInt * _Nullable)offset limit:(PowensConnectInt * _Nullable)limit suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__25__listUserTransactions(dispatchReceiver:expand:all:minDate:maxDate:income:deleted:lastUpdate:wording:value:search:offset:limit:suspendHandler:)")));
+ (void)Skie_Suspend__26__updateUserTransactionDispatchReceiver:(PowensConnectBankTransactionsApi *)dispatchReceiver transactionId:(uint64_t)transactionId transactionUpdateRequest:(PowensConnectTransactionUpdateRequest *)transactionUpdateRequest all:(PowensConnectBoolean * _Nullable)all expand:(NSArray<PowensConnectBankTransactionsApiExpandUpdateUserTransaction *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__26__updateUserTransaction(dispatchReceiver:transactionId:transactionUpdateRequest:all:expand:suspendHandler:)")));
+ (void)Skie_Suspend__27__createUserConnectionDispatchReceiver:(PowensConnectConnectionsApi *)dispatchReceiver connectionRequest:(NSDictionary<NSString *, NSString *> *)connectionRequest source:(NSString * _Nullable)source expand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__27__createUserConnection(dispatchReceiver:connectionRequest:source:expand:suspendHandler:)")));
+ (void)Skie_Suspend__28__deleteUserConnectionDispatchReceiver:(PowensConnectConnectionsApi *)dispatchReceiver connectionId:(uint64_t)connectionId suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__28__deleteUserConnection(dispatchReceiver:connectionId:suspendHandler:)")));
+ (void)Skie_Suspend__29__getUserConnectionDispatchReceiver:(PowensConnectConnectionsApi *)dispatchReceiver connectionId:(uint64_t)connectionId expand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__29__getUserConnection(dispatchReceiver:connectionId:expand:suspendHandler:)")));
+ (void)Skie_Suspend__2__emitDispatchReceiver:(id<PowensConnectKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__emit(dispatchReceiver:value:suspendHandler:)")));
+ (void)Skie_Suspend__30__listUserConnectionsDispatchReceiver:(PowensConnectConnectionsApi *)dispatchReceiver expand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__30__listUserConnections(dispatchReceiver:expand:suspendHandler:)")));
+ (void)Skie_Suspend__31__openWebAuthDispatchReceiver:(PowensConnectConnectionsApi *)dispatchReceiver clientId:(uint64_t)clientId token:(NSString *)token redirectUri:(NSString *)redirectUri idConnector:(PowensConnectULong * _Nullable)idConnector connectorUuid:(NSString * _Nullable)connectorUuid idConnection:(PowensConnectULong * _Nullable)idConnection source:(NSString * _Nullable)source state:(NSString * _Nullable)state suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__31__openWebAuth(dispatchReceiver:clientId:token:redirectUri:idConnector:connectorUuid:idConnection:source:state:suspendHandler:)")));
+ (void)Skie_Suspend__32__updateSyncUserConnectionDispatchReceiver:(PowensConnectConnectionsApi *)dispatchReceiver connectionId:(uint64_t)connectionId source:(NSString * _Nullable)source background:(PowensConnectBoolean * _Nullable)background expand:(NSSet<PowensConnectConnectionExpand *> * _Nullable)expand connectionUpdateRequest:(NSDictionary<NSString *, NSString *> * _Nullable)connectionUpdateRequest suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__32__updateSyncUserConnection(dispatchReceiver:connectionId:source:background:expand:connectionUpdateRequest:suspendHandler:)")));
+ (void)Skie_Suspend__33__batchEnableConnectorsByIdDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver connectorIds:(NSSet<PowensConnectULong *> *)connectorIds expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__33__batchEnableConnectorsById(dispatchReceiver:connectorIds:expand:suspendHandler:)")));
+ (void)Skie_Suspend__34__getBankDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver connectorId:(uint64_t)connectorId expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__34__getBank(dispatchReceiver:connectorId:expand:suspendHandler:)")));
+ (void)Skie_Suspend__35__getConnectorDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver connectorId:(uint64_t)connectorId expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__35__getConnector(dispatchReceiver:connectorId:expand:suspendHandler:)")));
+ (void)Skie_Suspend__36__getConnectorByUuidDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver connectorUuid:(NSString *)connectorUuid expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__36__getConnectorByUuid(dispatchReceiver:connectorUuid:expand:suspendHandler:)")));
+ (void)Skie_Suspend__37__getProviderDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver connectorId:(uint64_t)connectorId expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__37__getProvider(dispatchReceiver:connectorId:expand:suspendHandler:)")));
+ (void)Skie_Suspend__38__listBanksDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__38__listBanks(dispatchReceiver:expand:suspendHandler:)")));
+ (void)Skie_Suspend__39__listConnectorsDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__39__listConnectors(dispatchReceiver:expand:suspendHandler:)")));
+ (void)Skie_Suspend__3__connectFlowDispatchReceiver:(PowensConnectWebviewLauncher *)dispatchReceiver accessToken:(NSString * _Nullable)accessToken state:(NSString * _Nullable)state options:(PowensConnectWebviewConnectOptions * _Nullable)options suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__3__connectFlow(dispatchReceiver:accessToken:state:options:suspendHandler:)")));
+ (void)Skie_Suspend__40__listProvidersDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__40__listProviders(dispatchReceiver:expand:suspendHandler:)")));
+ (void)Skie_Suspend__41__updateConnectorsDispatchReceiver:(PowensConnectConnectorsApi *)dispatchReceiver requestBody:(NSDictionary<NSString *, PowensConnectConnectorPatch *> *)requestBody expand:(NSSet<PowensConnectConnectorExpand *> * _Nullable)expand suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__41__updateConnectors(dispatchReceiver:requestBody:expand:suspendHandler:)")));
+ (void)Skie_Suspend__42__deleteUserDispatchReceiver:(PowensConnectUsersApi *)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__42__deleteUser(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__43__getUserDispatchReceiver:(PowensConnectUsersApi *)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__43__getUser(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__44__bodyDispatchReceiver:(id<PowensConnectBodyProvider>)dispatchReceiver response:(PowensConnectKtor_client_coreHttpResponse *)response suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__44__body(dispatchReceiver:response:suspendHandler:)")));
+ (void)Skie_Suspend__45__typedBodyDispatchReceiver:(id<PowensConnectBodyProvider>)dispatchReceiver response:(PowensConnectKtor_client_coreHttpResponse *)response type:(PowensConnectKtor_utilsTypeInfo *)type suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__45__typedBody(dispatchReceiver:response:type:suspendHandler:)")));
+ (void)Skie_Suspend__46__bodyDispatchReceiver:(PowensConnectHttpResponse<id> *)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__46__body(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__47__typedBodyDispatchReceiver:(PowensConnectHttpResponse<id> *)dispatchReceiver type:(PowensConnectKtor_utilsTypeInfo *)type suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__47__typedBody(dispatchReceiver:type:suspendHandler:)")));
+ (void)Skie_Suspend__48__executeDispatchReceiver:(id<PowensConnectKtor_client_coreHttpClientEngine>)dispatchReceiver data:(PowensConnectKtor_client_coreHttpRequestData *)data suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__48__execute(dispatchReceiver:data:suspendHandler:)")));
+ (void)Skie_Suspend__49__bodyDispatchReceiver:(PowensConnectKtor_client_coreHttpClientCall *)dispatchReceiver info:(PowensConnectKtor_utilsTypeInfo *)info suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__49__body(dispatchReceiver:info:suspendHandler:)")));
+ (void)Skie_Suspend__4__manageFlowDispatchReceiver:(PowensConnectWebviewLauncher *)dispatchReceiver accessToken:(NSString *)accessToken connectionId:(PowensConnectLong * _Nullable)connectionId state:(NSString * _Nullable)state options:(PowensConnectWebviewManageOptions * _Nullable)options suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__4__manageFlow(dispatchReceiver:accessToken:connectionId:state:options:suspendHandler:)")));
+ (void)Skie_Suspend__50__bodyNullableDispatchReceiver:(PowensConnectKtor_client_coreHttpClientCall *)dispatchReceiver info:(PowensConnectKtor_utilsTypeInfo *)info suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__50__bodyNullable(dispatchReceiver:info:suspendHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
+ (void)Skie_Suspend__51__getResponseContentDispatchReceiver:(PowensConnectKtor_client_coreHttpClientCall *)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__51__getResponseContent(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__52__awaitContentDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__52__awaitContent(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__53__discardDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver max:(int64_t)max suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__53__discard(dispatchReceiver:max:suspendHandler:)")));
+ (void)Skie_Suspend__54__peekToDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver destination:(PowensConnectKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__54__peekTo(dispatchReceiver:destination:destinationOffset:offset:min:max:suspendHandler:)")));
+ (void)Skie_Suspend__55__readAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(PowensConnectKtor_ioChunkBuffer *)dst suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__55__readAvailable(dispatchReceiver:dst:suspendHandler:)")));
+ (void)Skie_Suspend__56__readAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(PowensConnectKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__56__readAvailable(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__57__readAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__57__readAvailable(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__58__readAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int64_t)offset length:(int64_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__58__readAvailable(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__59__readBooleanDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__59__readBoolean(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__5__reconnectFlowDispatchReceiver:(PowensConnectWebviewLauncher *)dispatchReceiver accessToken:(NSString *)accessToken connectionId:(int64_t)connectionId resetCredentials:(BOOL)resetCredentials state:(NSString * _Nullable)state suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__5__reconnectFlow(dispatchReceiver:accessToken:connectionId:resetCredentials:state:suspendHandler:)")));
+ (void)Skie_Suspend__60__readByteDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__60__readByte(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__61__readDoubleDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__61__readDouble(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__62__readFloatDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__62__readFloat(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__63__readFullyDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(PowensConnectKtor_ioChunkBuffer *)dst n:(int32_t)n suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__63__readFully(dispatchReceiver:dst:n:suspendHandler:)")));
+ (void)Skie_Suspend__64__readFullyDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(PowensConnectKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__64__readFully(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__65__readFullyDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__65__readFully(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__66__readFullyDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver dst:(void *)dst offset:(int64_t)offset length:(int64_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__66__readFully(dispatchReceiver:dst:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__67__readIntDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__67__readInt(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__68__readLongDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__68__readLong(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__69__readPacketDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver size:(int32_t)size suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__69__readPacket(dispatchReceiver:size:suspendHandler:)")));
+ (void)Skie_Suspend__6__buildConnectUrlDispatchReceiver:(PowensConnectWebviewClient *)dispatchReceiver accessToken:(NSString * _Nullable)accessToken redirectUri:(NSString *)redirectUri state:(NSString * _Nullable)state options:(PowensConnectWebviewConnectOptions * _Nullable)options suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__6__buildConnectUrl(dispatchReceiver:accessToken:redirectUri:state:options:suspendHandler:)")));
+ (void)Skie_Suspend__70__readRemainingDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver limit:(int64_t)limit suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__70__readRemaining(dispatchReceiver:limit:suspendHandler:)")));
+ (void)Skie_Suspend__71__readShortDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__71__readShort(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__72__readSuspendableSessionDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver consumer:(id<PowensConnectKotlinSuspendFunction1>)consumer suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__72__readSuspendableSession(dispatchReceiver:consumer:suspendHandler:)")));
+ (void)Skie_Suspend__73__readUTF8LineDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver limit:(int32_t)limit suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__73__readUTF8Line(dispatchReceiver:limit:suspendHandler:)")));
+ (void)Skie_Suspend__74__readUTF8LineToDispatchReceiver:(id<PowensConnectKtor_ioByteReadChannel>)dispatchReceiver out:(id<PowensConnectKotlinAppendable>)out limit:(int32_t)limit suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__74__readUTF8LineTo(dispatchReceiver:out:limit:suspendHandler:)")));
+ (void)Skie_Suspend__75__upgradeDispatchReceiver:(PowensConnectKtor_httpOutgoingContentProtocolUpgrade *)dispatchReceiver input:(id<PowensConnectKtor_ioByteReadChannel>)input output:(id<PowensConnectKtor_ioByteWriteChannel>)output engineContext:(id<PowensConnectKotlinCoroutineContext>)engineContext userContext:(id<PowensConnectKotlinCoroutineContext>)userContext suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__75__upgrade(dispatchReceiver:input:output:engineContext:userContext:suspendHandler:)")));
+ (void)Skie_Suspend__76__writeToDispatchReceiver:(PowensConnectKtor_httpOutgoingContentWriteChannelContent *)dispatchReceiver channel:(id<PowensConnectKtor_ioByteWriteChannel>)channel suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__76__writeTo(dispatchReceiver:channel:suspendHandler:)")));
+ (void)Skie_Suspend__77__executeDispatchReceiver:(PowensConnectKtor_utilsPipeline<id, id> *)dispatchReceiver context:(id)context subject:(id)subject suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__77__execute(dispatchReceiver:context:subject:suspendHandler:)")));
+ (void)Skie_Suspend__78__invokeDispatchReceiver:(id<PowensConnectKotlinSuspendFunction1>)dispatchReceiver p1:(id _Nullable)p1 suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__78__invoke(dispatchReceiver:p1:suspendHandler:)")));
+ (void)Skie_Suspend__79__awaitFreeSpaceDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__79__awaitFreeSpace(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__7__buildManageUrlDispatchReceiver:(PowensConnectWebviewClient *)dispatchReceiver connectionId:(PowensConnectLong * _Nullable)connectionId accessToken:(NSString *)accessToken redirectUri:(NSString * _Nullable)redirectUri state:(NSString * _Nullable)state options:(PowensConnectWebviewManageOptions * _Nullable)options suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__7__buildManageUrl(dispatchReceiver:connectionId:accessToken:redirectUri:state:options:suspendHandler:)")));
+ (void)Skie_Suspend__80__writeAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(PowensConnectKtor_ioChunkBuffer *)src suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__80__writeAvailable(dispatchReceiver:src:suspendHandler:)")));
+ (void)Skie_Suspend__81__writeAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(PowensConnectKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__81__writeAvailable(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__82__writeAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__82__writeAvailable(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__83__writeAvailableDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int64_t)offset length:(int64_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__83__writeAvailable(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__84__writeByteDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver b:(int8_t)b suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__84__writeByte(dispatchReceiver:b:suspendHandler:)")));
+ (void)Skie_Suspend__85__writeDoubleDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver d:(double)d suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__85__writeDouble(dispatchReceiver:d:suspendHandler:)")));
+ (void)Skie_Suspend__86__writeFloatDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver f:(float)f suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__86__writeFloat(dispatchReceiver:f:suspendHandler:)")));
+ (void)Skie_Suspend__87__writeFullyDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver memory:(PowensConnectKtor_ioMemory *)memory startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__87__writeFully(dispatchReceiver:memory:startIndex:endIndex:suspendHandler:)")));
+ (void)Skie_Suspend__88__writeFullyDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(PowensConnectKtor_ioBuffer *)src suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__88__writeFully(dispatchReceiver:src:suspendHandler:)")));
+ (void)Skie_Suspend__89__writeFullyDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(PowensConnectKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__89__writeFully(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__8__buildReconnectUrlDispatchReceiver:(PowensConnectWebviewClient *)dispatchReceiver connectionId:(int64_t)connectionId resetCredentials:(BOOL)resetCredentials accessToken:(NSString *)accessToken redirectUri:(NSString *)redirectUri state:(NSString * _Nullable)state suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__8__buildReconnectUrl(dispatchReceiver:connectionId:resetCredentials:accessToken:redirectUri:state:suspendHandler:)")));
+ (void)Skie_Suspend__90__writeFullyDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int32_t)offset length:(int32_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__90__writeFully(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__91__writeFullyDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver src:(void *)src offset:(int64_t)offset length:(int64_t)length suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__91__writeFully(dispatchReceiver:src:offset:length:suspendHandler:)")));
+ (void)Skie_Suspend__92__writeIntDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver i:(int32_t)i suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__92__writeInt(dispatchReceiver:i:suspendHandler:)")));
+ (void)Skie_Suspend__93__writeLongDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver l:(int64_t)l suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__93__writeLong(dispatchReceiver:l:suspendHandler:)")));
+ (void)Skie_Suspend__94__writePacketDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver packet:(PowensConnectKtor_ioByteReadPacket *)packet suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__94__writePacket(dispatchReceiver:packet:suspendHandler:)")));
+ (void)Skie_Suspend__95__writeShortDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver s:(int16_t)s suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__95__writeShort(dispatchReceiver:s:suspendHandler:)")));
+ (void)Skie_Suspend__96__writeSuspendSessionDispatchReceiver:(id<PowensConnectKtor_ioByteWriteChannel>)dispatchReceiver visitor:(id<PowensConnectKotlinSuspendFunction1>)visitor suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__96__writeSuspendSession(dispatchReceiver:visitor:suspendHandler:)")));
+ (void)Skie_Suspend__97__joinDispatchReceiver:(id<PowensConnectKotlinx_coroutines_coreJob>)dispatchReceiver suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__97__join(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__98__invokeDispatchReceiver:(id<PowensConnectKotlinSuspendFunction2>)dispatchReceiver p1:(id _Nullable)p1 p2:(id _Nullable)p2 suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__98__invoke(dispatchReceiver:p1:p2:suspendHandler:)")));
+ (void)Skie_Suspend__9__exchangeAccessTokenDispatchReceiver:(PowensConnectAuthenticationApi *)dispatchReceiver exchangeAccessTokenRequest:(PowensConnectExchangeAccessTokenRequest * _Nullable)exchangeAccessTokenRequest suspendHandler:(PowensConnectSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__9__exchangeAccessToken(dispatchReceiver:exchangeAccessTokenRequest:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface PowensConnect__SkieTypeExportsKt : PowensConnectBase
+ (void)skieTypeExports_0P0:(PowensConnectKtor_httpPartDataBinaryChannelItem *)p0 p1:(PowensConnectKtor_httpPartDataBinaryItem *)p1 p2:(PowensConnectKtor_httpPartDataFileItem *)p2 p3:(PowensConnectKtor_httpPartDataFormItem *)p3 p4:(PowensConnectKotlinx_serialization_jsonJsonPrimitive *)p4 p5:(PowensConnectKotlinx_serialization_jsonJsonNull *)p5 p6:(PowensConnectKotlinx_serialization_corePolymorphicKind *)p6 p7:(PowensConnectKotlinx_serialization_corePrimitiveKind *)p7 p8:(PowensConnectKotlinx_serialization_coreSerialKindCONTEXTUAL *)p8 p9:(PowensConnectKotlinx_serialization_coreSerialKindENUM *)p9 p10:(PowensConnectKotlinx_serialization_coreStructureKind *)p10 p11:(PowensConnectKotlinx_serialization_corePolymorphicKindOPEN *)p11 p12:(PowensConnectKotlinx_serialization_corePolymorphicKindSEALED *)p12 p13:(PowensConnectKotlinx_serialization_corePrimitiveKindBOOLEAN *)p13 p14:(PowensConnectKotlinx_serialization_corePrimitiveKindBYTE *)p14 p15:(PowensConnectKotlinx_serialization_corePrimitiveKindCHAR *)p15 p16:(PowensConnectKotlinx_serialization_corePrimitiveKindDOUBLE *)p16 p17:(PowensConnectKotlinx_serialization_corePrimitiveKindFLOAT *)p17 p18:(PowensConnectKotlinx_serialization_corePrimitiveKindINT *)p18 p19:(PowensConnectKotlinx_serialization_corePrimitiveKindLONG *)p19 p20:(PowensConnectKotlinx_serialization_corePrimitiveKindSHORT *)p20 p21:(PowensConnectKotlinx_serialization_corePrimitiveKindSTRING *)p21 p22:(PowensConnectKotlinx_serialization_coreStructureKindCLASS *)p22 p23:(PowensConnectKotlinx_serialization_coreStructureKindLIST *)p23 p24:(PowensConnectKotlinx_serialization_coreStructureKindMAP *)p24 p25:(PowensConnectKotlinx_serialization_coreStructureKindOBJECT *)p25 p26:(PowensConnectKtor_httpOutgoingContentByteArrayContent *)p26 p27:(PowensConnectKtor_httpOutgoingContentNoContent *)p27 p28:(PowensConnectKtor_httpOutgoingContentProtocolUpgrade *)p28 p29:(PowensConnectKtor_httpOutgoingContentReadChannelContent *)p29 p30:(PowensConnectKtor_httpOutgoingContentWriteChannelContent *)p30 p31:(id<PowensConnectKotlinx_coroutines_coreSelectClause1>)p31 p32:(id<PowensConnectKotlinx_coroutines_coreSelectClause2>)p32 __attribute__((swift_name("skieTypeExports_0(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:p20:p21:p22:p23:p24:p25:p26:p27:p28:p29:p30:p31:p32:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface PowensConnectKotlinRuntimeException : PowensConnectKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PowensConnectKotlinIllegalStateException : PowensConnectKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface PowensConnectKotlinCancellationException : PowensConnectKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol PowensConnectKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface PowensConnectKotlinIllegalArgumentException : PowensConnectKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PowensConnectKotlinArray<T> : PowensConnectBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PowensConnectInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PowensConnectKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface PowensConnectKtor_httpHttpStatusCode : PowensConnectBase <PowensConnectKotlinComparable>
@property (class, readonly, getter=companion) PowensConnectKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(PowensConnectKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (PowensConnectKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (PowensConnectKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_client_coreResponseException")))
@interface PowensConnectKtor_client_coreResponseException : PowensConnectKotlinIllegalStateException
@property (readonly) PowensConnectKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
- (instancetype)initWithResponse:(PowensConnectKtor_client_coreHttpResponse *)response __attribute__((swift_name("init(response:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Please, provide response text in constructor")));
- (instancetype)initWithResponse:(PowensConnectKtor_client_coreHttpResponse *)response cachedResponseText:(NSString *)cachedResponseText __attribute__((swift_name("init(response:cachedResponseText:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol PowensConnectKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface PowensConnectKtor_client_coreHttpClient : PowensConnectBase <PowensConnectKotlinx_coroutines_coreCoroutineScope, PowensConnectKtor_ioCloseable>
@property (readonly) id<PowensConnectKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<PowensConnectKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<PowensConnectKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) PowensConnectKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) PowensConnectKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) PowensConnectKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) PowensConnectKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) PowensConnectKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) PowensConnectKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
- (instancetype)initWithEngine:(id<PowensConnectKtor_client_coreHttpClientEngine>)engine userConfig:(PowensConnectKtor_client_coreHttpClientConfig<PowensConnectKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (PowensConnectKtor_client_coreHttpClient *)configBlock:(void (^)(PowensConnectKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<PowensConnectKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol PowensConnectKtor_client_coreHttpClientEngine <PowensConnectKotlinx_coroutines_coreCoroutineScope, PowensConnectKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(PowensConnectKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(PowensConnectKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(PowensConnectKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) PowensConnectKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) PowensConnectKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<PowensConnectKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface PowensConnectKtor_client_coreHttpClientConfig<T> : PowensConnectBase
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PowensConnectKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(PowensConnectKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<PowensConnectKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(PowensConnectKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(PowensConnectKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol PowensConnectKotlinx_serialization_coreSerialFormat
@required
@property (readonly) PowensConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol PowensConnectKotlinx_serialization_coreStringFormat <PowensConnectKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface PowensConnectKotlinx_serialization_jsonJson : PowensConnectBase <PowensConnectKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) PowensConnectKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) PowensConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(PowensConnectKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (PowensConnectKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (PowensConnectKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@end

__attribute__((swift_name("Ktor_httpPartData")))
@interface PowensConnectKtor_httpPartData : PowensConnectBase
@property (readonly) PowensConnectKtor_httpContentDisposition * _Nullable contentDisposition __attribute__((swift_name("contentDisposition")));
@property (readonly) PowensConnectKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) void (^dispose)(void) __attribute__((swift_name("dispose")));
@property (readonly) id<PowensConnectKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) id<PowensConnectKtor_httpHeaders> partHeaders __attribute__((swift_name("partHeaders"))) __attribute__((unavailable("Use headers property instead")));
@property (readonly) NSString * _Nullable partName __attribute__((swift_name("partName"))) __attribute__((unavailable("Use name property instead")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol PowensConnectKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PowensConnectKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol PowensConnectKtor_httpParameters <PowensConnectKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PowensConnectKotlinUnit : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinUnit *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PowensConnectKotlinEnumCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime")))
@interface PowensConnectKotlinx_datetimeLocalDateTime : PowensConnectBase <PowensConnectKotlinComparable>
@property (class, readonly, getter=companion) PowensConnectKotlinx_datetimeLocalDateTimeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PowensConnectKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) PowensConnectKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@property (readonly) PowensConnectKotlinx_datetimeLocalTime *time __attribute__((swift_name("time")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (instancetype)initWithDate:(PowensConnectKotlinx_datetimeLocalDate *)date time:(PowensConnectKotlinx_datetimeLocalTime *)time __attribute__((swift_name("init(date:time:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:monthNumber:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(PowensConnectKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(PowensConnectKotlinx_datetimeLocalDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PowensConnectKotlinByteArray : PowensConnectBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PowensConnectByte *(^)(PowensConnectInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PowensConnectKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PowensConnectKotlinx_serialization_coreEncoder
@required
- (id<PowensConnectKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PowensConnectKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PowensConnectKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PowensConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PowensConnectKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PowensConnectKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<PowensConnectKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) PowensConnectKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PowensConnectKotlinx_serialization_coreDecoder
@required
- (id<PowensConnectKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PowensConnectKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (PowensConnectKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PowensConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface PowensConnectKtor_utilsTypeInfo : PowensConnectBase
@property (readonly) id<PowensConnectKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<PowensConnectKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<PowensConnectKotlinKClass> type __attribute__((swift_name("type")));
- (instancetype)initWithType:(id<PowensConnectKotlinKClass>)type reifiedType:(id<PowensConnectKotlinKType>)reifiedType kotlinType:(id<PowensConnectKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKtor_utilsTypeInfo *)doCopyType:(id<PowensConnectKotlinKClass>)type reifiedType:(id<PowensConnectKotlinKType>)reifiedType kotlinType:(id<PowensConnectKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface PowensConnectKotlinx_datetimeLocalDate : PowensConnectBase <PowensConnectKotlinComparable>
@property (class, readonly, getter=companion) PowensConnectKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PowensConnectKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) PowensConnectKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(PowensConnectKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(PowensConnectKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface PowensConnectKotlinx_datetimeMonth : PowensConnectKotlinEnum<PowensConnectKotlinx_datetimeMonth *>
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PowensConnectKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
@property (class, readonly) NSArray<PowensConnectKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol PowensConnectKtor_httpHeaders <PowensConnectKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PowensConnectKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PowensConnectKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PowensConnectKotlinCoroutineContextElement> _Nullable)getKey:(id<PowensConnectKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PowensConnectKotlinCoroutineContext>)minusKeyKey:(id<PowensConnectKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PowensConnectKotlinCoroutineContext>)plusContext:(id<PowensConnectKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface PowensConnectKtor_client_coreHttpClientCall : PowensConnectBase <PowensConnectKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) PowensConnectKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<PowensConnectKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PowensConnectKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<PowensConnectKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<PowensConnectKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property PowensConnectKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
- (instancetype)initWithClient:(PowensConnectKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(PowensConnectKtor_client_coreHttpClient *)client requestData:(PowensConnectKtor_client_coreHttpRequestData *)requestData responseData:(PowensConnectKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(PowensConnectKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(PowensConnectKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<PowensConnectKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol PowensConnectKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(PowensConnectLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(PowensConnectKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(PowensConnectLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PowensConnectKtor_ioChunkBuffer *)dst completionHandler:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(PowensConnectKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PowensConnectKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(PowensConnectBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(PowensConnectByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(PowensConnectDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(PowensConnectFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PowensConnectKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PowensConnectKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(PowensConnectLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(PowensConnectKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(PowensConnectKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<PowensConnectKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(PowensConnectShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<PowensConnectKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<PowensConnectKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(PowensConnectBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) PowensConnectKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface PowensConnectKtor_utilsGMTDate : PowensConnectBase <PowensConnectKotlinComparable>
@property (class, readonly, getter=companion) PowensConnectKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PowensConnectKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) PowensConnectKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (int32_t)compareToOther:(PowensConnectKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (PowensConnectKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(PowensConnectKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(PowensConnectKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface PowensConnectKtor_httpHttpProtocolVersion : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface PowensConnectKtor_client_coreHttpRequestData : PowensConnectBase
@property (readonly) id<PowensConnectKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PowensConnectKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<PowensConnectKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PowensConnectKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PowensConnectKtor_httpUrl *url __attribute__((swift_name("url")));
- (instancetype)initWithUrl:(PowensConnectKtor_httpUrl *)url method:(PowensConnectKtor_httpHttpMethod *)method headers:(id<PowensConnectKtor_httpHeaders>)headers body:(PowensConnectKtor_httpOutgoingContent *)body executionContext:(id<PowensConnectKotlinx_coroutines_coreJob>)executionContext attributes:(id<PowensConnectKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<PowensConnectKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface PowensConnectKtor_ioMemory : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
- (void)doCopyToDestination:(PowensConnectKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(PowensConnectKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (PowensConnectKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (PowensConnectKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface PowensConnectKtor_ioBuffer : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) PowensConnectKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
- (instancetype)initWithMemory:(PowensConnectKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (PowensConnectKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(PowensConnectKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface PowensConnectKtor_ioChunkBuffer : PowensConnectKtor_ioBuffer
@property (class, readonly, getter=companion) PowensConnectKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
@property PowensConnectKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) PowensConnectKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
- (instancetype)initWithMemory:(PowensConnectKtor_ioMemory *)memory origin:(PowensConnectKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<PowensConnectKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(PowensConnectKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PowensConnectKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (PowensConnectKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<PowensConnectKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol PowensConnectKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol PowensConnectKotlinSuspendFunction1 <PowensConnectKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol PowensConnectKotlinAppendable
@required
- (id<PowensConnectKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<PowensConnectKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<PowensConnectKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface PowensConnectKtor_httpOutgoingContent : PowensConnectBase
@property (readonly) PowensConnectLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) PowensConnectKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<PowensConnectKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
- (id _Nullable)getPropertyKey:(PowensConnectKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(PowensConnectKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<PowensConnectKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ProtocolUpgrade")))
@interface PowensConnectKtor_httpOutgoingContentProtocolUpgrade : PowensConnectKtor_httpOutgoingContent
@property (readonly) PowensConnectKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upgradeInput:(id<PowensConnectKtor_ioByteReadChannel>)input output:(id<PowensConnectKtor_ioByteWriteChannel>)output engineContext:(id<PowensConnectKotlinCoroutineContext>)engineContext userContext:(id<PowensConnectKotlinCoroutineContext>)userContext completionHandler:(void (^)(id<PowensConnectKotlinx_coroutines_coreJob> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upgrade(input:output:engineContext:userContext:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_ioByteWriteChannel")))
@protocol PowensConnectKtor_ioByteWriteChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitFreeSpaceWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitFreeSpace(completionHandler:)")));
- (BOOL)closeCause:(PowensConnectKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)flush __attribute__((swift_name("flush()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(PowensConnectKtor_ioChunkBuffer *)src completionHandler:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:completionHandler:)")));
- (int32_t)writeAvailableMin:(int32_t)min block:(void (^)(PowensConnectKtor_ioBuffer *))block __attribute__((swift_name("writeAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(PowensConnectKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(void *)src offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeAvailableSrc:(void *)src offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(PowensConnectInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("writeAvailable(src:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeByteB:(int8_t)b completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeByte(b:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeDoubleD:(double)d completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeDouble(d:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFloatF:(float)f completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFloat(f:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(PowensConnectKtor_ioBuffer *)src completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullyMemory:(PowensConnectKtor_ioMemory *)memory startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(memory:startIndex:endIndex:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(PowensConnectKotlinByteArray *)src offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(void *)src offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeFullySrc:(void *)src offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeFully(src:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeIntI:(int32_t)i completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeInt(i:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeLongL:(int64_t)l completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeLong(l:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writePacketPacket:(PowensConnectKtor_ioByteReadPacket *)packet completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writePacket(packet:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeShortS:(int16_t)s completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeShort(s:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeSuspendSessionVisitor:(id<PowensConnectKotlinSuspendFunction1>)visitor completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeSuspendSession(visitor:completionHandler:)"))) __attribute__((deprecated("Use write { } instead.")));
@property (readonly) BOOL autoFlush __attribute__((swift_name("autoFlush")));
@property (readonly) int32_t availableForWrite __attribute__((swift_name("availableForWrite")));
@property (readonly) PowensConnectKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesWritten __attribute__((swift_name("totalBytesWritten")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.WriteChannelContent")))
@interface PowensConnectKtor_httpOutgoingContentWriteChannelContent : PowensConnectKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeToChannel:(id<PowensConnectKtor_ioByteWriteChannel>)channel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeTo(channel:completionHandler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface PowensConnectKtor_utilsPipeline<TSubject, TContext> : PowensConnectBase
@property (readonly) id<PowensConnectKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<PowensConnectKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
- (instancetype)initWithPhases:(PowensConnectKotlinArray<PowensConnectKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PowensConnectKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PowensConnectKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(PowensConnectKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(PowensConnectKtor_utilsPipelinePhase *)reference phase:(PowensConnectKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(PowensConnectKtor_utilsPipelinePhase *)reference phase:(PowensConnectKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(PowensConnectKtor_utilsPipelinePhase *)phase block:(id<PowensConnectKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<PowensConnectKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(PowensConnectKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(PowensConnectKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(PowensConnectKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(PowensConnectKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface PowensConnectKtor_ioInput : PowensConnectBase <PowensConnectKtor_ioCloseable>
@property (class, readonly, getter=companion) PowensConnectKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<PowensConnectKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
- (instancetype)initWithHead:(PowensConnectKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PowensConnectKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PowensConnectKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PowensConnectKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(PowensConnectKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(PowensConnectKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<PowensConnectKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<PowensConnectKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface PowensConnectKtor_ioByteReadPacket : PowensConnectKtor_ioInput
@property (class, readonly, getter=companion) PowensConnectKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)initWithHead:(PowensConnectKtor_ioChunkBuffer *)head pool:(id<PowensConnectKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(PowensConnectKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PowensConnectKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (PowensConnectKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PowensConnectKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PowensConnectKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PowensConnectKotlinCoroutineContextElement <PowensConnectKotlinCoroutineContext>
@required
@property (readonly) id<PowensConnectKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol PowensConnectKotlinx_coroutines_coreJob <PowensConnectKotlinCoroutineContextElement>
@required
- (id<PowensConnectKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<PowensConnectKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(PowensConnectKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (PowensConnectKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<PowensConnectKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(PowensConnectKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<PowensConnectKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PowensConnectKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<PowensConnectKotlinx_coroutines_coreJob>)plusOther:(id<PowensConnectKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<PowensConnectKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<PowensConnectKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol PowensConnectKotlinSuspendFunction2 <PowensConnectKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpPartData.BinaryChannelItem")))
@interface PowensConnectKtor_httpPartDataBinaryChannelItem : PowensConnectKtor_httpPartData
@property (readonly) id<PowensConnectKtor_ioByteReadChannel> (^provider)(void) __attribute__((swift_name("provider")));
- (instancetype)initWithProvider:(id<PowensConnectKtor_ioByteReadChannel> (^)(void))provider partHeaders:(id<PowensConnectKtor_httpHeaders>)partHeaders __attribute__((swift_name("init(provider:partHeaders:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpPartData.BinaryItem")))
@interface PowensConnectKtor_httpPartDataBinaryItem : PowensConnectKtor_httpPartData
@property (readonly) PowensConnectKtor_ioInput *(^provider)(void) __attribute__((swift_name("provider")));
- (instancetype)initWithProvider:(PowensConnectKtor_ioInput *(^)(void))provider dispose:(void (^)(void))dispose partHeaders:(id<PowensConnectKtor_httpHeaders>)partHeaders __attribute__((swift_name("init(provider:dispose:partHeaders:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpPartData.FileItem")))
@interface PowensConnectKtor_httpPartDataFileItem : PowensConnectKtor_httpPartData
@property (readonly) NSString * _Nullable originalFileName __attribute__((swift_name("originalFileName")));
@property (readonly) PowensConnectKtor_ioInput *(^provider)(void) __attribute__((swift_name("provider")));
- (instancetype)initWithProvider:(PowensConnectKtor_ioInput *(^)(void))provider dispose:(void (^)(void))dispose partHeaders:(id<PowensConnectKtor_httpHeaders>)partHeaders __attribute__((swift_name("init(provider:dispose:partHeaders:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpPartData.FormItem")))
@interface PowensConnectKtor_httpPartDataFormItem : PowensConnectKtor_httpPartData
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(NSString *)value dispose:(void (^)(void))dispose partHeaders:(id<PowensConnectKtor_httpHeaders>)partHeaders __attribute__((swift_name("init(value:dispose:partHeaders:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface PowensConnectKotlinx_serialization_jsonJsonElement : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonPrimitiveSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive")))
@interface PowensConnectKotlinx_serialization_jsonJsonPrimitive : PowensConnectKotlinx_serialization_jsonJsonElement
@property (class, readonly, getter=companion) PowensConnectKotlinx_serialization_jsonJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonNullSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNull")))
@interface PowensConnectKotlinx_serialization_jsonJsonNull : PowensConnectKotlinx_serialization_jsonJsonPrimitive
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_jsonJsonNull *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PowensConnectKotlinArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PowensConnectKotlinx_serialization_coreSerialKind : PowensConnectBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface PowensConnectKotlinx_serialization_corePolymorphicKind : PowensConnectKotlinx_serialization_coreSerialKind
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKind : PowensConnectKotlinx_serialization_coreSerialKind
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface PowensConnectKotlinx_serialization_coreSerialKindCONTEXTUAL : PowensConnectKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface PowensConnectKotlinx_serialization_coreSerialKindENUM : PowensConnectKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface PowensConnectKotlinx_serialization_coreStructureKind : PowensConnectKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface PowensConnectKotlinx_serialization_corePolymorphicKindOPEN : PowensConnectKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface PowensConnectKotlinx_serialization_corePolymorphicKindSEALED : PowensConnectKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindBOOLEAN : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindBYTE : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindCHAR : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindDOUBLE : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindFLOAT : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindINT : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindLONG : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindSHORT : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface PowensConnectKotlinx_serialization_corePrimitiveKindSTRING : PowensConnectKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface PowensConnectKotlinx_serialization_coreStructureKindCLASS : PowensConnectKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface PowensConnectKotlinx_serialization_coreStructureKindLIST : PowensConnectKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface PowensConnectKotlinx_serialization_coreStructureKindMAP : PowensConnectKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface PowensConnectKotlinx_serialization_coreStructureKindOBJECT : PowensConnectKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ByteArrayContent")))
@interface PowensConnectKtor_httpOutgoingContentByteArrayContent : PowensConnectKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PowensConnectKotlinByteArray *)bytes __attribute__((swift_name("bytes()")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.NoContent")))
@interface PowensConnectKtor_httpOutgoingContentNoContent : PowensConnectKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent.ReadChannelContent")))
@interface PowensConnectKtor_httpOutgoingContentReadChannelContent : PowensConnectKtor_httpOutgoingContent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<PowensConnectKtor_ioByteReadChannel>)readFrom __attribute__((swift_name("readFrom()")));
- (id<PowensConnectKtor_ioByteReadChannel>)readFromRange:(PowensConnectKotlinLongRange *)range __attribute__((swift_name("readFrom(range:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol PowensConnectKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) PowensConnectKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<PowensConnectKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(PowensConnectKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<PowensConnectKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause1")))
@protocol PowensConnectKotlinx_coroutines_coreSelectClause1 <PowensConnectKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause2")))
@protocol PowensConnectKotlinx_coroutines_coreSelectClause2 <PowensConnectKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PowensConnectKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface PowensConnectKtor_httpHttpStatusCodeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<PowensConnectKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface PowensConnectKtor_client_coreHttpClientEngineConfig : PowensConnectBase
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property PowensConnectKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((deprecated("The [threadsCount] property is deprecated. The [Dispatchers.IO] is used by default.")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol PowensConnectKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol PowensConnectKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(PowensConnectKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(PowensConnectKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(PowensConnectKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(PowensConnectKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(PowensConnectKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(PowensConnectKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(PowensConnectKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(PowensConnectKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<PowensConnectKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface PowensConnectKtor_eventsEvents : PowensConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(PowensConnectKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<PowensConnectKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(PowensConnectKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(PowensConnectKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface PowensConnectKtor_client_coreHttpReceivePipeline : PowensConnectKtor_utilsPipeline<PowensConnectKtor_client_coreHttpResponse *, PowensConnectKotlinUnit *>
@property (class, readonly, getter=companion) PowensConnectKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PowensConnectKotlinArray<PowensConnectKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PowensConnectKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PowensConnectKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface PowensConnectKtor_client_coreHttpRequestPipeline : PowensConnectKtor_utilsPipeline<id, PowensConnectKtor_client_coreHttpRequestBuilder *>
@property (class, readonly, getter=companion) PowensConnectKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PowensConnectKotlinArray<PowensConnectKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PowensConnectKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PowensConnectKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface PowensConnectKtor_client_coreHttpResponsePipeline : PowensConnectKtor_utilsPipeline<PowensConnectKtor_client_coreHttpResponseContainer *, PowensConnectKtor_client_coreHttpClientCall *>
@property (class, readonly, getter=companion) PowensConnectKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PowensConnectKotlinArray<PowensConnectKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PowensConnectKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PowensConnectKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface PowensConnectKtor_client_coreHttpSendPipeline : PowensConnectKtor_utilsPipeline<id, PowensConnectKtor_client_coreHttpRequestBuilder *>
@property (class, readonly, getter=companion) PowensConnectKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PowensConnectKotlinArray<PowensConnectKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PowensConnectKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PowensConnectKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface PowensConnectKtor_client_coreHttpResponseData : PowensConnectBase
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<PowensConnectKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<PowensConnectKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PowensConnectKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PowensConnectKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PowensConnectKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) PowensConnectKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
- (instancetype)initWithStatusCode:(PowensConnectKtor_httpHttpStatusCode *)statusCode requestTime:(PowensConnectKtor_utilsGMTDate *)requestTime headers:(id<PowensConnectKtor_httpHeaders>)headers version:(PowensConnectKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<PowensConnectKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface PowensConnectKotlinAbstractCoroutineContextElement : PowensConnectBase <PowensConnectKotlinCoroutineContextElement>
@property (readonly) id<PowensConnectKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
- (instancetype)initWithKey:(id<PowensConnectKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol PowensConnectKotlinContinuationInterceptor <PowensConnectKotlinCoroutineContextElement>
@required
- (id<PowensConnectKotlinContinuation>)interceptContinuationContinuation:(id<PowensConnectKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<PowensConnectKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface PowensConnectKotlinx_coroutines_coreCoroutineDispatcher : PowensConnectKotlinAbstractCoroutineContextElement <PowensConnectKotlinContinuationInterceptor>
@property (class, readonly, getter=companion) PowensConnectKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<PowensConnectKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<PowensConnectKotlinCoroutineContext>)context block:(id<PowensConnectKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<PowensConnectKotlinCoroutineContext>)context block:(id<PowensConnectKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<PowensConnectKotlinContinuation>)interceptContinuationContinuation:(id<PowensConnectKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<PowensConnectKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (PowensConnectKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (PowensConnectKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(PowensConnectKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<PowensConnectKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol PowensConnectKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(PowensConnectKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) PowensConnectKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PowensConnectKotlinx_serialization_coreSerializersModule : PowensConnectBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PowensConnectKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PowensConnectKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PowensConnectKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PowensConnectKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PowensConnectKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PowensConnectKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PowensConnectKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface PowensConnectKotlinx_serialization_jsonJsonDefault : PowensConnectKotlinx_serialization_jsonJson
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface PowensConnectKotlinx_serialization_jsonJsonConfiguration : PowensConnectBase
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) id<PowensConnectKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface PowensConnectKtor_httpHeaderValueWithParameters : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<PowensConnectKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PowensConnectKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentDisposition")))
@interface PowensConnectKtor_httpContentDisposition : PowensConnectKtor_httpHeaderValueWithParameters
@property (class, readonly, getter=companion) PowensConnectKtor_httpContentDispositionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *disposition __attribute__((swift_name("disposition")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
- (instancetype)initWithDisposition:(NSString *)disposition parameters:(NSArray<PowensConnectKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(disposition:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PowensConnectKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PowensConnectKtor_httpContentDisposition *)withParameterKey:(NSString *)key value:(NSString *)value encodeValue:(BOOL)encodeValue __attribute__((swift_name("withParameter(key:value:encodeValue:)")));
- (PowensConnectKtor_httpContentDisposition *)withParametersNewParameters:(NSArray<PowensConnectKtor_httpHeaderValueParam *> *)newParameters __attribute__((swift_name("withParameters(newParameters:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface PowensConnectKtor_httpContentType : PowensConnectKtor_httpHeaderValueWithParameters
@property (class, readonly, getter=companion) PowensConnectKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<PowensConnectKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PowensConnectKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(PowensConnectKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (PowensConnectKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (PowensConnectKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol PowensConnectKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalTimeIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime")))
@interface PowensConnectKotlinx_datetimeLocalTime : PowensConnectBase <PowensConnectKotlinComparable>
@property (class, readonly, getter=companion) PowensConnectKotlinx_datetimeLocalTimeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
- (instancetype)initWithHour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(PowensConnectKotlinx_datetimeLocalTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toMillisecondOfDay __attribute__((swift_name("toMillisecondOfDay()")));
- (int64_t)toNanosecondOfDay __attribute__((swift_name("toNanosecondOfDay()")));
- (int32_t)toSecondOfDay __attribute__((swift_name("toSecondOfDay()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime.Companion")))
@interface PowensConnectKotlinx_datetimeLocalDateTimeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinx_datetimeLocalDateTimeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKotlinx_datetimeLocalDateTime *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface PowensConnectKotlinx_datetimeDayOfWeek : PowensConnectKotlinEnum<PowensConnectKotlinx_datetimeDayOfWeek *>
@property (class, readonly) PowensConnectKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) PowensConnectKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PowensConnectKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PowensConnectKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PowensConnectKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) PowensConnectKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PowensConnectKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) NSArray<PowensConnectKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface PowensConnectKotlinByteIterator : PowensConnectBase <PowensConnectKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PowensConnectByte *)next_ __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PowensConnectKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PowensConnectKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PowensConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PowensConnectKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PowensConnectKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PowensConnectKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PowensConnectKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PowensConnectKotlinNothing : PowensConnectBase
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PowensConnectKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PowensConnectKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PowensConnectKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PowensConnectKotlinKClass <PowensConnectKotlinKDeclarationContainer, PowensConnectKotlinKAnnotatedElement, PowensConnectKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol PowensConnectKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<PowensConnectKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<PowensConnectKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface PowensConnectKotlinx_datetimeLocalDateCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (PowensConnectKotlinx_datetimeLocalDate *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PowensConnectKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface PowensConnectKtor_client_coreHttpClientCallCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol PowensConnectKtor_client_coreHttpRequest <PowensConnectKtor_httpHttpMessage, PowensConnectKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<PowensConnectKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PowensConnectKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) PowensConnectKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) PowensConnectKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PowensConnectKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol PowensConnectKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (PowensConnectKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface PowensConnectKtor_utilsGMTDateCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_utilsGMTDate *START __attribute__((swift_name("START")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface PowensConnectKtor_utilsWeekDay : PowensConnectKotlinEnum<PowensConnectKtor_utilsWeekDay *>
@property (class, readonly, getter=companion) PowensConnectKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) PowensConnectKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PowensConnectKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PowensConnectKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PowensConnectKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) PowensConnectKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PowensConnectKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface PowensConnectKtor_utilsMonth : PowensConnectKotlinEnum<PowensConnectKtor_utilsMonth *>
@property (class, readonly, getter=companion) PowensConnectKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PowensConnectKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PowensConnectKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PowensConnectKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PowensConnectKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PowensConnectKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PowensConnectKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PowensConnectKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PowensConnectKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PowensConnectKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PowensConnectKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PowensConnectKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PowensConnectKtor_utilsMonth *december __attribute__((swift_name("december")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface PowensConnectKtor_httpHttpProtocolVersionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) PowensConnectKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) PowensConnectKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) PowensConnectKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) PowensConnectKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (PowensConnectKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface PowensConnectKtor_httpUrl : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PowensConnectKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) PowensConnectKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface PowensConnectKtor_httpHttpMethod : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface PowensConnectKtor_ioMemoryCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface PowensConnectKtor_ioBufferCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol PowensConnectKtor_ioObjectPool <PowensConnectKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose_ __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface PowensConnectKtor_ioChunkBufferCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<PowensConnectKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<PowensConnectKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface PowensConnectKtor_utilsAttributeKey<T> : PowensConnectBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface PowensConnectKtor_utilsPipelinePhase : PowensConnectBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface PowensConnectKtor_ioInputCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface PowensConnectKtor_ioByteReadPacketCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol PowensConnectKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose_ __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol PowensConnectKotlinx_coroutines_coreChildHandle <PowensConnectKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(PowensConnectKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol PowensConnectKotlinx_coroutines_coreChildJob <PowensConnectKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<PowensConnectKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol PowensConnectKotlinSequence
@required
- (id<PowensConnectKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol PowensConnectKotlinx_coroutines_coreSelectClause0 <PowensConnectKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface PowensConnectKotlinx_serialization_jsonJsonElementCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonPrimitive.Companion")))
@interface PowensConnectKotlinx_serialization_jsonJsonPrimitiveCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinx_serialization_jsonJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol PowensConnectKotlinIterable
@required
- (id<PowensConnectKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinLongProgression")))
@interface PowensConnectKotlinLongProgression : PowensConnectBase <PowensConnectKotlinIterable>
@property (class, readonly, getter=companion) PowensConnectKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly) int64_t step __attribute__((swift_name("step")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (PowensConnectKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol PowensConnectKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol PowensConnectKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface PowensConnectKotlinLongRange : PowensConnectKotlinLongProgression <PowensConnectKotlinClosedRange, PowensConnectKotlinOpenEndRange>
@property (class, readonly, getter=companion) PowensConnectKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PowensConnectLong *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Long type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) PowensConnectLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) PowensConnectLong *start __attribute__((swift_name("start")));
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsValue:(PowensConnectLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(PowensConnectLong *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol PowensConnectKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<PowensConnectKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<PowensConnectKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface PowensConnectKtor_client_coreProxyConfig : PowensConnectBase
@property (readonly) PowensConnectKtor_httpUrl *url __attribute__((swift_name("url")));
- (instancetype)initWithUrl:(PowensConnectKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface PowensConnectKtor_eventsEventDefinition<T> : PowensConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface PowensConnectKtor_client_coreHttpReceivePipelinePhases : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface PowensConnectKtor_client_coreHttpRequestPipelinePhases : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol PowensConnectKtor_httpHttpMessageBuilder
@required
@property (readonly) PowensConnectKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface PowensConnectKtor_client_coreHttpRequestBuilder : PowensConnectBase <PowensConnectKtor_httpHttpMessageBuilder>
@property (class, readonly, getter=companion) PowensConnectKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<PowensConnectKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property PowensConnectKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<PowensConnectKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) PowensConnectKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property PowensConnectKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PowensConnectKtor_httpURLBuilder *url __attribute__((swift_name("url")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PowensConnectKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<PowensConnectKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<PowensConnectKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<PowensConnectKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (PowensConnectKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(PowensConnectKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (PowensConnectKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(PowensConnectKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(PowensConnectKtor_httpURLBuilder *, PowensConnectKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface PowensConnectKtor_client_coreHttpResponsePipelinePhases : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface PowensConnectKtor_client_coreHttpResponseContainer : PowensConnectBase
@property (readonly) PowensConnectKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
- (instancetype)initWithExpectedType:(PowensConnectKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(PowensConnectKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface PowensConnectKtor_client_coreHttpSendPipelinePhases : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PowensConnectKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol PowensConnectKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<PowensConnectKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface PowensConnectKotlinAbstractCoroutineContextKey<B, E> : PowensConnectBase <PowensConnectKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<PowensConnectKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<PowensConnectKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface PowensConnectKotlinx_coroutines_coreCoroutineDispatcherKey : PowensConnectKotlinAbstractCoroutineContextKey<id<PowensConnectKotlinContinuationInterceptor>, PowensConnectKotlinx_coroutines_coreCoroutineDispatcher *>
@property (class, readonly, getter=shared) PowensConnectKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<PowensConnectKotlinCoroutineContextKey>)baseKey safeCast:(id<PowensConnectKotlinCoroutineContextElement> _Nullable (^)(id<PowensConnectKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PowensConnectKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PowensConnectKotlinKClass>)kClass provider:(id<PowensConnectKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PowensConnectKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PowensConnectKotlinKClass>)kClass serializer:(id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PowensConnectKotlinKClass>)baseClass actualClass:(id<PowensConnectKotlinKClass>)actualClass actualSerializer:(id<PowensConnectKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PowensConnectKotlinKClass>)baseClass defaultDeserializerProvider:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PowensConnectKotlinKClass>)baseClass defaultDeserializerProvider:(id<PowensConnectKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PowensConnectKotlinKClass>)baseClass defaultSerializerProvider:(id<PowensConnectKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol PowensConnectKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<PowensConnectKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface PowensConnectKtor_httpHeaderValueParam : PowensConnectBase
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface PowensConnectKtor_httpHeaderValueWithParametersCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<PowensConnectKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentDisposition.Companion")))
@interface PowensConnectKtor_httpContentDispositionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpContentDispositionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_httpContentDisposition *Attachment __attribute__((swift_name("Attachment")));
@property (readonly) PowensConnectKtor_httpContentDisposition *File __attribute__((swift_name("File")));
@property (readonly) PowensConnectKtor_httpContentDisposition *Inline __attribute__((swift_name("Inline")));
@property (readonly) PowensConnectKtor_httpContentDisposition *Mixed __attribute__((swift_name("Mixed")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_httpContentDisposition *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface PowensConnectKtor_httpContentTypeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_httpContentType *Any __attribute__((swift_name("Any")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalTime.Companion")))
@interface PowensConnectKotlinx_datetimeLocalTimeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinx_datetimeLocalTimeCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKotlinx_datetimeLocalTime *)fromMillisecondOfDayMillisecondOfDay:(int32_t)millisecondOfDay __attribute__((swift_name("fromMillisecondOfDay(millisecondOfDay:)")));
- (PowensConnectKotlinx_datetimeLocalTime *)fromNanosecondOfDayNanosecondOfDay:(int64_t)nanosecondOfDay __attribute__((swift_name("fromNanosecondOfDay(nanosecondOfDay:)")));
- (PowensConnectKotlinx_datetimeLocalTime *)fromSecondOfDaySecondOfDay:(int32_t)secondOfDay __attribute__((swift_name("fromSecondOfDay(secondOfDay:)")));
- (PowensConnectKotlinx_datetimeLocalTime *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<PowensConnectKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface PowensConnectKotlinKTypeProjection : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<PowensConnectKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) PowensConnectKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
- (instancetype)initWithVariance:(PowensConnectKotlinKVariance * _Nullable)variance type:(id<PowensConnectKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKotlinKTypeProjection *)doCopyVariance:(PowensConnectKotlinKVariance * _Nullable)variance type:(id<PowensConnectKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface PowensConnectKtor_utilsWeekDayCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PowensConnectKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface PowensConnectKtor_utilsMonthCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PowensConnectKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface PowensConnectKtor_httpUrlCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface PowensConnectKtor_httpURLProtocol : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface PowensConnectKtor_httpHttpMethodCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSArray<PowensConnectKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) PowensConnectKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) PowensConnectKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) PowensConnectKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) PowensConnectKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) PowensConnectKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) PowensConnectKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) PowensConnectKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol PowensConnectKotlinx_coroutines_coreParentJob <PowensConnectKotlinx_coroutines_coreJob>
@required
- (PowensConnectKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface PowensConnectKotlinLongProgressionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface PowensConnectKotlinLongIterator : PowensConnectBase <PowensConnectKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PowensConnectLong *)next_ __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface PowensConnectKotlinLongRangeCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol PowensConnectKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PowensConnectKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PowensConnectKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PowensConnectKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PowensConnectKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface PowensConnectKtor_utilsStringValuesBuilderImpl : PowensConnectBase <PowensConnectKtor_utilsStringValuesBuilder>
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) PowensConnectMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PowensConnectKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PowensConnectKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PowensConnectKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PowensConnectKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface PowensConnectKtor_httpHeadersBuilder : PowensConnectKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PowensConnectKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface PowensConnectKtor_client_coreHttpRequestBuilderCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface PowensConnectKtor_httpURLBuilder : PowensConnectBase
@property (class, readonly, getter=companion) PowensConnectKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<PowensConnectKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PowensConnectKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property PowensConnectKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
- (instancetype)initWithProtocol:(PowensConnectKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<PowensConnectKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (PowensConnectKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface PowensConnectKotlinKVariance : PowensConnectKotlinEnum<PowensConnectKotlinKVariance *>
@property (class, readonly) PowensConnectKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) PowensConnectKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) PowensConnectKotlinKVariance *out __attribute__((swift_name("out")));
@property (class, readonly) NSArray<PowensConnectKotlinKVariance *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (PowensConnectKotlinArray<PowensConnectKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface PowensConnectKotlinKTypeProjectionCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PowensConnectKotlinKTypeProjection *)contravariantType:(id<PowensConnectKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PowensConnectKotlinKTypeProjection *)covariantType:(id<PowensConnectKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PowensConnectKotlinKTypeProjection *)invariantType:(id<PowensConnectKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface PowensConnectKtor_httpURLProtocolCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PowensConnectKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) PowensConnectKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) PowensConnectKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) PowensConnectKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) PowensConnectKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, PowensConnectKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (PowensConnectKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface PowensConnectKtor_httpURLBuilderCompanion : PowensConnectBase
@property (class, readonly, getter=shared) PowensConnectKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol PowensConnectKtor_httpParametersBuilder <PowensConnectKtor_utilsStringValuesBuilder>
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
