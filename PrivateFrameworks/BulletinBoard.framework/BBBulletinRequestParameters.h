/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    NSSet *_enabledSectionIDs;
    int _maximumCount;
    unsigned int _publisherDestination;
}

@property (nonatomic, readonly) NSSet *enabledSectionIDs;
@property (nonatomic, readonly) unsigned int maximumCount;
@property (nonatomic, readonly) unsigned int publisherDestination;

+ (id)requestParametersForDestination:(unsigned int)arg1 withMaximumCount:(int)arg2 enabledSectionIDs:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)enabledSectionIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned int)arg1 maximumCount:(int)arg2 enabledSectionIDs:(id)arg3;
- (unsigned int)maximumCount;
- (unsigned int)publisherDestination;

@end
