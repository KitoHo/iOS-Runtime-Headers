/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAISearch : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSData *fingerprint;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (double)duration;
- (id)encodedClassName;
- (id)fingerprint;
- (id)groupIdentifier;
- (void)setDuration:(double)arg1;
- (void)setFingerprint:(id)arg1;

@end
