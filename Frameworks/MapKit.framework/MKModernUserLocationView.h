/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKModernUserLocationView : MKUserLocationView {
    CALayer *_baseDimmingLayer;
    CALayer *_baseLayer;
    CALayer *_innerCircleLayer;
    struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; } *_innerImageMask;
    BOOL _rotateInnerImageToMatchCourse;
    BOOL _shouldInnerPulse;
}

@property (nonatomic, retain) UIImage *innerImageMask;
@property (nonatomic) BOOL rotateInnerImageToMatchCourse;
@property (nonatomic) BOOL shouldInnerPulse;

+ (float)baseDiameter;
+ (float)innerDiameter;

- (void).cxx_destruct;
- (struct CGColor { }*)_accuracyFillColor;
- (id)_animationToSynchronizePulse:(id*)arg1;
- (id)_baseDimmingLayer;
- (id)_baseLayer;
- (void)_dealloc;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)_innerPulseAnimation;
- (id)_layerToMatchAccuracyRing;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_resetLayerToMatchAccuracyRing;
- (void)_setMapDisplayStyle:(unsigned int)arg1;
- (void)_setMapRotationRadians:(float)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_setPresentationCourse:(double)arg1;
- (void)_setupLayers;
- (void)_updateAccuracyColors;
- (void)_updateBaseImage;
- (void)_updateInnerCourseRotation;
- (void)_updateInnerImage;
- (void)_updateInnerMaskLayer;
- (void)_updateLayers;
- (void)_updatePulseAnimation;
- (void)_updatePulseColor;
- (void)didMoveToWindow;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)innerImageMask;
- (BOOL)rotateInnerImageToMatchCourse;
- (void)setEffectsEnabled:(BOOL)arg1;
- (void)setInnerImageMask:(struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)arg1;
- (void)setRotateInnerImageToMatchCourse:(BOOL)arg1;
- (void)setShouldInnerPulse:(BOOL)arg1;
- (BOOL)shouldInnerPulse;
- (void)tintColorDidChange;

@end
