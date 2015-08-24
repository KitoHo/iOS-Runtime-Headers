/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPAssetCacheClientCache : NSObject {
    NSMutableDictionary *_assets;
    unsigned int _cacheType;
    NSString *_gizmoCacheIdentifier;
    NSMutableArray *_keys;
    int _size;
}

@property (nonatomic, retain) NSMutableDictionary *assets;
@property (nonatomic) unsigned int cacheType;
@property (nonatomic, retain) NSString *gizmoCacheIdentifier;
@property (nonatomic, retain) NSMutableArray *keys;
@property (nonatomic) int size;

- (void).cxx_destruct;
- (BOOL)addAsset:(id)arg1 withName:(id)arg2 sendImage:(BOOL)arg3;
- (void)addedAssetWithName:(id)arg1;
- (id)assets;
- (id)cacheDirectory;
- (unsigned int)cacheType;
- (id)cachedImages;
- (BOOL)checkAvailableSpaceForAssetWithName:(id)arg1 length:(unsigned int)arg2;
- (void)clearSpaceForAsset:(unsigned int)arg1;
- (void)clearedCache;
- (id)dataForImageWithName:(id)arg1;
- (void)deleteAllAssets;
- (void)deleteAsset:(id)arg1;
- (void)deleteAssetWithName:(id)arg1;
- (void)deleteDataForAsset:(id)arg1;
- (void)deletedAssetWithName:(id)arg1;
- (id)gizmoCacheIdentifier;
- (id)initWithIdentifier:(id)arg1 cacheType:(unsigned int)arg2;
- (id)keys;
- (id)pathForAssetDataWithName:(id)arg1;
- (void)saveAssetData:(id)arg1 forAsset:(id)arg2;
- (void)setAssets:(id)arg1;
- (void)setCacheType:(unsigned int)arg1;
- (void)setGizmoCacheIdentifier:(id)arg1;
- (void)setKeys:(id)arg1;
- (void)setSize:(int)arg1;
- (int)size;
- (void)syncAssets:(id)arg1;

@end
