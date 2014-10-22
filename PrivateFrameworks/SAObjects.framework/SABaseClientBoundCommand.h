/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)baseClientBoundCommand;
+ (id)baseClientBoundCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)callbacks;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppId:(id)arg1;
- (void)setCallbacks:(id)arg1;

@end
