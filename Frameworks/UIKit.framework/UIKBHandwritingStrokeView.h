/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBHandwritingView;

@interface UIKBHandwritingStrokeView : UIView <UIKBHandwritingStrokeEnabled> {
    UIKBHandwritingView *_keyView;
}

@property(readonly) double inkWidth;
@property(retain) UIKBHandwritingView * keyView;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)inkWidth;
- (id)keyView;
- (void)setKeyView:(id)arg1;

@end
