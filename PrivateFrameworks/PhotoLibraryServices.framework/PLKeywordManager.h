/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLGatekeeperClient, PLManagedObjectContext, PLPhotoLibrary;

@interface PLKeywordManager : NSObject {
    PLGatekeeperClient *_assetsdClient;
    PLManagedObjectContext *_libraryContext;
    PLPhotoLibrary *_photoLibrary;
}

+ (id)writeQueue;

- (id)_keywordsForAsset:(id)arg1;
- (id)allKeywords;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)keywordObjectsForKeywords:(id)arg1;
- (id)keywordsForAsset:(id)arg1;
- (id)keywordsForAssetWithUUID:(id)arg1;
- (id)keywordsForAssets:(id)arg1;
- (bool)setKeywords:(id)arg1 forAssetUUID:(id)arg2;

@end
