/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SASetActivationToken : SABaseClientBoundCommand {
}

@property(copy) NSData * activationToken;
@property(copy) NSString * language;

+ (id)setActivationToken;
+ (id)setActivationTokenWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (bool)requiresResponse;
- (void)setActivationToken:(id)arg1;
- (void)setLanguage:(id)arg1;

@end
