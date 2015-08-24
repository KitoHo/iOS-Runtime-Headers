/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditEffectCell : UICollectionViewCell {
    UIView *__highlightView;
    UIImageView *__imageView;
    UILabel *__nameLabel;
    UIImageView *__selectionView;
    UIImage *_image;
    NSString *_name;
}

@property (setter=_setHighlightView:, nonatomic, retain) UIView *_highlightView;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (setter=_setNameLabel:, nonatomic, retain) UILabel *_nameLabel;
@property (setter=_setSelectionView:, nonatomic, retain) UIImageView *_selectionView;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *name;

+ (id)selectionOutlineImage;

- (void).cxx_destruct;
- (id)_colorForIsSelected:(BOOL)arg1;
- (id)_highlightView;
- (id)_imageView;
- (id)_nameLabel;
- (id)_selectionView;
- (void)_setHighlightView:(id)arg1;
- (void)_setImageView:(id)arg1;
- (void)_setNameLabel:(id)arg1;
- (void)_setSelectionView:(id)arg1;
- (void)_setSubview:(id)arg1 visible:(BOOL)arg2 animated:(BOOL)arg3;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)name;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;

@end
