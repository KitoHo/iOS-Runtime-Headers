/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface PHChange : NSObject {
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMapTable *_changeHandlingMap;
    NSDictionary *_changedAttributesByOID;
    NSSet *_changedObjectIDs;
    NSArray *_changedObjectIDsArray;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSSet *_deletedObjectIDs;
    NSSet *_insertedObjectIDs;
    bool_unknownMergeEvent;
}

+ (id)handlerQueue;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(id)arg2;

- (void).cxx_destruct;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (bool)contentChangedForPHAssetOID:(id)arg1;
- (id)deletedObjectIDs;
- (id)description;
- (id)init;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(bool)arg2;
- (id)insertedObjectIDs;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 handler:(id)arg2;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(id)arg2;
- (id)updatedObjectIDs;

@end
