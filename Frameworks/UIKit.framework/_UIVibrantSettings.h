/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UILegibilitySettings;

@interface _UIVibrantSettings : NSObject {
    UIColor *_chevronShimmerColor;
    UIColor *_highlightColor;
    UIColor *_highlightLimitingColor;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_referenceColor;
    double _referenceContrast;
    UIColor *_shimmerColor;
    long long _style;
    UIColor *_tintColor;
}

@property(retain) UIColor * chevronShimmerColor;
@property(retain) UIColor * highlightColor;
@property(retain) UIColor * highlightLimitingColor;
@property(readonly) _UILegibilitySettings * legibilitySettings;
@property(readonly) UIColor * referenceColor;
@property(readonly) double referenceContrast;
@property(retain) UIColor * shimmerColor;
@property(readonly) long long style;
@property(retain) UIColor * tintColor;

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;

- (id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(double)arg2;
- (long long)_style;
- (id)chevronShimmerColor;
- (void)dealloc;
- (unsigned long long)hash;
- (id)highlightColor;
- (id)highlightLimitingColor;
- (id)highlightLimitingViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReferenceColor:(id)arg1 referenceContrast:(double)arg2 legibilitySettings:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)legibilitySettings;
- (id)referenceColor;
- (double)referenceContrast;
- (void)setChevronShimmerColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightLimitingColor:(id)arg1;
- (void)setShimmerColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)shimmerColor;
- (long long)style;
- (id)tintColor;
- (id)tintViewWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
