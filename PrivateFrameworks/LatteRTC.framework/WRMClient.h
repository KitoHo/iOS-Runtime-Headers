/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@class <WRMClientDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface WRMClient : NSObject {
    NSObject<OS_xpc_object> *connection;
    NSObject<OS_dispatch_queue> *connectionQueue;
    <WRMClientDelegate> *wrmClientDelegate;
}

@property(readonly) NSObject<OS_xpc_object> * connection;
@property(readonly) NSObject<OS_dispatch_queue> * connectionQueue;
@property <WRMClientDelegate> * delegate;

- (id)connection;
- (id)connectionQueue;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)reportMetrics:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)startWRMClient;
- (void)stopWRMClient;

@end
