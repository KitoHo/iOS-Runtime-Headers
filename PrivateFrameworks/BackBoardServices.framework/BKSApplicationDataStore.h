/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSApplicationDataStoreRepositoryClient, NSString;

@interface BKSApplicationDataStore : NSObject {
    NSString *_bundleId;
    BKSApplicationDataStoreRepositoryClient *_client;
    bool_clientNeedsCheckin;
}

+ (void)_doWithClassClient:(id)arg1;
+ (void)_setClassClient:(id)arg1;
+ (id)applicationsWithAvailableStores;
+ (void)setPrefetchedKeys:(id)arg1;
+ (id)storeForApplication:(id)arg1;
+ (void)synchronize;

- (id)_initWithBundleId:(id)arg1 client:(id)arg2;
- (id)_makeSafe:(id)arg1 forType:(Class)arg2;
- (void)archivedObjectForKey:(id)arg1 withResult:(id)arg2;
- (id)archivedObjectForKey:(id)arg1;
- (void)archivedXPCCodableObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id)arg3;
- (id)archivedXPCCodableObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)objectForKey:(id)arg1 withResult:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id)arg3;
- (id)safeArchivedObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)safeObjectForKey:(id)arg1 ofType:(Class)arg2 withResult:(id)arg3;
- (id)safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (void)setArchivedObject:(id)arg1 forKey:(id)arg2;
- (void)setArchivedXPCCodableObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
