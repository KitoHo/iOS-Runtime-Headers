/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASAbortSpeechRequest : SABaseClientBoundCommand {
}

@property(copy) NSString * reason;

+ (id)abortSpeechRequest;
+ (id)abortSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reason;
- (bool)requiresResponse;
- (void)setReason:(id)arg1;

@end
