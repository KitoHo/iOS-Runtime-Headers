/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet, NSString;

@interface UIToolbarTextButton : UIToolbarButton {
    NSSet *_possibleTitles;
    NSString *_pressedTitle;
    NSString *_title;
}

- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_scriptingInfo;
- (void)_setPressed:(bool)arg1;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 pressedTitle:(id)arg2 withFont:(id)arg3 withBarStyle:(long long)arg4 withStyle:(long long)arg5 withTitleWidth:(float)arg6 possibleTitles:(id)arg7 withToolbarTintColor:(id)arg8;
- (void)layoutSubviews;

@end
