/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchase : NSObject <NSCoding, NSCopying, SSXPCCoding> {
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    BOOL _backgroundPurchase;
    int _batchIdentifier;
    NSString *_buyParameters;
    BOOL _createsDownloads;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _displaysOnLockScreen;
    SSDownloadPolicy *_downloadPolicy;
    NSMutableDictionary *_downloadProperties;
    NSNumber *_enabledServiceType;
    long long _expectedDownloadFileSize;
    NSArray *_filteredAssetTypes;
    NSArray *_gratisIdentifiers;
    BOOL _ignoresForcedPasswordRestriction;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    SSNetworkConstraints *_networkConstraints;
    long long _placeholderDownloadIdentifier;
    BOOL _preauthenticated;
    SSURLRequestProperties *_requestProperties;
    id _requiredDeviceCapabilities;
    long long _uniqueIdentifier;
    BOOL _usesLocalRedownloadParametersIfPossible;
}

@property (retain) NSNumber *accountIdentifier;
@property (copy) NSString *affiliateIdentifier;
@property (getter=isBackgroundPurchase) BOOL backgroundPurchase;
@property int batchIdentifier;
@property (copy) NSString *buyParameters;
@property (nonatomic) BOOL createsDownloads;
@property (readonly) NSData *databaseEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL displaysOnLockScreen;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property (copy) NSDictionary *downloadProperties;
@property (copy) NSNumber *enabledServiceType;
@property long long expectedDownloadFileSize;
@property (copy) NSArray *filteredAssetTypes;
@property (copy) NSArray *gratisIdentifiers;
@property (readonly) unsigned int hash;
@property BOOL ignoresForcedPasswordRestriction;
@property (copy) SSNetworkConstraints *networkConstraints;
@property long long placeholderDownloadIdentifier;
@property (getter=isPreauthenticated) BOOL preauthenticated;
@property (copy) SSURLRequestProperties *requestProperties;
@property (copy) id requiredDeviceCapabilities;
@property (readonly) Class superclass;
@property long long uniqueIdentifier;
@property BOOL usesLocalRedownloadParametersIfPossible;

+ (id)newPurchaseWithDatabaseEncoding:(id)arg1;
+ (id)newPurchaseWithXPCEncoding:(id)arg1;
+ (id)purchaseWithBuyParameters:(id)arg1;

- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (id)_initSSPurchase;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)accountIdentifier;
- (id)affiliateIdentifier;
- (int)batchIdentifier;
- (id)buyParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (BOOL)createsDownloads;
- (id)databaseEncoding;
- (void)dealloc;
- (BOOL)displaysOnLockScreen;
- (id)downloadMetadata;
- (id)downloadPolicy;
- (id)downloadProperties;
- (id)enabledServiceType;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedDownloadFileSize;
- (id)filteredAssetTypes;
- (id)gratisIdentifiers;
- (unsigned int)hash;
- (BOOL)ignoresForcedPasswordRestriction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isBackgroundPurchase;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPreauthenticated;
- (id)item;
- (id)itemOffer;
- (id)networkConstraints;
- (long long)placeholderDownloadIdentifier;
- (id)requestProperties;
- (id)requiredDeviceCapabilities;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setBackgroundPurchase:(BOOL)arg1;
- (void)setBatchIdentifier:(int)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setCreatesDownloads:(BOOL)arg1;
- (void)setDefaultUserAgent:(id)arg1;
- (void)setDisplaysOnLockScreen:(BOOL)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (void)setDownloadPolicy:(id)arg1;
- (void)setDownloadProperties:(id)arg1;
- (void)setEnabledServiceType:(id)arg1;
- (void)setExpectedDownloadFileSize:(long long)arg1;
- (void)setFilteredAssetTypes:(id)arg1;
- (void)setGratisIdentifiers:(id)arg1;
- (void)setIgnoresForcedPasswordRestriction:(BOOL)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setPlaceholderDownloadIdentifier:(long long)arg1;
- (void)setPreauthenticated:(BOOL)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setUniqueIdentifier:(long long)arg1;
- (void)setUsesLocalRedownloadParametersIfPossible:(BOOL)arg1;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (long long)uniqueIdentifier;
- (BOOL)usesLocalRedownloadParametersIfPossible;
- (id)valueForDownloadProperty:(id)arg1;

@end
