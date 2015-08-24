/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIHostedWindow : UIWindow {
    int _fromWindowOrientation;
    int _hostTintAdjustmentMode;
    UITraitCollection *_hostTraitCollection;
    int _toWindowOrientation;
    BOOL _wantsTraitPropigation;
}

@property (setter=_setHostTintAdjustmentMode:, nonatomic) int _hostTintAdjustmentMode;
@property (setter=_setHostTraitCollection:, nonatomic) UITraitCollection *_hostTraitCollection;
@property (setter=_setWantsTraitPropigation:, nonatomic) BOOL _wantsTraitPropigation;
@property (getter=_fromWindowOrientation, setter=_setFromWindowOrientation:, nonatomic) int fromWindowOrientation;
@property (nonatomic, readonly) _UIHostedWindowHostingHandle *hostingHandle;
@property (getter=_toWindowOrientation, setter=_setToWindowOrientation:, nonatomic) int toWindowOrientation;

- (BOOL)_canPromoteFromKeyWindowStack;
- (void)_configureContextOptions:(id)arg1;
- (int)_defaultTintAdjustmentMode;
- (int)_fromWindowOrientation;
- (int)_hostTintAdjustmentMode;
- (id)_hostTraitCollection;
- (BOOL)_isClippedByScreenJail;
- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isOffsetByScreenJail;
- (BOOL)_isRotatedByScreenJail;
- (BOOL)_isScaledByScreenJail;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_needsShakesWhenInactive;
- (BOOL)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3;
- (void)_registerScrollToTopView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_sceneBounds;
- (void)_setFromWindowOrientation:(int)arg1;
- (void)_setHostTintAdjustmentMode:(int)arg1;
- (void)_setHostTraitCollection:(id)arg1;
- (void)_setToWindowOrientation:(int)arg1;
- (void)_setWantsTraitPropigation:(BOOL)arg1;
- (BOOL)_shouldPropigateTraitCollectionChanges;
- (int)_toWindowOrientation;
- (id)_traitCollectionForSize:(struct CGSize { float x1; float x2; })arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(int)arg3 virtualVerticalSizeClass:(int)arg4;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_updateAppTintView;
- (void)_updateTransformLayerForClassicPresentation;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_wantsTraitPropigation;
- (unsigned int)contextID;
- (void)dealloc;
- (id)hostingHandle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScreen:(id)arg1;

@end
