/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailInlineTextAttachment : MFMessageTextAttachment {
    struct CGSize { 
        float width; 
        float height; 
    } _cachedImageSize;
    BOOL _displayableAsIcon;
    unsigned int _hasBeenDownloaded;
    NSData *_iconImageData;
    MFMimeTextAttachment *_original;
}

@property BOOL displayableAsIcon;

+ (unsigned int)precedenceLevel;

- (void)_cacheImageSizeIfNecessary;
- (void)_setImageDimensions:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)approximateSize;
- (float)constrainedWidth;
- (void)dealloc;
- (BOOL)displayableAsIcon;
- (void)download;
- (BOOL)hasBeenDownloaded;
- (struct CGSize { float x1; float x2; })imageDimensions;
- (id)initWithMimeTextAttachment:(id)arg1 andMessageBody:(id)arg2;
- (id)initWithWrapper:(id)arg1;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (BOOL)isDisplayableInline;
- (BOOL)isDisplayableInsidePlugin;
- (id)mimeTextAttachment;
- (BOOL)needsRedownload;
- (id)persistentUniqueIdentifier;
- (void)setDisplayableAsIcon:(BOOL)arg1;
- (void)setDisplayableInline:(BOOL)arg1;
- (void)setDisplayableInsidePlugin:(BOOL)arg1;
- (void)setFileWrapper:(id)arg1;
- (void)setNeedsRedownload:(BOOL)arg1;
- (void)setupForComposition;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;

@end
