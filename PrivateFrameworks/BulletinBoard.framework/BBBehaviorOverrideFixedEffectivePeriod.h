/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSDate, NSString, NSUUID;

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod> {
    double _effectiveInterval;
    NSUUID *_identifier;
    NSDate *_startDate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property double effectiveInterval;
@property(readonly) unsigned long long hash;
@property(copy) NSUUID * identifier;
@property(copy) NSDate * startDate;
@property(readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)effectiveInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 effectiveInterval:(double)arg2 identifier:(id)arg3;
- (id)nextTransitionDateAfterDate:(id)arg1;
- (void)setEffectiveInterval:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
