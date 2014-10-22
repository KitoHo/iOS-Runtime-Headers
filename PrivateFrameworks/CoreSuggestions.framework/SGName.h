/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSString;

@interface SGName : NSObject <SGObject> {
    NSString *_firstName;
    NSString *_fullName;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_prefix;
    NSString *_suffix;
}

@property(readonly) NSString * firstName;
@property(readonly) NSString * fullName;
@property(readonly) NSString * lastName;
@property(readonly) NSString * middleName;
@property(readonly) NSString * name;
@property(readonly) NSString * prefix;
@property(readonly) NSString * suffix;

+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6;
+ (id)nameWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)nameWithFirstName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)fullName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 fullName:(id)arg4 prefix:(id)arg5 suffix:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToName:(id)arg1;
- (id)lastName;
- (id)middleName;
- (id)name;
- (id)prefix;
- (id)suffix;

@end
