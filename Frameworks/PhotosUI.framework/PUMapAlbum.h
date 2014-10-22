/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUMapAnnotationAnimatable>, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PUMapAlbum : NSObject <PLAlbumProtocol> {
    <PUMapAnnotationAnimatable> *_annotation;
    NSMutableOrderedSet *_assets;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    bool_setKindCounts;
}

@property(retain,readonly) <PUMapAnnotationAnimatable> * annotation;
@property(readonly) unsigned long long approximateCount;
@property(retain,readonly) NSOrderedSet * assets;
@property(readonly) unsigned long long assetsCount;
@property(readonly) bool canContributeToCloudSharedAlbum;
@property(readonly) bool canShowAvalancheStacks;
@property(readonly) bool canShowComments;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain,readonly) NSDate * endDate;
@property(retain,readonly) NSURL * groupURL;
@property bool hasUnseenContentBoolValue;
@property(readonly) unsigned long long hash;
@property(retain) NSString * importSessionID;
@property(readonly) bool isCameraAlbum;
@property(readonly) bool isCloudSharedAlbum;
@property(readonly) bool isEmpty;
@property(readonly) bool isFamilyCloudSharedAlbum;
@property(readonly) bool isFolder;
@property(readonly) bool isInTrash;
@property(readonly) bool isLibrary;
@property(readonly) bool isMultipleContributorCloudSharedAlbum;
@property(readonly) bool isOwnedCloudSharedAlbum;
@property(readonly) bool isPanoramasAlbum;
@property(readonly) bool isPendingPhotoStreamAlbum;
@property(readonly) bool isPhotoStreamAlbum;
@property(readonly) bool isRecentlyAddedAlbum;
@property(readonly) bool isStandInAlbum;
@property(readonly) bool isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(retain,readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(copy,readonly) NSArray * localizedLocationNames;
@property(copy,readonly) NSString * localizedTitle;
@property(retain,readonly) NSMutableOrderedSet * mutableAssets;
@property(copy,readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned long long photosCount;
@property(retain,readonly) UIImage * posterImage;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) bool shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(copy,readonly) id sortingComparator;
@property(retain,readonly) NSDate * startDate;
@property(readonly) Class superclass;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(retain,readonly) NSString * title;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned long long videosCount;

- (void).cxx_destruct;
- (void)_calculateKindCounts;
- (id)annotation;
- (unsigned long long)approximateCount;
- (id)assets;
- (unsigned long long)assetsCount;
- (void)batchFetchAssets:(id)arg1;
- (bool)canContributeToCloudSharedAlbum;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)endDate;
- (id)groupURL;
- (bool)hasUnseenContentBoolValue;
- (id)importSessionID;
- (id)initWithAnnotation:(id)arg1;
- (bool)isCameraAlbum;
- (bool)isCloudSharedAlbum;
- (bool)isEmpty;
- (bool)isFamilyCloudSharedAlbum;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isLibrary;
- (bool)isMultipleContributorCloudSharedAlbum;
- (bool)isOwnedCloudSharedAlbum;
- (bool)isPanoramasAlbum;
- (bool)isPendingPhotoStreamAlbum;
- (bool)isPhotoStreamAlbum;
- (bool)isRecentlyAddedAlbum;
- (bool)isStandInAlbum;
- (bool)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)mutableAssets;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned long long)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (id)secondaryKeyAsset;
- (void)setHasUnseenContentBoolValue:(bool)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (bool)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)startDate;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)uuid;
- (unsigned long long)videosCount;

@end
