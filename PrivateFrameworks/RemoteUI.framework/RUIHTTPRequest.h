/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSMutableData, NSString, NSURLConnection, NSURLRequest;

@interface RUIHTTPRequest : NSObject <NSURLConnectionDataDelegate> {
    NSURLConnection *_connection;
    id _delegate;
    NSMutableData *_rawData;
    NSURLRequest *_request;
    bool_invalidResponse;
}

@property(copy,readonly) NSString * debugDescription;
@property id delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (bool)anyRequestLoading;
+ (id)invalidResponseError;
+ (id)nonSecureConnectionNotAllowedError;
+ (id)safeBaseURL;
+ (id)serviceUnavailableError;

- (void).cxx_destruct;
- (void)_finishedLoading;
- (void)_startedLoading;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)init;
- (bool)isLoading;
- (void)loadRequest:(id)arg1;
- (void)loadStatusChanged;
- (void)parseData:(id)arg1;
- (bool)receivedValidResponse:(id)arg1;
- (id)request;
- (void)setDelegate:(id)arg1;
- (void)willParseData;

@end
