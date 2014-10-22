/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PUPhotoBrowserControllerDelegate>, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLCloudSharedComment, PLPhotoBrowserController, PLPhotoTileViewController, PLSlalomRegionEditor, PUAirplayRoute, PUAvalancheReviewController, PUPhotoBrowserControllerSpec, PUPhotoBrowserTitleView, PUPhotoPinchGestureRecognizer, PUPhotosSharingViewController, PUSlideshowSettings, PUVideoEditPluginSession, UIColor, UIImage, UIMovieScrubber, UIPopoverController, UIView, _UIContentUnavailableView, _UINavigationControllerPalette;

@interface PUPhotoBrowserController : UIViewController <PLPhotoBrowserControllerDelegate, PUPhotosSharingViewControllerDelegate, PUPhotosSharingTransitionDelegate, PUPhotoEditViewControllerDelegate, UIGestureRecognizerDelegate, PUCollectionViewLayoutProvider, PUAvalancheReviewControllerDelegate, UIPopoverControllerDelegate, PUVideoEditPluginSessionDataSource, PUEditPluginSessionDelegate, PLDismissableViewController, PHPhotoLibraryChangeObserver, PHAssetCollectionDataSource> {
    _UIContentUnavailableView *__emptyPlaceholderView;
    id __lockScreenSharingObserver;
    unsigned long long _allowedActions;
    PHFetchResult *_assetCollections;
    PUPhotoBrowserTitleView *_assetTitleView;
    PUAvalancheReviewController *_avalancheReviewController;
    NSString *_cachedVideoAssetIdentifier;
    long long _cachedVideoEditActionType;
    PUAirplayRoute *_currentAirplayRoute;
    UIPopoverController *_currentPopoverController;
    PUSlideshowSettings *_deferredSlideshowSettings;
    <PUPhotoBrowserControllerDelegate> *_delegate;
    NSMutableDictionary *_downloadEndingProgressIndicatorViews;
    NSMutableDictionary *_downloadProgressIndicatorViews;
    NSMutableDictionary *_downloadResourcesRequests;
    PLCloudSharedComment *_initialComment;
    PLPhotoBrowserController *_legacyPhotoBrowserController;
    NSDictionary *_navbarButtons;
    PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
    id _ppt_onDidEndPagingBlock;
    PUPhotosSharingViewController *_sharingViewController;
    PLSlalomRegionEditor *_slalomRegionEditor;
    PUPhotoBrowserControllerSpec *_spec;
    NSMutableSet *_stableFavoriteIds;
    NSDictionary *_toolbarButtons;
    PUVideoEditPluginSession *_videoEditPluginSession;
    UIMovieScrubber *_videoScrubber;
    UIView *_videoScrubberClipView;
    _UINavigationControllerPalette *_videoScrubberPalette;
    bool_assetTitleViewWantsSubtitle;
    bool_browserIsPaging;
    bool_browserIsScrubbing;
    bool_editingComments;
    bool_editingVideo;
    bool_isBrowsingFavorites;
    bool_isDeletingCurrentAsset;
    bool_isTransitioningShareSheet;
    bool_overlaysVisible;
    bool_photoBackgroundHidden;
    bool_shouldShowOverlaysWhenViewAppears;
}

@property(setter=_setEmptyPlaceholderView:,retain) _UIContentUnavailableView * _emptyPlaceholderView;
@property(setter=_setLockScreenSharingObserver:,retain) id _lockScreenSharingObserver;
@property unsigned long long allowedActions;
@property(readonly) PHFetchResult * assetCollections;
@property(readonly) PHFetchResult * assetCollectionsFetchResult;
@property(readonly) PHCachingImageManager * cachingImageManager;
@property(readonly) UIView * commentsView;
@property(readonly) PHAsset * currentAsset;
@property(readonly) PHAssetCollection * currentAssetContainer;
@property(readonly) PHAssetCollection * currentAssetContainerForZoomTransition;
@property(readonly) PHAsset * currentAssetForZoomTransition;
@property(readonly) PLPhotoTileViewController * currentTileForTransitions;
@property(copy,readonly) NSString * debugDescription;
@property <PUPhotoBrowserControllerDelegate> * delegate;
@property bool deletesDuplicatesWhenNecessary;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) PLCloudSharedComment * initialComment;
@property bool isBrowsingFavorites;
@property(getter=areOverlaysVisible,setter=_setOverlaysVisible:) bool overlaysVisible;
@property(readonly) UIColor * photoBackgroundColor;
@property(getter=isPhotoBackgroundHidden) bool photoBackgroundHidden;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } photoFrame;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } photoFrameForZoomTransition;
@property(readonly) UIImage * photoImage;
@property(readonly) UIImage * photoImageForZoomTransition;
@property(setter=ppt_setOnDidEndPagingBlock:,copy) id ppt_onDidEndPagingBlock;
@property bool shouldPlayVideoWhenViewAppears;
@property bool shouldShowOverlaysWhenViewAppears;
@property(readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (bool)_allowsActions:(unsigned long long)arg1;
- (void)_animateInPalette;
- (void)_animateOutPalette;
- (void)_applicationWillEnterForgroundHandler:(id)arg1;
- (id)_assetCollectionsDataSourceForCurrentModalViewController;
- (void)_beginEditingCurrentAsset:(id)arg1;
- (bool)_canShowCommentsForCurrentAsset;
- (bool)_canStartEditSession;
- (void)_cancelTrimmedVideo:(id)arg1;
- (void)_createVideoEditPluginSessionIfNeeded;
- (bool)_currentAssetIsMedia;
- (bool)_currentAssetIsRemote;
- (id)_currentFavoriteItemIdentifier;
- (bool)_currentItemHasAudio;
- (id)_currentMediaItemIdentifier;
- (id)_currentTile;
- (void)_deferSlideshowWithSettings:(id)arg1;
- (void)_deleteCurrentItem:(id)arg1;
- (void)_didFinishDownloadingAssetWithIdentifier:(id)arg1 success:(bool)arg2 canceled:(bool)arg3 error:(id)arg4;
- (bool)_dismissLegacyPopovers;
- (void)_dismissSharingViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)_dismissViewControllerInNavigationController:(id)arg1;
- (void)_displayShareSheet:(id)arg1 completion:(id)arg2 isLockScreenCamera:(bool)arg3;
- (void)_displayShareSheet:(id)arg1 completion:(id)arg2;
- (void)_displayShareSheet:(id)arg1;
- (void)_downloadCurrentItem:(id)arg1;
- (long long)_editActionTypeForCurrentAsset;
- (id)_emptyPlaceholderView;
- (void)_endEditingCurrentAsset;
- (void)_enterReviewMode:(id)arg1;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(bool)arg2 handler:(id)arg3;
- (void)_finalizeSharingViewControllerDismiss;
- (void)_finishSlideshowConfig:(id)arg1 withSettings:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(bool)arg3;
- (bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_handleEditWithPluginItem:(id)arg1;
- (void)_handleHideMenuItem:(id)arg1;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (void)_handleRevertItem:(id)arg1;
- (void)_hideComments;
- (id)_initialSlideshowSettings;
- (bool)_isDownloadingAssetWithIdentifier:(id)arg1;
- (bool)_isTrashBin;
- (id)_legacyPhotoBrowserControllerForSubclassesOnly;
- (id)_lockScreenSharingObserver;
- (id)_navbarButtonForIdentifier:(id)arg1;
- (void)_navigateToAllPhotos;
- (void)_pauseCurrentMedia:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_photoFrameForTileController:(id)arg1;
- (void)_playCurrentMedia:(id)arg1;
- (void)_prepareForSharingViewControllerDismiss:(id)arg1;
- (void)_presentViewControllerInNavigationController:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)_pushPhotoEditorForAsset:(id)arg1;
- (void)_removeAdjacentCommentsTables;
- (void)_removeCurrentItem:(id)arg1;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(bool)arg3 resultHandler:(id)arg4;
- (void)_returnToCamera:(id)arg1;
- (void)_revealComments;
- (void)_saveTrimmedVideo:(id)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setLockScreenSharingObserver:(id)arg1;
- (void)_setOverlaysVisible:(bool)arg1 animated:(bool)arg2 updateBarsVisibility:(bool)arg3;
- (void)_setOverlaysVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setOverlaysVisible:(bool)arg1;
- (void)_setOverlaysVisibleForModalTransition:(bool)arg1 animated:(bool)arg2;
- (void)_setupStandardNavigationItem:(id)arg1;
- (void)_showAirplayPicker:(id)arg1;
- (void)_showAllPhotos:(id)arg1;
- (id)_standardLeftNavigationItemsForCurrentAsset;
- (id)_standardRightNavigationItemsForCurrentAsset;
- (id)_standardToolbarItemsForCurrentAsset;
- (void)_startDownloadingAsset:(id)arg1;
- (void)_startLocalSlideshowWithSettings:(id)arg1;
- (void)_startRemoteSlideshowWithSettings:(id)arg1;
- (void)_startSlideshow:(id)arg1;
- (void)_stopDownloadingAssetWithIdentifier:(id)arg1;
- (long long)_tileCountForCurrentModalViewController;
- (void)_toggleFavorite:(id)arg1;
- (id)_toolbarButtonForIdentifier:(id)arg1;
- (void)_updateAssetTitleView;
- (void)_updateBackButtonItem;
- (void)_updateBackgroundColor;
- (void)_updateBarItemsAnimated:(bool)arg1;
- (void)_updateBarsForCommentsEditingAnimated:(bool)arg1;
- (void)_updateBarsForVideoEditingAnimated:(bool)arg1;
- (void)_updateCenterOverlays;
- (void)_updateCurrentRoute:(id)arg1;
- (void)_updateDownloadProgressIndicatorForAssetWithIdentifier:(id)arg1;
- (void)_updateEmptyPlaceholderAnimated:(bool)arg1;
- (bool)_updateSpec;
- (void)_updateVideoEditActionType;
- (void)_updateVideoScrubberOffset;
- (void)_updateVideoScrubberToScrubberForCurrentVideoViewDelayed:(bool)arg1;
- (void)_updateVideoScrubberVisibility;
- (void)_updateVideoViewAttachments:(id)arg1;
- (id)_videoTrimSaveItem;
- (unsigned long long)allowedActions;
- (bool)areOverlaysVisible;
- (id)assetCollections;
- (id)assetCollectionsFetchResult;
- (id)assetsInAssetCollection:(id)arg1;
- (void)avalancheReviewControllerDidComplete:(id)arg1;
- (id)cachingImageManager;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)commentsView;
- (id)contentScrollView;
- (void)copy:(id)arg1;
- (id)currentAsset;
- (id)currentAssetContainer;
- (id)currentAssetContainerForZoomTransition;
- (id)currentAssetForZoomTransition;
- (id)currentTileForTransitions;
- (void)dealloc;
- (id)delegate;
- (bool)deletesDuplicatesWhenNecessary;
- (void)didEndNavigationOperation:(long long)arg1 inNavigationController:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id)arg3;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(id)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (bool)editPluginSessionCanRevertToOriginal:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithSpec:(id)arg1 assetAtIndexPath:(id)arg2 assetCollections:(id)arg3 dataSource:(id)arg4;
- (id)initialComment;
- (bool)isBrowsingFavorites;
- (bool)isEmpty;
- (bool)isPhotoBackgroundHidden;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)loadView;
- (id)photoBackgroundColor;
- (void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2;
- (void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2;
- (id)photoBrowserController:(id)arg1 customCenterOverlayForTileViewController:(id)arg2;
- (void)photoBrowserController:(id)arg1 didFailToStreamPhotoToCurrentRouteWithError:(id)arg2 retryBlock:(id)arg3;
- (bool)photoBrowserController:(id)arg1 isPhotoDeleteForSender:(id)arg2;
- (void)photoBrowserController:(id)arg1 overlayVisibilityWillChangeTo:(bool)arg2 withDuration:(double)arg3;
- (void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2;
- (void)photoBrowserController:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)photoBrowserController:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)photoBrowserController:(id)arg1 setRemakingVideo:(bool)arg2;
- (void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(bool)arg2 animated:(bool)arg3;
- (void)photoBrowserController:(id)arg1 tileController:(id)arg2 didAppear:(bool)arg3;
- (void)photoBrowserController:(id)arg1 tileController:(id)arg2 videoViewDidCreateAttachments:(id)arg3;
- (void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2;
- (void)photoBrowserController:(id)arg1 willShowMenuController:(id)arg2;
- (void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1;
- (void)photoBrowserControllerDidDeleteCurrentAsset:(id)arg1;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerDidScroll:(id)arg1;
- (void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(bool)arg2;
- (id)photoBrowserControllerMakeNavigationBar:(id)arg1;
- (id)photoBrowserControllerMakeToolbar:(id)arg1;
- (bool)photoBrowserControllerOverlaysVisible:(id)arg1;
- (id)photoBrowserControllerRequestsAirPlayRemoteSlideshowForCurrentRoute:(id)arg1;
- (id)photoBrowserControllerRequestsCurrentAirplayRouteDictionary:(id)arg1;
- (id)photoBrowserControllerRequestsMediaControlClientForCurrentRoute:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPlayingVideo:(id)arg1;
- (void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(bool)arg2;
- (void)photoBrowserControllerWillDeleteCurrentAsset:(id)arg1;
- (void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(bool)arg2;
- (void)photoEditController:(id)arg1 didFinishWithSavedChanges:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })photoFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })photoFrameForZoomTransition;
- (id)photoImage;
- (id)photoImageForZoomTransition;
- (void)photoLibraryDidChange:(id)arg1;
- (struct CGPoint { double x1; double x2; })photosSharingTransition:(id)arg1 contentOffsetForKeyAssetIndexPath:(id)arg2 inAssetCollectionsDataSource:(id)arg3;
- (id)photosSharingTransition:(id)arg1 layoutForKeyAssetIndexPath:(id)arg2 inAssetCollectionsDataSource:(id)arg3;
- (void)photosSharingTransition:(id)arg1 setVisibility:(bool)arg2 forKeyAssetIndexPath:(id)arg3 inAssetCollectionsDataSource:(id)arg4;
- (id)photosSharingTransition:(id)arg1 viewForTransitionWithAssetCollectionsDataSource:(id)arg2;
- (void)photosSharingTransition:(id)arg1 willAnimatePresent:(bool)arg2;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(bool)arg3;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(bool)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(bool)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)ppt_dismissShareSheetWithCompletion:(id)arg1;
- (id)ppt_legacyPhotoBrowserIndexPath;
- (id)ppt_onDidEndPagingBlock;
- (void)ppt_presentShareSheetWithCompletion:(id)arg1;
- (bool)ppt_scrollToPhotoWithRelativeIndex:(long long)arg1 completion:(id)arg2;
- (bool)ppt_scrubToAbsoluteIndex:(id)arg1 immediately:(bool)arg2;
- (void)ppt_setIsScrubbing:(bool)arg1;
- (void)ppt_setOnDidEndPagingBlock:(id)arg1;
- (void)ppt_setOverlaysVisible:(bool)arg1;
- (id)ppt_sharingViewController;
- (bool)prepareForDismissingForced:(bool)arg1;
- (id)pu_debugRows;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsStatusBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)setAllowedActions:(unsigned long long)arg1;
- (void)setAssetCollections:(id)arg1 dataSource:(id)arg2 currentImageIndexPath:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(bool)arg1;
- (void)setDoneItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setInitialComment:(id)arg1;
- (void)setIsBrowsingFavorites:(bool)arg1;
- (void)setPhotoBackgroundHidden:(bool)arg1;
- (void)setShouldPlayVideoWhenViewAppears:(bool)arg1;
- (void)setShouldShowOverlaysWhenViewAppears:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldPlayVideoWhenViewAppears;
- (bool)shouldShowOverlaysWhenViewAppears;
- (void)startSlideshowWithSettings:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willBeginNavigationOperation:(long long)arg1 inNavigationController:(id)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
