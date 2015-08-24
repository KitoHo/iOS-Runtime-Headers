/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerDirectoryObserver : NSObject <NSMetadataQueryDelegate> {
    BOOL _afterInitialUpdate;
    id /* block */ _handler;
    Class _itemClass;
    NSOrderedSet *_lastSnapshot;
    NSDate *_lastSnapshotDate;
    NSMetadataQuery *_query;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSOperationQueue *_queryWorkerQueue;
    NSArray *_scopes;
    NSArray *_sortDescriptors;
    NSOrderedSet *_staticItems;
    id _weak_updateHandlerWeakSelf;
}

@property (nonatomic) BOOL afterInitialUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned int hash;
@property (nonatomic) Class itemClass;
@property (nonatomic, retain) NSOrderedSet *lastSnapshot;
@property (nonatomic, retain) NSDate *lastSnapshotDate;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic, retain) NSMetadataQuery *query;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (nonatomic, retain) NSOperationQueue *queryWorkerQueue;
@property (nonatomic, retain) NSArray *scopes;
@property (nonatomic, retain) NSArray *sortDescriptors;
@property (nonatomic, retain) NSOrderedSet *staticItems;
@property (readonly) Class superclass;
@property (nonatomic) id updateHandlerWeakSelf;

- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3;
- (void)_initialGatherFinished:(id)arg1;
- (void)_processResults:(id)arg1 changedItems:(id)arg2 reloadAll:(BOOL)arg3;
- (id)_queryResults;
- (void)_queryUpdated:(id)arg1;
- (void)_updateObservers:(id)arg1 reloadAll:(BOOL)arg2;
- (BOOL)afterInitialUpdate;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithScopes:(id)arg1 weakSelf:(id)arg2 updateHandler:(id /* block */)arg3 itemClass:(Class)arg4;
- (void)invalidate;
- (Class)itemClass;
- (id)lastSnapshot;
- (id)lastSnapshotDate;
- (id)metadataQuery:(id)arg1 replacementObjectForResultObject:(id)arg2;
- (id)predicate;
- (id)query;
- (id)queryQueue;
- (id)queryWorkerQueue;
- (id)scopes;
- (void)setAfterInitialUpdate:(BOOL)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setItemClass:(Class)arg1;
- (void)setLastSnapshot:(id)arg1;
- (void)setLastSnapshotDate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setQueryWorkerQueue:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setStaticItems:(id)arg1;
- (void)setUpdateHandlerWeakSelf:(id)arg1;
- (id)sortDescriptors;
- (id)staticItems;
- (id)updateHandlerWeakSelf;

@end
