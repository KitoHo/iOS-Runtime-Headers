/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSEntityDescription, NSPredicate, NSString;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {
    struct _requestFlags { 
        unsigned int includesSubentities : 1; 
        unsigned int resultType : 2; 
        unsigned int entityIsName : 1; 
        unsigned int _RESERVED : 28; 
    NSDictionary *_columnsToUpdate;
    id _entity;
    NSString *_entityName;
    } _flags;
    NSPredicate *_predicate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSEntityDescription * entity;
@property(copy,readonly) NSString * entityName;
@property(readonly) unsigned long long hash;
@property bool includesSubentities;
@property(retain) NSPredicate * predicate;
@property(copy) NSDictionary * propertiesToUpdate;
@property unsigned long long resultType;
@property(readonly) Class superclass;

+ (id)batchUpdateRequestWithEntityName:(id)arg1;

- (id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id*)arg2;
- (void)_resolveEntityWithContext:(id)arg1;
- (void)_setValidatedPropertiesToUpdate:(id)arg1;
- (void)dealloc;
- (id)entity;
- (id)entityName;
- (bool)includesSubentities;
- (id)init;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (id)predicate;
- (id)propertiesToUpdate;
- (unsigned long long)requestType;
- (unsigned long long)resultType;
- (void)setIncludesSubentities:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setPropertiesToUpdate:(id)arg1;
- (void)setResultType:(unsigned long long)arg1;

@end
