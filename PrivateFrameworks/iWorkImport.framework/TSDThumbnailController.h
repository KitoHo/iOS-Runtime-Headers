/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSDThumbnailControllerDelegate>, <TSDThumbnailProducer>, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSString, TSDThumbnailGenerator, TSKDocumentRoot, TSULRUCache;

@interface TSDThumbnailController : NSObject <TSDThumbnailConsumer> {
    double _delayBeforeRedraw;
    int _delayHandlingStatus;
    <TSDThumbnailControllerDelegate> *_delegate;
    NSMutableSet *_dirtySet;
    TSKDocumentRoot *_documentRoot;
    NSDate *_drawingStartDate;
    TSDThumbnailGenerator *_generator;
    <TSDThumbnailProducer> *_producer;
    TSULRUCache *_thumbnailCache;
    NSObject<OS_dispatch_queue> *_thumbnailGenerationQueue;
    unsigned int _thumbnailSuspendCount;
    bool_callbackScheduled;
    bool_thumbnailRequested;
    bool_thumbnailerEnabled;
    bool_tornDown;
}

@property struct CGColor { }* backgroundColor;
@property(copy,readonly) NSString * debugDescription;
@property double delayBeforeRedraw;
@property <TSDThumbnailControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) NSSet * dirtySet;
@property(getter=isEnabled) bool enabled;
@property(readonly) unsigned long long hash;
@property <TSDThumbnailProducer> * producer;
@property(readonly) Class superclass;

- (struct CGColor { }*)backgroundColor;
- (id)cachedThumbnail:(id)arg1;
- (void)commitThumbnail:(id)arg1 identifier:(id)arg2;
- (void)dealloc;
- (double)delayBeforeRedraw;
- (id)delegate;
- (id)dirtySet;
- (id)initWithDocumentRoot:(id)arg1 cacheSize:(unsigned int)arg2;
- (void)invalidateAllThumbnailsAndOptionallyClearCache:(bool)arg1;
- (void)invalidateThumbnail:(id)arg1;
- (bool)isEnabled;
- (id)nextThumbnailIdentifier;
- (void)p_handleMemoryNotification:(id)arg1;
- (bool)p_isThumbnailGenerationActive;
- (bool)p_mustCacheThumbnailsForAllPrincipalThumbnailIdentifiers;
- (bool)p_notGeneratingThumbnail;
- (void)p_scheduleThumbnailGeneration;
- (void)p_scheduleThumbnailGenerationMainThreadEntry;
- (void)p_thumbnailEvicted:(id)arg1 identifier:(id)arg2;
- (id)producer;
- (void)resumeThumbnailing;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setDelayBeforeRedraw:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setProducer:(id)arg1;
- (bool)shouldCallCommit;
- (void)suspendThumbnailing;
- (void)teardown;
- (id)thumbnail:(id)arg1 waitIfNecessary:(bool)arg2;
- (void)thumbnailCountDidChange;
- (void)updateThumbnail:(id)arg1 identifier:(id)arg2 continueThumbnailing:(bool)arg3;
- (void)updateThumbnails;
- (void)waitForIdentifiersOfThumbnailsToHaveThumbnails:(id)arg1;

@end
