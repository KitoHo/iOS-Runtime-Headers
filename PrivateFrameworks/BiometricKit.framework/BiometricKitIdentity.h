/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@class NSDate, NSString, NSUUID;

@interface BiometricKitIdentity : NSObject <NSSecureCoding, NSCopying> {
    int _attribute;
    NSDate *_creationTime;
    int _entity;
    long long _matchCount;
    NSString *_name;
    int _type;
    long long _updateCount;
    NSUUID *_uuid;
}

@property int attribute;
@property(retain) NSDate * creationTime;
@property int entity;
@property long long matchCount;
@property(copy) NSString * name;
@property int type;
@property long long updateCount;
@property(retain) NSUUID * uuid;

+ (id)biometricKitIdentity;
+ (bool)supportsSecureCoding;

- (int)attribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationTime;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)entity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)matchCount;
- (id)name;
- (void)setAttribute:(int)arg1;
- (void)setCreationTime:(id)arg1;
- (void)setEntity:(int)arg1;
- (void)setMatchCount:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUpdateCount:(long long)arg1;
- (void)setUuid:(id)arg1;
- (int)type;
- (long long)updateCount;
- (id)uuid;

@end
