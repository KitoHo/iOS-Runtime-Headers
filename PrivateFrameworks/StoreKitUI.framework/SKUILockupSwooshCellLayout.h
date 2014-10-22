/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface SKUILockupSwooshCellLayout : SKUIItemCellLayout {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    UIImageView *_iconHighlightImageView;
    UILabel *_itemCountLabel;
    } _maxImageSize;
    UILabel *_priceLabel;
    UIColor *_primaryTextColor;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_videoHighlightImageView;
    UIImageView *_videoImageView;
    UIImageView *_videoPlayButtonImageView;
    } _videoSize;
    unsigned long long _visibleFields;
}

@property(copy) NSString * artistName;
@property(copy) NSString * category;
@property(copy) NSString * itemCountString;
@property struct CGSize { double x1; double x2; } maxImageSize;
@property(copy) NSString * price;
@property(copy) NSString * title;
@property struct CGSize { double x1; double x2; } videoSize;
@property(retain) UIImage * videoThumbnailImage;
@property unsigned long long visibleFields;

- (void).cxx_destruct;
- (void)_layoutFieldsHorizontal;
- (void)_layoutFieldsVertical;
- (id)_newDefaultLabel;
- (void)_reloadHighlight;
- (void)_reloadPriceLabel;
- (void)_removeHighlightViews;
- (id)artistName;
- (id)category;
- (struct CGSize { double x1; double x2; })cellSizeForImageOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCollectionViewCell:(id)arg1;
- (id)itemCountString;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })maxImageSize;
- (id)price;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItemCountString:(id)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)setMaxImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrice:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoThumbnailImage:(id)arg1;
- (void)setVisibleFields:(unsigned long long)arg1;
- (id)title;
- (struct CGSize { double x1; double x2; })videoSize;
- (id)videoThumbnailImage;
- (unsigned long long)visibleFields;

@end
