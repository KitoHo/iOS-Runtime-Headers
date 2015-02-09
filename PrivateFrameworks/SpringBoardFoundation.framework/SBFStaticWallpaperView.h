/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSMutableSet, SBFColorBoxes, UIImage;

@interface SBFStaticWallpaperView : SBFWallpaperView {
    SBFColorBoxes *_colorBoxes;
    UIImage *_image;
    NSMutableSet *_mappedBackdropKeys;
    UIImage *_treatedImage;
    bool_treatWallpaper;
}

@property(retain) SBFColorBoxes * colorBoxes;

+ (bool)_allowsParallax;
+ (bool)_allowsRasterization;

- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 smudgeRadius:(double)arg2;
- (id)_blurredImage;
- (void)_cacheTreatedImage;
- (unsigned long long)_colorBoxSize;
- (id)_computeAverageColor;
- (id)_createColorBoxes;
- (id)_displayedImage;
- (id)_imageForBackdropParameters:(struct { long long x1; long long x2; long long x3; })arg1 includeTint:(bool)arg2;
- (struct CGSize { double x1; double x2; })_imageSize;
- (id)_mappedImageKeyForParameters:(struct { long long x1; long long x2; long long x3; })arg1 includingTint:(bool)arg2;
- (id)_newTreatedImage;
- (void)_removeMappedBlurs;
- (void)_resetColorBoxes;
- (void)_setupContentView;
- (id)_treatedImageKey;
- (id)_untintedImageForBackdropParameters:(struct { long long x1; long long x2; long long x3; })arg1;
- (id)_wallpaperImageForAnalysis;
- (float)_zoomScale;
- (id)colorBoxes;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)cropZoomScale;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 treatWallpaper:(bool)arg3 variant:(long long)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(long long)arg3;
- (bool)isDisplayingWallpaper:(id)arg1 forVariant:(long long)arg2 options:(id)arg3;
- (void)setColorBoxes:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)wallpaperImage;

@end
