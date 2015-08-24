/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedSectionInfo : NSObject <PLAssetContainer> {
    NSString *_albumTitle;
    PLCloudFeedEntry *_cloudFeedEntry;
    NSDate *_date;
    NSIndexSet *_excludedAssetIndexes;
    PLCloudSharedAlbumInvitationRecord *_invitationRecord;
    PLManagedAsset *_keyAsset;
    BOOL _loaded;
    int _numberOfItems;
    PLManagedAsset *_secondaryKeyAsset;
    int _sectionType;
    <PLCloudSharedAlbumProtocol> *_sharedAlbum;
    BOOL _shouldBeVisibleWhenEmpty;
    PLManagedAsset *_tertiaryKeyAsset;
    NSString *_transientIdentifier;
}

@property (nonatomic, copy) NSString *albumTitle;
@property (nonatomic, readonly) unsigned int approximateCount;
@property (nonatomic, readonly, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned int assetsCount;
@property (nonatomic, readonly) BOOL canShowAvalancheStacks;
@property (nonatomic, readonly) BOOL canShowComments;
@property (nonatomic, readonly) PLCloudFeedEntry *cloudFeedEntry;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, copy) NSIndexSet *excludedAssetIndexes;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (getter=isLoaded, nonatomic) BOOL loaded;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic) int numberOfItems;
@property (nonatomic, readonly) unsigned int photosCount;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) int sectionType;
@property (nonatomic, retain) <PLCloudSharedAlbumProtocol> *sharedAlbum;
@property (nonatomic) BOOL shouldBeVisibleWhenEmpty;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, copy) NSString *transientIdentifier;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned int videosCount;

+ (void)beginCachingSharedAlbumsByGUIDs;
+ (void)endCachingSharedAlbumsByGUIDs;
+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;

- (void).cxx_destruct;
- (id)albumTitle;
- (unsigned int)approximateCount;
- (BOOL)areAllAssetsLiked;
- (id)assetForItemAtIndex:(int)arg1;
- (id)assets;
- (unsigned int)assetsCount;
- (id)assetsForItemAtIndex:(int)arg1 maximumCount:(int)arg2;
- (id)batchIDForItemAtIndex:(int)arg1;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (id)captionForItemAtIndex:(int)arg1;
- (id)cloudFeedEntry;
- (id)commentForItemAtIndex:(int)arg1;
- (BOOL)containsAsset:(id)arg1;
- (id)date;
- (id)excludedAssetIndexes;
- (void)getCommentCount:(out unsigned int*)arg1 likeCount:(out unsigned int*)arg2;
- (void)getPhotoCount:(out unsigned int*)arg1 videoCount:(out unsigned int*)arg2;
- (BOOL)hasMultipleAssetsForItemAtIndex:(int)arg1;
- (int)indexOfItemWithAsset:(id)arg1;
- (int)indexOfItemWithComment:(id)arg1;
- (id)initWithCloudFeedEntry:(id)arg1;
- (id)invitationRecord;
- (BOOL)isEmpty;
- (BOOL)isLoaded;
- (id)keyAsset;
- (id)likesForItemAtIndex:(int)arg1;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (int)numberOfItems;
- (unsigned int)photosCount;
- (void)reload;
- (id)secondaryKeyAsset;
- (int)sectionType;
- (void)setAlbumTitle:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setExcludedAssetIndexes:(id)arg1;
- (void)setInvitationRecord:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLoaded:(BOOL)arg1;
- (void)setNumberOfItems:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSharedAlbum:(id)arg1;
- (void)setShouldBeVisibleWhenEmpty:(BOOL)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)sharedAlbum;
- (id)sharedAlbumWithGUID:(id)arg1;
- (BOOL)shouldBeVisibleWhenEmpty;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)transientIdentifier;
- (int)typeForItemAtIndex:(int)arg1;
- (void)updateFromCloudFeedEntry;
- (id)uuid;
- (unsigned int)videosCount;

@end
