/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class MPUCompletionQueryDataSource, NSOperationQueue, NSString;

@interface MusicAlbumsDetailViewController : MusicTableViewController <MPUCompletionQueryDataSourceDelegate, MPUCompletionFooterViewDelegate, MusicViewControllerKeepLocalContainer> {
    NSOperationQueue *_downloadabilityOperationQueue;
    long long _downloadableSongCount;
    double _maximumDurationWidth;
    bool_hasEverReceivedWillAppear;
    bool_isDownloading;
    bool_isTransitioning;
    bool_useDownloadAllArtistCellConfig;
}

@property(readonly) MPUCompletionQueryDataSource * completionDataSource;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) long long downloadableSongCount;
@property(readonly) unsigned long long hash;
@property(readonly) bool isDownloading;
@property(readonly) double maximumDurationWidth;
@property(readonly) Class superclass;

+ (Class)_albumsDetailTableHeaderViewClass;
+ (id)actionCellConfigurationClasses;
+ (bool)shouldPushNowPlayingOnSelection;
+ (bool)shouldShowCMC;

- (void).cxx_destruct;
- (void)_MusicAlbumsDetailViewController_canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)_MusicAlbumsDetailViewController_defaultsDidChangeNotification:(id)arg1;
- (void)_applyCloudDownloadStateForHeaderView:(id)arg1 withAlbum:(id)arg2;
- (long long)_collectionGroupingForProperty:(id)arg1;
- (void)_configureFooterView:(id)arg1 forSection:(long long)arg2 offer:(id)arg3;
- (id)_createTableView;
- (void)_downloadAllButtonAction:(id)arg1;
- (long long)_footerStyleForSection:(long long)arg1;
- (bool)_getCollectionPersistentID:(long long*)arg1 groupingType:(long long*)arg2;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(bool)arg1 animated:(bool)arg2;
- (void)_updateTitle;
- (void)_updateVisibleHeadersCloudDownloadStates;
- (void)_updateVisibleHeadersCloudRightInset;
- (id)completionDataSource;
- (void)completionFooterView:(id)arg1 purchaseCollectionFromOffering:(id)arg2;
- (void)completionFooterView:(id)arg1 showItemsInOffering:(id)arg2;
- (void)completionQueryDataSource:(id)arg1 didLoadOffer:(id)arg2 forSectionAtIndex:(long long)arg3;
- (void)completionQueryDataSource:(id)arg1 didRemoveOfferForSectionAtIndex:(long long)arg2;
- (void)completionQueryDataSource:(id)arg1 didUpdateOffer:(id)arg2 forSectionAtIndex:(long long)arg3;
- (void)contentSizeCategoryDidChange;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (long long)downloadableSongCount;
- (id)initWithDataSource:(id)arg1;
- (bool)isCollectionKeptLocalForMediaItem:(id)arg1 inSection:(long long)arg2;
- (bool)isDownloading;
- (double)maximumDurationWidth;
- (bool)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (bool)shouldShowActionCellConfiguration:(Class)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
