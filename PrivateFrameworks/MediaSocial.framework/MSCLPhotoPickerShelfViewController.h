/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLPhotoPickerShelfViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    PHFetchResult *_assets;
    UICollectionView *_collectionView;
    <MSCLPhotoPickerDelegate> *_delegate;
    PHCachingImageManager *_imageManager;
    NSMutableDictionary *_imageRequestsByAssetIDs;
    BOOL _isZoomed;
    NSMutableDictionary *_selectedAttachmentsByAssetID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLPhotoPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *selectedAttachments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_desiredPixelSizeForAsset:(id)arg1;
- (void)_finishImageRequestForAssetIdentifier:(id)arg1 withImageData:(id)arg2 typeIdentifier:(id)arg3;
- (void)_loadFullImageForAsset:(id)arg1;
- (void)_reloadPreferredContentSize;
- (void)_sendDelegateSelectedAttachmentsDidChange;
- (id)_thumbnailImageRequestOptions;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)selectedAttachments;
- (void)setDelegate:(id)arg1;

@end
