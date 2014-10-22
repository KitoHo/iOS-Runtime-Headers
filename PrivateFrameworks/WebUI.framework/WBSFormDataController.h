/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface WBSFormDataController : NSObject {
    NSDictionary *_allCredentialsCache;
    NSObject<OS_dispatch_queue> *_allCredentialsCacheAccessQueue;
    NSMutableDictionary *_completionDB;
    unsigned long long _completionDBSize;
    NSMutableDictionary *_domainToLastUsedUsernameAndProtectionSpace;
    int _keychainChangedNotificationToken;
    NSMutableDictionary *_preferredLabelsMap;
    NSMutableDictionary *_valuesDB;
}

+ (id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (bool)canAutocompleteTextField:(id)arg1 inForm:(id)arg2;
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(bool)arg3 ignorePositioning:(bool)arg4;
+ (bool)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long*)arg2;
+ (id)domainFromURL:(id)arg1;
+ (id)dontSaveMarker;
+ (bool)formContainsCreditCardData:(id)arg1;
+ (bool)formContainsCreditCardNumberField:(id)arg1;
+ (id)specifierForControl:(id)arg1;
+ (bool)stringLooksLikeCreditCardNumber:(id)arg1;
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;
+ (id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2;

- (void).cxx_destruct;
- (id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id*)arg2;
- (void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3;
- (id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(struct OpaqueFormAutoFillFrame {}**)arg2 forPrefillingCredentials:(bool)arg3;
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4;
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;
- (unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5;
- (unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)allFormDataForSaving;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 usingOnlyAddressBookData:(bool)arg4 preferredLabel:(id)arg5;
- (void)clearPreviousDataDatabase;
- (void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1;
- (void)clearPreviousDataForDomain:(id)arg1;
- (id)completionDBPath;
- (id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2;
- (void)dealloc;
- (id)domainsWithPreviousData;
- (void)domainsWithPreviousDataChanged;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(bool)arg2;
- (void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(bool)arg5;
- (void)getCredentialMatches:(id*)arg1 andPotentialMatches:(id*)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4;
- (void)getFormFieldValues:(id*)arg1 andFieldToFocus:(id*)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4;
- (bool)hasCredentialsForPageWithMainFrame:(id)arg1;
- (bool)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (id)infoForDomain:(id)arg1;
- (id)init;
- (id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id*)arg2;
- (id)lastUsedUsernameForURL:(id)arg1;
- (void)loadCompletionDBIfNeeded;
- (id)matchForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3;
- (id)matchesForControl:(id)arg1 withName:(id)arg2 atURL:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(bool)arg5;
- (id)matchesForControl:(id)arg1 withName:(id)arg2 inDomain:(id)arg3 matchingPartialString:(id)arg4 usingOnlyAddressBookData:(bool)arg5 preferredLabel:(id)arg6;
- (id)preferredIdentifierForProperty:(id)arg1;
- (void)pruneCompletionDB;
- (void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3;
- (void)saveCompletionDBSoon;
- (void)setInfo:(id)arg1 forDomain:(id)arg2;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2;
- (bool)shouldAutoFillFromAddressBook;
- (bool)shouldAutoFillFromPreviousData;
- (bool)shouldAutoFillPasswords;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id*)arg3;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(bool)arg3 matches:(id*)arg4 preferredLabel:(id)arg5;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 usingOnlyAddressBookData:(bool)arg3 matches:(id*)arg4;
- (id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id*)arg3 password:(id*)arg4;

@end
