/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceLoader : NSObject {
    NSString *_additionalDirectoryToConsider;
    BOOL _allowResumingPartialDownloads;
    NSData *_auditToken;
    NSString *_baseURLString;
    BOOL _canceled;
    id /* block */ _completionHandler;
    NSString *_directory;
    NSMapTable *_inProgressResourceDownloads;
    NSMutableArray *_loadedResources;
    unsigned int _maxConcurrentLoads;
    int _numberOfCopiesInProgress;
    int _numberOfDownloadsInProgress;
    GEOPowerAssertion *_powerAssertion;
    id /* block */ _progressHandler;
    long _queuePriority;
    NSArray *_resourceInfos;
    NSMutableArray *_resourcesToLoad;
}

@property (nonatomic, retain) NSData *auditToken;
@property (nonatomic, readonly) NSArray *loadedResources;

- (void)_cleanup;
- (BOOL)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3;
- (void)_loadNextResource;
- (id)_urlForResource:(id)arg1;
- (void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 orExistingPathOnDisk:(id)arg3 allowCreatingHardLink:(BOOL)arg4 checksum:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)auditToken;
- (void)cancel;
- (void)dealloc;
- (id)initWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned int)arg4 additionalDirectoryToConsider:(id)arg5;
- (id)loadedResources;
- (void)setAuditToken:(id)arg1;
- (void)startWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2 priority:(long)arg3;

@end
