/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSError, NSMutableData, NSMutableURLRequest, NSString, NSURLConnection, NSURLResponse;

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate> {
    NSDictionary *_bootstrapSettings;
    id _completionBlock;
    NSURLConnection *_connection;
    NSError *_error;
    NSDictionary *_internetSettings;
    struct dispatch_queue_s { } *_queue;
    NSMutableData *_receivedData;
    NSMutableURLRequest *_request;
    NSArray *_requestCookies;
    NSURLResponse *_response;
    NSArray *_responseCookies;
    int nextConnectionTypeIndex;
}

@property(copy) id completionBlock;
@property(retain) NSURLConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSError * error;
@property(readonly) unsigned long long hash;
@property struct dispatch_queue_s { }* queue;
@property(retain) NSMutableData * receivedData;
@property(retain) NSMutableURLRequest * request;
@property(retain) NSURLResponse * response;
@property NSData * serializedCookies;
@property(readonly) Class superclass;

+ (id)connectionSettingsForServiceType:(long long)arg1;
+ (id)createSessionRequest;
+ (void)initialize;
+ (bool)isRetriableErrorCode:(long long)arg1;
+ (void)load;
+ (id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2;
+ (id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4;
+ (id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2;
+ (void)setBootstrapConnectionSettings:(id)arg1;
+ (void)setInternetConnectionSettings:(id)arg1;
+ (void)setRequestUrls:(id)arg1;
+ (id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2;

- (void)_callback;
- (bool)_canTryAnotherConnectionType;
- (id)_connectionSettingsForNextConnectionType;
- (id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6;
- (bool)_isRetryableError:(id)arg1;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (void)cancel;
- (id)completionBlock;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)initGetWithUrl:(id)arg1;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2;
- (id)initPostWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (struct dispatch_queue_s { }*)queue;
- (id)receivedData;
- (id)request;
- (id)response;
- (id)serializedCookies;
- (void)setCompletionBlock:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSerializedCookies:(id)arg1;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s { }*)arg1 completion:(id)arg2;

@end
