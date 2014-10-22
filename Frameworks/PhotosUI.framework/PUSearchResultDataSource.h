/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUSearchResultDelegate>, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSOrderedSet, NSSet, NSString;

@interface PUSearchResultDataSource : NSObject <PLDiagnosticsProvider> {
    NSSet *_assetUUIDs;
    NSOrderedSet *_containers;
    <PUSearchResultDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskId;
    NSSet *_uncommittedAssetUUIDs;
    NSMutableOrderedSet *_uncommittedContainers;
    bool_finished;
    bool_hasPendingChanges;
}

@property(readonly) NSSet * assetUUIDs;
@property(copy,readonly) NSString * debugDescription;
@property <PUSearchResultDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(getter=isFinished,readonly) bool finished;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_inqClearPendingChanges;
- (bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (id)assetUUIDs;
- (id)delegate;
- (id)fetchResult;
- (id)init;
- (bool)isFinished;
- (void)mergePendingChanges;
- (void)setDelegate:(id)arg1;
- (void)updateAssetUUIDs:(id)arg1 completion:(id)arg2;

@end
