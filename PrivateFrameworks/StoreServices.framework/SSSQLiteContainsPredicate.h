/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying> {
    BOOL _negative;
    SSSQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

@property (getter=isNegative, nonatomic, readonly) BOOL negative;
@property (nonatomic, readonly) SSSQLiteQuery *query;
@property (nonatomic, readonly) NSString *queryProperty;
@property (nonatomic, readonly) NSArray *values;

+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;

- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNegative;
- (id)query;
- (id)queryProperty;
- (id)values;

@end
