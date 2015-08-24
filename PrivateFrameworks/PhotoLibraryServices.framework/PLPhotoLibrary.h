/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibrary : NSObject {
    PLGenericAlbum *_allImportedPhotosAlbum;
    struct __CFDictionary { } *_allPhotos;
    NSSet *_audioFileExtensions;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    int _databaseMigrationKind;
    unsigned int _deletedCountSinceLastFetchedGPSCount;
    NSCalendar *_exifConversionCalendar;
    NSSet *_extraVideoExtensions;
    NSSet *_imageFileExtensions;
    PLInFlightAssetsAlbum *_inFlightAssetsAlbum;
    unsigned int _insertedCountSinceLastFetchedGPSCount;
    BOOL _isTransient;
    unsigned int _lastFetchedGPSCount;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    BOOL _listeningForITunesSyncing;
    unsigned int _newlyCompleteWithGPS;
    unsigned int _pendingTransactions;
    NSMutableArray *_photoStreamAlbums;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    NSSet *_rawImageFileExtensions;
    PLManagedAlbumList *_rootAlbumList;
    PLManagedFolder *_rootFolder;
    PLThumbnailManager *_thumbnailManager;
    NSMutableArray *_transactionCompletionHandlers;
    PLFetchingAlbum *_userLibraryAlbum;
    PLManagedObjectContext *managedObjectContext;
}

@property (nonatomic, readonly, copy) NSArray *albums;
@property (nonatomic, readonly, copy) NSArray *eventAlbums;
@property (nonatomic, readonly, copy) NSArray *faceAlbums;
@property (nonatomic, readonly, copy) NSArray *imagePickerAlbums;
@property (nonatomic, readonly, copy) NSArray *importAlbums;
@property (nonatomic, readonly, retain) NSObject<PLAlbumProtocol> *inFlightAssetsAlbum;
@property (nonatomic, retain) PLManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly, copy) NSArray *photoStreamAlbums;
@property (nonatomic, readonly, copy) NSArray *photoStreamAlbumsForPreferences;
@property (nonatomic, readonly, copy) NSArray *placeAlbums;
@property (nonatomic, readonly, retain) PLManagedAlbumList *rootAlbumList;
@property (nonatomic, readonly, retain) PLManagedFolder *rootFolder;
@property (nonatomic, readonly, retain) NSObject<PLAlbumProtocol> *savedPhotosAlbum;
@property (nonatomic, readonly, retain) PLThumbnailManager *thumbnailManager;
@property (nonatomic, readonly, copy) NSArray *userAlbums;
@property (nonatomic, readonly, retain) NSObject<PLAlbumProtocol> *userLibraryAlbum;
@property (nonatomic, readonly, copy) NSArray *wallpaperAlbums;

+ (unsigned long long)CloudPhotoLibrarySize;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (void)_doFilesystemImportIfNeededWithMOC:(id)arg1;
+ (BOOL)areOpportunisticTasksDisabled;
+ (id)assetsDataDirectory;
+ (BOOL)canSaveVideoToCameraRoll:(id)arg1;
+ (void)clearICloudPhotosMarker;
+ (id)cplAssetsDirectoryURL;
+ (id)crashRecoveryIndicatorFilePaths:(BOOL)arg1;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (BOOL)createSqliteErrorIndicatorFile;
+ (id)dcimDirectory;
+ (id)dcimDirectoryURL;
+ (id)disableICloudPhotosFilePath;
+ (void)disableOpportunisticTasks:(BOOL)arg1;
+ (id)dupeAnalysisNeededFilePath;
+ (id)enableICloudPhotosFilePath;
+ (void)enqeueRecoveryJob:(id)arg1;
+ (id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2;
+ (void)forceSoftResetSync;
+ (id)forceSoftResetSyncPath;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (id)iTunesPhotosDirectory;
+ (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+ (id)iTunesSyncedAssetSmallThumbnailsDirectory;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)iTunesSyncedFaceDataDirectory;
+ (id)imageWriterIndicatorFilePath;
+ (void)initializeGraphicsServices;
+ (BOOL)isAlbumSynced:(id)arg1;
+ (BOOL)isApplicationWildcat;
+ (BOOL)isDisableICloudPhotos;
+ (BOOL)isDupeAnalysisNeeded;
+ (BOOL)isEnableICloudPhotos;
+ (BOOL)isForceSoftResetSync;
+ (BOOL)isICloudPhotosPaused;
+ (BOOL)isMomentAnalysisNeeded;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)isSafeToRecoverAfterCrash;
+ (BOOL)isStreamsLibraryUpdatingExpired;
+ (id)libraryAvailableIndicatorFilePath;
+ (BOOL)libraryAvailableIndicatorState;
+ (id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2;
+ (id)lightweightReimportPhotoCloudSharingDataDirectory;
+ (id)mediaFilesDirectoryURL;
+ (id)migrationIndicatorFilePath;
+ (id)momentAnalysisNeededFilePath;
+ (id)opportunisticTaskIsolationQueue;
+ (id)pathToAssetsToAlbumsMapping;
+ (id)pauseICloudPhotosFilePath;
+ (id)pauseTime;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)photoCloudSharingCacheDataDirectory;
+ (id)photoCloudSharingDataDirectory;
+ (id)photoCloudSharingMetadataDirectory;
+ (id)photoDataCPLDerivativeDirectory;
+ (id)photoDataCPLDirectory;
+ (id)photoDataCPLLibraryIdentifier;
+ (id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1;
+ (id)photoDataCachesDirectory;
+ (id)photoDataDirectory;
+ (id)photoDataDirectoryURL;
+ (id)photoDataMiscDirectory;
+ (BOOL)photoLibraryIsObtainable;
+ (id)photoMetadataDirectoryURL;
+ (id)photoMutationsDirectory;
+ (id)photoStreamsDataDirectory;
+ (void)postGlobalPhotoLibraryAvailableNotification;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (BOOL)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (BOOL)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;
+ (void)recoverFromCrashIfNeeded;
+ (void)repairSingletonObjects;
+ (void)resetSyncedAssetsDCIMDirectory;
+ (struct NSObject { Class x1; }*)savedPhotosAlbum;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (void)setCameraRollCountedInQuota:(BOOL)arg1;
+ (void)setCloudAlbumSharingEnabled:(BOOL)arg1;
+ (void)setDisableICloudPhotos:(BOOL)arg1;
+ (void)setDupeAnalysisNeeded:(BOOL)arg1;
+ (void)setEnableICloudPhotos:(BOOL)arg1;
+ (void)setICloudPhotosEnabled:(BOOL)arg1;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setLibraryAvailableIndicatorState:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)setMomentAnalysisNeeded:(BOOL)arg1;
+ (void)setPauseMarker:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (void)setStreamsLibraryUpdatingExpired:(BOOL)arg1;
+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
+ (id)simpleDCIMDirectory;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+ (id)syncInfoPath;
+ (id)syncedAlbumSubtitleStringFormat;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)videosPath;

- (id)_allAssetsForDeletion:(id)arg1;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 withReason:(id)arg3;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (BOOL)_checkMomentAnalysisCompletion;
- (void)_deleteObsoleteMetadataFiles;
- (void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4;
- (void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (BOOL)_hasPendingAssetsIgnoreiTunes:(BOOL)arg1;
- (id)_init;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_loadFileExtensionInformation;
- (void)_migrationDidFinish;
- (void)_releaseThumbnailManager;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_safeSave:(id)arg1;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (void)_updateWithInsertedAssetsCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2;
- (void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2;
- (void)_userDeleteAlbums:(id)arg1;
- (void)_userDeleteAssets:(id)arg1 withReason:(id)arg2;
- (void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 performBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 performTransaction:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)addCompletionHandlerToCurrentTransaction:(id /* block */)arg1;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(struct __CFDictionary { }*)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(BOOL)arg15 isPlaceholder:(BOOL)arg16;
- (void)addInflightAsset:(id)arg1;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1;
- (id)albumListForAlbumOfKind:(int)arg1;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject { Class x1; }*)albumWithUuid:(id)arg1;
- (id)albums;
- (id)albumsForContentMode:(int)arg1;
- (id)allImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbumIfExists;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetWithUUID:(id)arg1;
- (id)assetWithUUID:(id)arg1 inContainer:(id)arg2;
- (void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelAfterRestoreFromiTunesBackup;
- (void)clientApplicationWillEnterForeground;
- (unsigned int)concurrencyType;
- (void)copyAssetToCameraRoll:(id)arg1;
- (unsigned int)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(int*)arg2;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (void)dealloc;
- (BOOL)deleteAllDiagnosticFiles:(id*)arg1;
- (void)deleteAllImages;
- (void)deleteFailedInMemoryCameraAsset:(id)arg1;
- (void)deleteITunesSyncedContentWithReason:(id)arg1;
- (id)duplicatePhotoStreamPhotosForPhotos:(id)arg1;
- (unsigned int)editableAlbumCount;
- (struct NSObject { Class x1; }*)eventAlbumContainingPhoto:(id)arg1;
- (id)eventAlbums;
- (struct NSObject { Class x1; }*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)faceAlbums;
- (struct NSObject { Class x1; }*)filesystemImportProgressAlbum;
- (void)flushAlbums;
- (void)flushDCIMAlbums;
- (void)flushPhotoStreamAlbums;
- (BOOL)getPhotoCount:(unsigned int*)arg1 videoCount:(unsigned int*)arg2;
- (BOOL)getPhotoCount:(unsigned int*)arg1 videoCount:(unsigned int*)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5;
- (id)globalValueForKey:(id)arg1;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (BOOL)hasCompletedMomentAnalysis;
- (BOOL)hasCompletedRestorePostProcessing;
- (BOOL)hasITunesSyncedContent;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbum;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbumIfExists;
- (id)iTunesSyncedContentInfo;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (id)imagePickerAlbums;
- (id)importAlbums;
- (struct NSObject { Class x1; }*)inFlightAssetsAlbum;
- (struct NSObject { Class x1; }*)inFlightAssetsAlbumIfAvailable;
- (id)incompleteRestoreProcesses;
- (id)init;
- (id)initWithName:(const char *)arg1;
- (id)initWithTransientContext:(BOOL)arg1 name:(const char *)arg2;
- (BOOL)isAudioFileExtension:(id)arg1;
- (BOOL)isImageFileExtension:(id)arg1;
- (BOOL)isNonRawImageFileExtension:(id)arg1;
- (BOOL)isPhotoInSavedPhotosAlbum:(id)arg1;
- (BOOL)isRawImageFileExtension:(id)arg1;
- (BOOL)isReadyForCloudPhotoLibrary;
- (BOOL)isTransient;
- (BOOL)isVideoFileExtension:(id)arg1;
- (id)lastImportSessionUUID;
- (id)lastImportedPhotosAlbum;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1;
- (id)librarySizes;
- (void)loadDatabase:(const char *)arg1;
- (id)managedObjectContext;
- (id)managedObjectContextStoreUUID;
- (id)managedObjectWithObjectID:(id)arg1;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (id)name;
- (BOOL)needsMigration;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2;
- (id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const struct __CFDictionary {}**)arg4 outDeliveredPlaceholder:(BOOL*)arg5;
- (id)objectWithObjectID:(id)arg1;
- (struct NSObject { Class x1; }*)otaRestoreProgressAlbum;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)performBlockAndWait:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)performTransaction:(id /* block */)arg1;
- (void)performTransaction:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)performTransactionAndWait:(id /* block */)arg1;
- (void)performTransactionAndWait:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)photoFromAssetURL:(id)arg1;
- (void)photoLibraryCorruptNotification;
- (id)photoStreamAlbums;
- (id)photoStreamAlbumsForPreferences;
- (id)placeAlbums;
- (void)prepareDatabaseForOTAAssetsPhase;
- (int)priorityForFileExtension:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (void)recreateAlbumsFromMetadata;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)removeInflightAssets:(id)arg1;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1;
- (id)rootAlbumList;
- (id)rootFolder;
- (struct NSObject { Class x1; }*)savedPhotosAlbum;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (struct NSObject { Class x1; }*)syncProgressAlbum;
- (id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg1;
- (id)syncedAlbums;
- (void)testForRecoveryInBackground;
- (id)thumbnailManager;
- (id)userAlbums;
- (void)userExpungeAlbums:(id)arg1;
- (void)userExpungeAssets:(id)arg1;
- (struct NSObject { Class x1; }*)userLibraryAlbum;
- (void)userTrashAlbums:(id)arg1;
- (void)userTrashAssets:(id)arg1;
- (void)userUntrashAlbums:(id)arg1;
- (void)userUntrashAssets:(id)arg1;
- (id)wallpaperAlbums;
- (void)withDispatchGroup:(id)arg1 performBlock:(id /* block */)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id /* block */)arg2;
- (void)withDispatchGroup:(id)arg1 performTransaction:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
