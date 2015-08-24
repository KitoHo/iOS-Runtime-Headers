/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASSharingRelationship : NSObject <NSCopying> {
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSArray *_emails;
    NSString *_firstName;
    NSString *_fullName;
    BOOL _isMine;
    NSString *_lastName;
    NSString *_personID;
    NSArray *_phones;
    int _state;
    NSDate *_subscriptionDate;
}

@property (nonatomic, retain) NSString *GUID;
@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSArray *emails;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic) BOOL isMine;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic, retain) NSArray *phones;
@property (nonatomic) int state;
@property (nonatomic, retain) NSDate *subscriptionDate;

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)GUID;
- (id)_fullName;
- (id)albumGUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (id)emails;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSharingRelationship:(id)arg1;
- (BOOL)isMine;
- (id)lastName;
- (id)personID;
- (id)phones;
- (void)setAlbumGUID:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setIsMine:(BOOL)arg1;
- (void)setLastName:(id)arg1;
- (void)setPersonID:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSubscriptionDate:(id)arg1;
- (int)state;
- (id)subscriptionDate;

@end
