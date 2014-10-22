/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSObject<OS_dispatch_semaphore>, PKPassLibrary, UIWindow;

@interface PKPassSnapshotter : NSObject {
    PKPassLibrary *_passLibrary;
    double _scale;
    NSObject<OS_dispatch_semaphore> *_snapshotSem;
    UIWindow *_snapshotWindow;
}

@property bool runsInBackgroundProcess;

+ (void)purgeCacheOfPassSnapshotsWithUinqueID:(id)arg1;

- (void)_cacheImage:(struct CGImage { }*)arg1 withKey:(id)arg2;
- (bool)_cachedImageWithKey:(id)arg1 completion:(id)arg2;
- (void)_performSnapshot:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cacheKey:(id)arg3 completion:(id)arg4;
- (void)_prepareSnapshotViewWithPass:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cacheKey:(id)arg3 completion:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)passLibrary;
- (bool)runsInBackgroundProcess;
- (void)setRunsInBackgroundProcess:(bool)arg1;
- (void)snapshotWithPass:(id)arg1 completion:(id)arg2;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id)arg3;
- (void)snapshotWithPass:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 withCache:(bool)arg3 completion:(id)arg4;
- (void)snapshotWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)snapshotWithUniqueID:(id)arg1 manifestHash:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completion:(id)arg4;
- (void)snapshotWithUniqueID:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id)arg3;

@end
