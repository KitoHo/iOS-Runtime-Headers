/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccount : NSObject <NSSecureCoding> {
    BOOL _accountAccessAvailable;
    NSString *_accountDescription;
    id /* block */ _accountPropertiesTransformer;
    ACAccountType *_accountType;
    BOOL _active;
    BOOL _authenticated;
    NSString *_authenticationType;
    NSArray *_childAccounts;
    NSString *_clientToken;
    BOOL _creatingFromManagedObject;
    ACAccountCredential *_credential;
    NSString *_credentialType;
    id _credentialsDidChangeObserver;
    NSMutableDictionary *_dataclassProperties;
    NSDate *_date;
    NSMutableSet *_dirtyAccountProperties;
    NSMutableSet *_dirtyProperties;
    NSMutableSet *_enabledDataclasses;
    BOOL _haveCheckedForChildAccounts;
    BOOL _haveCheckedForClientToken;
    BOOL _haveCheckedForParentAccount;
    NSString *_identifier;
    NSDate *_lastCredentialRenewalRejectionDate;
    NSURL *_objectID;
    NSString *_owningBundleID;
    ACAccount *_parentAccount;
    NSString *_parentAccountIdentifier;
    NSMutableDictionary *_properties;
    NSMutableSet *_provisionedDataclasses;
    ACAccountStore *_store;
    BOOL _supportsAuthentication;
    NSString *_username;
    BOOL _visible;
}

@property (nonatomic, readonly) NSDictionary *aa_accountFirstDisplayAlert;
@property (nonatomic, readonly) NSDictionary *aa_accountFooterButton;
@property (nonatomic, readonly) NSString *aa_accountFooterText;
@property (nonatomic, readonly) NSString *aa_accountTypeString;
@property (nonatomic, readonly) NSString *aa_altDSID;
@property (nonatomic, readonly) NSArray *aa_appleIDAliases;
@property (nonatomic, readonly) NSString *aa_appleId;
@property (setter=aa_setAuthToken:, nonatomic, copy) NSString *aa_authToken;
@property (nonatomic, readonly) ACAccount *aa_childMailAccount;
@property (nonatomic, readonly) ACAccount *aa_cloudKitAccount;
@property (nonatomic, readonly) NSString *aa_displayName;
@property (setter=aa_setFirstName:, nonatomic, copy) NSString *aa_firstName;
@property (nonatomic, readonly) ACAccount *aa_fmfAccount;
@property (nonatomic, readonly) ACAccount *aa_fmipAccount;
@property (nonatomic, readonly) NSString *aa_fmipToken;
@property (nonatomic, readonly) NSString *aa_hsaToken;
@property (setter=aa_setCloudDocsMigrationComplete:, nonatomic) BOOL aa_isCloudDocsMigrationComplete;
@property (setter=aa_setPrimaryAccount:, nonatomic) BOOL aa_isPrimaryAccount;
@property (setter=aa_setPrimaryEmailVerified:, nonatomic) BOOL aa_isPrimaryEmailVerified;
@property (setter=aa_setSyncedAccount:, nonatomic) BOOL aa_isSyncedAccount;
@property (setter=aa_setUndergoingRepair:, nonatomic) BOOL aa_isUndergoingRepair;
@property (setter=aa_setUsesCloudDocs:, nonatomic) BOOL aa_isUsingCloudDocs;
@property (setter=aa_setLastName:, nonatomic, copy) NSString *aa_lastName;
@property (nonatomic, readonly) NSString *aa_mapsToken;
@property (nonatomic, readonly) BOOL aa_needsEmailConfiguration;
@property (nonatomic, readonly) BOOL aa_needsRegistration;
@property (setter=aa_setNeedsToVerifyTerms:, nonatomic) BOOL aa_needsToVerifyTerms;
@property (setter=aa_setPassword:, nonatomic, copy) NSString *aa_password;
@property (nonatomic, readonly) NSString *aa_personID;
@property (nonatomic, readonly) NSString *aa_primaryEmail;
@property (nonatomic, readonly) NSString *aa_protocolVersion;
@property (nonatomic, readonly) int aa_repairerPID;
@property (nonatomic, readonly) BOOL aa_serviceUnavailable;
@property (nonatomic, readonly) NSDictionary *aa_serviceUnavailableInfo;
@property (nonatomic, readonly) NSString *aa_syncStoreIdentifier;
@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, readonly) NSDictionary *accountProperties;
@property (copy) id /* block */ accountPropertiesTransformer;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, retain) ACAccountType *accountType;
@property (getter=isActive, nonatomic) BOOL active;
@property (getter=isAuthenticated, nonatomic) BOOL authenticated;
@property (nonatomic, readonly) NSString *authenticationType;
@property (nonatomic, readonly) NSArray *childAccounts;
@property (nonatomic, readonly) ACAccount *ck_cloudKitAccount;
@property (nonatomic, readonly) NSString *clientToken;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) ACAccountCredential *credential;
@property (nonatomic, readonly) NSString *credentialType;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (getter=isDirty, nonatomic, readonly) BOOL dirty;
@property (nonatomic, readonly) NSSet *dirtyAccountProperties;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (nonatomic, readonly) ACAccount *displayAccount;
@property (nonatomic, retain) NSMutableSet *enabledDataclasses;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSDate *lastCredentialRenewalRejectionDate;
@property (nonatomic, retain) NSString *mcPayloadUUID;
@property (nonatomic, retain) NSString *mcProfileUUID;
@property (nonatomic, readonly) NSURL *objectID;
@property (nonatomic, retain) ACAccount *parentAccount;
@property (nonatomic, readonly) NSString *parentAccountIdentifier;
@property (nonatomic, retain) NSMutableSet *provisionedDataclasses;
@property (nonatomic, readonly) NSString *shortDebugName;
@property (nonatomic) BOOL supportsAuthentication;
@property (nonatomic, readonly) BOOL supportsPush;
@property (nonatomic, readonly) NSString *userFullName;
@property (nonatomic, copy) NSString *username;
@property (getter=isVisible, nonatomic) BOOL visible;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

+ (id)_createNewAccountUID;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearCachedChildAccounts;
- (void)_clearCachedCredentials;
- (void)_clearDirtyProperties;
- (id)_initWithManagedAccount:(id)arg1 accountStore:(id)arg2 withDirtyStateFromAccount:(id)arg3;
- (void)_installCredentialsChangedObserver;
- (void)_loadAllCachedProperties;
- (void)_markAccountPropertyDirty:(id)arg1;
- (void)_markCredentialDirty;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setAccountStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (BOOL)_useParentForCredentials;
- (id)accountByCleaningThirdPartyTransformations;
- (id)accountDescription;
- (id)accountProperties;
- (id /* block */)accountPropertiesTransformer;
- (id)accountPropertyForKey:(id)arg1;
- (id)accountStore;
- (id)accountType;
- (BOOL)addClientToken:(id)arg1;
- (BOOL)authenticated;
- (id)authenticationType;
- (id)childAccounts;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
- (id)clientToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)credential;
- (id)credentialType;
- (id)credentialWithError:(id*)arg1;
- (void)credentialsChanged:(id)arg1;
- (id)dataclassProperties;
- (void)dealloc;
- (id)description;
- (id)diffAccount:(id)arg1;
- (id)dirtyAccountProperties;
- (id)dirtyProperties;
- (id)displayAccount;
- (id)enabledAndSyncableDataclasses;
- (id)enabledDataclasses;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (id)identifier;
- (id)initWithAccountType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAccount:(id)arg1;
- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;
- (BOOL)isActive;
- (BOOL)isAuthenticated;
- (BOOL)isDirty;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)isEnabledToSyncDataclass:(id)arg1;
- (BOOL)isPropertyDirty:(id)arg1;
- (BOOL)isProvisionedForDataclass:(id)arg1;
- (BOOL)isVisible;
- (id)lastCredentialRenewalRejectionDate;
- (void)markAllPropertiesDirty;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectID;
- (id)owningBundleID;
- (id)parentAccount;
- (id)parentAccountIdentifier;
- (id)propertiesForDataclass:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (id)provisionedDataclasses;
- (void)refresh;
- (void)reload;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperties:(id)arg1;
- (void)setAccountPropertiesTransformer:(id /* block */)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAccountType:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setAuthenticationType:(id)arg1;
- (void)setCreatingFromManagedObject:(BOOL)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setEnabledDataclasses:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastCredentialRenewalRejectionDate:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOwningBundleID:(id)arg1;
- (void)setParentAccount:(id)arg1;
- (void)setProperties:(id)arg1 forDataclass:(id)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setProvisionedDataclasses:(id)arg1;
- (void)setSupportsAuthentication:(BOOL)arg1;
- (void)setUsername:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (id)shortDebugName;
- (BOOL)supportsAuthentication;
- (BOOL)supportsPush;
- (void)takeValuesFromModifiedAccount:(id)arg1;
- (id)userFullName;
- (id)username;

// Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI

- (id)displayUsername;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_dataclassesBoundToPrimaryAppleAccount;
+ (id)aa_dataclassesBoundToSingleAppleAccount;

- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setAppleID:(id)arg1;
- (id)_registeredBundles;
- (id)aa_accountFirstDisplayAlert;
- (id)aa_accountFooterButton;
- (id)aa_accountFooterText;
- (id)aa_accountTypeString;
- (id)aa_altDSID;
- (id)aa_appleIDAliases;
- (id)aa_appleId;
- (id)aa_authToken;
- (id)aa_authTokenWithError:(id*)arg1;
- (id)aa_childMailAccount;
- (id)aa_cloudKitAccount;
- (void)aa_configureCerts;
- (id)aa_displayName;
- (id)aa_firstName;
- (id)aa_fmfAccount;
- (id)aa_fmipAccount;
- (id)aa_fmipToken;
- (id)aa_hsaToken;
- (id)aa_hsaTokenWithError:(id*)arg1;
- (BOOL)aa_isCloudDocsMigrationComplete;
- (BOOL)aa_isPrimaryAccount;
- (BOOL)aa_isPrimaryEmailVerified;
- (BOOL)aa_isSyncedAccount;
- (BOOL)aa_isUndergoingRepair;
- (BOOL)aa_isUsingCloudDocs;
- (id)aa_lastName;
- (id)aa_mapsToken;
- (BOOL)aa_needsEmailConfiguration;
- (BOOL)aa_needsRegistration;
- (BOOL)aa_needsToVerifyTerms;
- (id)aa_password;
- (id)aa_personID;
- (id)aa_primaryEmail;
- (id)aa_protocolVersion;
- (void)aa_removeCerts;
- (int)aa_repairerPID;
- (BOOL)aa_serviceUnavailable;
- (id)aa_serviceUnavailableInfo;
- (void)aa_setAuthToken:(id)arg1;
- (void)aa_setCloudDocsMigrationComplete:(BOOL)arg1;
- (void)aa_setFirstName:(id)arg1;
- (void)aa_setHSAToken:(id)arg1;
- (void)aa_setLastName:(id)arg1;
- (void)aa_setMapsToken:(id)arg1;
- (void)aa_setNeedsToVerifyTerms:(BOOL)arg1;
- (void)aa_setPassword:(id)arg1;
- (void)aa_setPrimaryAccount:(BOOL)arg1;
- (void)aa_setPrimaryEmailVerified:(BOOL)arg1;
- (void)aa_setSyncedAccount:(BOOL)arg1;
- (void)aa_setUndergoingRepair:(BOOL)arg1;
- (void)aa_setUseCellular:(BOOL)arg1 forDataclass:(id)arg2;
- (void)aa_setUsesCloudDocs:(BOOL)arg1;
- (id)aa_syncStoreIdentifier;
- (void)aa_updateWithProvisioningResponse:(id)arg1;
- (BOOL)aa_useCellularForDataclass:(id)arg1;
- (id)appleID;
- (BOOL)canRemoveAccount;
- (id)dsid;
- (id)initWithAppleID:(id)arg1 password:(id)arg2;
- (int)mobileMeAccountStatus;
- (void)setDSID:(id)arg1;
- (void)storeOriginalUsername;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (id)aaui_compositeName;
- (int)aaui_compositeNameFormat;
- (BOOL)aaui_isRestrictedForDataclass:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

- (id)aida_alternateDSID;
- (id)aida_deviceProvisioningInfo;
- (id)aida_dsid;
- (id)aida_tokenForService:(id)arg1;
- (id)aida_tokenWithExpirationCheck;
- (id)aida_tokenWithExpiryCheckForService:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)br_dsid;
- (id)br_firstName;
- (BOOL)br_isCloudDocsMigrationComplete;
- (BOOL)br_isEnabledForCloudDocs;
- (BOOL)br_isEnabledForUbiquity;
- (BOOL)br_isICloudAccount;
- (BOOL)br_isPrimaryAccount;
- (BOOL)br_isUsingCloudDocs;
- (id)br_lastName;
- (void)br_setCloudDocsMigrationComplete:(BOOL)arg1;
- (void)br_setUsesCloudDocs:(BOOL)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)ck_cloudKitAccount;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

- (BOOL)MCIsManaged;
- (id)mcBackingPayload;
- (id)mcBackingProfile;
- (id)mcPayloadUUID;
- (id)mcProfileUUID;
- (void)setMcPayloadUUID:(id)arg1;
- (void)setMcProfileUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSync.framework/MobileSync

- (id)_usernameFromProperties:(id)arg1;
- (void)applySyncProperties:(id)arg1;
- (BOOL)isMobileMeAccount;
- (void)setPasswordFromSync:(id)arg1;
- (id)syncIdentityString;

@end
