/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBlendingHighlightView : UIView <UIAlertControllerBackgroundView> {
    UIView *_colorBurnView;
    UIView *_plusDView;
}

@property float cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_blendingPressedView;
+ (id)_blendingSeparatorView;

- (float)cornerRadius;
- (void)dealloc;
- (void)setCornerRadius:(float)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 colorBurnColor:(id)arg2 plusDColor:(id)arg3;
- (void)layoutSubviews;

@end
