/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSNumber *_incomingMailServerPortNumber;
    BOOL _incomingMailServerUseSSL;
    NSNumber *_incomingMailServerUseSSLNum;
    NSString *_incomingMailServerUsername;
    NSString *_incomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    BOOL _outgoingMailServerUseSSL;
    NSNumber *_outgoingMailServerUseSSLNum;
    NSString *_outgoingMailServerUsername;
    NSString *_outgoingPassword;
    BOOL _outgoingPasswordSameAsIncomingPassword;
    NSNumber *_outgoingPasswordSameAsIncomingPasswordNum;
}

@property (nonatomic, readonly, retain) NSString *emailAccountDescription;
@property (nonatomic, readonly, retain) NSString *emailAccountName;
@property (nonatomic, readonly, retain) NSString *emailAccountType;
@property (nonatomic, readonly, retain) NSString *emailAddress;
@property (nonatomic, readonly, retain) NSString *incomingMailServerAuthentication;
@property (nonatomic, readonly, retain) NSString *incomingMailServerHostname;
@property (nonatomic, readonly, retain) NSString *incomingMailServerIMAPPathPrefix;
@property (nonatomic, readonly, retain) NSNumber *incomingMailServerPortNumber;
@property (nonatomic, readonly) BOOL incomingMailServerUseSSL;
@property (nonatomic, readonly) NSNumber *incomingMailServerUseSSLNum;
@property (nonatomic, readonly, retain) NSString *incomingMailServerUsername;
@property (nonatomic, readonly, retain) NSString *incomingPassword;
@property (nonatomic, readonly, retain) NSString *outgoingMailServerAuthentication;
@property (nonatomic, readonly, retain) NSString *outgoingMailServerHostname;
@property (nonatomic, readonly, retain) NSNumber *outgoingMailServerPortNumber;
@property (nonatomic, readonly) BOOL outgoingMailServerUseSSL;
@property (nonatomic, readonly) NSNumber *outgoingMailServerUseSSLNum;
@property (nonatomic, readonly, retain) NSString *outgoingMailServerUsername;
@property (nonatomic, readonly, retain) NSString *outgoingPassword;
@property (nonatomic, readonly) BOOL outgoingPasswordSameAsIncomingPassword;
@property (nonatomic, readonly) NSNumber *outgoingPasswordSameAsIncomingPasswordNum;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_authenticationTypeLocalizedString:(id)arg1;
- (id)_emailAccountTypeLocalizedString;
- (id)description;
- (id)emailAccountDescription;
- (id)emailAccountName;
- (id)emailAccountType;
- (id)emailAddress;
- (id)incomingMailServerAuthentication;
- (id)incomingMailServerHostname;
- (id)incomingMailServerIMAPPathPrefix;
- (id)incomingMailServerPortNumber;
- (BOOL)incomingMailServerUseSSL;
- (id)incomingMailServerUseSSLNum;
- (id)incomingMailServerUsername;
- (id)incomingPassword;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)outgoingMailServerAuthentication;
- (id)outgoingMailServerHostname;
- (id)outgoingMailServerPortNumber;
- (BOOL)outgoingMailServerUseSSL;
- (id)outgoingMailServerUseSSLNum;
- (id)outgoingMailServerUsername;
- (id)outgoingPassword;
- (BOOL)outgoingPasswordSameAsIncomingPassword;
- (id)outgoingPasswordSameAsIncomingPasswordNum;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end
