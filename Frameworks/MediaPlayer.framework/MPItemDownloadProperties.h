/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSMutableSet, NSString, NSURL, SSDownload;

@interface MPItemDownloadProperties : NSObject <MPStoreDownloadManagerObserver, NSCopying> {
    long long _assetFileSize;
    NSURL *_destinationURL;
    SSDownload *_download;
    NSString *_downloadIdentifier;
    long long _downloadSizeLimit;
    unsigned long long _downloadToken;
    NSMutableSet *_downloadTokenCompletionHandlers;
    NSArray *_sinfs;
    NSURL *_sourceURL;
    bool_downloadExists;
}

@property(readonly) long long assetFileSize;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSURL * destinationURL;
@property(readonly) bool downloadExists;
@property(readonly) NSString * downloadIdentifier;
@property(readonly) long long downloadSizeLimit;
@property unsigned long long downloadToken;
@property(readonly) unsigned long long hash;
@property(readonly) NSURL * sourceURL;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptToFindDownloadTokenForPossibleDownloads:(id)arg1;
- (void)_reloadNetworkConstraints;
- (void)acquireDownloadTokenWithCompletionHandler:(id)arg1;
- (long long)assetFileSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationURL;
- (bool)downloadExists;
- (id)downloadIdentifier;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (long long)downloadSizeLimit;
- (unsigned long long)downloadToken;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1;
- (id)initWithDownload:(id)arg1;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)newAVAssetOptionsWithDownloadStyle:(long long)arg1;
- (void)setDownloadToken:(unsigned long long)arg1;
- (id)sourceURL;

@end
