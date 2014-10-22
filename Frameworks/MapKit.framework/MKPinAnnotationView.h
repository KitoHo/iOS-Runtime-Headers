/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImageView;

@interface MKPinAnnotationView : MKAnnotationView {
    id _delegate;
    int _pinType;
    UIImageView *_shadowView;
    int _state;
    bool_animatesDrop;
}

@property bool animatesDrop;
@property unsigned long long pinColor;

+ (id)_bounceAnimation;
+ (struct CGPoint { double x1; double x2; })_calloutOffset;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_desiredBounds;
+ (id)_dropBounceAnimation;
+ (struct CGPoint { double x1; double x2; })_leftCalloutOffset;
+ (struct CGPoint { double x1; double x2; })_perceivedAnchorPoint;
+ (struct CGSize { double x1; double x2; })_perceivedSize;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pinFrameForPosition:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_pinsWithType:(int)arg1 mapDisplayStyle:(unsigned long long)arg2;
+ (id)_reuseIdentifier;
+ (struct CGPoint { double x1; double x2; })_rightCalloutOffset;
+ (struct CGPoint { double x1; double x2; })_shadowAnchorPoint;
+ (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_shadowImage;
+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_bounceAnimation:(bool)arg1 withBeginTime:(double)arg2 addToLayer:(bool)arg3;
- (void)_cleanupAfterPinDropAnimation;
- (id)_delegate;
- (void)_didUpdatePosition;
- (struct CGPoint { double x1; double x2; })_draggingDropOffset;
- (void)_dropAfterDraggingAndRevertPosition:(bool)arg1 animated:(bool)arg2;
- (void)_dropAfterDraggingDidEnd:(id)arg1;
- (void)_dropFromPoint:(struct CGPoint { double x1; double x2; })arg1 shadowStartPoint:(struct CGPoint { double x1; double x2; })arg2 distance:(double)arg3 maxDistance:(double)arg4 withDelay:(double)arg5;
- (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_floatingImage;
- (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_highlightedImage;
- (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)_image;
- (void)_invalidateImage;
- (void)_liftBeforeDropDidEnd:(id)arg1;
- (void)_liftDidEnd:(id)arg1;
- (void)_liftForDraggingAfterBounceAnimated:(bool)arg1;
- (void)_liftForDraggingAnimated:(bool)arg1;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (int)_pinType;
- (id)_pins;
- (void)_removeAllAnimations;
- (void)_reset;
- (void)_setDelegate:(id)arg1;
- (void)_setMapDisplayStyle:(unsigned long long)arg1;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setPinType:(int)arg1;
- (void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_significantBounds;
- (int)_state;
- (void)_stopDrop;
- (void)_stopDropAnimationAndDropToPosition;
- (void)_updatePinType;
- (void)_updateShadowLayer;
- (bool)animatesDrop;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (struct CGPoint { double x1; double x2; })centerOffset;
- (id)description;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)isHighlighted;
- (unsigned long long)pinColor;
- (void)setAnimatesDrop:(bool)arg1;
- (void)setAnnotation:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDragState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setDragState:(unsigned long long)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPinColor:(unsigned long long)arg1;

@end
