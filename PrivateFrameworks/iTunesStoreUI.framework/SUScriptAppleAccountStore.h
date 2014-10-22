/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ACAccountStore, NSString, SUScriptAppleAccount;

@interface SUScriptAppleAccountStore : SUScriptObject {
    ACAccountStore *_accountStore;
    NSString *_effectiveBundleID;
}

@property(readonly) NSString * accessPurposeRead;
@property(readonly) NSString * accessPurposeReadWrite;
@property(readonly) NSString * accessPurposeWrite;
@property(readonly) NSString * accountTypeIdentifierFacebook;
@property(readonly) NSString * accountTypeIdentifierSinaWeibo;
@property(readonly) NSString * accountTypeIdentifierTwitter;
@property(readonly) NSString * effectiveBundleID;
@property(readonly) SUScriptAppleAccount * primaryAppleAccount;
@property(readonly) long long renewResultFailed;
@property(readonly) long long renewResultRejected;
@property(readonly) long long renewResultRenewed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_accountStore;
- (void)_accountStoreChangeNotification:(id)arg1;
- (id)_className;
- (id)accessPurposeRead;
- (id)accessPurposeReadWrite;
- (id)accessPurposeWrite;
- (id)accountTypeIdentifierFacebook;
- (id)accountTypeIdentifierSinaWeibo;
- (id)accountTypeIdentifierTwitter;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)accountsWithAccountType:(id)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (id)effectiveBundleID;
- (id)init;
- (id)makeClientAccessInfoWithAccountType:(id)arg1;
- (id)primaryAppleAccount;
- (void)renewCredentialsForAccount:(id)arg1 completionHandler:(id)arg2;
- (long long)renewResultFailed;
- (long long)renewResultRejected;
- (long long)renewResultRenewed;
- (void)requestAccessWithInfo:(id)arg1 completionHandler:(id)arg2;
- (id)scriptAttributeKeys;
- (void)setEffectiveBundleID:(id)arg1;

@end
