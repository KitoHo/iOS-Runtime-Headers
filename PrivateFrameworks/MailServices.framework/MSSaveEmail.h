/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSaveEmail : MSMailDefaultService

+ (void)saveEmail:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(id /* block */)arg4;

- (void)_saveEmail:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;

@end
