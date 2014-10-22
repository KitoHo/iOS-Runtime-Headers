/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PUPhotosSharingViewControllerDelegate>, NSIndexPath, NSMutableDictionary, NSMutableSet, NSPredicate, NSString, PHAsset, PHCachingImageManager, PHFetchResult, PUActivityViewController, PUPhotoPinchGestureRecognizer, PUPhotoSelectionManager, PUPhotosSharingCollectionViewLayout, PUPhotosSharingTransitionContext, PUPhotosSharingViewControllerSpec, PUPhotosZoomingSharingGridCell, PUScrollViewSpeedometer, PUTransitionViewAnimator, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer, UIView;

@interface PUPhotosSharingViewController : UIViewController <PLDismissableViewController, UIGestureRecognizerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUPhotosSharingCollectionViewLayoutDelegate, UIActivityViewControllerDelegate, PUTransitionViewAnimatorDelegate, PUScrollViewSpeedometerDelegate, PUActivityViewControllerDelegate, PHPhotoLibraryChangeObserver, PUPhotosSharingTransitionViewController, PHAssetCollectionDataSource> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    PHCachingImageManager *__cachingImageManager;
    PUActivityViewController *__embeddedActivityViewController;
    PHAsset *__lastKnownReferenceAsset;
    NSIndexPath *__lastKnownReferenceIndexPath;
    PUTransitionViewAnimator *__photoZoomAnimator;
    PUPhotosZoomingSharingGridCell *__photoZoomCell;
    PUPhotoPinchGestureRecognizer *__photoZoomPinchGestureRecognizer;
    id __pptOnDidEndScrollingBlock;
    NSMutableSet *__preheatedAssets;
    } __previousPreheatRect;
    UICollectionViewLayout *__transitionLayout;
    PUActivityViewController *__unembeddedActivityViewController;
    double _cachedEmbeddedActivityViewHeight;
    UIBarButtonItem *_cancelButton;
    <PUPhotosSharingViewControllerDelegate> *_delegate;
    UIBarButtonItem *_doneButton;
    UIView *_embeddedActivityView;
    NSPredicate *_filterPredicate;
    NSIndexPath *_inFlightReferenceIndexPath;
    UICollectionView *_mainCollectionView;
    PUPhotosSharingCollectionViewLayout *_mainCollectionViewLayout;
    UIBarButtonItem *_nextButton;
    PHFetchResult *_photoCollectionsFetchResult;
    PUPhotoSelectionManager *_photoSelectionManager;
    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;
    NSMutableDictionary *_resultsForAssetCollection;
    PUPhotosSharingViewControllerSpec *_spec;
    PUScrollViewSpeedometer *_speedometer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    bool__viewInSyncWithModel;
    bool_didAttemptShareViaAirDrop;
    bool_inFlightRotation;
    bool_lockScreenCamera;
    bool_shouldScrollToSelection;
}

@property(readonly) PUActivityViewController * _activityViewController;
@property(readonly) PHCachingImageManager * _cachingImageManager;
@property(setter=_setEmbeddedActivityViewController:,retain) PUActivityViewController * _embeddedActivityViewController;
@property(setter=_setLastKnownReferenceAsset:,retain) PHAsset * _lastKnownReferenceAsset;
@property(setter=_setLastKnownReferenceIndexPath:,retain) NSIndexPath * _lastKnownReferenceIndexPath;
@property(setter=_setPhotoZoomAnimator:,retain) PUTransitionViewAnimator * _photoZoomAnimator;
@property(setter=_setPhotoZoomCell:,retain) PUPhotosZoomingSharingGridCell * _photoZoomCell;
@property(setter=_setPhotoZoomPinchGestureRecognizer:,retain) PUPhotoPinchGestureRecognizer * _photoZoomPinchGestureRecognizer;
@property(setter=_pptSetOnDidEndScrollingBlock:,copy) id _pptOnDidEndScrollingBlock;
@property(setter=_setPreheatedAssets:,retain) NSMutableSet * _preheatedAssets;
@property(setter=_setPreviousPreheatRect:) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _previousPreheatRect;
@property(setter=_setTransitionLayout:,retain) UICollectionViewLayout * _transitionLayout;
@property(setter=_setUnembeddedActivityViewController:,retain) PUActivityViewController * _unembeddedActivityViewController;
@property(getter=_isViewInSyncWithModel,setter=_setViewInSyncWithModel:) bool _viewInSyncWithModel;
@property(readonly) PHFetchResult * assetCollectionsFetchResult;
@property(readonly) NSIndexPath * currentIndexPath;
@property(copy,readonly) NSString * debugDescription;
@property <PUPhotosSharingViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(setter=_setEmbeddedActivityView:,retain) UIView * embeddedActivityView;
@property(readonly) NSPredicate * filterPredicate;
@property(readonly) unsigned long long hash;
@property(getter=isLockScreenCamera) bool lockScreenCamera;
@property(setter=_setMainCollectionView:,retain) UICollectionView * mainCollectionView;
@property(setter=_setMainCollectionViewLayout:,retain) PUPhotosSharingCollectionViewLayout * mainCollectionViewLayout;
@property(readonly) PHFetchResult * photoCollectionsFetchResult;
@property(retain) PUPhotoSelectionManager * photoSelectionManager;
@property(retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;
@property(retain) PUPhotosSharingViewControllerSpec * spec;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityViewController;
- (void)_activityViewControllerDidDismissWithActivityType:(id)arg1 didComplete:(bool)arg2;
- (id)_assetAtIndexPath:(id)arg1;
- (void)_beginZoomingForCellAtIndexPath:(id)arg1;
- (id)_cachingImageManager;
- (void)_cancel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_collectionViewContentFrame;
- (id)_currentSelectedAssets;
- (id)_embeddedActivityViewController;
- (bool)_embedsActivityView;
- (void)_endZoomingForCell;
- (void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2;
- (void)_getMainCollectionViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 embeddedActivityViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_handlePhotoPinch:(id)arg1;
- (void)_handleTapAtIndexPath:(id)arg1;
- (void)_handleTapInMainCollectionView:(id)arg1;
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;
- (unsigned long long)_indexForPhotoCollection:(id)arg1;
- (id)_indexPathInCollectionView:(id)arg1 closestToContentOffsetX:(double)arg2;
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)_indexPathOfAsset:(id)arg1 sectionHint:(long long)arg2;
- (id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1;
- (bool)_isAnyAssetSelected;
- (bool)_isViewInSyncWithModel;
- (id)_lastKnownReferenceAsset;
- (id)_lastKnownReferenceIndexPath;
- (id)_localizedSelectionTitle;
- (void)_next:(id)arg1;
- (long long)_numberOfItemsInSection:(long long)arg1;
- (long long)_numberOfSections;
- (void)_pageToIndexPath:(id)arg1 animated:(bool)arg2;
- (id)_photoCollectionAtIndex:(long long)arg1;
- (id)_photoZoomAnimator;
- (id)_photoZoomCell;
- (id)_photoZoomPinchGestureRecognizer;
- (id)_pptOnDidEndScrollingBlock;
- (void)_pptSetOnDidEndScrollingBlock:(id)arg1;
- (id)_preheatedAssets;
- (void)_prepareActivityViewControllerForUse;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_previousPreheatRect;
- (void)_processCollectionListChangeNotifications:(id)arg1 singleCollectionNotifications:(id)arg2;
- (id)_requiredActivityViewController;
- (void)_resetPreheating;
- (id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;
- (void)_setEmbeddedActivityView:(id)arg1;
- (void)_setEmbeddedActivityViewController:(id)arg1;
- (void)_setLastKnownReferenceAsset:(id)arg1 indexPath:(id)arg2;
- (void)_setLastKnownReferenceAsset:(id)arg1;
- (void)_setLastKnownReferenceIndexPath:(id)arg1;
- (void)_setMainCollectionView:(id)arg1;
- (void)_setMainCollectionViewLayout:(id)arg1;
- (void)_setPhotoZoomAnimator:(id)arg1;
- (void)_setPhotoZoomCell:(id)arg1;
- (void)_setPhotoZoomPinchGestureRecognizer:(id)arg1;
- (void)_setPreheatedAssets:(id)arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setSelected:(bool)arg1 atIndexPath:(id)arg2 animated:(bool)arg3;
- (void)_setTransitionLayout:(id)arg1;
- (void)_setUnembeddedActivityViewController:(id)arg1;
- (void)_setViewInSyncWithModel:(bool)arg1;
- (bool)_shouldShowAsset:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeForItemAtIndexPath:(id)arg1;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (id)_transitionLayout;
- (id)_unembeddedActivityViewController;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)_updateEmbeddedActivityViewAppearance;
- (void)_updateInterfaceForModelReloadAnimated:(bool)arg1;
- (void)_updateLastKnownReferenceIndexPath;
- (void)_updateMainViewAnimated:(bool)arg1;
- (void)_updateNavigationBarAnimated:(bool)arg1;
- (void)_updatePeripheralInterfaceAnimated:(bool)arg1;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_updatePreheatedAssets;
- (id)_validIndexPathFromIndexPath:(id)arg1;
- (bool)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetsInAssetCollection:(id)arg1;
- (bool)automaticallyAdjustsScrollViewInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)currentIndexPath;
- (void)dealloc;
- (id)delegate;
- (id)embeddedActivityView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })embeddedActivityViewFrameWhenShowing:(bool)arg1;
- (id)filterPredicate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithPhotoCollectionsFetchResult:(id)arg1 filterPredicate:(id)arg2 selection:(id)arg3;
- (bool)isLockScreenCamera;
- (id)layout:(id)arg1 collectionView:(id)arg2 referenceIndexPathWithOffsetX:(double*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atIndexPath:(id)arg4;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)mainCollectionView;
- (id)mainCollectionViewLayout;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)photoCollectionsFetchResult;
- (void)photoLibraryDidChange:(id)arg1;
- (id)photoSelectionManager;
- (id)photosSharingTransitionContext;
- (void)ppt_faultInScollViewContentSize;
- (bool)ppt_scrollToAssetAtRelativeIndex:(long long)arg1 completion:(id)arg2;
- (id)ppt_scrollView;
- (bool)prepareForDismissingForced:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewSpeedometer:(id)arg1 regimeDidChange:(long long)arg2 from:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndexPath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLockScreenCamera:(bool)arg1;
- (void)setPhotoSelectionManager:(id)arg1;
- (void)setPhotosSharingTransitionContext:(id)arg1;
- (void)setPhotosSharingTransitionLayout:(id)arg1 animated:(bool)arg2;
- (void)setSpec:(id)arg1;
- (id)spec;
- (id)transitionCollectionView;
- (void)transitionViewAnimatorDidEnd:(id)arg1 finished:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
