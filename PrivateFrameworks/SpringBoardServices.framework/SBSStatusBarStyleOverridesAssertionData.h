/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding> {
    int _pid;
    int _statusBarStyleOverrides;
    NSString *_uniqueIdentifier;
    bool_exclusive;
    bool_isExclusive;
}

@property(getter=isExclusive) bool exclusive;
@property(readonly) bool isExclusive;
@property int pid;
@property int statusBarStyleOverrides;
@property(copy) NSString * uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isExclusive;
- (bool)isExclusive;
- (int)pid;
- (void)setExclusive:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setStatusBarStyleOverrides:(int)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (int)statusBarStyleOverrides;
- (id)uniqueIdentifier;

@end
