/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAlbumListViewController : UIViewController <PLCloudFeedNavigating, PLNavigableAssetContainerListViewController, PLNavigablePhotoStreamViewController, PUAlbumListTableViewCellDelegate, PUAlbumStreamActivityDelegate, PUCollectionViewReorderDelegate, PUFeedRecentsManagerDelegate, PUPhotoLibraryUIChangeObserver, PUSearchViewControllerDelegate, PUSectionedGridLayoutDelegate, PUStackedAlbumControllerTransition, PUStackedAlbumTransitionDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate> {
    BOOL __aboutToCreateAlbum;
    UICollectionViewLayout *__albumListTransitionLayout;
    UIView *__backgroundView;
    PUFeedViewController *__cachedFeedViewController;
    PHCachingImageManager *__cachingImageManager;
    UIAlertAction *__createAlbumAlertAction;
    _UIContentUnavailableView *__emptyPlaceholderView;
    PUCollageView *__feedCollageView;
    PUFeedRecentsManager *__feedRecentsManager;
    int __ignoredReorderNotificationCount;
    BOOL __isKeyboardAware;
    id /* block */ __justCreatedCollectionAnimationCompletionHandler;
    NSString *__justCreatedCollectionIdentifier;
    PUCollectionView *__mainCollectionView;
    PUSectionedGridLayout *__mainCollectionViewLayout;
    UITableView *__mainTableView;
    PUPhotosGridViewController *__modalSearchResultsViewController;
    PUSearchViewController *__modalSearchViewController;
    id /* block */ __onViewDidLayoutSubviewsBlock;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    NSMutableSet *__preheatedCollections;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } __previousPreheatRect;
    NSMutableDictionary *__subCollectionActiveCountFetchOperations;
    NSArray *__syncProgressAlbums;
    PUCollageView *_aggregateCollageView;
    PULongPressableBarButtonItem *_albumCreationButtonItem;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    PUAlbumStreamActivity *_albumStreamActivity;
    NSString *_albumSubtitleFormat;
    UIBarButtonItem *_cancelButtonItem;
    NSMutableSet *_changedSubCollections;
    NSMutableDictionary *_collectionIndexByCollection;
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
    BOOL _disallowsSearch;
    UIBarButtonItem *_doneButtonItem;
    PHFetchResult *_filteredFetchResult;
    BOOL _isRootFolder;
    BOOL _isRootSharedAlbumList;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _lastLayoutUpdateBounds;
    BOOL _performedInitialCountsFade;
    BOOL _progressViewVisible;
    PHCollection *_pushedAlbum;
    UIViewController *_pushedController;
    PHCollection *_retitlingCollection;
    PUSearchButtonItem *_searchButtonItem;
    PUSessionInfo *_sessionInfo;
    BOOL _showAddNewAlbumPlaceholder;
    PUAlbumListViewControllerSpec *_spec;
    NSOperationQueue *_subCollectionFetchOperationQueue;
    NSMutableDictionary *_subCollectionFetchResultsCache;
    NSMutableDictionary *_subCollectionKeyAssetFetchResultsCache;
    PUPhotosGlobalFooterView *_syncProgressView;
    BOOL _viewInSyncWithModel;
}

@property (setter=_setAboutToCreateAlbum:, nonatomic) BOOL _aboutToCreateAlbum;
@property (setter=setAlbumListTransitionLayout:, nonatomic, retain) UICollectionViewLayout *_albumListTransitionLayout;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setCachedFeedViewController:, nonatomic, retain) PUFeedViewController *_cachedFeedViewController;
@property (nonatomic, readonly) PHCachingImageManager *_cachingImageManager;
@property (setter=_setCreateAlbumAlertAction:, nonatomic) UIAlertAction *_createAlbumAlertAction;
@property (setter=_setEmptyPlaceholderView:, nonatomic, retain) _UIContentUnavailableView *_emptyPlaceholderView;
@property (nonatomic, retain) PUCollageView *_feedCollageView;
@property (nonatomic, retain) PUFeedRecentsManager *_feedRecentsManager;
@property (setter=_setIgnoredReorderNotificationCount:, nonatomic) int _ignoredReorderNotificationCount;
@property (setter=_setKeyboardAware:, nonatomic) BOOL _isKeyboardAware;
@property (setter=_setJustCreatedCollectionAnimationCompletionHandler:, nonatomic, copy) id /* block */ _justCreatedCollectionAnimationCompletionHandler;
@property (setter=_setJustCreatedCollectionIdentifier:, nonatomic, retain) NSString *_justCreatedCollectionIdentifier;
@property (setter=_setMainCollectionView:, nonatomic, retain) PUCollectionView *_mainCollectionView;
@property (setter=_setMainCollectionViewLayout:, nonatomic, retain) PUSectionedGridLayout *_mainCollectionViewLayout;
@property (setter=_setMainTableView:, nonatomic, retain) UITableView *_mainTableView;
@property (setter=_setModalSearchResultsViewController:, nonatomic, retain) PUPhotosGridViewController *_modalSearchResultsViewController;
@property (setter=_setModalSearchViewController:, nonatomic, retain) PUSearchViewController *_modalSearchViewController;
@property (setter=_setOnViewDidLayoutSubviewsBlock:, nonatomic, copy) id /* block */ _onViewDidLayoutSubviewsBlock;
@property (setter=_setPhotoPinchGestureRecognizer:, nonatomic, retain) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
@property (setter=_setPreheatedCollections:, nonatomic, retain) NSMutableSet *_preheatedCollections;
@property (setter=_setPreviousPreheatRect:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _previousPreheatRect;
@property (nonatomic, readonly) NSMutableDictionary *_subCollectionActiveCountFetchOperations;
@property (nonatomic, readonly) NSArray *_syncProgressAlbums;
@property (nonatomic, retain) PUAlbumListTransitionContext *albumListTransitionContext;
@property (nonatomic, readonly) int albumsSection;
@property (nonatomic, readonly) int bottomPlaceholdersSection;
@property (nonatomic, retain) PHCollectionList *collectionList;
@property (nonatomic, retain) PHFetchResult *collectionsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disallowsSearch;
@property (nonatomic, retain) PHFetchResult *filteredFetchResult;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isRootFolder;
@property (nonatomic, readonly) BOOL isRootSharedAlbumList;
@property (nonatomic) BOOL progressViewVisible;
@property (nonatomic, retain) PHCollection *pushedAlbum;
@property (nonatomic, retain) UIViewController *pushedController;
@property (nonatomic, retain) PHCollection *retitlingCollection;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly) PUAlbumListViewControllerSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUPhotosGlobalFooterView *syncProgressView;
@property (nonatomic, readonly) int topPlaceholdersSection;
@property (getter=isViewInSyncWithModel, nonatomic) BOOL viewInSyncWithModel;

- (void).cxx_destruct;
- (BOOL)_aboutToCreateAlbum;
- (id)_activeSearchButtonItem;
- (void)_adaptSearchViewController:(id)arg1 toTraitCollection:(id)arg2 animated:(BOOL)arg3;
- (id)_albumCreationButtonItem;
- (id)_albumListTransitionLayout;
- (void)_allChildAssetCollections:(id)arg1 andCollectionLists:(id)arg2 ofFolder:(id)arg3;
- (BOOL)_appAllowsSupressionOfAlerts;
- (id)_backgroundView;
- (void)_beginInteractiveNavigationForItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_beginInteractiveZoomOut:(id)arg1;
- (id)_cachedFeedViewController;
- (id)_cachedFetchResultForSubCollection:(id)arg1;
- (id)_cachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (id)_cachingImageManager;
- (BOOL)_canUseStackTransitionFromCollection:(id)arg1;
- (id)_cancelButtonItem;
- (id)_changedSubCollectionIndexes;
- (BOOL)_collectionIsCloudShared:(id)arg1;
- (BOOL)_collectionIsCloudSharedAndOwned:(id)arg1;
- (BOOL)_collectionIsEvents:(id)arg1;
- (BOOL)_collectionIsFaces:(id)arg1;
- (BOOL)_collectionIsFolder:(id)arg1;
- (BOOL)_collectionIsHiddenAlbum:(id)arg1;
- (BOOL)_collectionIsImports:(id)arg1;
- (BOOL)_collectionIsSmartFolder:(id)arg1;
- (BOOL)_collectionIsStandIn:(id)arg1;
- (BOOL)_collectionIsSynced:(id)arg1;
- (BOOL)_containsAnyAssets:(id)arg1;
- (id)_createAlbumAlertAction;
- (id)_createControllerForFolder:(id)arg1;
- (id)_createControllerForStandInCollection:(id)arg1;
- (void)_didDismissSearchViewController;
- (void)_didSelectPlaceholderAtIndexPath:(id)arg1;
- (void)_dismissSearchViewControllerAnimated:(BOOL)arg1;
- (id)_doneButtonItem;
- (unsigned int)_editCapabilitiesForAlbum:(id)arg1;
- (id)_emptyPlaceholderView;
- (id)_feedCollageView;
- (id)_feedRecentsManager;
- (void)_fetchAndUpdateCountsForCollection:(id)arg1;
- (void)_getDisplayableAssets:(id*)arg1 indexes:(id*)arg2 forCollection:(id)arg3 maximumCount:(int)arg4 useCache:(BOOL)arg5;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(int)arg2 useCache:(BOOL)arg3;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(int)arg2;
- (void)_handleAlbumCreation:(id)arg1;
- (void)_handleAlbumOrFolderCreation:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleCreateAlbumOrFolder:(BOOL)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (int)_ignoredReorderNotificationCount;
- (void)_invalidateSyncProgressAlbums;
- (BOOL)_isCachedFetchResultOutdatedForCollection:(id)arg1;
- (BOOL)_isCollectionPinned:(id)arg1;
- (BOOL)_isKeyboardAware;
- (id /* block */)_justCreatedCollectionAnimationCompletionHandler;
- (id)_justCreatedCollectionIdentifier;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (id)_mainCollectionView;
- (id)_mainCollectionViewLayout;
- (id)_mainTableView;
- (id)_modalSearchResultsViewController;
- (id)_modalSearchViewController;
- (id)_neededAlbumProperties;
- (id)_neededAlbumRelationships;
- (id)_newFilteredFetchResultFromFetchResult:(id)arg1 collectionList:(id)arg2;
- (id)_nextCloudFeedNavigatingObject;
- (id /* block */)_onViewDidLayoutSubviewsBlock;
- (void)_performBatchUpdates:(id /* block */)arg1 withDeletedIndexPaths:(id)arg2 insertedIndexPaths:(id)arg3 changedIndexPaths:(id)arg4 movedFromIndexPaths:(id)arg5 movedToIndexPaths:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)_performInitialCountsFadeIfNeeded;
- (id)_photoPinchGestureRecognizer;
- (id)_pickerBannerView;
- (id)_preheatedCollections;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(int)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (void)_presentSearchViewController:(id)arg1 forTraitCollection:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_previousPreheatRect;
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;
- (void)_resetPreheating;
- (id)_searchButtonItem;
- (void)_searchButtonPressed:(id)arg1;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (void)_setAboutToCreateAlbum:(BOOL)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setCachedFeedViewController:(id)arg1;
- (void)_setCollection:(id)arg1 cellContentView:(id)arg2 pinned:(BOOL)arg3;
- (void)_setCreateAlbumAlertAction:(id)arg1;
- (void)_setEmptyPlaceholderView:(id)arg1;
- (void)_setIgnoredReorderNotificationCount:(int)arg1;
- (void)_setJustCreatedCollectionAnimationCompletionHandler:(id /* block */)arg1;
- (void)_setJustCreatedCollectionIdentifier:(id)arg1;
- (void)_setKeyboardAware:(BOOL)arg1;
- (void)_setMainCollectionView:(id)arg1;
- (void)_setMainCollectionViewLayout:(id)arg1;
- (void)_setMainTableView:(id)arg1;
- (void)_setModalSearchResultsViewController:(id)arg1;
- (void)_setModalSearchViewController:(id)arg1;
- (void)_setOnViewDidLayoutSubviewsBlock:(id /* block */)arg1;
- (void)_setPhotoPinchGestureRecognizer:(id)arg1;
- (void)_setPreheatedCollections:(id)arg1;
- (void)_setPreviousPreheatRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_shouldShowAggregateItem;
- (BOOL)_someAlbumSupportsEditing;
- (id)_subCollectionActiveCountFetchOperations;
- (id)_suppressionContexts;
- (id)_syncProgressAlbums;
- (id)_targetIndexPathForMoveFromIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (id)_uncachedFetchResultForSubCollection:(id)arg1;
- (id)_uncachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (unsigned int)_unfilteredIndexForFilteredIndex:(unsigned int)arg1;
- (void)_updateAddNewAlbumPlaceholderAnimated:(BOOL)arg1;
- (void)_updateAlbumSubtitleFormat;
- (BOOL)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 removedObjects:(id)arg2 changedObjects:(id)arg3;
- (void)_updateCollageView:(id)arg1 forAssets:(id)arg2;
- (void)_updateCollectionIndexMappingForFilteredFetchResult;
- (void)_updateCreateAlbumTextField:(id)arg1;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)_updateFilteredFetchResult;
- (BOOL)_updateInterfaceForIncrementalModelChange:(id /* block */)arg1 withFetchResultChangeDetails:(id)arg2 animated:(BOOL)arg3;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updateMainView;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_updatePreheatedAssets;
- (void)_updateSearchButtonTextForActiveSearchField:(BOOL)arg1;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2;
- (BOOL)_validateNewCollectionTitle:(id)arg1;
- (id)_visibleAssetsForCollection:(id)arg1;
- (id)_visibleStackViewAtIndexPath:(id)arg1;
- (id)_visibleStackViewForCollection:(id)arg1;
- (void)_visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_willDismissSearchViewControllerAnimated:(BOOL)arg1;
- (void)albumListCellContentView:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3;
- (void)albumListCellContentView:(id)arg1 performDeleteAction:(id)arg2;
- (void)albumListCellContentView:(id)arg1 performPinAction:(id)arg2;
- (BOOL)albumListCellContentViewShouldBeginRetitling:(id)arg1;
- (void)albumListTableViewCell:(id)arg1 willChangeState:(unsigned int)arg2;
- (id)albumListTransitionContext;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (int)albumsSection;
- (id)backgroundColorForTableView;
- (int)bottomPlaceholdersSection;
- (BOOL)canDeleteCollection:(id)arg1;
- (BOOL)canRenameCollection:(id)arg1;
- (BOOL)canReorderCollection:(id)arg1;
- (BOOL)canShowSyncProgress;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionList;
- (id)collectionView;
- (BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id /* block */)arg4;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionsFetchResult;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)dealloc;
- (void)deselectSelectedItemAnimated:(BOOL)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (BOOL)disallowsSearch;
- (void)feedRecentsManagerRecentAssetsDidChange:(id)arg1;
- (id)filteredFetchResult;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)gridLayout;
- (void)handleCreateAlbum;
- (void)handleCreateFolder;
- (void)handleCreateSharedAlbum;
- (void)handleDeleteAlbumAtIndexPath:(id)arg1;
- (void)handleSessionInfoAlbumSelection:(id)arg1;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (id)indexPathForAddNewAlbumPlaceholder;
- (id)indexPathForAlbumListCellContentView:(id)arg1;
- (id)indexPathForCloudFeedPlaceholder;
- (id)indexPathForCollection:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)indexPathsForItemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithSpec:(id)arg1 isRootSharedAlbumList:(BOOL)arg2;
- (BOOL)isEmpty;
- (BOOL)isPlaceholderAtIndexPath:(id)arg1;
- (BOOL)isRootFolder;
- (BOOL)isRootSharedAlbumList;
- (BOOL)isViewInSyncWithModel;
- (id)mainScrollView;
- (void)navigateToAllPhotosAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)navigateToPhotoStreamMode:(int)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)navigateToRevealAssetCollection:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (id)newCloudFeedViewController;
- (id)newGridViewControllerForAllPhotos;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (id)newGridViewControllerForStandInCollection:(id)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (int)placeholderKindAtIndexPath:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (BOOL)progressViewVisible;
- (BOOL)pu_handleSecondTabTap;
- (id)pushedAlbum;
- (id)pushedController;
- (void)reloadContentView;
- (id)retitlingCollection;
- (void)scrollToItemAtIndexPath:(id)arg1 centered:(BOOL)arg2 animated:(BOOL)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchViewController:(id)arg1 adaptToTraitCollection:(id)arg2;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject { Class x1; }*)arg3 withTitle:(id)arg4 completion:(id /* block */)arg5;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(BOOL)arg3;
- (void)searchViewControllerDidCancel:(id)arg1;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)sessionInfo;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setCollectionList:(id)arg1;
- (void)setCollectionsFetchResult:(id)arg1;
- (void)setDisallowsSearch:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFilteredFetchResult:(id)arg1;
- (void)setIsRootFolder:(BOOL)arg1;
- (void)setKeyboardAware:(BOOL)arg1;
- (void)setProgressViewVisible:(BOOL)arg1;
- (void)setPushedAlbum:(id)arg1;
- (void)setPushedController:(id)arg1;
- (void)setRetitlingCollection:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setSyncProgressView:(id)arg1;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (void)setTitleForCell:(id)arg1 withCollection:(id)arg2;
- (void)setViewInSyncWithModel:(BOOL)arg1;
- (void)set_feedCollageView:(id)arg1;
- (void)set_feedRecentsManager:(id)arg1;
- (BOOL)shouldAllowEmailInAlbumSubtitle;
- (BOOL)shouldAutorotate;
- (BOOL)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1;
- (BOOL)shouldEnableCollection:(id)arg1;
- (BOOL)shouldShowActivityItem;
- (BOOL)shouldShowAllPhotosItem;
- (BOOL)showAddNewAlbumPlaceholder;
- (BOOL)showsBottomPlaceholdersSection;
- (BOOL)showsEmptyPlaceholderWhenEmpty;
- (BOOL)showsSeparatorBelowTopPlaceholdersSection;
- (BOOL)showsTopPlaceholdersSection;
- (id)spec;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forPHCollection:(id)arg3;
- (id)subtitleForCollection:(id)arg1;
- (id)syncProgressView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (int)tableViewStyle;
- (int)topPlaceholdersSection;
- (void)updateAlbumListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)updateInterfaceLayoutIfNecessary;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)updatePlaceholderListCellContentView:(struct PUAlbumListCellContentView { Class x1; id x2; id x3; float x4; int x5; id x6; unsigned int x7; unsigned int x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 1; unsigned int x_9_1_10 : 1; unsigned int x_9_1_11 : 1; unsigned int x_9_1_12 : 1; unsigned int x_9_1_13 : 1; unsigned int x_9_1_14 : 1; unsigned int x_9_1_15 : 1; unsigned int x_9_1_16 : 1; unsigned int x_9_1_17 : 6; unsigned int x_9_1_18 : 1; unsigned int x_9_1_19 : 1; unsigned int x_9_1_20 : 1; unsigned int x_9_1_21 : 1; unsigned int x_9_1_22 : 1; unsigned int x_9_1_23 : 1; unsigned int x_9_1_24 : 1; unsigned int x_9_1_25 : 1; unsigned int x_9_1_26 : 1; unsigned int x_9_1_27 : 1; unsigned int x_9_1_28 : 1; unsigned int x_9_1_29 : 1; unsigned int x_9_1_30 : 1; unsigned int x_9_1_31 : 1; unsigned int x_9_1_32 : 1; unsigned int x_9_1_33 : 1; unsigned int x_9_1_34 : 1; unsigned int x_9_1_35 : 1; unsigned int x_9_1_36 : 1; unsigned int x_9_1_37 : 1; unsigned int x_9_1_38 : 1; unsigned int x_9_1_39 : 1; unsigned int x_9_1_40 : 1; unsigned int x_9_1_41 : 1; unsigned int x_9_1_42 : 1; unsigned int x_9_1_43 : 1; unsigned int x_9_1_44 : 1; unsigned int x_9_1_45 : 1; unsigned int x_9_1_46 : 1; unsigned int x_9_1_47 : 1; unsigned int x_9_1_48 : 1; unsigned int x_9_1_49 : 1; unsigned int x_9_1_50 : 1; unsigned int x_9_1_51 : 1; unsigned int x_9_1_52 : 1; unsigned int x_9_1_53 : 1; unsigned int x_9_1_54 : 1; unsigned int x_9_1_55 : 1; unsigned int x_9_1_56 : 1; unsigned int x_9_1_57 : 1; unsigned int x_9_1_58 : 1; unsigned int x_9_1_59 : 1; unsigned int x_9_1_60 : 1; unsigned int x_9_1_61 : 1; unsigned int x_9_1_62 : 1; unsigned int x_9_1_63 : 1; unsigned int x_9_1_64 : 1; unsigned int x_9_1_65 : 5; unsigned int x_9_1_66 : 1; unsigned int x_9_1_67 : 1; unsigned int x_9_1_68 : 1; unsigned int x_9_1_69 : 2; unsigned int x_9_1_70 : 2; unsigned int x_9_1_71 : 1; unsigned int x_9_1_72 : 1; unsigned int x_9_1_73 : 3; unsigned int x_9_1_74 : 1; unsigned int x_9_1_75 : 1; unsigned int x_9_1_76 : 1; unsigned int x_9_1_77 : 1; unsigned int x_9_1_78 : 1; unsigned int x_9_1_79 : 1; unsigned int x_9_1_80 : 1; unsigned int x_9_1_81 : 1; unsigned int x_9_1_82 : 1; unsigned int x_9_1_83 : 1; unsigned int x_9_1_84 : 1; } x9; }*)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (BOOL)updateSpec;
- (void)updateSyncProgress;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1;
- (struct PUAlbumListCellContentView { Class x1; id x2; id x3; float x4; int x5; id x6; unsigned int x7; unsigned int x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 1; unsigned int x_9_1_10 : 1; unsigned int x_9_1_11 : 1; unsigned int x_9_1_12 : 1; unsigned int x_9_1_13 : 1; unsigned int x_9_1_14 : 1; unsigned int x_9_1_15 : 1; unsigned int x_9_1_16 : 1; unsigned int x_9_1_17 : 6; unsigned int x_9_1_18 : 1; unsigned int x_9_1_19 : 1; unsigned int x_9_1_20 : 1; unsigned int x_9_1_21 : 1; unsigned int x_9_1_22 : 1; unsigned int x_9_1_23 : 1; unsigned int x_9_1_24 : 1; unsigned int x_9_1_25 : 1; unsigned int x_9_1_26 : 1; unsigned int x_9_1_27 : 1; unsigned int x_9_1_28 : 1; unsigned int x_9_1_29 : 1; unsigned int x_9_1_30 : 1; unsigned int x_9_1_31 : 1; unsigned int x_9_1_32 : 1; unsigned int x_9_1_33 : 1; unsigned int x_9_1_34 : 1; unsigned int x_9_1_35 : 1; unsigned int x_9_1_36 : 1; unsigned int x_9_1_37 : 1; unsigned int x_9_1_38 : 1; unsigned int x_9_1_39 : 1; unsigned int x_9_1_40 : 1; unsigned int x_9_1_41 : 1; unsigned int x_9_1_42 : 1; unsigned int x_9_1_43 : 1; unsigned int x_9_1_44 : 1; unsigned int x_9_1_45 : 1; unsigned int x_9_1_46 : 1; unsigned int x_9_1_47 : 1; unsigned int x_9_1_48 : 1; unsigned int x_9_1_49 : 1; unsigned int x_9_1_50 : 1; unsigned int x_9_1_51 : 1; unsigned int x_9_1_52 : 1; unsigned int x_9_1_53 : 1; unsigned int x_9_1_54 : 1; unsigned int x_9_1_55 : 1; unsigned int x_9_1_56 : 1; unsigned int x_9_1_57 : 1; unsigned int x_9_1_58 : 1; unsigned int x_9_1_59 : 1; unsigned int x_9_1_60 : 1; unsigned int x_9_1_61 : 1; unsigned int x_9_1_62 : 1; unsigned int x_9_1_63 : 1; unsigned int x_9_1_64 : 1; unsigned int x_9_1_65 : 5; unsigned int x_9_1_66 : 1; unsigned int x_9_1_67 : 1; unsigned int x_9_1_68 : 1; unsigned int x_9_1_69 : 2; unsigned int x_9_1_70 : 2; unsigned int x_9_1_71 : 1; unsigned int x_9_1_72 : 1; unsigned int x_9_1_73 : 3; unsigned int x_9_1_74 : 1; unsigned int x_9_1_75 : 1; unsigned int x_9_1_76 : 1; unsigned int x_9_1_77 : 1; unsigned int x_9_1_78 : 1; unsigned int x_9_1_79 : 1; unsigned int x_9_1_80 : 1; unsigned int x_9_1_81 : 1; unsigned int x_9_1_82 : 1; unsigned int x_9_1_83 : 1; unsigned int x_9_1_84 : 1; } x9; }*)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
