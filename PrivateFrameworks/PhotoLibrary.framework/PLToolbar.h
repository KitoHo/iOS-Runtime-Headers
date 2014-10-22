/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar;

@interface PLToolbar : UIToolbar {
    unsigned int _backgroundHidden : 1;
    unsigned int _backgroundAlwaysVisible : 1;
    UIToolbar *_persistentToolbar;
}

@property(getter=isBackgroundAlwaysVisible) bool backgroundAlwaysVisible;
@property(getter=isBackgroundHidden) bool backgroundHidden;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackgroundAlwaysVisible;
- (bool)isBackgroundHidden;
- (void)setBackgroundAlwaysVisible:(bool)arg1;
- (void)setBackgroundHidden:(bool)arg1;

@end
