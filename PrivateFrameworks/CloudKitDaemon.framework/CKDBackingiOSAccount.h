/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class ACAccount, ACAccountStore;

@interface CKDBackingiOSAccount : CKDBackingAccount {
    ACAccountStore *_accountStore;
    ACAccount *_parentAppleAccount;
}

@property(readonly) ACAccountStore * accountStore;
@property(readonly) ACAccount * ckAccount;
@property(retain) ACAccount * parentAppleAccount;

+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(id)arg3;
+ (id)primaryAccountInStore:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithParentAccount:(id)arg1 inStore:(id)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)accountStore;
- (bool)allowsCellularAccess;
- (id)ckAccount;
- (id)cloudKitAuthToken;
- (bool)cloudKitIsEnabled;
- (bool)cloudPhotosIsEnabled;
- (id)dsid;
- (id)iCloudAuthToken;
- (id)identifier;
- (id)parentAppleAccount;
- (id)primaryEmail;
- (void)setParentAppleAccount:(id)arg1;

@end
