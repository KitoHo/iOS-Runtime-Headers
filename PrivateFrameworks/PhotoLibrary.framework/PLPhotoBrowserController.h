/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoBrowserController : UIViewController <AirPlayRemoteSlideshowDelegate, PHPhotoLibraryChangeObserver, PLAirPlaySessionDataSource, PLDismissableViewController, PLPhotoScrubberDataSource, PLPhotoScrubberSpeedDelegate, PLPhotoTileViewControllerDelegate, PLSlideshowPluginDelegate, PLVideoViewDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIPageControllerDelegate, UIPopoverControllerDelegate, UIScrollViewDelegate> {
    <PLPhotoBrowserControllerDelegate> *__delegate;
    BOOL __enableInteractionEventsAfterUpdatingTileIndex;
    PLAssetContainerDataSource *__originalAssetContainerDataSource;
    PHAsset *__pendingAssetForTileUpdate;
    SEL _actionAfterForcedRotation;
    UIAlertController *_actionSheetController;
    SEL _activityAction;
    id _activityTarget;
    PLAirPlayBackgroundView *_airTunesBackgroundView;
    unsigned int _airTunesSlideShowIsEnding;
    PLAirPlaySession *_airplaySession;
    UIAlertView *_alertView;
    UIAlertController *_alertViewController;
    BOOL _animating;
    unsigned int _appInteractionDisabled;
    PLAssetContainerDataSource *_assetContainerDataSource;
    int _autohideControlCount;
    NSArray *_availableAirTunesServices;
    unsigned int _bottomBarDisabled;
    PHCachingImageManager *_cachingImageManager;
    UITransitionView *_cameraTransitionView;
    BOOL _canDelayImageLoading;
    unsigned int _canShowCopyCallout;
    unsigned int _canUploadHDVideoOver3G;
    unsigned int _clearingFullScreenView;
    unsigned int _collapsing;
    UINavigationBar *_commentsEditBar;
    int _commentsInteractionMode;
    BOOL _commentsTableWasVisible;
    struct CGSize { 
        float width; 
        float height; 
    } _contentStartSize;
    int _currentAirTunesMode;
    NSString *_currentAirTunesTransition;
    NSArray *_currentAirplayRoutes;
    NSString *_currentAssetContainerUUID;
    NSManagedObjectID *_currentAssetObjectID;
    NSString *_currentAssetPublicGlobalUUID;
    NSIndexPath *_currentIndexPath;
    PHAsset *_currentVideo;
    BOOL _delayImageLoading;
    PLDeletePhotosActionController *_deleteController;
    NSIndexPath *_deletedIndexPath;
    PLPhotoTileViewController *_deletedTile;
    BOOL _deletesDuplicatesWhenNecessary;
    unsigned int _didRotate;
    unsigned int _didSetHDVideoUploadCapability;
    unsigned int _didSetSimpleRemotePriority;
    unsigned int _didShowHDRPrompt;
    unsigned int _didStartMusicPlayback;
    PLEditPhotoController *_editController;
    float _endScale;
    UIView *_fadeToBlackView;
    BOOL _fadingToBlack;
    BOOL _ignoringInteractionEventsForVideoViewRemaking;
    NSMutableDictionary *_imageRequestsByIdentifier;
    unsigned int _imagesAreShuffled;
    unsigned int _isAnimatingTrash;
    BOOL _isCameraApp;
    unsigned int _isEditingComment;
    unsigned int _isEditingPhoto;
    unsigned int _isPlayingMusic;
    NSIndexPath *_lastDisplayedRemoteSlideshowPhotoIndexPath;
    NSIndexPath *_lastStreamedPhotoIndexPath;
    UIImage *_loadedImage;
    double _maximumTrimLength;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _menuControllerSourceRect;
    PLPhotoTileViewController *_mostRecentlyActiveTile;
    unsigned int _navigationBarDisabled;
    UIPageController *_pageController;
    unsigned int _paging;
    NSMutableArray *_pendingAssetChangeNotifications;
    NSMutableArray *_pendingCollectionListChangeNotifications;
    PHAsset *_pendingPhoto;
    NSMutableArray *_pendingSingleCollectionChangeNotifications;
    SEL _photoAction;
    id _photoActionInvoker;
    PLPhotoScrubber *_photoScrubber;
    int _photoThumbnailFormat;
    unsigned int _playVideoOnActivation;
    BOOL _playingVideo;
    NSIndexPath *_priorIndexPath;
    PLProgressView *_progressView;
    int _publicGlobalUUIDRequestCount;
    UILongPressGestureRecognizer *_recognizer;
    unsigned int _reloadPhotoScrubber;
    PLVideoRemaker *_remaker;
    UIView *_remakerContainerView;
    int _remakerMode;
    unsigned int _remaking;
    unsigned int _remakingWasCancelled;
    unsigned int _rotating;
    unsigned int _rotationDisabled;
    unsigned int _rotationDisabledUnderCropOverlay;
    PLProgressHUD *_savingPhotoHud;
    UIScrollView *_scroller;
    unsigned int _scrolling;
    NSNumberFormatter *_scrubOverlayTitleFormatter;
    NSIndexPath *_scrubbedImageIndexPath;
    int _scrubberAssetContainerIndex;
    BOOL _shouldPlayVideoWhenViewAppears;
    int _showErrorAlert;
    BOOL _showingNextImage;
    BOOL _showsAirTunesOption;
    unsigned int _slideShowIsStreamed;
    double _slideshowDelay;
    NSIndexPath *_slideshowEndIndexPath;
    BOOL _slideshowIsEnding;
    BOOL _slideshowIsLoading;
    BOOL _slideshowIsOrigami;
    unsigned int _slideshowItemsShown;
    unsigned int _slideshowItemsToShow;
    PLPictureFramePlugin *_slideshowPlugin;
    BOOL _slideshowStartedInFullScreen;
    int _slideshowStatus;
    NSTimer *_slideshowTimer;
    UITransitionView *_slideshowTransitionView;
    UIView *_slideshowView;
    float _startScale;
    unsigned int _statusBarIsLocked;
    NSMutableDictionary *_tileCache;
    BOOL _tvOutOn;
    UIPageController *_tvOutPageController;
    UIScrollView *_tvOutScroller;
    NSMutableDictionary *_tvOutTileCache;
    UITransitionView *_tvOutTransitionView;
    UIWindow *_tvOutWindow;
    unsigned int _videoEditingMode;
    unsigned int _videoViewWillBeginEditing;
    unsigned int _viewDidAppear;
    unsigned int _viewIsDisappearing;
    BOOL shouldShowOverlaysWhenViewAppears;
    BOOL shouldShowOverlaysWhenViewDisappears;
}

@property (setter=_setDeletedIndexPath:, nonatomic, retain) NSIndexPath *_deletedIndexPath;
@property (setter=_setEnableInteractionEventsAfterUpdatingTileIndex:, nonatomic) BOOL _enableInteractionEventsAfterUpdatingTileIndex;
@property (setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:, nonatomic, retain) NSIndexPath *_lastDisplayedRemoteSlideshowPhotoIndexPath;
@property (setter=_setOriginalAssetContainerDataSource:, nonatomic, retain) PLAssetContainerDataSource *_originalAssetContainerDataSource;
@property (setter=_setPendingAssetForTileUpdate:, nonatomic, retain) PHAsset *_pendingAssetForTileUpdate;
@property (setter=_setPriorIndexPath:, nonatomic, retain) NSIndexPath *_priorIndexPath;
@property (setter=_setScrubbedImageIndexPath:, nonatomic, retain) NSIndexPath *_scrubbedImageIndexPath;
@property (setter=_setSlideshowEndIndexPath:, nonatomic, retain) NSIndexPath *_slideshowEndIndexPath;
@property (nonatomic, readonly) unsigned int allAssetsCount;
@property (nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic, readonly) PLAssetContainerDataSource *assetContainerDataSource;
@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;
@property (nonatomic) BOOL canDelayImageLoading;
@property (nonatomic, readonly) BOOL canEditVideo;
@property (nonatomic) BOOL canShowCopyCallout;
@property (nonatomic, readonly) UIView *commentsView;
@property (nonatomic) PHAsset *currentAsset;
@property (nonatomic, readonly) PHAssetCollection *currentAssetContainer;
@property (nonatomic, readonly) PHAssetCollection *currentAssetContainerForZoomTransition;
@property (nonatomic, readonly) PHAsset *currentAssetForZoomTransition;
@property (nonatomic, retain) NSIndexPath *currentIndexPath;
@property (nonatomic, readonly) PLPhotoTileViewController *currentTile;
@property (nonatomic, readonly) PLPhotoTileViewController *currentTileForZoomTransition;
@property (nonatomic) unsigned int currentTileIndex;
@property (nonatomic, readonly) PLVideoView *currentVideoView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delayImageLoading;
@property (nonatomic) <PLPhotoBrowserControllerDelegate> *delegate;
@property (nonatomic) BOOL deletesDuplicatesWhenNecessary;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCameraApp;
@property (nonatomic, readonly) BOOL isPlayingSlideshow;
@property (nonatomic, readonly) UIScrollView *mainScroller;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } menuControllerSourceRect;
@property (nonatomic, retain) PLPhotoTileViewController *mostRecentlyActiveTile;
@property (nonatomic, readonly) UIPageController *pageController;
@property (nonatomic, retain) UIScrollView *pageControllerScrollView;
@property (nonatomic, readonly) UIView *pageControllerView;
@property (nonatomic, retain) PLPhotoScrubber *photoScrubber;
@property (nonatomic) int photoThumbnailFormat;
@property (nonatomic, readonly) UIView *remakerContainerView;
@property (nonatomic, readonly) <PLRootLibraryNavigationController> *rootNavigationController;
@property (nonatomic) BOOL shouldPlayVideoWhenViewAppears;
@property (nonatomic) BOOL shouldShowOverlaysWhenViewAppears;
@property (nonatomic) BOOL shouldShowOverlaysWhenViewDisappears;
@property (nonatomic, readonly) BOOL showsAirTunesOption;
@property (nonatomic, copy) NSDictionary *slideshowSettingsForCurrentAssetContainer;
@property (readonly) Class superclass;

+ (id)_imageRequestCacheQueue;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (void)setPageControllerScrollViewClass:(Class)arg1;

- (id)_actionViewRootView;
- (void)_airTunesServiceDidDisconnect:(id)arg1;
- (void)_airTunesSlideShowTimerFired;
- (void)_airTunesSlideShowViewWasTapped;
- (id)_airplayRemoteSlideshow;
- (void)_airplayRouteWasPicked:(id)arg1;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (id)_buttonItemViewWithTag:(int)arg1;
- (BOOL)_canTrimCurrentVideoInPlace;
- (BOOL)_canUploadHDVideo;
- (void)_cancelEditControllerIfEditedPhotoDeleted;
- (void)_cancelImageRequestsForPhoto:(id)arg1;
- (void)_cancelRemaking;
- (void)_cancelTimeoutForPendingAsset;
- (void)_cleanUpCurrentAirplaySession;
- (void)_clearFullScreenView;
- (void)_commonDidBeginRemaking;
- (void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(BOOL)arg3 shouldReenableInteractionEvents:(BOOL)arg4;
- (void)_commonRemakingProgressDidChange:(float)arg1;
- (void)_configureEditNavigationController:(id)arg1;
- (void)_configureTVOutPageController;
- (void)_configureVideoViewInTile:(id)arg1;
- (id)_currentAirplayRoute;
- (BOOL)_currentItemHasAudio;
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
- (void)_dismissEditControllerWithOldStatusBarStyle:(int)arg1;
- (void)_displayLastImageForSlideshowPlugin:(id)arg1;
- (BOOL)_enableInteractionEventsAfterUpdatingTileIndex;
- (void)_enableStreamingSlideshow;
- (void)_externalScreenConnected:(id)arg1;
- (void)_externalScreenDisconnected:(id)arg1;
- (void)_fadeIn;
- (void)_fadeOut;
- (void)_fadeToViewContents;
- (void)_fetchPublicGlobalUUIDForCurrentAsset:(id)arg1;
- (id)_findIndexPathForAssetWithObjectID:(id)arg1 globalUUID:(id)arg2 priorIndexPath:(id)arg3 assetCollection:(id)arg4;
- (void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2;
- (void)_flushTileCache;
- (void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2;
- (void)_forceDismissActionSheet:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceDismissAlertView:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceDismissDeleteController:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceRemoveSavingPhotoHUD;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (void)_handleImageResultForPhoto:(id)arg1 inTile:(id)arg2 objectID:(id)arg3 result:(id)arg4 info:(id)arg5;
- (void)_hideCallout;
- (void)_hideCommentsTableIfNecessary:(float)arg1;
- (void)_invalidateAirplayCache;
- (BOOL)_isPhotoTileViewControllerStaleAtIndex:(unsigned int)arg1;
- (BOOL)_isScrolling;
- (BOOL)_isTrashBin;
- (id)_lastDisplayedRemoteSlideshowPhotoIndexPath;
- (void)_loadImageForTile:(id)arg1 format:(int)arg2;
- (void)_loadSlideshowPlugin;
- (void)_longPressRecognized:(id)arg1;
- (id)_lowResolutionPreviewImageForPhoto:(id)arg1;
- (BOOL)_mainScrollerIsVisible;
- (void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_mediaControlClient;
- (id)_newSessionForRoute:(id)arg1;
- (id)_nextAirTunesSlideshowPhoto;
- (id)_originalAssetContainerDataSource;
- (Class)_pageControllerScrollViewClass;
- (BOOL)_pauseSlideshow;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1;
- (void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(BOOL)arg2;
- (id)_pendingAssetForTileUpdate;
- (void)_performCATransition:(id)arg1;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_photoScrubberDidBeginScrubbing:(id)arg1;
- (void)_photoScrubberDidEndScrubbing:(id)arg1;
- (void)_photoScrubberValueDidChange:(id)arg1;
- (id)_pl_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned int)arg2;
- (BOOL)_playSlideshow;
- (id)_playbackVideoView;
- (id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(BOOL)arg2;
- (void)_prepareForDelete;
- (void)_prepareForTVOut;
- (void)_prepareToFade;
- (int)_presentEditPhotoController;
- (id)_priorIndexPath;
- (void)_redisplayDeleteController:(id)arg1;
- (void)_removeAirTunesSlideShowViewAndReset;
- (void)_removeProgressView;
- (void)_removeSavingPhotoHUDForPhoto:(id)arg1;
- (void)_removeTVOutWindow;
- (void)_requestImageForPhoto:(id)arg1 imageFormat:(int)arg2 inTile:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)_scheduleTimeoutForPendingAsset;
- (id)_scrubbedImageIndexPath;
- (void)_scrubberDidBeginScrubbing:(id)arg1;
- (void)_scrubberDidEndScrubbing:(id)arg1;
- (void)_setCurrentIndexPath:(id)arg1;
- (void)_setCurrentIndexPath:(id)arg1 refreshAssetTrackingDetails:(BOOL)arg2;
- (void)_setDeletedIndexPath:(id)arg1;
- (void)_setEnableInteractionEventsAfterUpdatingTileIndex:(BOOL)arg1;
- (void)_setIgnoreInteractionEventsForVideoViewRemaking:(BOOL)arg1;
- (void)_setLastDisplayedRemoteSlideshowPhotoIndexPath:(id)arg1;
- (void)_setMusicIsPlaying:(BOOL)arg1;
- (void)_setMusicIsPlaying:(BOOL)arg1 forPhoto:(id)arg2;
- (void)_setOriginalAssetContainerDataSource:(id)arg1;
- (void)_setPendingAssetForTileUpdate:(id)arg1;
- (void)_setPriorIndexPath:(id)arg1;
- (void)_setScrubbedImageIndexPath:(id)arg1;
- (void)_setSlideshowEndIndexPath:(id)arg1;
- (void)_setupPhotoScrubber:(BOOL)arg1;
- (BOOL)_shouldPauseOrStopVideo;
- (void)_showCommentTableIfNecessary:(float)arg1;
- (void)_showConfirmationForPassthroughTrimming:(id)arg1;
- (void)_showHDRPromptIfNeeded;
- (void)_showSavingPhotoHUDForPhoto:(id)arg1;
- (void)_showTileCache;
- (void)_shuffleAssets:(BOOL)arg1;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (id)_slideshowEndIndexPath;
- (BOOL)_slideshowNotRunning;
- (void)_slideshowPlayCurrentSlide;
- (void)_slideshowPlayTimerFired:(id)arg1;
- (void)_slideshowViewWasTapped:(id)arg1;
- (void)_slideshowWillBegin;
- (void)_slideshowWillEnd;
- (void)_startAirTunesSlideShow;
- (void)_startSlideshowTimer;
- (BOOL)_startingSlideshow;
- (void)_stopAirTunesSlideShow:(BOOL)arg1;
- (BOOL)_stopSlideshow;
- (void)_stopSlideshowTimer;
- (void)_stopStreamingPhotosToAirTunes;
- (void)_stopVideoPlaybackForIndexPath:(id)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2;
- (id)_suppresionContexts;
- (id)_tileForAsset:(id)arg1 shouldCreate:(BOOL)arg2 tileCache:(id)arg3;
- (void)_timeoutPendingAsset;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 insideCurrentAssetContainer:(BOOL)arg5;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(BOOL)arg6;
- (void)_updateAfterAnimation;
- (void)_updateCurrentIndexForPageController:(id)arg1;
- (void)_updateForCommentsControllerEditMode:(id)arg1;
- (void)_updateFullScreenPreviewImageForPhoto:(id)arg1 inTile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_updateIndexPath:(id)arg1 withChange:(id)arg2 deleteAction:(int)arg3;
- (void)_updateIndexPathsWithChange:(id)arg1;
- (void)_updatePageControllerWithCurrentPath:(id)arg1 priorPreviousTileAsset:(id)arg2 priorNextTileAsset:(id)arg3;
- (void)_updateStatusBarVisibilityWithDuration:(double)arg1;
- (void)_updateTVOutAfterAnimation;
- (void)_updateTileAndImageCachesForChange:(id)arg1;
- (void)_updateTileIndexForPendingAssetIfNeededAndAvailable;
- (void)_validateTileCache:(id)arg1;
- (void)_willDisplayTileController:(id)arg1;
- (void)actionSheetDidFinish;
- (void)actionSheetWillAppear;
- (id)airPlayRemoteSlideshowAssetKeys:(id)arg1;
- (void)airPlaySession:(id)arg1 didFailToStreamPhotoWithError:(id)arg2;
- (id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2;
- (id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2;
- (BOOL)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2;
- (BOOL)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (unsigned int)allAssetsCount;
- (void)animateToIndex;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)assetCollectionsFetchResult;
- (id)assetContainerDataSource;
- (BOOL)barsAreVisible;
- (void)beginEditingPhoto;
- (void)beginLocalOrigamiSlideshowWithSettings:(id)arg1;
- (void)beginLocalSlideshowWithSettings:(id)arg1;
- (void)beginRemoteSlideshowToRouteID:(id)arg1 settings:(id)arg2;
- (id)cachingImageManager;
- (BOOL)canDelayImageLoading;
- (BOOL)canEditVideo;
- (BOOL)canShowCopyCallout;
- (BOOL)canShowNextImage;
- (BOOL)canShowPreviousImage;
- (void)cancelVideoEditingMode:(id)arg1;
- (void)cleanupAfterDismissal;
- (id)commentsView;
- (void)commitPendingUpdatesWithCompletionHandler:(id /* block */)arg1;
- (id)contentScrollView;
- (void)currentAirplayRouteChanged;
- (id)currentAsset;
- (id)currentAssetContainer;
- (id)currentAssetContainerForZoomTransition;
- (id)currentAssetForZoomTransition;
- (id)currentIndexPath;
- (BOOL)currentItemIsPlaying;
- (id)currentTile;
- (id)currentTileForZoomTransition;
- (unsigned int)currentTileIndex;
- (id)currentVideoView;
- (void)dealloc;
- (BOOL)delayImageLoading;
- (id)delegate;
- (void)deleteImageClicked:(id)arg1;
- (BOOL)deletesDuplicatesWhenNecessary;
- (void)didEndEditingPhoto;
- (BOOL)dismissPopovers;
- (void)displayNextPhoto:(id)arg1;
- (void)displayPreviousPhoto:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)endEditingPhoto;
- (void)endSlideshow;
- (void)hideCommentsTable;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (id)init;
- (BOOL)isActiveViewControllerInNavigationController;
- (BOOL)isCameraApp;
- (BOOL)isEditing;
- (BOOL)isEditingVideo;
- (BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1;
- (BOOL)isPlayingSlideshow;
- (BOOL)isRotationEnabled;
- (id)mainScroller;
- (void)mainScrollerDidEndSmoothScroll;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })menuControllerSourceRect;
- (id)mostRecentlyActiveTile;
- (id)navigationBar;
- (id)newNavigationBar;
- (id)newToolbar;
- (int)numPhotosInAlbumForPhotoScrubber:(id)arg1;
- (id)pageController;
- (id)pageController:(id)arg1 viewControllerAtIndex:(int)arg2;
- (void)pageControllerDidEndPaging:(id)arg1;
- (id)pageControllerScrollView;
- (id)pageControllerView;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (void)pauseCurrentMedia:(id)arg1;
- (id)photoCountFormatter;
- (void)photoLibraryDidChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)photoScrollerTitle;
- (id)photoScrubber;
- (id)photoScrubber:(id)arg1 loadImageSynchronously:(BOOL)arg2 atIndex:(int)arg3 forLoupe:(BOOL)arg4;
- (void)photoScrubber:(id)arg1 scrubbingSpeedDidChange:(int)arg2;
- (int)photoThumbnailFormat;
- (void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2;
- (void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2;
- (BOOL)photoTileViewControllerAllowsEditing:(id)arg1;
- (BOOL)photoTileViewControllerCanShowCenterOverlay:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (id)photoTileViewControllerCustomCenterOverlay:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (id)photoTileViewControllerTopLayoutGuide:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)playCurrentMedia:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(BOOL)arg1;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (BOOL)prepareToDisplayActivitySheet;
- (id)remakerContainerView;
- (void)removeAdjacentCommentsTables;
- (void)removeCurrentPhoto;
- (void)removeRemakerContainerView;
- (void)revealComment:(id)arg1;
- (id)rootNavigationController;
- (id)rotatingFooterView;
- (void)saveSelectionOfMusic:(id)arg1 transition:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAirTunesMode:(int)arg1;
- (void)setAppInteractionDisabled:(BOOL)arg1;
- (void)setAssetCollections:(id)arg1 dataSource:(id)arg2 currentImageIndexPath:(id)arg3;
- (void)setBottomBarDisabled:(BOOL)arg1;
- (void)setCanDelayImageLoading:(BOOL)arg1;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (void)setCurrentAsset:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(BOOL)arg2;
- (void)setCurrentTileIndex:(unsigned int)arg1;
- (void)setCurrentTileIndex:(unsigned int)arg1 updateAfterAnimation:(BOOL)arg2;
- (void)setDelayImageLoading:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeletesDuplicatesWhenNecessary:(BOOL)arg1;
- (void)setIsCameraApp:(BOOL)arg1;
- (void)setMainScrollerEnabled:(BOOL)arg1;
- (void)setMenuControllerSourceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMostRecentlyActiveTile:(id)arg1;
- (void)setNavigationBarDisabled:(BOOL)arg1;
- (BOOL)setNextSlideshowState:(int)arg1;
- (void)setPageControllerScrollView:(id)arg1;
- (void)setPhotoScrubber:(id)arg1;
- (void)setPhotoThumbnailFormat:(int)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1;
- (void)setShouldShowOverlaysWhenViewAppears:(BOOL)arg1;
- (void)setShouldShowOverlaysWhenViewDisappears:(BOOL)arg1;
- (void)setSlideshowSettingsForCurrentAssetContainer:(id)arg1;
- (void)setStatusBarIsLocked:(BOOL)arg1;
- (void)setUsesPhotoBrowserStyleStatusBar:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVideoEditingMode:(BOOL)arg1;
- (void)setVideoEditingMode:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldPlayVideoWhenViewAppears;
- (BOOL)shouldShowActionMenu;
- (BOOL)shouldShowOverlaysWhenViewAppears;
- (BOOL)shouldShowOverlaysWhenViewDisappears;
- (BOOL)shouldShowPlayButton;
- (void)showCommentsTable;
- (void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2;
- (void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(BOOL)arg2;
- (BOOL)showingCommentsTable;
- (BOOL)showsAirTunesOption;
- (void)slideshowPluginDidDisplayFinalImage:(id)arg1;
- (void)slideshowPluginReadyToBegin:(id)arg1;
- (id)slideshowSettingsForCurrentAssetContainer;
- (BOOL)statusBarIsLocked;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)togglePlayPause:(id)arg1;
- (void)transitionDidEndWithOperation:(int)arg1;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionWillBegin;
- (void)trimVideo:(id)arg1;
- (void)updateAfterCollapse;
- (void)updateBarsAnimated:(BOOL)arg1;
- (void)updateOverlaysAnimated:(BOOL)arg1;
- (void)updateProgressView;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (int)videoRemakerMode;
- (void)videoView:(id)arg1 displayPlayOverlay:(id)arg2;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoViewDidCancelEditing:(id)arg1;
- (void)videoViewDidCreateAttachments:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (id)videoViewRequestsPickedAirplayRoute:(id)arg1;
- (BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsPhotoBrowserStyleStatusBar;

@end
