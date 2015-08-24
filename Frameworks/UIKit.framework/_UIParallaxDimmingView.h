/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIParallaxDimmingView : UIView {
    UIView *_addingSubview;
    BOOL _backgroundIsDimmed;
    UIColor *_dimmingColor;
    UIImageView *leftEdgeFade;
}

@property (nonatomic, retain) UIView *addingSubview;
@property (nonatomic) BOOL backgroundIsDimmed;
@property (nonatomic, retain) UIColor *dimmingColor;

+ (id)newDimmingViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)newDimmingViewWrappingView:(id)arg1 withLeftBorder:(float)arg2;

- (id)_basicAnimationWithKeyPath:(id)arg1;
- (id)addingSubview;
- (BOOL)backgroundIsDimmed;
- (void)crossFade;
- (void)dealloc;
- (id)defaultBorderColor;
- (void)didMoveToWindow;
- (id)dimmingColor;
- (id)initViewWrappingView:(id)arg1 withLeftBorder:(float)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAddingSubview:(id)arg1;
- (void)setBackgroundIsDimmed:(BOOL)arg1;
- (void)setDimmingColor:(id)arg1;

@end
