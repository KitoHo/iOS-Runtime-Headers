/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLCloudSharedAlbumProtocol>, CLLocation, NSArray, NSData, NSDate, NSDictionary, NSError, NSManagedObject, NSNumber, NSObject<NSCopying>, NSOrderedSet, NSSet, NSString, NSURL, PLAdditionalAssetAttributes, PLCloudFeedAssetsEntry, PLCloudMaster, PLManagedAsset, PLMoment, UIImage;

@interface PLManagedAsset : PLManagedObject <UIActivityItemSource, PLMomentAssetData_Private, _PLImageLoadingAsset> {
    NSString *_reverseGeoDescription;
    bool_didLoadReverseGeo;
    bool_didPersistEAs;
    bool_didPrepareForDeletion;
    bool_disableDupeAnalysis;
    bool_disableFileSystemPersistency;
    bool_isLocatedAtHome;
    bool_isRegisteredForChanges;
    bool_needsMomentUpdate;
    bool_setCustomCreationDate;
    bool_setCustomLocation;
    NSURL *cachedNonPersistedVideoPlaybackURL;
    NSError *cachedNonPersistedVideoPlaybackURLError;
    NSDate *cachedNonPersistedVideoPlaybackURLExpiration;
    UIImage *inflightImageInMemory;
    NSString *inflightImagePath;
    UIImage *inflightIndexSheetImage;
    NSDictionary *inflightMetadata;
}

@property(retain) NSDate * addedDate;
@property(retain) PLAdditionalAssetAttributes * additionalAttributes;
@property(retain) NSOrderedSet * adjustments;
@property(retain) NSSet * albumOrders;
@property(retain) NSSet * albums;
@property(retain) NSSet * albumsBeingCustomKeyAssetFor;
@property(retain) NSSet * albumsBeingKeyAssetFor;
@property(retain) NSSet * albumsBeingSecondaryKeyAssetFor;
@property(retain) NSSet * albumsBeingTertiaryKeyAssetFor;
@property(copy,readonly) NSSet * allFileURLs;
@property(copy,readonly) NSArray * allUniformTypeIdentifiers;
@property(readonly) bool allowsWallpaperEditing;
@property(retain,readonly) NSURL * assetURL;
@property int avalanchePickType;
@property(retain) NSString * avalancheUUID;
@property(retain) NSURL * cachedNonPersistedVideoPlaybackURL;
@property(retain) NSError * cachedNonPersistedVideoPlaybackURLError;
@property(retain) NSDate * cachedNonPersistedVideoPlaybackURLExpiration;
@property(retain) NSString * cloudAssetGUID;
@property(retain,readonly) NSString * cloudAssetGUID;
@property(retain) NSString * cloudBatchID;
@property(retain) NSDate * cloudBatchPublishDate;
@property(retain) NSString * cloudCollectionGUID;
@property(retain) NSOrderedSet * cloudComments;
@property(retain) NSNumber * cloudDownloadRequests;
@property(retain) PLCloudFeedAssetsEntry * cloudFeedAssetsEntry;
@property bool cloudHasCommentsByMe;
@property bool cloudHasCommentsConversation;
@property bool cloudHasUnseenComments;
@property bool cloudIsDeletable;
@property bool cloudIsMyAsset;
@property(retain) NSDate * cloudLastViewedCommentDate;
@property short cloudLocalState;
@property(retain) PLCloudMaster * cloudMaster;
@property(readonly) NSString * cloudOwnerEmail;
@property(readonly) NSString * cloudOwnerFirstName;
@property(readonly) NSString * cloudOwnerFullName;
@property(retain) NSString * cloudOwnerHashedPersonID;
@property(readonly) NSString * cloudOwnerLastName;
@property short cloudPlaceholderKind;
@property(retain) NSSet * cloudResources;
@property(retain) NSDate * cloudServerPublishDate;
@property short cloudServerState;
@property(readonly) <PLCloudSharedAlbumProtocol> * cloudShareAlbum;
@property bool complete;
@property(retain) NSString * creatorBundleID;
@property(retain) NSString * customCollectionName;
@property(retain) NSString * customCollectionUUID;
@property(retain) NSString * customMomentName;
@property(retain) NSString * customMomentUUID;
@property(retain) NSDate * dateCreated;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSString * directory;
@property bool disableDupeAnalysis;
@property bool disableFileSystemPersistency;
@property double duration;
@property(retain) NSString * editorBundleID;
@property unsigned long long effectiveThumbnailIndex;
@property(retain,readonly) NSData * embeddedThumbnailData;
@property short embeddedThumbnailHeight;
@property int embeddedThumbnailLength;
@property int embeddedThumbnailOffset;
@property short embeddedThumbnailWidth;
@property long long externalUsageIntent;
@property(retain) NSSet * faces;
@property bool favorite;
@property(copy,readonly) NSString * fileExtension;
@property(copy,readonly) NSSet * filePathsWithoutThumbs;
@property(copy,readonly) NSURL * fileURLForLargeThumbnailFile;
@property(copy,readonly) NSURL * fileURLForPrebakedLandscapeScrubberThumbnails;
@property(copy,readonly) NSURL * fileURLForPrebakedPortraitScrubberThumbnails;
@property(copy,readonly) NSURL * fileURLForThumbnailFile;
@property(retain) NSString * filename;
@property struct { double x1; double x2; } gpsCoordinate;
@property bool hasAdjustments;
@property(readonly) bool hasEmbeddedThumbnail;
@property(readonly) unsigned long long hash;
@property short height;
@property bool hidden;
@property short highDynamicRangeType;
@property struct CGSize { double x1; double x2; } imageSize;
@property(retain) NSString * importSessionID;
@property(retain,readonly) UIImage * inflightImage;
@property(retain) UIImage * inflightImageInMemory;
@property(retain) NSString * inflightImagePath;
@property(retain) UIImage * inflightIndexSheetImage;
@property(retain) NSDictionary * inflightMetadata;
@property(readonly) bool isAudio;
@property(readonly) bool isCloudPhotoLibraryAsset;
@property(readonly) bool isCloudSharedAsset;
@property(readonly) bool isHDVideo;
@property bool isInFlight;
@property(readonly) bool isJPEG;
@property(readonly) bool isMogul;
@property(readonly) bool isPhoto;
@property(readonly) bool isPhotoStreamPhoto;
@property(setter=setSearchDataValid:) bool isSearchDataValid;
@property(readonly) bool isStreamedVideo;
@property(readonly) bool isUsedByiPhoto;
@property(readonly) bool isVideo;
@property short kind;
@property short kindSubtype;
@property(retain) NSDate * lastSharedDate;
@property(retain) NSOrderedSet * likeComments;
@property(retain) NSOrderedSet * likeComments;
@property(retain) CLLocation * location;
@property(retain) NSData * locationData;
@property int locationHash;
@property(retain) NSString * longDescription;
@property(copy,readonly) NSURL * mainFileURL;
@property(retain) NSDate * modificationDate;
@property(retain) PLMoment * moment;
@property bool needsMomentUpdate;
@property short orientation;
@property(retain) PLManagedAsset * originalAsset;
@property(retain) NSString * originalAssetsUUID;
@property(retain) NSString * originalFilename;
@property int originalFilesize;
@property(retain) NSData * originalHash;
@property short originalHeight;
@property short originalOrientation;
@property(retain) NSString * originalPath;
@property short originalWidth;
@property(copy,readonly) NSString * pathForAdjustmentDirectory;
@property(copy,readonly) NSString * pathForLargeDisplayableImageFile;
@property(copy,readonly) NSString * pathForLargeThumbnailFile;
@property(copy,readonly) NSString * pathForLegacySlalomRegionsArchive;
@property(copy,readonly) NSString * pathForMediumThumbnailFile;
@property(copy,readonly) NSString * pathForMediumVideoFile;
@property(copy,readonly) NSString * pathForMetadataDirectory;
@property(copy,readonly) NSString * pathForOriginalFile;
@property(copy,readonly) NSString * pathForPrebakedLandscapeScrubberThumbnails;
@property(copy,readonly) NSString * pathForPrebakedPortraitScrubberThumbnails;
@property(copy,readonly) NSString * pathForPrebakedWildcatThumbnailsFile;
@property(copy,readonly) NSString * pathForSmallVideoFile;
@property(copy,readonly) NSString * pathForTrimmedVideoFile;
@property(copy,readonly) NSString * pathForVideoFile;
@property(copy,readonly) NSString * pathForVideoPreviewFile;
@property(copy,readonly) NSString * pathForXMPFile;
@property(retain) NSString * publicGlobalUUID;
@property(retain) NSData * reverseLocationData;
@property bool reverseLocationDataIsValid;
@property short savedAssetType;
@property(retain) NSData * searchCategoryData;
@property(retain) NSManagedObject * searchData;
@property(retain) NSSet * sidecarFiles;
@property double sortToken;
@property(copy,readonly) NSArray * sortedSidecarFiles;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * textBadgeString;
@property int thumbnailIndex;
@property(retain) NSString * title;
@property(readonly) unsigned long long totalCommentsCount;
@property(retain) NSDate * trashedDate;
@property short trashedState;
@property(retain) NSString * uniformTypeIdentifier;
@property(retain,readonly) NSObject<NSCopying> * uniqueObjectID;
@property bool userCloudSharedLiked;
@property(retain) id uuid;
@property short visibilityState;
@property(retain,readonly) UIImage * wallpaperFullScreenImage;
@property short width;

+ (unsigned long long)CPLAssetHDRTypeFromPLPhotoHDRType:(short)arg1;
+ (short)PLPhotoHDRTypeFromCPLAssetHDRType:(unsigned long long)arg1;
+ (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (short)_correctedOrientation:(short)arg1;
+ (id)_fakeGeo;
+ (id)_insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6 isPlaceholder:(bool)arg7;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(bool)arg2;
+ (id)_supportedAssetTypesForUpload;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
+ (long long)adjustmentBaseVersionFromImageFormat:(int)arg1;
+ (long long)adjustmentBaseVersionFromPFAdjustmentsBaseVersion:(long long)arg1;
+ (id)allCloudSharedAssetsInLibrary:(id)arg1;
+ (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
+ (short)assetTypeFromUniformTypeIdentifier:(id)arg1;
+ (bool)assetTypeIsSupportedForUpload:(short)arg1;
+ (id)assetWithCloudAssetUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsLibraryURLWithUUID:(id)arg1 extension:(id)arg2;
+ (id)assetsToResetInLibrary:(id)arg1;
+ (id)assetsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)assetsWithCloudAssetUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithSavedAssetType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)assetsWithUUIDs:(id)arg1 includePendingChanges:(bool)arg2 inLibrary:(id)arg3;
+ (id)baseSearchIndexPredicate;
+ (id)bestCreationDateForAssetAtURL:(id)arg1 modificationDate:(id*)arg2 creationDateString:(id*)arg3;
+ (id)cloudAssetsInLibrary:(id)arg1;
+ (id)cloudSharedAssetsWithGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (unsigned long long)countAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned long long)countUsedAssetsWithKind:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)createCloudPhotoLibraryAssetWithAssetRecord:(id)arg1 masterRecord:(id)arg2 inLibrary:(id)arg3;
+ (id)diagnosticFilePathForMainFilePath:(id)arg1;
+ (struct CGSize { double x1; double x2; })dimensionsForAVAsset:(id)arg1;
+ (struct CGSize { double x1; double x2; })dimensionsForVideoAtURL:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)extensionForLargeThumbnailFile;
+ (id)extensionForMediumThumbnailFile;
+ (void)extractDirectory:(id*)arg1 andFilename:(id*)arg2 fromMainFileURL:(id)arg3;
+ (int)feedEntryThumbnailFormat;
+ (id)fetchPredicateForLegacyRequiredResourcesLocallyAvailable;
+ (id)fileURLFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (void)fixupCloudPhotoLibraryAsset:(id)arg1 withMasterIdentifier:(id)arg2 inLibrary:(id)arg3;
+ (void)fixupCloudPhotoLibraryAsset:(id)arg1 withMasterRecord:(id)arg2 inLibrary:(id)arg3;
+ (int)formatForThumbnailGeneration;
+ (int)fullSizeImageFormat;
+ (bool)guaranteedFlashOffForAssetAtURL:(id)arg1;
+ (int)imageFormatFromAdjustmentBaseVersion:(long long)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (int)indexSheetBakedFormat;
+ (int)indexSheetUnbakedFormat;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6 isPlaceholder:(bool)arg7;
+ (id)insertAssetIntoPhotoLibrary:(id)arg1 mainFileURL:(id)arg2 savedAssetType:(short)arg3 replacementUUID:(id)arg4 imageSource:(struct CGImageSource {}**)arg5 imageData:(id*)arg6;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (bool)isValidFileExtensionForImport:(id)arg1;
+ (id)keyPathsForValuesAffectingGpsCoordinate;
+ (id)keyPathsForValuesAffectingImageSize;
+ (id)keyPathsForValuesAffectingIsJPEG;
+ (id)keyPathsForValuesAffectingIsPhotoStreamPhoto;
+ (int)landscapeScrubberThumbnailFormat;
+ (int)largestNonJPEGThumbnailFormat;
+ (struct { double x1; double x2; })locationFromAVAsset:(id)arg1;
+ (id)locationFromLocationData:(id)arg1 timestampIfMissing:(id)arg2 outUsesCompactFormat:(bool*)arg3;
+ (void)markAssetAsRecentlyUsed:(id)arg1;
+ (int)masterThumbnailFormat;
+ (id)pathForAdjustmentDirectoryWithMutationsDirectory:(id)arg1;
+ (id)pathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)persistedRecentlyUsedGUIDS;
+ (long long)pfAdjustmentsBaseVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2 sidecar:(id*)arg3;
+ (id)photoFromAssetURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)pl_PHAssetsForManagedAssets:(id)arg1;
+ (int)portraitScrubberThumbnailFormat;
+ (int)posterThumbnailFormat;
+ (id)preferredFileExtensionForType:(id)arg1;
+ (id)recentlyUsedGUIDsPath;
+ (id)sortedCloudSharedAssetsWithPlaceholderKind:(short)arg1 ascending:(bool)arg2 inLibrary:(id)arg3;
+ (int)thumbnailFormat;
+ (id)uniformTypeIdentifierFromPathExtension:(id)arg1 assetType:(short)arg2;
+ (id)uuidFromAssetURL:(id)arg1 fileExtension:(id*)arg2 sidecarIndex:(id*)arg3;
+ (id)uuidFromAssetURL:(id)arg1;
+ (int)wildcatIndexSheetFormat;
+ (int)wildcatPhotoScrubberFormat;
+ (int)wildcatStackFormat;

- (unsigned long long)CPLResourceTypeFromImageFormat:(int)arg1;
- (unsigned long long)CPLResourceTypeFromVideoFormat:(int)arg1;
- (void)_appendAssetTextDataToAsset:(id)arg1;
- (void)_appendDateCreatedToAsset:(id)arg1 dateFormatter:(id)arg2;
- (void)_appendGEODataToAsset:(id)arg1;
- (void)_appendKeywords:(id)arg1 toAsset:(id)arg2;
- (void)_applyPropertiesFromCloudMaster:(id)arg1;
- (void)_asyncGenerateRenderImageFileWithSize:(struct CGSize { double x1; double x2; })arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 adjustmentDataBlob:(id)arg4 originalImageFilePath:(id)arg5 originalImageEXIFOrientation:(long long)arg6 renderedImageFilePath:(id)arg7 completionHandler:(id)arg8;
- (int)_avalancheTypeFromCplBurstFlags:(unsigned long long)arg1;
- (id)_compactDebugDescription;
- (void)_computePreCropThumbnailSize:(struct CGSize { double x1; double x2; }*)arg1 andPostCropSize:(struct CGSize { double x1; double x2; }*)arg2 forOrientedOriginalSize:(struct CGSize { double x1; double x2; })arg3 andCroppedSize:(struct CGSize { double x1; double x2; })arg4 isLargeThumbnail:(bool)arg5;
- (unsigned long long)_cplAdjustmentSourceTypeFromPLAdjustmentBaseVersion:(long long)arg1;
- (unsigned long long)_cplAssetSubtypeFromPLAssetSubtype:(short)arg1;
- (unsigned long long)_cplBurstFlagsForAsset;
- (id)_createCPLResourceFromResourcePath:(id)arg1 withResourceType:(unsigned long long)arg2 uniformTypeIdentifier:(id)arg3 itemIdentifier:(id)arg4 imageSize:(struct CGSize { double x1; double x2; })arg5;
- (void)_createCloudMasterFromMasterChange:(id)arg1;
- (id)_createImageResourceForResourceType:(unsigned long long)arg1 withPreviewImagePath:(id)arg2 itemIdentifier:(id)arg3;
- (void)_createResourcesFromExistingCloudResources:(id)arg1 withItemIdentifier:(id)arg2 fileURLToGenerateDerivatives:(id)arg3 applyAdjustment:(bool)arg4 validResources:(id)arg5 invalidResources:(id)arg6;
- (id)_createVideoResourceFromVideoURL:(id)arg1 withResourceType:(unsigned long long)arg2 itemIdentifier:(id)arg3 applyVideoAdjustments:(bool)arg4;
- (void)_debugPrintAdjustmentState;
- (id)_fileNameFormatForResourceType:(unsigned long long)arg1;
- (id)_generatePosterFrameForVideoAtURL:(id)arg1 withResourceType:(unsigned long long)arg2 itemIdentifier:(id)arg3;
- (id)_generateVideoResourcesFromURL:(id)arg1 withIdentifier:(id)arg2 shouldGenerateVideoDerivatives:(bool)arg3;
- (void)_getLargestAvailableDataRepresentation:(id*)arg1 type:(id*)arg2;
- (bool)_hasPanoramaDimensions;
- (id)_highDynamicRangeTypeDescription;
- (id)_imageDataForThumbGeneration;
- (bool)_isResourceAvailableForResourceType:(unsigned long long)arg1;
- (bool)_isSavedAssetTypeValid:(short)arg1;
- (bool)_isValidUTI:(id)arg1 forService:(id)arg2;
- (id)_itemIdentifier;
- (id)_kindDescription;
- (void)_loadReverseGeoIfNeeded;
- (bool)_location:(id)arg1 isEqualToLocationForUpdating:(id)arg2;
- (bool)_migrateKeyedArchiverAdjustmentsToPropertyListSerializationFormat;
- (bool)_migrateLegacySLMAdjustments;
- (void)_migrateResourcePathForMaster:(id)arg1;
- (long long)_plAdjustmentBaseVersionFromCPLAdjustmentSourceType:(unsigned long long)arg1;
- (short)_plAssetSubtypeFromCPLAssetSubtype:(unsigned long long)arg1;
- (id)_prettyDescription;
- (id)_savedAssetTypeDescription;
- (id)_searchDataCreateIfNeeded;
- (id)_serializedPropertyDataFromFilter:(id)arg1;
- (bool)_setDefaultSlowMotionAdjustments;
- (id)_settingsDictionaryFromFilter:(id)arg1;
- (id)_settingsDictionaryFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })_sizeOfImageAtURL:(id)arg1;
- (struct CGSize { double x1; double x2; })_targetSizeForInputSize:(struct CGSize { double x1; double x2; })arg1 maxPixelSize:(unsigned long long)arg2;
- (bool)_writeXMPHeaderWithProperties:(id)arg1 orientation:(int)arg2;
- (void)_writeXMPSidecarWithProperties:(id)arg1 orientation:(int)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)addAdjustment;
- (void)addComment:(id)arg1;
- (id)addFaceWithRelativeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(short)arg2 albumUUID:(id)arg3;
- (id)addedDateData;
- (id)adjustmentsXMPRepresentation;
- (id)allFileExtensions;
- (id)allFileURLs;
- (id)allUniformTypeIdentifiers;
- (bool)allowsWallpaperEditing;
- (void)applyPropertiesChangeToCPLAssetChange:(id)arg1 withMasterID:(id)arg2;
- (void)applyPropertiesFromAssetChange:(id)arg1;
- (void)applyResourceChangeToCPLAsset:(id)arg1 withIdentifier:(id)arg2 forChangeType:(unsigned long long)arg3;
- (void)applyResourcesFromAssetChange:(id)arg1;
- (void)applyResourcesFromMasterChange:(id)arg1;
- (void)applyTrashedState:(short)arg1;
- (double)aspectRatio;
- (id)assetURL;
- (id)assetURLForSidecarFile:(id)arg1;
- (id)assetURLWithExtension:(id)arg1;
- (id)assetsLibraryURL;
- (id)avalanchePickDescription;
- (bool)avalanchePickTypeIsVisible;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(unsigned long long)arg1;
- (id)cachedNonPersistedVideoPlaybackURL;
- (id)cachedNonPersistedVideoPlaybackURLError;
- (id)cachedNonPersistedVideoPlaybackURLExpiration;
- (id)calculateReturnPathForForceLarge:(bool)arg1 forceUpgradeFromSubstandardIfNecessary:(bool)arg2 outImageType:(long long*)arg3;
- (bool)canGenerateDerivatives;
- (bool)canMoveToTrash;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (int)cloudCommentsStatusForOwnedAsset:(bool)arg1;
- (bool)cloudHasSameOwnerAsAsset:(id)arg1;
- (id)cloudMaster;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (id)cloudResourceForResourceType:(unsigned long long)arg1;
- (id)cloudResources;
- (id)cloudShareAlbum;
- (long long)cloudSharedAssetPlaceholderKind;
- (long long)compareToAsset:(id)arg1;
- (bool)couldBeStoredInDCIM;
- (id)cplAssetChangeWithMasterID:(id)arg1 withChangeType:(unsigned long long)arg2;
- (id)cplMasterChange;
- (id)cplRelationsForAsset;
- (id)cplResourceForResourceType:(unsigned long long)arg1;
- (id)creatorBundleID;
- (id)customCollectionName;
- (id)customCollectionUUID;
- (id)customMomentName;
- (id)customMomentUUID;
- (id)dateCreatedData;
- (void)dealloc;
- (id)debugFilename;
- (void)delete;
- (void)deleteComment:(id)arg1;
- (void)deleteFromDatabaseOnly;
- (void)didSave;
- (void)didSetCustomDateCreated;
- (void)didSetCustomLocation;
- (void)didTurnIntoFault;
- (bool)disableDupeAnalysis;
- (bool)disableFileSystemPersistency;
- (id)editorBundleID;
- (unsigned long long)effectiveThumbnailIndex;
- (id)embeddedThumbnailData;
- (short)embeddedThumbnailHeight;
- (int)embeddedThumbnailLength;
- (int)embeddedThumbnailOffset;
- (short)embeddedThumbnailWidth;
- (id)existingCloudMaster;
- (long long)externalUsageIntent;
- (id)faceWithIdentifier:(short)arg1;
- (id)fileExtension;
- (id)filePathsWithoutThumbs;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForLargeThumbnailFile;
- (id)fileURLForMediumThumbnailFile;
- (id)fileURLForMetadataWithExtension:(id)arg1;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForSidecarFile:(id)arg1;
- (id)fileURLForThumbnailFile;
- (id)filteredImage:(id)arg1 withCIContext:(id)arg2;
- (void)generateAndUpdateThumbnailsWithPreviewImage:(id)arg1 thumbnailImage:(id)arg2 fromImageSource:(struct CGImageSource { }*)arg3 imageData:(id)arg4 thumbnailDataByFormatID:(struct __CFDictionary { }*)arg5 updateExistingLargePreview:(bool)arg6;
- (void)generateLargeThumbnailFileIfNecessary;
- (void)generateThumbnailsWithImageSource:(struct CGImageSource { }*)arg1 imageData:(id)arg2 updateExistingLargePreview:(bool)arg3 allowMediumPreview:(bool)arg4 outSmallThumbnail:(id*)arg5 outLargeThumbnail:(id*)arg6;
- (void)getSearchIndexContents:(id)arg1 dateFormatter:(id)arg2 keywords:(id)arg3;
- (id)globalUUID;
- (struct { double x1; double x2; })gpsCoordinate;
- (bool)hasEmbeddedThumbnail;
- (bool)hasGPS;
- (bool)hasJustBeenHidden;
- (bool)hasJustBeenShown;
- (bool)hasLegacyAdjustments;
- (bool)hasLegacyRequiredResourcesLocallyAvailable;
- (bool)hasOriginalFile;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageWithFormat:(int)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (id)imageWithFormat:(int)arg1;
- (id)importSessionID;
- (void)incrementUploadAttempts;
- (id)indexSheetImage;
- (id)inflightImage;
- (id)inflightImageInMemory;
- (id)inflightImagePath;
- (id)inflightIndexSheetImage;
- (id)inflightMetadata;
- (bool)isAudio;
- (bool)isAvalanchePhoto;
- (bool)isAvalancheStackPhoto;
- (bool)isCloudPhotoLibraryAsset;
- (bool)isCloudPlaceholder;
- (bool)isCloudSharedAsset;
- (bool)isDeletableFromAssetsLibrary;
- (bool)isEditable;
- (bool)isEditableFromAssetsLibrary;
- (bool)isFavorite;
- (bool)isHDVideo;
- (bool)isInFlight;
- (bool)isInTrash;
- (bool)isIncludedInCloudFeeds;
- (bool)isIncludedInMoments;
- (bool)isInterestingForAvalanche;
- (bool)isJPEG;
- (bool)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (bool)isLocatedAtHome;
- (bool)isMogul;
- (bool)isPanorama;
- (bool)isPartOfBurst;
- (bool)isPhoto;
- (bool)isPhotoStreamPhoto;
- (bool)isSavedPhotosAsset;
- (bool)isSearchDataValid;
- (bool)isStreamedVideo;
- (bool)isTimelapsePlaceholder;
- (bool)isUsedByiPhoto;
- (bool)isValidTypeForPersistence;
- (bool)isVideo;
- (id)largestAvailableDataRepresentationAndType:(id*)arg1;
- (id)location;
- (id)locationFromFileURL:(id)arg1;
- (int)locationHash;
- (id)locationMergedWithAssetMetadataIfCompact:(bool)arg1;
- (id)longDescription;
- (id)mainFileURL;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (void)markCloudResourceOfType:(unsigned long long)arg1 asLocallyAvailable:(bool)arg2;
- (bool)migrateLegacyAdjustments;
- (id)mutableAdjustments;
- (id)mutableAlbumsBeingCustomKeyAssetFor;
- (id)mutableAlbumsBeingKeyAssetFor;
- (id)mutableAlbumsBeingSecondaryKeyAssetFor;
- (id)mutableAlbumsBeingTertiaryKeyAssetFor;
- (id)mutableSidecarFiles;
- (bool)needsMomentUpdate;
- (id)newFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)newFullSizeImage;
- (id)newLowResolutionFullScreenImage;
- (long long)orderInAlbumCloudUuid:(id)arg1 fromRelations:(id)arg2;
- (id)originalAsset;
- (id)originalAssetsUUID;
- (id)originalFilename;
- (int)originalFilesize;
- (id)originalHash;
- (short)originalHeight;
- (long long)originalImageOrientation;
- (short)originalOrientation;
- (id)originalPath;
- (unsigned long long)originalResourceChoice;
- (short)originalWidth;
- (id)pasteBoardRepresentation;
- (id)pathForAdjustmentDirectory;
- (id)pathForAdjustmentFile;
- (id)pathForDiagnosticFile;
- (id)pathForFullsizeImageFile;
- (id)pathForFullsizeRenderImageFile;
- (id)pathForFullsizeRenderVideoFile;
- (id)pathForLargeDisplayableImageFile;
- (id)pathForLargeThumbnailFile;
- (id)pathForLegacySlalomRegionsArchive;
- (id)pathForMediumThumbnailFile;
- (id)pathForMediumVideoFile;
- (id)pathForMetadataDirectory;
- (id)pathForMetadataWithExtension:(id)arg1;
- (id)pathForMutationsDirectory;
- (id)pathForOriginalFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForSideCarImageFile;
- (id)pathForSmallVideoFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForVideoPreviewFile;
- (id)pathForXMPFile;
- (id)pathToOriginalVideoFile;
- (void)persistMetadataToFilesystem;
- (id)pictureTransferProtocolInformationWithAlbumsObjectIDs:(id)arg1;
- (id)pl_PHAsset;
- (id)pl_photoLibrary;
- (void)prepareForDeletion;
- (id)publicGlobalUUID;
- (void)registerForChanges;
- (void)removeLegacyAdjustments;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(bool)arg1 forceUpgradeFromSubstandardIfNecessary:(bool)arg2 outImageType:(long long*)arg3;
- (id)reverseGeoDescription;
- (id)reverseLocationData;
- (bool)reverseLocationDataIsValid;
- (void)revertToOriginal;
- (id)searchCategoryData;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7 isSubstandardRender:(bool)arg8 fullSizeRenderSize:(struct CGSize { double x1; double x2; })arg9;
- (void)setAdjustmentDataBlob:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderedContentURL:(id)arg6 penultimateRenderedJPEGData:(id)arg7;
- (bool)setAttributesFromMainFileURL:(id)arg1 fullSizeRenderURL:(id)arg2 savedAssetType:(short)arg3 isPlaceholder:(bool)arg4 overwriteOriginalProperties:(bool)arg5 imageSource:(struct CGImageSource {}**)arg6 imageData:(id*)arg7;
- (void)setCachedNonPersistedVideoPlaybackURL:(id)arg1;
- (void)setCachedNonPersistedVideoPlaybackURLError:(id)arg1;
- (void)setCachedNonPersistedVideoPlaybackURLExpiration:(id)arg1;
- (void)setCloudMaster:(id)arg1;
- (void)setCloudResources:(id)arg1;
- (void)setCreatorBundleID:(id)arg1;
- (void)setCustomCollectionName:(id)arg1;
- (void)setCustomCollectionUUID:(id)arg1;
- (void)setCustomMetadataWithPersistedFileSystemAttributes;
- (void)setCustomMomentName:(id)arg1;
- (void)setCustomMomentUUID:(id)arg1;
- (bool)setDefaultAdjustmentsIfNecessary;
- (void)setDisableDupeAnalysis:(bool)arg1;
- (void)setDisableFileSystemPersistency:(bool)arg1;
- (void)setEditorBundleID:(id)arg1;
- (void)setEffectiveThumbnailIndex:(unsigned long long)arg1;
- (void)setEmbeddedThumbnailHeight:(short)arg1;
- (void)setEmbeddedThumbnailLength:(int)arg1;
- (void)setEmbeddedThumbnailOffset:(int)arg1;
- (void)setEmbeddedThumbnailWidth:(short)arg1;
- (void)setExternalUsageIntent:(long long)arg1;
- (void)setGpsCoordinate:(struct { double x1; double x2; })arg1;
- (void)setHDRFlagFromImageProperties:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setInflightImageInMemory:(id)arg1;
- (void)setInflightImagePath:(id)arg1;
- (void)setInflightIndexSheetImage:(id)arg1;
- (void)setInflightMetadata:(id)arg1;
- (void)setIsInFlight:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationFromCoordinate:(struct { double x1; double x2; })arg1;
- (void)setLocationFromImageProperties:(id)arg1;
- (void)setLocationHash:(int)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setNeedsMomentUpdate:(bool)arg1;
- (void)setOriginalAsset:(id)arg1;
- (void)setOriginalAssetsUUID:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setOriginalFilesize:(int)arg1;
- (void)setOriginalHash:(id)arg1;
- (void)setOriginalHeight:(short)arg1;
- (void)setOriginalOrientation:(short)arg1;
- (void)setOriginalPath:(id)arg1;
- (void)setOriginalResourceChoice:(unsigned long long)arg1;
- (void)setOriginalSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setOriginalWidth:(short)arg1;
- (void)setPublicGlobalUUID:(id)arg1;
- (void)setReverseLocationData:(id)arg1;
- (void)setReverseLocationDataIsValid:(bool)arg1;
- (void)setSavedAssetTypeFromImageProperties:(id)arg1;
- (void)setSearchCategoryData:(id)arg1;
- (void)setSearchDataValid:(bool)arg1;
- (void)setSizeAndOrientationFromImageProperties:(id)arg1;
- (void)setThumbnailDataFromImageProperties:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniformTypeIdentifierFromPathExtension:(id)arg1;
- (void)setUploadAttempts:(short)arg1;
- (void)setUserCloudSharedLiked:(bool)arg1;
- (bool)setVideoInfoFromFileAtURL:(id)arg1 fullSizeRenderURL:(id)arg2 overwriteOriginalProperties:(bool)arg3;
- (id)shortenedFilePath;
- (id)sortedSidecarFiles;
- (bool)supportsCloudUpload;
- (void)synchronizeWithPersistedFileSystemAttributes;
- (void)synchronouslyFetchAdjustmentDataWithCompletionHandler:(id)arg1;
- (void)synchronouslyGenerateFullsizeRenderImageIfNecessaryAtPath:(id)arg1 withCompletionHandler:(id)arg2;
- (id)textBadgeString;
- (id)thumbnailIdentifier;
- (id)title;
- (unsigned long long)totalCommentsCount;
- (id)uniqueObjectID;
- (void)unregisterForChanges;
- (void)updateAdjustmentsWithAdjustmentMetadata:(id)arg1;
- (void)updateAdjustmentsWithFiltersAndIdentifiers:(id)arg1;
- (void)updateAssetAlbumRelation:(id)arg1 inLibrary:(id)arg2;
- (void)updateAssetKindFromUniformTypeIdentifier;
- (void)updatePanoramosity;
- (short)uploadAttempts;
- (id)userAddCloudSharedCommentWithText:(id)arg1;
- (bool)userCloudSharedLiked;
- (void)userDeleteCloudSharedComment:(id)arg1;
- (void)userReadAllCloudSharedComments;
- (id)utiForResourceType:(unsigned long long)arg1;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (bool)visibilityStateIsEqualToState:(short)arg1;
- (id)wallpaperFullScreenImage;
- (void)willSave;
- (void)willTurnIntoFault;
- (void)writeXMPWithProperties:(id)arg1 orientation:(int)arg2;

@end
