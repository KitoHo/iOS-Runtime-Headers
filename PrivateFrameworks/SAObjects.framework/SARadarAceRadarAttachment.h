/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SARadarAceRadarAttachment : AceObject <SAAceSerializable> {
}

@property(copy) NSData * contents;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * fileName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)aceRadarAttachment;
+ (id)aceRadarAttachmentWithDictionary:(id)arg1 context:(id)arg2;

- (id)contents;
- (id)encodedClassName;
- (id)fileName;
- (id)groupIdentifier;
- (void)setContents:(id)arg1;
- (void)setFileName:(id)arg1;

@end
