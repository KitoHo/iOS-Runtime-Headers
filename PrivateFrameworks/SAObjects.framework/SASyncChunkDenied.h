/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SASyncAnchor;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * appId;
@property(copy) NSArray * callbacks;
@property(retain) SASyncAnchor * current;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property long long errorCode;
@property(readonly) unsigned long long hash;
@property(copy) NSString * refId;
@property(readonly) Class superclass;

+ (id)chunkDenied;
+ (id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkDeniedWithErrorCode:(long long)arg1;

- (id)current;
- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)initWithErrorCode:(long long)arg1;
- (bool)requiresResponse;
- (void)setCurrent:(id)arg1;
- (void)setErrorCode:(long long)arg1;

@end
