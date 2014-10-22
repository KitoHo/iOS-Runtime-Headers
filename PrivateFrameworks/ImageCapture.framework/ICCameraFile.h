/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableDictionary, NSString;

@interface ICCameraFile : ICCameraItem {
    void *_fileProperties;
}

@property(readonly) bool burstFavorite;
@property(readonly) bool burstPicked;
@property(readonly) NSString * burstUUID;
@property bool fetchingMetadata;
@property bool fetchingThumbnail;
@property long long fileSize;
@property(readonly) bool hasOverriddenOrientation;
@property(readonly) bool highFramerate;
@property(retain) NSMutableDictionary * metadata_hidden;
@property unsigned long long orientation;
@property(getter=isRaw) bool raw;
@property(readonly) bool timeLapse;

- (bool)burstFavorite;
- (bool)burstPicked;
- (id)burstUUID;
- (void)dealloc;
- (id)description;
- (double)duration;
- (bool)fetchingMetadata;
- (bool)fetchingThumbnail;
- (id)fileExtension;
- (long long)fileSize;
- (void)finalize;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (void)handleCommandCompletionNotification:(id)arg1;
- (bool)hasMetadata;
- (bool)hasOverriddenOrientation;
- (bool)hasThumbnail;
- (bool)highFramerate;
- (id)importIdentifier;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (bool)isRaw;
- (id)metadata;
- (id)metadata_hidden;
- (unsigned long long)orientation;
- (void)overrideOrientation:(unsigned long long)arg1;
- (id)parentFolderName;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setFetchingMetadata:(bool)arg1;
- (void)setFetchingThumbnail:(bool)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setKeywordPropertiesFromMetadata;
- (void)setMetadata_hidden:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)setRaw:(bool)arg1;
- (struct CGImage { }*)thumbnail;
- (bool)timeLapse;

@end
