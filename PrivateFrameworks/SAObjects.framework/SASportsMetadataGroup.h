/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * groupTitle;
@property(readonly) unsigned long long hash;
@property(copy) NSArray * metadata;
@property(copy) NSNumber * selected;
@property(readonly) Class superclass;

+ (id)metadataGroup;
+ (id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)groupTitle;
- (id)metadata;
- (id)selected;
- (void)setGroupTitle:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSelected:(id)arg1;

@end
