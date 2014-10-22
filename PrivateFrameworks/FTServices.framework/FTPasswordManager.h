/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class ACAccountStore, IDSRemoteCredential, NSMutableSet;

@interface FTPasswordManager : NSObject {
    ACAccountStore *_accountStore;
    IDSRemoteCredential *_remoteCredential;
    NSMutableSet *_runningQueries;
}

+ (id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(bool)arg3 showForgetPassword:(bool)arg4 shouldRememberPassword:(bool)arg5;
+ (id)sharedInstance;

- (void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
- (void)dealloc;
- (void)fetchAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 blockingly:(bool)arg4 completionBlock:(id)arg5;
- (void)fetchPasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 blockingly:(bool)arg4 completionBlock:(id)arg5;
- (id)init;
- (void)requestAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 outRequestID:(id*)arg5 completionBlock:(id)arg6;
- (void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 shouldRememberPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id)arg7;
- (void)setAuthTokenForUsername:(id)arg1 service:(id)arg2 authToken:(id)arg3 profileID:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(id)arg7;
- (void)setPasswordForUsername:(id)arg1 service:(id)arg2 password:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id)arg5;
- (bool)supportsAuthTokenRequests;

@end
