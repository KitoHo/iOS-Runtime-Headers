/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkRequest : NSObject <NSCopying> {
    id /* block */ _artworkCatalogsBlock;
    NSArray *_artworkCatalogsCache;
    <NSCopying> *_entityIdentifier;
    <NSCopying> *_namespaceIdentifier;
    unsigned int _numberOfColumns;
    unsigned int _numberOfRows;
    <NSCopying> *_revisionIdentifier;
    float _tileSpacing;
}

@property (nonatomic, copy) id /* block */ artworkCatalogsBlock;
@property (nonatomic, copy) <NSCopying> *entityIdentifier;
@property (nonatomic, copy) <NSCopying> *namespaceIdentifier;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic, copy) <NSCopying> *revisionIdentifier;
@property (nonatomic) float tileSpacing;

- (void).cxx_destruct;
- (id /* block */)artworkCatalogsBlock;
- (id)artworkCatalogsWithCount:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entityIdentifier;
- (id)namespaceIdentifier;
- (unsigned int)numberOfColumns;
- (unsigned int)numberOfRows;
- (id)revisionIdentifier;
- (void)setArtworkCatalogsBlock:(id /* block */)arg1;
- (void)setEntityIdentifier:(id)arg1;
- (void)setNamespaceIdentifier:(id)arg1;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (void)setNumberOfRows:(unsigned int)arg1;
- (void)setRevisionIdentifier:(id)arg1;
- (void)setTileSpacing:(float)arg1;
- (float)tileSpacing;

@end
