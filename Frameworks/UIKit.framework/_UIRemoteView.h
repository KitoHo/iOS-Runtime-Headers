/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteView : UIView <UIStatusBarTinting> {
    BOOL _actsAsTintView;
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    UIColor *_statusBarTintColor;
    id /* block */ _tintColorDidChangeHandler;
}

@property (setter=_setActsAsTintView:, nonatomic) BOOL _actsAsTintView;
@property (setter=_setInheritsSecurity:, nonatomic) BOOL _inheritsSecurity;
@property (setter=_setStatusBarTintColor:, nonatomic, retain) UIColor *_statusBarTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tintColorDidChangeHandler;

+ (BOOL)_requiresWindowTouches;
+ (Class)layerClass;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
+ (id)viewWithRemoteContextID:(unsigned int)arg1;

- (BOOL)_actsAsTintView;
- (void)_compensateForGlobalMediaTimeAdjustmentsIfNecessary;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (BOOL)_inheritsSecurity;
- (void)_setActsAsTintView:(BOOL)arg1;
- (void)_setInheritsSecurity:(BOOL)arg1;
- (void)_setStatusBarTintColor:(id)arg1;
- (void)_setStatusBarTintColor:(id)arg1 duration:(double)arg2;
- (id)_statusBarTintColor;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)hostedWindowHostingHandle;
- (void)setContextID:(unsigned int)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setTintColorDidChangeHandler:(id /* block */)arg1;
- (void)tintColorDidChange;
- (id /* block */)tintColorDidChangeHandler;

@end
