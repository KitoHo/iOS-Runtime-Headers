/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIImage, UIImageView;

@interface PUReviewScrubberCell : UICollectionViewCell {
    UIImageView *__checkmarkImageView;
    UIImageView *__suggestedImageView;
    UIImageView *__thumbnailImageView;
    UIImage *_image;
    bool_favorite;
    bool_suggested;
    bool_wantsSmallSuggestionIndicators;
}

@property(readonly) UIImageView * _checkmarkImageView;
@property(readonly) UIImageView * _suggestedImageView;
@property(readonly) UIImageView * _thumbnailImageView;
@property(getter=isFavorite) bool favorite;
@property(retain) UIImage * image;
@property(getter=isSuggested) bool suggested;
@property bool wantsSmallSuggestionIndicators;

- (void).cxx_destruct;
- (id)_checkmarkImageView;
- (void)_commonPUReviewScrubberCellInitialization;
- (id)_suggestedImageView;
- (id)_thumbnailImageView;
- (void)_updateFavoriteView;
- (void)_updateSuggestedView;
- (void)_updateThumbnailImageView;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFavorite;
- (bool)isSuggested;
- (void)layoutSubviews;
- (void)setFavorite:(bool)arg1 animated:(bool)arg2;
- (void)setFavorite:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSuggested:(bool)arg1 animated:(bool)arg2;
- (void)setSuggested:(bool)arg1;
- (void)setWantsSmallSuggestionIndicators:(bool)arg1;
- (bool)wantsSmallSuggestionIndicators;

@end
