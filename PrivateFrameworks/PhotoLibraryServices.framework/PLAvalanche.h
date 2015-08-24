/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAvalanche : NSObject <PLAssetChangeObserver, PLAssetContainer> {
    PLManagedAsset *__aNewPick;
    PLManagedAsset *__anOldPick;
    NSMutableIndexSet *__autoPickIndexes;
    id /* block */ __completionHandler;
    NSIndexSet *__originalAutoPickIndexes;
    unsigned int __originalStackIndex;
    NSIndexSet *__originalUserFavoriteIndexes;
    unsigned int __stackIndex;
    NSMutableIndexSet *__userFavoriteIndexes;
    NSOrderedSet *_assets;
    PLPhotoLibrary *_photoLibrary;
    NSString *_uuid;
}

@property (setter=_setANewPick:, nonatomic, retain) PLManagedAsset *_aNewPick;
@property (setter=_setAnOldPick:, nonatomic, retain) PLManagedAsset *_anOldPick;
@property (nonatomic, retain) NSMutableIndexSet *_autoPickIndexes;
@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (nonatomic, retain) NSIndexSet *_originalAutoPickIndexes;
@property (nonatomic) unsigned int _originalStackIndex;
@property (nonatomic, retain) NSIndexSet *_originalUserFavoriteIndexes;
@property (nonatomic) unsigned int _stackIndex;
@property (nonatomic, retain) NSMutableIndexSet *_userFavoriteIndexes;
@property (nonatomic, readonly) unsigned int approximateCount;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned int assetsCount;
@property (nonatomic, readonly) BOOL canShowAvalancheStacks;
@property (nonatomic, readonly) BOOL canShowComments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned int photosCount;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned int videosCount;

+ (id)_assetAmongAssets:(id)arg1 fromIndexes:(id)arg2 excludingIndexes:(id)arg3;
+ (unsigned int)_calculateStackAssetForAssetCount:(unsigned int)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3;
+ (void)_handleUpdatesForContextWillSave:(id)arg1;
+ (void)_updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5 inLibrary:(id)arg6;
+ (id)_updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 deleteNonPicks:(BOOL)arg5;
+ (id)_visibleIndexesAmongAssets:(id)arg1 fromUserFavoriteIndexes:(id)arg2 stackIndex:(unsigned int)arg3;
+ (id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)avalancheStackForImage:(id)arg1 backgroundColor:(id)arg2;
+ (unsigned int)countForAvalancheUUID:(id)arg1 inLibrary:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfTopImageInStackForStackFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (BOOL)isValidBurstWithAssets:(id)arg1;
+ (id)partialAvalancheStackForImage:(id)arg1 backgroundColor:(id)arg2;
+ (void)removeFavoriteStatus:(id)arg1;
+ (void)revalidateAvalancheAssets:(id)arg1 inLibrary:(id)arg2;
+ (BOOL)shouldHideAvalanchesFromPhotoStream;
+ (BOOL)shouldOnlyShowAvalanchePicks;

- (id)_aNewPick;
- (id)_anOldPick;
- (id)_autoPickIndexes;
- (id /* block */)_completionHandler;
- (id)_originalAutoPickIndexes;
- (unsigned int)_originalStackIndex;
- (id)_originalUserFavoriteIndexes;
- (void)_recalculateStackAsset;
- (void)_setANewPick:(id)arg1;
- (void)_setAnOldPick:(id)arg1;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (unsigned int)_stackIndex;
- (id)_userFavoriteIndexes;
- (void)addUserFavorite:(id)arg1;
- (void)applyChangesAndDeleteNonPicks:(BOOL)arg1 currentContainer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)applyTrashedState:(short)arg1;
- (unsigned int)approximateCount;
- (id)assets;
- (unsigned int)assetsCount;
- (void)assetsDidChange:(id)arg1;
- (id)autoPicks;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (void)dealloc;
- (id)description;
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2;
- (BOOL)isAutoPick:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isUserFavorite:(id)arg1;
- (id)keyAsset;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)photoLibrary;
- (unsigned int)photosCount;
- (id)proposedStackAssetAfterRemovingFavorite:(id)arg1;
- (void)removeUserFavorite:(id)arg1;
- (id)secondaryKeyAsset;
- (void)setAssets:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)set_autoPickIndexes:(id)arg1;
- (void)set_originalAutoPickIndexes:(id)arg1;
- (void)set_originalStackIndex:(unsigned int)arg1;
- (void)set_originalUserFavoriteIndexes:(id)arg1;
- (void)set_stackIndex:(unsigned int)arg1;
- (void)set_userFavoriteIndexes:(id)arg1;
- (id)stackAsset;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)userFavorites;
- (id)uuid;
- (unsigned int)videosCount;

@end
