/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSIndexSet, PHChange;

@interface PUPhotosDataSourceChange : NSObject {
    NSArray *_changedIndexPaths;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSIndexSet *_deletedSections;
    NSArray *_insertedIndexPaths;
    NSIndexSet *_insertedSections;
    PHChange *_originatingPhotoLibraryChange;
}

@property(copy) NSArray * changedIndexPaths;
@property(copy) NSIndexSet * changedSections;
@property(copy) NSArray * deletedIndexPaths;
@property(copy) NSIndexSet * deletedSections;
@property(readonly) bool hasIncrementalChanges;
@property(copy) NSArray * insertedIndexPaths;
@property(copy) NSIndexSet * insertedSections;
@property(retain) PHChange * originatingPhotoLibraryChange;

- (void).cxx_destruct;
- (id)changedIndexPaths;
- (id)changedSections;
- (id)deletedIndexPaths;
- (id)deletedSections;
- (bool)hasIncrementalChanges;
- (id)insertedIndexPaths;
- (id)insertedSections;
- (id)originatingPhotoLibraryChange;
- (void)setChangedIndexPaths:(id)arg1;
- (void)setChangedSections:(id)arg1;
- (void)setDeletedIndexPaths:(id)arg1;
- (void)setDeletedSections:(id)arg1;
- (void)setInsertedIndexPaths:(id)arg1;
- (void)setInsertedSections:(id)arg1;
- (void)setOriginatingPhotoLibraryChange:(id)arg1;

@end
