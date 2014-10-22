/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPhotoBrowserControllerDelegate>, <PLRootLibraryNavigationController>, NSArray, NSDictionary, NSIndexPath, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString, NSTimer, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLAirPlayBackgroundView, PLAirPlaySession, PLAssetContainerDataSource, PLDeletePhotosActionController, PLEditPhotoController, PLPhotoScrubber, PLPhotoTileViewController, PLPictureFramePlugin, PLProgressHUD, PLProgressView, PLVideoRemaker, PLVideoView, UIActionSheet, UIAlertView, UIImage, UILongPressGestureRecognizer, UINavigationBar, UIPageController, UIScrollView, UITransitionView, UIView, UIWindow;

@interface PLPhotoBrowserController : UIViewController <PLAirPlaySessionDataSource, PLPhotoScrubberSpeedDelegate, UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate, PLPhotoScrubberDataSource, UIPopoverControllerDelegate, PLSlideshowPluginDelegate, AirPlayRemoteSlideshowDelegate, PLDismissableViewController, PHPhotoLibraryChangeObserver> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    unsigned int _videoEditingMode : 1;
    unsigned int _remaking : 1;
    unsigned int _isEditingPhoto : 1;
    unsigned int _clearingFullScreenView : 1;
    unsigned int _scrolling : 1;
    unsigned int _canShowCopyCallout : 1;
    unsigned int _viewIsDisappearing : 1;
    unsigned int _viewDidAppear : 1;
    unsigned int _didRotate : 1;
    unsigned int _isAnimatingTrash : 1;
    unsigned int _isPlayingMusic : 1;
    unsigned int _didStartMusicPlayback : 1;
    unsigned int _rotationDisabledUnderCropOverlay : 1;
    unsigned int _didSetSimpleRemotePriority : 1;
    unsigned int _paging : 1;
    unsigned int _collapsing : 1;
    unsigned int _rotating : 1;
    unsigned int _reloadPhotoScrubber : 1;
    unsigned int _videoViewWillBeginEditing : 1;
    unsigned int _playVideoOnActivation : 1;
    unsigned int _remakingWasCancelled : 1;
    unsigned int _canUploadHDVideoOver3G : 1;
    unsigned int _didSetHDVideoUploadCapability : 1;
    unsigned int _didShowHDRPrompt : 1;
    unsigned int _imagesAreShuffled : 1;
    unsigned int _isEditingComment : 1;
    unsigned int _slideShowIsStreamed : 1;
    unsigned int _airTunesSlideShowIsEnding : 1;
    <PLPhotoBrowserControllerDelegate> *__delegate;
    PLAssetContainerDataSource *__originalAssetContainerDataSource;
    PHAsset *__pendingAssetForTileUpdate;
    SEL _actionAfterForcedRotation;
    UIActionSheet *_actionView;
    SEL _activityAction;
    id _activityTarget;
    PLAirPlayBackgroundView *_airTunesBackgroundView;
    PLAirPlaySession *_airplaySession;
    UIAlertView *_alertView;
    unsigned int _appInteractionDisabled;
    PLAssetContainerDataSource *_assetContainerDataSource;
    int _autohideControlCount;
    NSArray *_availableAirTunesServices;
    unsigned int _bottomBarDisabled;
    PHCachingImageManager *_cachingImageManager;
    UITransitionView *_cameraTransitionView;
    UINavigationBar *_commentsEditBar;
    int _commentsInteractionMode;
    } _contentStartSize;
    int _currentAirTunesMode;
    NSString *_currentAirTunesTransition;
    NSArray *_currentAirplayRoutes;
    NSString *_currentAssetContainerUUID;
    NSManagedObjectID *_currentAssetObjectID;
    NSString *_currentAssetPublicGlobalUUID;
    NSIndexPath *_currentIndexPath;
    PHAsset *_currentVideo;
    PLDeletePhotosActionController *_deleteController;
    NSIndexPath *_deletedIndexPath;
    PLPhotoTileViewController *_deletedTile;
    PLEditPhotoController *_editController;
    float _endScale;
    UIView *_fadeToBlackView;
    NSMutableDictionary *_imageRequestsByIdentifier;
    NSIndexPath *_lastDisplayedRemoteSlideshowPhotoIndexPath;
    NSIndexPath *_lastStreamedPhotoIndexPath;
    UIImage *_loadedImage;
    double _maximumTrimLength;
    } _menuControllerSourceRect;
    PLPhotoTileViewController *_mostRecentlyActiveTile;
    unsigned int _navigationBarDisabled;
    UIPageController *_pageController;
    NSMutableArray *_pendingAssetChangeNotifications;
    NSMutableArray *_pendingCollectionListChangeNotifications;
    PHAsset *_pendingPhoto;
    NSMutableArray *_pendingSingleCollectionChangeNotifications;
    SEL _photoAction;
    id _photoActionInvoker;
    PLPhotoScrubber *_photoScrubber;
    int _photoThumbnailFormat;
    NSIndexPath *_priorIndexPath;
    PLProgressView *_progressView;
    long long _publicGlobalUUIDRequestCount;
    UILongPressGestureRecognizer *_recognizer;
    PLVideoRemaker *_remaker;
    UIView *_remakerContainerView;
    int _remakerMode;
    unsigned int _rotationDisabled;
    PLProgressHUD *_savingPhotoHud;
    UIScrollView *_scroller;
    NSNumberFormatter *_scrubOverlayTitleFormatter;
    NSIndexPath *_scrubbedImageIndexPath;
    long long _scrubberAssetContainerIndex;
    int _showErrorAlert;
    double _slideshowDelay;
    NSIndexPath *_slideshowEndIndexPath;
    unsigned long long _slideshowItemsShown;
    unsigned long long _slideshowItemsToShow;
    PLPictureFramePlugin *_slideshowPlugin;
    int _slideshowStatus;
    NSTimer *_slideshowTimer;
    UITransitionView *_slideshowTransitionView;
    UIView *_slideshowView;
    float _startScale;
    unsigned int _statusBarIsLocked;
    NSMutableDictionary *_tileCache;
    UIPageController *_tvOutPageController;
    UIScrollView *_tvOutScroller;
    NSMutableDictionary *_tvOutTileCache;
    UITransitionView *_tvOutTransitionView;
    UIWindow *_tvOutWindow;
    bool__enableInteractionEventsAfterUpdatingTileIndex;
    bool_animating;
    bool_canDelayImageLoading;
    bool_commentsTableWasVisible;
    bool_delayImageLoading;
    bool_deletesDuplicatesWhenNecessary;
    bool_fadingToBlack;
    bool_ignoringInteractionEventsForVideoViewRemaking;
    bool_isCameraApp;
    bool_playingVideo;
    bool_shouldPlayVideoWhenViewAppears;
    bool_showingNextImage;
    bool_showsAirTunesOption;
    bool_slideshowIsEnding;
    bool_slideshowIsLoading;
    bool_slideshowIsOrigami;
    bool_slideshowStartedInFullScreen;
    bool_tvOutOn;
    boolshouldShowOverlaysWhenViewAppears;
    boolshouldShowOverlaysWhenViewDisappears;
}

@property(setter=_setDeletedIndexPath:,retain) NSIndexPath * _deletedIndexPath;
@property(setter=_setEnableInteractionEventsAfterUpdatingTileIndex:) bool _enableInteractionEventsAfterUpdatingTileIndex;
@property(setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:,retain) NSIndexPath * _lastDisplayedRemoteSlideshowPhotoIndexPath;
@property(setter=_setOriginalAssetContainerDataSource:,retain) PLAssetContainerDataSource * _originalAssetContainerDataSource;
@property(setter=_setPendingAssetForTileUpdate:,retain) PHAsset * _pendingAssetForTileUpdate;
@property(setter=_setPriorIndexPath:,retain) NSIndexPath * _priorIndexPath;
@property(setter=_setScrubbedImageIndexPath:,retain) NSIndexPath * _scrubbedImageIndexPath;
@property(setter=_setSlideshowEndIndexPath:,retain) NSIndexPath * _slideshowEndIndexPath;
@property(readonly) unsigned long long allAssetsCount;
@property(readonly) PHFetchResult * assetCollectionsFetchResult;
@property(readonly) PLAssetContainerDataSource * assetContainerDataSource;
@property(readonly) PHCachingImageManager * cachingImageManager;
@property bool canDelayImageLoading;
@property(readonly) bool canEditVideo;
@property bool canShowCopyCallout;
@property(readonly) UIView * commentsView;
@property PHAsset * currentAsset;
@property(readonly) PHAssetCollection * currentAssetContainer;
@property(readonly) PHAssetCollection * currentAssetContainerForZoomTransition;
@property(readonly) PHAsset * currentAssetForZoomTransition;
@property(retain) NSIndexPath * currentIndexPath;
@property(readonly) PLPhotoTileViewController * currentTile;
@property(readonly) PLPhotoTileViewController * currentTileForZoomTransition;
@property unsigned long long currentTileIndex;
@property(readonly) PLVideoView * currentVideoView;
@property(copy,readonly) NSString * debugDescription;
@property bool delayImageLoading;
@property <PLPhotoBrowserControllerDelegate> * delegate;
@property bool deletesDuplicatesWhenNecessary;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isCameraApp;
@property(readonly) bool isPlayingSlideshow;
@property(readonly) UIScrollView * mainScroller;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuControllerSourceRect;
@property(retain) PLPhotoTileViewController * mostRecentlyActiveTile;
@property(readonly) UIPageController * pageController;
@property(retain) UIScrollView * pageControllerScrollView;
@property(readonly) UIView * pageControllerView;
@property(retain) PLPhotoScrubber * photoScrubber;
@property int photoThumbnailFormat;
@property(readonly) UIView * remakerContainerView;
@property(readonly) <PLRootLibraryNavigationController> * rootNavigationController;
@property bool shouldPlayVideoWhenViewAppears;
@property bool shouldShowOverlaysWhenViewAppears;
@property bool shouldShowOverlaysWhenViewDisappears;
@property(readonly) bool showsAirTunesOption;
@property(copy) NSDictionary * slideshowSettingsForCurrentAssetContainer;
@property(readonly) Class superclass;

+ (id)_imageRequestCacheQueue;
+ (void)setPageControllerScrollViewClass:(Class)arg1;

- (id)_actionViewRootView;
- (void)_airTunesServiceDidDisconnect:(id)arg1;
- (void)_airTunesSlideShowTimerFired;
- (void)_airTunesSlideShowViewWasTapped;
- (id)_airplayRemoteSlideshow;
- (void)_airplayRouteWasPicked:(id)arg1;
- (bool)_appAllowsSupressionOfAlerts;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_buttonItemViewWithTag:(int)arg1;
- (bool)_canTrimCurrentVideoInPlace;
- (bool)_canUploadHDVideo;
- (void)_cancelEditControllerIfEditedPhotoDeleted;
- (void)_cancelImageRequestsForPhoto:(id)arg1;
- (void)_cancelRemaking;
- (void)_cancelTimeoutForPendingAsset;
- (void)_cleanUpCurrentAirplaySession;
- (void)_clearFullScreenView;
- (void)_commonDidBeginRemaking;
- (void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(bool)arg3 shouldReenableInteractionEvents:(bool)arg4;
- (void)_commonRemakingProgressDidChange:(float)arg1;
- (void)_configureEditNavigationController:(id)arg1;
- (void)_configureTVOutPageController;
- (void)_configureVideoViewInTile:(id)arg1;
- (id)_currentAirplayRoute;
- (bool)_currentItemHasAudio;
- (id)_currentTVOutTile;
- (id)_currentTVOutVideoView;
- (void)_delayedExitEditingMode;
- (id)_deletedIndexPath;
- (void)_dereferenceTile:(id)arg1;
- (void)_didDeleteCurrentAsset;
- (void)_didLoadImage:(id)arg1 forObjectID:(id)arg2;
- (void)_disableIdleTimer;
- (void)_disableStreamingSlideshow;
- (void)_discardPhotoScrubber;
- (void)_dismissEditControllerWithOldStatusBarStyle:(long long)arg1;
- (void)_displayLastImageForSlideshowPlugin:(id)arg1;
- (bool)_enableInteractionEventsAfterUpdatingTileIndex;
- (void)_enableStreamingSlideshow;
- (void)_externalScreenConnected:(id)arg1;
- (void)_externalScreenDisconnected:(id)arg1;
- (void)_fadeIn;
- (void)_fadeOut;
- (void)_fadeToViewContents;
- (void)_fetchPublicGlobalUUIDForCurrentAsset:(id)arg1;
- (id)_findIndexPathForAssetWithObjectID:(id)arg1 globalUUID:(id)arg2 priorIndexPath:(id)arg3 assetCollection:(id)arg4;
- (void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2;
- (void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2;
- (void)_flushTileCache;
- (void)_forceDismissActionSheet:(bool)arg1 enableToolbarTimer:(bool)arg2;
- (void)_forceDismissAlertView:(bool)arg1 enableToolbarTimer:(bool)arg2;
- (void)_forceDismissDeleteController:(bool)arg1 enableToolbarTimer:(bool)arg2;
- (void)_forceRemoveSavingPhotoHUD;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (void)_handleImageResultForPhoto:(id)arg1 inTile:(id)arg2 objectID:(id)arg3 result:(id)arg4 info:(id)arg5;
- (void)_hideCallout;
- (void)_hideCommentsTableIfNecessary:(double)arg1;
- (void)_invalidateAirplayCache;
- (bool)_isPhotoTileViewControllerStaleAtIndex:(unsigned long long)arg1;
- (bool)_isScrolling;
- (bool)_isTrashBin;
- (id)_lastDisplayedRemoteSlideshowPhotoIndexPath;
- (void)_loadImageForTile:(id)arg1 format:(int)arg2;
- (void)_loadSlideshowPlugin;
- (void)_longPressRecognized:(id)arg1;
- (id)_lowResolutionPreviewImageForPhoto:(id)arg1;
- (bool)_mainScrollerIsVisible;
- (void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_mediaControlClient;
- (id)_newSessionForRoute:(id)arg1;
- (id)_nextAirTunesSlideshowPhoto;
- (id)_originalAssetContainerDataSource;
- (Class)_pageControllerScrollViewClass;
- (bool)_pauseSlideshow;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(bool)arg2;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1;
- (id)_pendingAssetForTileUpdate;
- (void)_performCATransition:(id)arg1;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_photoScrubberDidBeginScrubbing:(id)arg1;
- (void)_photoScrubberDidEndScrubbing:(id)arg1;
- (void)_photoScrubberValueDidChange:(id)arg1;
- (id)_pl_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (bool)_playSlideshow;
- (id)_playbackVideoView;
- (id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(bool)arg2;
- (void)_prepareForDelete;
- (void)_prepareForTVOut;
- (void)_prepareToFade;
- (long long)_presentEditPhotoController;
- (id)_priorIndexPath;
- (void)_redisplayActionSheet:(id)arg1;
- (void)_redisplayDeleteController:(id)arg1;
- (void)_removeAirTunesSlideShowViewAndReset;
- (void)_removeProgressView;
- (void)_removeSavingPhotoHUDForPhoto:(id)arg1;
- (void)_removeTVOutWindow;
- (void)_repositionPopoversIfNecessary;
- (void)_requestImageForPhoto:(id)arg1 imageFormat:(int)arg2 inTile:(id)arg3 resultHandler:(id)arg4;
- (void)_scheduleTimeoutForPendingAsset;
- (id)_scrubbedImageIndexPath;
- (void)_scrubberDidBeginScrubbing:(id)arg1;
- (void)_scrubberDidEndScrubbing:(id)arg1;
- (void)_setCurrentIndexPath:(id)arg1 refreshAssetTrackingDetails:(bool)arg2;
- (void)_setCurrentIndexPath:(id)arg1;
- (void)_setDeletedIndexPath:(id)arg1;
- (void)_setEnableInteractionEventsAfterUpdatingTileIndex:(bool)arg1;
- (void)_setIgnoreInteractionEventsForVideoViewRemaking:(bool)arg1;
- (void)_setLastDisplayedRemoteSlideshowPhotoIndexPath:(id)arg1;
- (void)_setMusicIsPlaying:(bool)arg1 forPhoto:(id)arg2;
- (void)_setMusicIsPlaying:(bool)arg1;
- (void)_setOriginalAssetContainerDataSource:(id)arg1;
- (void)_setPendingAssetForTileUpdate:(id)arg1;
- (void)_setPriorIndexPath:(id)arg1;
- (void)_setScrubbedImageIndexPath:(id)arg1;
- (void)_setSlideshowEndIndexPath:(id)arg1;
- (void)_setupPhotoScrubber:(bool)arg1;
- (bool)_shouldPauseOrStopVideo;
- (void)_showCommentTableIfNecessary:(double)arg1;
- (void)_showConfirmationForPassthroughTrimming:(id)arg1;
- (void)_showHDRPromptIfNeeded;
- (void)_showSavingPhotoHUDForPhoto:(id)arg1;
- (void)_showTileCache;
- (void)_shuffleAssets:(bool)arg1;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (id)_slideshowEndIndexPath;
- (bool)_slideshowNotRunning;
- (void)_slideshowPlayCurrentSlide;
- (void)_slideshowPlayTimerFired:(id)arg1;
- (void)_slideshowViewWasTapped:(id)arg1;
- (void)_slideshowWillBegin;
- (void)_slideshowWillEnd;
- (void)_startAirTunesSlideShow;
- (void)_startSlideshowTimer;
- (bool)_startingSlideshow;
- (void)_stopAirTunesSlideShow:(bool)arg1;
- (bool)_stopSlideshow;
- (void)_stopSlideshowTimer;
- (void)_stopStreamingPhotosToAirTunes;
- (void)_stopVideoPlaybackForIndexPath:(id)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2;
- (id)_suppresionContexts;
- (id)_tileForAsset:(id)arg1 shouldCreate:(bool)arg2 tileCache:(id)arg3;
- (void)_timeoutPendingAsset;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 insideCurrentAssetContainer:(bool)arg5;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(bool)arg6;
- (void)_updateAfterAnimation;
- (void)_updateCurrentIndexForPageController:(id)arg1;
- (void)_updateForCommentsControllerEditMode:(id)arg1;
- (void)_updateFullScreenPreviewImageForPhoto:(id)arg1 inTile:(id)arg2 completionHandler:(id)arg3;
- (id)_updateIndexPath:(id)arg1 withChange:(id)arg2 deleteAction:(int)arg3;
- (void)_updateIndexPathsWithChange:(id)arg1;
- (void)_updatePageControllerWithCurrentPath:(id)arg1 priorPreviousTileAsset:(id)arg2 priorNextTileAsset:(id)arg3;
- (void)_updateStatusBarVisibilityWithDuration:(double)arg1;
- (void)_updateTVOutAfterAnimation;
- (void)_updateTileAndImageCachesForChange:(id)arg1;
- (void)_updateTileImageAfterZoomTransition;
- (void)_updateTileIndexForPendingAssetIfNeededAndAvailable;
- (void)_validateTileCache:(id)arg1;
- (void)_willDisplayTileController:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)airPlayRemoteSlideshowAssetKeys:(id)arg1;
- (void)airPlaySession:(id)arg1 didFailToStreamPhotoWithError:(id)arg2;
- (id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2;
- (id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2;
- (bool)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2;
- (bool)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(id)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (unsigned long long)allAssetsCount;
- (void)animateToIndex;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetContainerDataSource;
- (bool)barsAreVisible;
- (void)beginEditingPhoto;
- (void)beginLocalOrigamiSlideshowWithSettings:(id)arg1;
- (void)beginLocalSlideshowWithSettings:(id)arg1;
- (void)beginRemoteSlideshowToRouteID:(id)arg1 settings:(id)arg2;
- (id)cachingImageManager;
- (bool)canDelayImageLoading;
- (bool)canEditVideo;
- (bool)canShowCopyCallout;
- (bool)canShowNextImage;
- (bool)canShowPreviousImage;
- (void)cancelVideoEditingMode:(id)arg1;
- (void)cleanupAfterDismissal;
- (id)commentsView;
- (id)contentScrollView;
- (void)currentAirplayRouteChanged;
- (id)currentAsset;
- (id)currentAssetContainer;
- (id)currentAssetContainerForZoomTransition;
- (id)currentAssetForZoomTransition;
- (id)currentIndexPath;
- (bool)currentItemIsPlaying;
- (id)currentTile;
- (id)currentTileForZoomTransition;
- (unsigned long long)currentTileIndex;
- (id)currentVideoView;
- (void)dealloc;
- (bool)delayImageLoading;
- (id)delegate;
- (void)deleteImageClicked:(id)arg1;
- (bool)deletesDuplicatesWhenNecessary;
- (void)didEndEditingPhoto;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (bool)dismissPopovers;
- (void)displayNextPhoto:(id)arg1;
- (void)displayPreviousPhoto:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)endEditingPhoto;
- (void)endSlideshow;
- (void)hideCommentsTable;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (id)init;
- (bool)isActiveViewControllerInNavigationController;
- (bool)isCameraApp;
- (bool)isEditing;
- (bool)isEditingVideo;
- (bool)isPhotoTileParentPageControllerAnimating:(id)arg1;
- (bool)isPlayingSlideshow;
- (bool)isRotationEnabled;
- (id)mainScroller;
- (void)mainScrollerDidEndSmoothScroll;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuControllerSourceRect;
- (id)mostRecentlyActiveTile;
- (id)navigationBar;
- (id)newNavigationBar;
- (id)newToolbar;
- (long long)numPhotosInAlbumForPhotoScrubber:(id)arg1;
- (id)pageController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (id)pageController;
- (void)pageControllerDidEndPaging:(id)arg1;
- (id)pageControllerScrollView;
- (id)pageControllerView;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (void)pauseCurrentMedia:(id)arg1;
- (id)photoCountFormatter;
- (void)photoLibraryDidChange:(id)arg1;
- (id)photoScrollerTitle;
- (id)photoScrubber:(id)arg1 loadImageSynchronously:(bool)arg2 atIndex:(long long)arg3 forLoupe:(bool)arg4;
- (void)photoScrubber:(id)arg1 scrubbingSpeedDidChange:(long long)arg2;
- (id)photoScrubber;
- (int)photoThumbnailFormat;
- (void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2;
- (void)photoTileViewController:(id)arg1 didAppear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 didDisappear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2;
- (bool)photoTileViewControllerAllowsEditing:(id)arg1;
- (bool)photoTileViewControllerCanShowCenterOverlay:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (id)photoTileViewControllerCustomCenterOverlay:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)playCurrentMedia:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(bool)arg1;
- (bool)prepareForDismissingForced:(bool)arg1;
- (bool)prepareToDisplayActivitySheet;
- (id)remakerContainerView;
- (void)removeAdjacentCommentsTables;
- (void)removeCurrentPhoto:(id)arg1;
- (void)removeRemakerContainerView;
- (void)revealComment:(id)arg1;
- (id)rootNavigationController;
- (id)rotatingFooterView;
- (void)saveSelectionOfMusic:(id)arg1 transition:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAirTunesMode:(int)arg1;
- (void)setAppInteractionDisabled:(bool)arg1;
- (void)setAssetCollections:(id)arg1 dataSource:(id)arg2 currentImageIndexPath:(id)arg3;
- (void)setBottomBarDisabled:(bool)arg1;
- (void)setCanDelayImageLoading:(bool)arg1;
- (void)setCanShowCopyCallout:(bool)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(bool)arg2;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setCurrentTileIndex:(unsigned long long)arg1 updateAfterAnimation:(bool)arg2;
- (void)setCurrentTileIndex:(unsigned long long)arg1;
- (void)setDelayImageLoading:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(bool)arg1;
- (void)setIsCameraApp:(bool)arg1;
- (void)setMainScrollerEnabled:(bool)arg1;
- (void)setMenuControllerSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMostRecentlyActiveTile:(id)arg1;
- (void)setNavigationBarDisabled:(bool)arg1;
- (bool)setNextSlideshowState:(int)arg1;
- (void)setPageControllerScrollView:(id)arg1;
- (void)setPhotoScrubber:(id)arg1;
- (void)setPhotoThumbnailFormat:(int)arg1;
- (void)setRotationDisabled:(bool)arg1;
- (void)setShouldPlayVideoWhenViewAppears:(bool)arg1;
- (void)setShouldShowOverlaysWhenViewAppears:(bool)arg1;
- (void)setShouldShowOverlaysWhenViewDisappears:(bool)arg1;
- (void)setSlideshowSettingsForCurrentAssetContainer:(id)arg1;
- (void)setStatusBarIsLocked:(bool)arg1;
- (void)setUsesPhotoBrowserStyleStatusBar:(bool)arg1 animated:(bool)arg2;
- (void)setVideoEditingMode:(bool)arg1 animated:(bool)arg2;
- (void)setVideoEditingMode:(bool)arg1;
- (bool)shouldPlayVideoWhenViewAppears;
- (bool)shouldShowActionMenu;
- (bool)shouldShowOverlaysWhenViewAppears;
- (bool)shouldShowOverlaysWhenViewDisappears;
- (bool)shouldShowPlayButton;
- (void)showCommentsTable;
- (void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(bool)arg2;
- (void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(bool)arg2;
- (bool)showingCommentsTable;
- (bool)showsAirTunesOption;
- (void)slideshowPluginDidDisplayFinalImage:(id)arg1;
- (void)slideshowPluginReadyToBegin:(id)arg1;
- (id)slideshowSettingsForCurrentAssetContainer;
- (bool)statusBarIsLocked;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)togglePlayPause:(id)arg1;
- (void)transitionDidEndWithOperation:(long long)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionWillBegin;
- (void)trimVideo:(id)arg1;
- (void)updateAfterCollapse;
- (void)updateBarsAnimated:(bool)arg1;
- (void)updateOverlaysAnimated:(bool)arg1;
- (void)updateProgressView;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (int)videoRemakerMode;
- (void)videoView:(id)arg1 displayPlayOverlay:(id)arg2;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (bool)videoViewCanBeginPlayback:(id)arg1;
- (bool)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoViewDidCancelEditing:(id)arg1;
- (void)videoViewDidCreateAttachments:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(bool)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(bool)arg2;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (id)videoViewRequestsPickedAirplayRoute:(id)arg1;
- (bool)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayoutSubviews;
- (bool)wantsPhotoBrowserStyleStatusBar;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willPresentActionSheet:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
