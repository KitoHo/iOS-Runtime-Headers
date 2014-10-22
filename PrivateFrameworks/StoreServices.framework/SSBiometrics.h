/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_queue>, SSXPCConnection;

@interface SSBiometrics : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
    SSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id)arg2;
- (void)getStateWithCompletionBlock:(id)arg1;
- (id)init;
- (void)renewPurchaseTokenWithAuthToken:(id)arg1 completionBlock:(id)arg2;
- (void)resetWithCompletionBlock:(id)arg1;
- (void)setAllowed:(bool)arg1 completionBlock:(id)arg2;
- (void)setEnabled:(bool)arg1 withAuthToken:(id)arg2 completionBlock:(id)arg3;
- (void)setEnabled:(bool)arg1 withCompletionBlock:(id)arg2;

@end
