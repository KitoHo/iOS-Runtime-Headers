/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSString * aceId;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSURL * identifier;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)domainObjectCommitCompleted;
+ (id)domainObjectCommitCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (void)setIdentifier:(id)arg1;

@end
