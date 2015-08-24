/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *originalCommandId;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *timings;

+ (id)metrics;
+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;

- (id)category;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalCommandId;
- (void)setCategory:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;
- (void)setTimings:(id)arg1;
- (id)timings;

@end
