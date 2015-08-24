/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding> {
    NSString *_emailAddress;
    NSString *_name;
}

@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *name;

+ (id)namedEmailAddressWithFieldValue:(id)arg1;
+ (id)namedEmailAddressesWithFieldValues:(id)arg1;
+ (id)serializeAll:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEmailAddress:(id)arg1;
- (id)name;
- (id)serialized;

@end
