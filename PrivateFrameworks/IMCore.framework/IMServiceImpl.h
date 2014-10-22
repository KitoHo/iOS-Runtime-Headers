/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMAccount, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface IMServiceImpl : IMService {
    NSArray *_abProperties;
    IMAccount *_bestAccount;
    NSMutableDictionary *_cardMap;
    NSString *_countryCode;
    NSDictionary *_defaultSettings;
    NSArray *_emailDomains;
    NSData *_imageData;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_name;
    NSDictionary *_personToIDMap;
    unsigned int _screenNameSensitivity;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProps;
    NSArray *_siblingServiceNames;
    bool_allowsMultipleConnections;
    bool_handlesChatInvites;
    bool_hasLoadedServiceProperties;
    bool_ignoresNetworkConnectivity;
    bool_isPersistent;
    bool_isPlugInService;
    bool_shouldDisableDeactivation;
    bool_shouldInternationalizeNumbers;
    bool_supportsAdding;
    bool_supportsAudioMessages;
    bool_supportsAuthorization;
    bool_supportsDatabaseStorage;
    bool_supportsGroupAttachments;
    bool_supportsIDStatusLookup;
    bool_supportsMutatingGroupMembers;
    bool_supportsOfflineTransfers;
    bool_supportsPhoneNumberMapping;
    bool_supportsPresence;
    bool_supportsRegistration;
    bool_supportsSMS;
}

@property(readonly) unsigned int IDSensitivity;
@property(readonly) bool _supportsDatabaseStorage;
@property(readonly) bool _wantsInternationizedNumbers;
@property(readonly) Class accountClass;
@property(retain,readonly) NSArray * accountIDs;
@property(retain,readonly) NSArray * addressBookProperties;
@property(retain,readonly) NSString * addressBookProperty;
@property(readonly) bool allowsMultipleConnections;
@property(readonly) long long buddyNotesMaxByteLength;
@property(retain,readonly) NSDictionary * cardMap;
@property(retain) NSString * countryCode;
@property(retain) NSDictionary * defaultAccountSettings;
@property(retain,readonly) NSArray * emailDomains;
@property(readonly) bool handlesChatInvites;
@property(readonly) bool ignoresNetworkConnectivity;
@property(retain,readonly) NSString * internalName;
@property(readonly) bool isPersistent;
@property(readonly) bool isPlugInService;
@property(readonly) long long maxAttachmentSize;
@property(readonly) long long maxChatParticipants;
@property(retain,readonly) NSString * name;
@property(retain) NSDictionary * serviceDefaults;
@property(retain,readonly) NSData * serviceImageData;
@property(retain) NSDictionary * serviceProperties;
@property(retain,readonly) NSString * shortName;
@property(readonly) bool shouldDisableDeactivation;
@property(retain,readonly) NSArray * siblingServices;
@property(readonly) bool supportsAdding;
@property(readonly) bool supportsAudioMessages;
@property(readonly) bool supportsAuthorization;
@property(readonly) bool supportsGroupAttachments;
@property(readonly) bool supportsIDStatusLookup;
@property(readonly) bool supportsMutatingGroupMembers;
@property(readonly) bool supportsOfflineTransfers;
@property(readonly) bool supportsPhoneNumberMapping;
@property(readonly) bool supportsPresence;
@property(readonly) bool supportsRegistration;

+ (id)activeServices;
+ (id)allServices;
+ (id)allServicesNonBlocking;
+ (id)connectedServices;
+ (id)connectedServicesWithCapability:(unsigned long long)arg1;
+ (id)operationalServicesWithCapability:(unsigned long long)arg1;
+ (Class)serviceClass;
+ (id)serviceWithInternalName:(id)arg1;
+ (id)serviceWithName:(id)arg1;
+ (id)servicesWithCapability:(unsigned long long)arg1;
+ (void)setServiceClass:(Class)arg1;
+ (id)supportedCountryCodes;
+ (bool)systemSupportsSMSSending;
+ (bool)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long*)arg2;

- (unsigned int)IDSensitivity;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (void)_blockUntilInitialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_dumpCardMap;
- (void)_loadPropertiesIfNeeded;
- (id)_newIDToCardMap;
- (id)_personToIDMap;
- (bool)_supportsDatabaseStorage;
- (void)_syncWithRemoteBuddies;
- (bool)_wantsInternationizedNumbers;
- (Class)accountClass;
- (id)accountIDs;
- (void)activeAccountsChanged:(id)arg1;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (bool)allowsMultipleConnections;
- (long long)buddyNotesMaxByteLength;
- (id)canonicalFormOfID:(id)arg1;
- (id)cardMap;
- (void)clearIDToCardMap;
- (long long)compareNames:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)defaultAccountSettings;
- (void)defaultsChanged:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)doneSetup;
- (id)emailDomains;
- (bool)equalID:(id)arg1 andID:(id)arg2;
- (bool)handlesChatInvites;
- (bool)ignoresNetworkConnectivity;
- (id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int*)arg3;
- (id)imABPeopleWithScreenName:(id)arg1 identifier:(int*)arg2;
- (id)imABPeopleWithScreenName:(id)arg1 options:(unsigned long long)arg2;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)initialSyncPerformed;
- (id)internalName;
- (bool)isEnabled;
- (bool)isPersistent;
- (bool)isPlugInService;
- (id)localizedName;
- (id)localizedShortName;
- (long long)maxAttachmentSize;
- (long long)maxChatParticipants;
- (id)myScreenNames;
- (id)name;
- (id)normalizedFormOfID:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)serviceDefaults;
- (id)serviceImageData;
- (id)serviceProperties;
- (void)setCountryCode:(id)arg1;
- (void)setDefaultAccountSettings:(id)arg1;
- (void)setServiceDefaults:(id)arg1;
- (void)setServiceProperties:(id)arg1;
- (id)shortName;
- (bool)shouldDisableDeactivation;
- (id)siblingServices;
- (unsigned long long)status;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (id)subtypeInformationForAccount:(id)arg1;
- (bool)supportsAdding;
- (bool)supportsAudioMessages;
- (bool)supportsAuthorization;
- (bool)supportsGroupAttachments;
- (bool)supportsIDStatusLookup;
- (bool)supportsMutatingGroupMembers;
- (bool)supportsOfflineTransfers;
- (bool)supportsPhoneNumberMapping;
- (bool)supportsPresence;
- (bool)supportsRegistration;
- (void)updateIDToCardMapWithNotification:(id)arg1;

@end
