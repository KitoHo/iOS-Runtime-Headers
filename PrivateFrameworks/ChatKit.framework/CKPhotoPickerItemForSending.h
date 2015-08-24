/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerItemForSending : NSObject {
    NSURL *_assetURL;
    <CKPhotoPickerItemForSendingDelegate> *_delegate;
    NSURL *_localURL;
    NSObject<OS_dispatch_semaphore> *_outstandingWork;
    UIImage *_thumbnail;
}

@property (nonatomic, readonly, retain) NSURL *assetURL;
@property (nonatomic, readonly, retain) NSURL *localURL;
@property (retain) UIImage *thumbnail;

- (void)_fetchAndPersistImageDataForAsset:(id)arg1 withImageManager:(id)arg2;
- (id)assetURL;
- (void)dealloc;
- (id)description;
- (id)initWithAssetURL:(id)arg1;
- (id)initWithImageManager:(id)arg1 asset:(id)arg2 delegate:(id)arg3;
- (id)localURL;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void)waitForOutstandingWork;

@end
