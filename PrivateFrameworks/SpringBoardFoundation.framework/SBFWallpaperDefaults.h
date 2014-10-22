/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperDefaults : NSObject {
}

+ (id)defaults;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectForVariant:(long long)arg1;
- (id)description;
- (bool)magnifyEnabledForVariant:(long long)arg1;
- (double)parallaxFactorForVariant:(long long)arg1;
- (void)resetCroppingDefaults;
- (void)resetDefaults;
- (void)resetMagnifyDefaults;
- (void)resetParallaxFactorDefaults;
- (void)resetZoomScaleDefaults;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLocations:(long long)arg2;
- (void)setMagnifyEnabled:(bool)arg1 forLocations:(long long)arg2;
- (void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2;
- (void)setSupportsCropping:(bool)arg1 forLocations:(long long)arg2;
- (void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2;
- (void)setZoomScale:(double)arg1 forLocations:(long long)arg2;
- (bool)supportsCroppingForVariant:(long long)arg1;
- (double)zoomScaleForVariant:(long long)arg1;

@end
