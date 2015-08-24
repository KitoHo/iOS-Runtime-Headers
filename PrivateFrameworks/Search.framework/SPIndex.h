/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPIndex : NSObject {
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSNumber *_maxID;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSURL *_storeURL;
    BOOL _ubiquity;
}

- (id)_createObject:(id)arg1;
- (id)_objectsForCXIDs:(id)arg1 entityName:(id)arg2;
- (id)createRecord;
- (id)createTopHit;
- (void)dealloc;
- (void)deleteRecords:(id)arg1;
- (void)deleteRecordsWithExtIDs:(id)arg1;
- (void)deleteTopHitsWithExtIDs:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3;
- (void)erase;
- (id)initWithPath:(id)arg1 usingUbiquity:(BOOL)arg2;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (id)maxExistingCXIDForEntityName:(id)arg1;
- (id)nextCXIDForEntityName:(id)arg1;
- (id)persistentStoreCoordinator;
- (id)recordForExtID:(id)arg1;
- (id)recordsForCxIDs:(id)arg1;
- (id)recordsForExtIDs:(id)arg1;
- (BOOL)save;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)topHitForExtID:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3;
- (id)topHitsForCxIDs:(id)arg1;
- (id)valueForKey:(id)arg1;

@end
