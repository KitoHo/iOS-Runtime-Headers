/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@interface NARApplication : NSObject <NSSecureCoding> {
    NSDictionary *_iTunesPlistStrings;
    NSDictionary *_infoPlist;
    NSString *_launchServicesBundleType;
    NSDictionary *_localizedStrings;
    unsigned int _sequenceNumber;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *bundleName;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, retain) NSDictionary *iTunesPlistStrings;
@property (nonatomic, retain) NSDictionary *infoPlist;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, copy) NSString *launchServicesBundleType;
@property (nonatomic, readonly) NSArray *localizations;
@property (nonatomic, readonly) NSDictionary *localizedBundleNames;
@property (nonatomic, readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly) NSDictionary *localizedDisplayNames;
@property (nonatomic, retain) NSDictionary *localizedStrings;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic, readonly) NSArray *supportedSchemes;
@property (nonatomic, readonly) NSString *vendorName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)bundleName;
- (id)bundleVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesPlistStrings;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (id)itemName;
- (id)launchServicesBundleType;
- (id)localizations;
- (id)localizedBundleNames;
- (id)localizedDisplayName;
- (id)localizedDisplayNames;
- (id)localizedStrings;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;
- (unsigned int)sequenceNumber;
- (void)setITunesPlistStrings:(id)arg1;
- (void)setInfoPlist:(id)arg1;
- (void)setLaunchServicesBundleType:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (id)supportedSchemes;
- (id)vendorName;

@end
