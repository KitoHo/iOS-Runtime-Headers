/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarEventSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;

+ (id)eventSearchCompleted;
+ (id)eventSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)eventSearchCompletedWithResults:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithResults:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;

@end
