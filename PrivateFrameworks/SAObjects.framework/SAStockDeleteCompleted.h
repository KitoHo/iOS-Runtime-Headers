/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockDeleteCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic, copy) NSArray *stocks;
@property (readonly) Class superclass;

+ (id)deleteCompleted;
+ (id)deleteCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setStocks:(id)arg1;
- (id)stocks;

@end
