/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSAccounts : MSMailDefaultService

+ (void)accountValuesForKeys:(id)arg1 completionBlock:(id /* block */)arg2;
+ (void)accountValuesForKeys:(id)arg1 launchMobileMail:(BOOL)arg2 completionBlock:(id /* block */)arg3;
+ (void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(BOOL)arg4 completionBlock:(id /* block */)arg5;
+ (BOOL)canSendMail;
+ (BOOL)canSendMailSourceAccountManagement:(int)arg1;
+ (id)customSignatureForSendingEmailAddress:(id)arg1;
+ (BOOL)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2;
+ (BOOL)hasActiveAccounts;
+ (void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(id /* block */)arg3;
+ (BOOL)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(BOOL)arg3 error:(id*)arg4;

- (void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(id /* block */)arg4;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;

@end
