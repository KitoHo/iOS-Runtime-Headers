/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface ICCameraProperties : NSObject {
    unsigned long long _batteryLevel;
    unsigned long long _contentCatalogPercentCompleted;
    NSMutableArray *_contents;
    int _contentsLock;
    NSObject<OS_dispatch_semaphore> *_deviceQSemaphore;
    double _downloadCancelTimestamp;
    NSObject<OS_dispatch_queue> *_downloadQ;
    unsigned long long _estimatedNumberOfDownloadableItems;
    NSObject<OS_dispatch_queue> *_generalQ;
    NSMutableArray *_mediaFiles;
    int _mediaFilesLock;
    NSObject<OS_dispatch_queue> *_metadataFetchQ;
    unsigned long long _numberOfDownloadableItems;
    NSObject<OS_dispatch_queue> *_thumbnailFetchQ;
    double _timeOffset;
    NSMutableArray *_toBeNotifiedAddedItems;
    NSString *_volumePath;
    bool_accessRestrictedAppleDevice;
    bool_allowsSyncingClock;
    bool_batteryLevelAvailable;
    bool_beingEjected;
    bool_contentReceived;
    bool_ejectable;
    bool_locked;
}

@property bool accessRestrictedAppleDevice;
@property bool allowsSyncingClock;
@property unsigned long long batteryLevel;
@property bool batteryLevelAvailable;
@property bool beingEjected;
@property unsigned long long contentCatalogPercentCompleted;
@property bool contentReceived;
@property(retain) NSMutableArray * contents;
@property int contentsLock;
@property NSObject<OS_dispatch_semaphore> * deviceQSemaphore;
@property double downloadCancelTimestamp;
@property NSObject<OS_dispatch_queue> * downloadQ;
@property bool ejectable;
@property unsigned long long estimatedNumberOfDownloadableItems;
@property NSObject<OS_dispatch_queue> * generalQ;
@property bool locked;
@property(retain) NSMutableArray * mediaFiles;
@property int mediaFilesLock;
@property NSObject<OS_dispatch_queue> * metadataFetchQ;
@property unsigned long long numberOfDownloadableItems;
@property NSObject<OS_dispatch_queue> * thumbnailFetchQ;
@property double timeOffset;
@property(retain) NSMutableArray * toBeNotifiedAddedItems;
@property(retain) NSString * volumePath;

- (bool)accessRestrictedAppleDevice;
- (bool)allowsSyncingClock;
- (unsigned long long)batteryLevel;
- (bool)batteryLevelAvailable;
- (bool)beingEjected;
- (unsigned long long)contentCatalogPercentCompleted;
- (bool)contentReceived;
- (id)contents;
- (int)contentsLock;
- (void)dealloc;
- (id)deviceQSemaphore;
- (double)downloadCancelTimestamp;
- (id)downloadQ;
- (bool)ejectable;
- (unsigned long long)estimatedNumberOfDownloadableItems;
- (void)finalize;
- (id)generalQ;
- (void)lockContents;
- (void)lockMediaFiles;
- (bool)locked;
- (id)mediaFiles;
- (int)mediaFilesLock;
- (id)metadataFetchQ;
- (unsigned long long)numberOfDownloadableItems;
- (void)setAccessRestrictedAppleDevice:(bool)arg1;
- (void)setAllowsSyncingClock:(bool)arg1;
- (void)setBatteryLevel:(unsigned long long)arg1;
- (void)setBatteryLevelAvailable:(bool)arg1;
- (void)setBeingEjected:(bool)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long long)arg1;
- (void)setContentReceived:(bool)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsLock:(int)arg1;
- (void)setDeviceQSemaphore:(id)arg1;
- (void)setDownloadCancelTimestamp:(double)arg1;
- (void)setDownloadQ:(id)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned long long)arg1;
- (void)setGeneralQ:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMediaFiles:(id)arg1;
- (void)setMediaFilesLock:(int)arg1;
- (void)setMetadataFetchQ:(id)arg1;
- (void)setNumberOfDownloadableItems:(unsigned long long)arg1;
- (void)setThumbnailFetchQ:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setToBeNotifiedAddedItems:(id)arg1;
- (void)setVolumePath:(id)arg1;
- (id)thumbnailFetchQ;
- (double)timeOffset;
- (id)toBeNotifiedAddedItems;
- (void)unlockContents;
- (void)unlockMediaFiles;
- (id)volumePath;

@end
