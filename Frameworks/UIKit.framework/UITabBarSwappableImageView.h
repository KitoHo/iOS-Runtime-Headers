/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITabBar;

@interface UITabBarSwappableImageView : UIImageView {
    id _alternate;
    int _buttonTag;
    int _currentAnimation;
    double _scale;
    UITabBar *_tabBar;
    id _value;
    bool_flipped;
    bool_showAlternate;
}

- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setAlternateImage:(id)arg1;
- (void)setCurrentImage;
- (void)setImage:(id)arg1;
- (void)showAlternateImage:(bool)arg1;

@end
