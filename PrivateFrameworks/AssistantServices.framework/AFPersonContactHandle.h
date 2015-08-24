/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPersonContactHandle : NSObject <NSSecureCoding> {
    NSString *_handle;
    NSString *_label;
    unsigned int _type;
}

@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPersonContactHandle:(id)arg1;
- (id)label;
- (void)setHandle:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
