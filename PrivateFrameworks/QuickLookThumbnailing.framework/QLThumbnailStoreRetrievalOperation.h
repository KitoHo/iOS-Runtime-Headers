/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    QLThumbnailAddition *_addition;
    BOOL _allowsThumbnailGeneration;
    NSURL *_documentURL;
    NSError *_error;
    BOOL _executing;
    BOOL _finished;
}

@property BOOL allowsThumbnailGeneration;
@property (retain) NSError *error;
@property (getter=isExecuting, nonatomic) BOOL executing;
@property (getter=isFinished, nonatomic) BOOL finished;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) NSDictionary *thumbnailImagesDictionary;

- (BOOL)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (BOOL)allowsThumbnailGeneration;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithDocumentAtURL:(id)arg1;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)serializedQuickLookMetadataDictionary;
- (void)setAllowsThumbnailGeneration:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(BOOL)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)start;
- (id)thumbnailImagesDictionary;

@end
