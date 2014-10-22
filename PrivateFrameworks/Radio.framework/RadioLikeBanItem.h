/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying> {
    long long _albumID;
    RadioArtworkCollection *_artworkCollection;
    RadioSeedMetadata *_seedMetadata;
    long long _storeID;
    long long _type;
    bool_isSeed;
}

@property(readonly) long long albumID;
@property(readonly) RadioArtworkCollection * artworkCollection;
@property(readonly) bool isSeed;
@property(copy,readonly) RadioSeedMetadata * seedMetadata;
@property(readonly) long long storeID;
@property(readonly) long long type;

- (void).cxx_destruct;
- (long long)albumID;
- (id)artworkCollection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithItemDictionary:(id)arg1;
- (bool)isSeed;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)seedMetadata;
- (long long)storeID;
- (long long)type;

@end
