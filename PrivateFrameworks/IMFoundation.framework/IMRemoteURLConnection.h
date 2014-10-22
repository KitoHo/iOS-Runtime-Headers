/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>, NSString, NSURLRequest;

@interface IMRemoteURLConnection : NSObject {
    id _block;
    NSString *_bundleIdentifierForDataUsage;
    NSObject<OS_xpc_object> *_connection;
    NSURLRequest *_request;
    int _retries;
    bool_cancelled;
    bool_forceCellularIfPossible;
    bool_loading;
    bool_requireIDSHost;
}

@property(retain) NSString * bundleIdentifierForDataUsage;
@property bool forceCellularIfPossible;
@property bool requireIDSHost;

- (bool)_connect;
- (bool)_disconnect;
- (void)_disconnected;
- (id)bundleIdentifierForDataUsage;
- (void)cancel;
- (void)dealloc;
- (bool)forceCellularIfPossible;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id)arg2;
- (void)load;
- (bool)requireIDSHost;
- (void)setBundleIdentifierForDataUsage:(id)arg1;
- (void)setForceCellularIfPossible:(bool)arg1;
- (void)setRequireIDSHost:(bool)arg1;

@end
