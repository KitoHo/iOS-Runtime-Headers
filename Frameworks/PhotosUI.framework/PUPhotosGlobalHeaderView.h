/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosGlobalHeaderView : UICollectionReusableView {
    NSString *_title;
    UILabel *_titleLabel;
}

@property (nonatomic, copy) NSString *title;

+ (struct CGSize { float x1; float x2; })_instanceLayoutSubviews:(id)arg1 forTitle:(id)arg2 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)_newTitleLabel;
+ (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forTitle:(id)arg2;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (id)title;

@end
