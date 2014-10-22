/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString;

@interface SGPseudoEventKey : NSObject <SGEntityKey> {
    NSString *_domain;
    NSString *_groupId;
    NSString *_serialized;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * domain;
@property(readonly) NSString * groupId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (id)groupId;
- (unsigned long long)hash;
- (id)initWithDomain:(id)arg1 groupId:(id)arg2;
- (id)initWithGloballyUniqueId:(id)arg1;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPseudoEventKey:(id)arg1;
- (id)serialize;

@end
