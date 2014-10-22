/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

@interface UIStatusBarStyleAttributes : NSObject {
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
    UIStatusBarStyleRequest *_request;
}

- (bool)areTopCornersRounded;
- (id)backgroundColorWithTintColor:(id)arg1;
- (id)backgroundImageName;
- (int)cornerStyle;
- (void)dealloc;
- (double)foregroundAlpha;
- (id)foregroundStyle;
- (double)glowAnimationDuration;
- (double)heightForMetrics:(long long)arg1;
- (double)heightForOrientation:(long long)arg1;
- (long long)idiom;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (bool)isDoubleHeight;
- (bool)isTranslucent;
- (bool)isTransparent;
- (long long)legibilityStyle;
- (id)newForegroundStyleWithHeight:(double)arg1;
- (bool)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (bool)shouldUseVisualAltitude;
- (long long)style;
- (bool)supportsRasterization;
- (long long)tapButtonType;
- (bool)usesVerticalLayout;

@end
