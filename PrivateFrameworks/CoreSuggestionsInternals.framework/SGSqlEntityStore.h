/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSqlEntityStore : NSObject {
    SGSqliteDatabase *_db;
    SGSuggestHistory *_history;
    BOOL _identityStoreDirty;
    NSString *_path;
}

+ (id)defaultPath;
+ (id)defaultStore;
+ (void)deletePreparedSqlStoreInMemory;
+ (void)prepareSqlStoreInMemory;
+ (void)prepareSqlStoreInMemoryByClearingExistingStore:(id)arg1;
+ (id)sqlStoreInMemory;
+ (id)sqlStoreWithFilename:(id)arg1;

- (void).cxx_destruct;
- (void)_addIndexingTagsTo:(id)arg1;
- (void)_deleteTimeRangesByEntityId:(long long)arg1;
- (id)_eventFromSqlResult:(struct sqlite3_stmt { }*)arg1;
- (id)_filterOutActedOnEvents:(id)arg1;
- (id)_filterOutAllButAcceptedWithUpdatedFields:(id)arg1;
- (id)_filterOutCancelledEvents:(id)arg1;
- (id)_filterOutNotActedOnEvents:(id)arg1;
- (id)_filterOutOlderVersionsOfPseudoEvents:(id)arg1;
- (id)_filterOutUndisplayableEntities:(id)arg1;
- (BOOL)_removeEntitiesWhere:(id)arg1 onPrep:(id /* block */)arg2;
- (id)_sanitizePrefix:(id)arg1;
- (id)_sanitizeWildcard:(id)arg1;
- (long long)_writeEntityToDb:(id)arg1;
- (id)allContactsWithEntityType:(unsigned int)arg1;
- (id)allCuratedContacts;
- (id)allPseudoContacts;
- (void)clearAllTables;
- (BOOL)clearDatabase;
- (id)confirmedFieldValuesForEntity:(id)arg1;
- (BOOL)contactEntityIsActedOn:(id)arg1;
- (void)createTables;
- (id)dbHandleForTesting;
- (void)deleteEntitiesByDuplicateKey:(id)arg1;
- (id)displayableEntities:(id)arg1;
- (id)duplicateKeysMatchingAnyTag:(id)arg1;
- (unsigned int)entityCount;
- (id)entityFromSqlResult:(struct sqlite3_stmt { }*)arg1;
- (BOOL)entityIsDisplayable:(id)arg1;
- (id)historyForTesting;
- (id)initWithFilename:(id)arg1;
- (BOOL)isLocked;
- (long long)latestSchemaVersion;
- (id)loadContactByRecordId:(id)arg1;
- (id)loadContactDetailsForRecordId:(id)arg1 type:(unsigned int)arg2;
- (id)loadContactDetailsWithWhereClause:(id)arg1 onPrep:(id /* block */)arg2 type:(unsigned int)arg3 dedupeAgainst:(id)arg4;
- (id)loadEntitiesByEntityKey:(id)arg1 entityType:(long long)arg2 resolveDuplicates:(id /* block */)arg3;
- (id)loadEntityByKey:(id)arg1;
- (id)loadEntityByRecordId:(id)arg1;
- (id)loadEventByKey:(id)arg1;
- (id)loadEventByRecordId:(id)arg1;
- (void)lock;
- (id)pinnedEntities:(id)arg1;
- (id)recordIdForKey:(id)arg1;
- (long long)schemaVersion;
- (id)selectEntityQuery:(id)arg1;
- (id)suggestContactByKey:(id)arg1;
- (id)suggestContactByMasterEntityId:(long long)arg1;
- (id)suggestContactByRecordId:(id)arg1;
- (id)suggestContactsByMasterEntityQuery:(id)arg1 bindings:(id /* block */)arg2;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3 additionalWhereClause:(id)arg4 options:(unsigned int)arg5 onPrep:(id /* block */)arg6;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3 options:(unsigned int)arg4;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4 options:(unsigned int)arg5;
- (void)unlock;
- (void)writeEntity:(id)arg1;
- (long long)writeEntityFields:(id)arg1;

@end
