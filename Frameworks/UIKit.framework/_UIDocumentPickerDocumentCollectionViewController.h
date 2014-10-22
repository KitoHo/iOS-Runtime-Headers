/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerSortOrderView, _UIDocumentPickerViewServiceViewController;

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    _UIDocumentPickerContainerModel *_model;
    NSArray *_modelObjects;
    id _monitoringToken;
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    _UIDocumentPickerSortOrderView *_sortView;
    bool_shouldHideSortBar;
    bool_updatesMayAnimate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) _UIDocumentPickerContainerModel * model;
@property(copy) NSArray * modelObjects;
@property(retain) id monitoringToken;
@property _UIDocumentPickerViewServiceViewController * serviceViewController;
@property bool shouldHideSortBar;
@property(retain) _UIDocumentPickerSortOrderView * sortView;
@property(readonly) Class superclass;
@property bool updatesMayAnimate;

- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_sortViewChanged:(id)arg1;
- (void)_unlockAnimations;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)model;
- (id)modelObjects;
- (id)monitoringToken;
- (id)serviceViewController;
- (void)setModel:(id)arg1;
- (void)setModelObjects:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setMonitoringToken:(id)arg1;
- (void)setServiceViewController:(id)arg1;
- (void)setShouldHideSortBar:(bool)arg1;
- (void)setSortView:(id)arg1;
- (void)setUpdatesMayAnimate:(bool)arg1;
- (bool)shouldHideSortBar;
- (id)sortView;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)updatesMayAnimate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end
