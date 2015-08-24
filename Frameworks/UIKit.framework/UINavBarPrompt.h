/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavBarPrompt : UIView {
    UILabel *_label;
    UINavigationBar *_navBar;
}

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (struct CGSize { float x1; float x2; })_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGSize { float x1; float x2; })_updateLabelTextColorAndFontReturningShadowOffset_legacy;
- (void)clearWeakReference:(id)arg1;
- (void)dealloc;
- (id)initWithPrompt:(id)arg1 navBar:(id)arg2;
- (void)layoutSubviews;
- (id)prompt;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })promptBounds;
- (void)setPrompt:(id)arg1;

@end
