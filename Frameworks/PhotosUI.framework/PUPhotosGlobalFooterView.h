/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, PLSyncProgressView, UILabel;

@interface PUPhotosGlobalFooterView : UICollectionReusableView {
    unsigned long long _imageCount;
    int _importOperation;
    unsigned long long _otherCount;
    unsigned long long _pendingCount;
    long long _style;
    NSString *_subtitle;
    UILabel *_subtitleLabel;
    PLSyncProgressView *_syncProgressView;
    UILabel *_titleLabel;
    unsigned long long _videoCount;
}

@property long long style;
@property(retain) NSString * subtitle;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)layoutSubviews;
- (void)setImageCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2 otherCount:(unsigned long long)arg3;
- (void)setPendingCount:(unsigned long long)arg1 importOperation:(int)arg2;
- (void)setStyle:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)subtitle;

@end
