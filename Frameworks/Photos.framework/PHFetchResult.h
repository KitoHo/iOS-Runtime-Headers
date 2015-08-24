/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration> {
    unsigned int _audiosCount;
    int _chunkSizeForFetch;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    PHBatchFetchingArray *_fetchedObjects;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned int _photosCount;
    PHQuery *_query;
    BOOL _registeredForChangeNotificationDeltas;
    NSArray *_seedOIDs;
    unsigned int _videosCount;
}

@property int chunkSizeForFetch;
@property (readonly) unsigned int count;
@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) NSArray *fetchedObjectIDs;
@property (readonly) NSArray *fetchedObjects;
@property (nonatomic, readonly) id firstObject;
@property (nonatomic, readonly) id lastObject;
@property (readonly) PHQuery *query;

+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 includeTrash:(BOOL)arg2;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1;
+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;

- (void).cxx_destruct;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (int)chunkSizeForFetch;
- (int)collectionFetchType;
- (id)containerIdentifier;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)countOfAssetsWithMediaType:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchedObjectIDs;
- (id)fetchedObjectIDsSet;
- (id)fetchedObjects;
- (id)fetchedObjectsUsingManagedObjectContext:(id)arg1;
- (id)firstObject;
- (void)getMediaTypeCounts;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4;
- (BOOL)interestedInChange:(id)arg1;
- (BOOL)isRegisteredForChangeNotificationDeltas;
- (id)lastObject;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectIDAtIndex:(unsigned int)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)photoLibrary;
- (id)pl_photoLibraryObject;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)query;
- (void)setChunkSizeForFetch:(int)arg1;
- (void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
