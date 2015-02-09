/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <_UIRemoteKeyboardControllerDelegate>, CADisplayLink, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIKBInputBackdropView, UIPanGestureRecognizer, UIScrollView, UIView;

@interface UIInputWindowController : UIViewController <UIGestureRecognizerDelegate, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource, UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSMutableArray *_animationStyleStack;
    id _bounceCompletionBlock;
    <_UIRemoteKeyboardControllerDelegate> *_controllerDelegate;
    UIInputViewPlacementTransition *_currentTransition;
    CADisplayLink *_displayLink;
    int _hiddenCount;
    UIView *_hostView;
    double _initialTranslation;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    UIInputViewController *_inputAccessoryViewController;
    UIKBInputBackdropView *_inputBackdropView;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    UIInputViewController *_inputViewController;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSLayoutConstraint *_inputViewHeightConstraint;
    UIInputViewSet *_inputViewSet;
    SEL _interactiveTransitionCleanupSelector;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    double _lastBounceTime;
    NSString *_lastKeyboardID;
    double _lastTranslationNotificationTime;
    UIInputViewSetPlacement *_placement;
    UIInputViewSet *_postRotationInputViewSet;
    UIInputViewSetPlacement *_postRotationPlacement;
    } _preLayoutHostViewFrame;
    } _preRotationInputAccessoryViewSize;
    } _preRotationInputAccessoryViewTransform;
    } _preRotationInputViewSize;
    } _preRotationInputViewTransform;
    UIView *_preRotationSnapshot;
    unsigned long long _rotationState;
    UIScrollView *_scrollViewForTransition;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
    } _scrollViewTransitionPreviousPoint;
    double _targetTranslation;
    UIInputViewSetNotificationInfo *_templateNotificationInfo;
    UIPanGestureRecognizer *_translateRecognizer;
    double _translationVelocity;
    NSLayoutConstraint *_verticalVisibilityConstraint;
    NSArray *_visibilityConstraints;
    bool_didOverridePreLayoutHostViewFrame;
    bool_didPostLayoutNotification;
    bool_isChangingInputViews;
    bool_isChangingPlacement;
    bool_isSplitting;
    bool_isTranslating;
    bool_requiresConstraintUpdate;
    bool_scrollViewShowsHorizontalScrollIndicator;
    bool_scrollViewTransitionFinishing;
    bool_shouldNotifyRemoteKeyboards;
    bool_splitLockState;
    bool_suppressedCallbacks;
    bool_suppressedNotifications;
    bool_wasOnScreen;
}

@property(setter=setInputAccessoryBackdropView:,retain) UIKBInputBackdropView * _inputAccessoryBackdropView;
@property(readonly) UIView * _inputAccessoryView;
@property(retain) UIInputViewController * _inputAccessoryViewController;
@property(setter=setInputBackdropView:,retain) UIKBInputBackdropView * _inputBackdropView;
@property(readonly) UIView * _inputView;
@property(retain) UIInputViewController * _inputViewController;
@property(retain) NSLayoutConstraint * accessoryViewHeightConstraint;
@property(retain) <_UIRemoteKeyboardControllerDelegate> * controllerDelegate;
@property(retain) UIInputViewPlacementTransition * currentTransition;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) UIView * hostView;
@property(retain) NSLayoutConstraint * inputViewHeightConstraint;
@property(retain) UIInputViewSet * inputViewSet;
@property UIInputViewSetPlacement * placement;
@property(retain) UIInputViewSet * postRotationInputViewSet;
@property(retain) UIInputViewSetPlacement * postRotationPlacement;
@property bool shouldNotifyRemoteKeyboards;
@property(readonly) Class superclass;
@property(retain) UIInputViewSetNotificationInfo * templateNotificationInfo;
@property(retain) NSLayoutConstraint * verticalVisibilityConstraint;
@property(retain) NSArray * visibilityConstraints;

+ (bool)_doesOverrideLegacyFullScreenLayout;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_aligningInsetsForChildInputViewController:(id)arg1;
- (int)_clipCornersOfView:(id)arg1;
- (void)_finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)_forcePreLayoutHostViewFrame;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; double x6; int x7; }*)arg1;
- (id)_inputAccessoryBackdropView;
- (id)_inputAccessoryView;
- (id)_inputAccessoryViewController;
- (id)_inputBackdropView;
- (id)_inputView;
- (id)_inputViewController;
- (void)_prepareForRotationToOrientation:(long long)arg1 duration:(double)arg2;
- (void)_rotateToOrientation:(long long)arg1 duration:(double)arg2;
- (bool)_subviewUsesClassicLayout:(id)arg1;
- (void)_updateBackdropViews;
- (void)_updateBounceAnimation:(id)arg1;
- (id)_viewControllerForAutorotation;
- (id)accessoryViewHeightConstraint;
- (void)animateAccessoryViewVisibility:(bool)arg1 withDuration:(double)arg2;
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(bool)arg3;
- (void)bounceAnimationDidFinish;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(bool)arg3;
- (unsigned long long)changeToInputViewSet:(id)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)clearViewSizingConstraints:(unsigned long long)arg1;
- (void)completeKeyboardDismiss:(unsigned long long)arg1;
- (id)controllerDelegate;
- (id)currentTransition;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSuspend:(id)arg1;
- (void)dock;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;
- (void)finishScrollViewTransition;
- (void)finishTransitionWithCompletion:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideScrollViewHorizontalScrollIndicator:(bool)arg1;
- (id)hostView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initialNotificationInfo;
- (void)initializeTranslateGestureRecognizer;
- (id)inputViewHeightConstraint;
- (id)inputViewSet;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(bool)arg2;
- (void)invalidateDisplayLink;
- (bool)isChangingPlacement;
- (bool)isOnScreen;
- (bool)isRotating;
- (bool)isTranslating;
- (bool)isUndocked;
- (unsigned long long)keyboardDismissModeForPublicMode:(long long)arg1;
- (void)keyboardHeightChangeDone;
- (void)loadView;
- (bool)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(id)arg3 completion:(id)arg4;
- (id)nextAnimationStyle;
- (void)performOperations:(id)arg1 withAnimationStyle:(id)arg2;
- (void)performOperations:(id)arg1 withTemplateNotificationInfo:(id)arg2;
- (void)performWithSafeTransitionFrames:(id)arg1;
- (void)performWithoutAppearanceCallbacks:(id)arg1;
- (void)performWithoutCallbacksOrNotifications:(id)arg1;
- (id)placement;
- (void)popAnimationStyle;
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (id)postRotationInputViewSet;
- (id)postRotationPlacement;
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)prepareForTransition;
- (void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2;
- (void)pushAnimationStyle:(id)arg1;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3;
- (void)registerPowerLogEvent:(bool)arg1;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)setAccessoryViewHeightConstraint:(id)arg1;
- (void)setAccessoryViewVisible:(bool)arg1 delay:(double)arg2;
- (void)setControllerDelegate:(id)arg1;
- (void)setCurrentTransition:(id)arg1;
- (void)setInputAccessoryBackdropView:(id)arg1;
- (void)setInputBackdropView:(id)arg1;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2;
- (void)setInputViewHeightConstraint:(id)arg1;
- (void)setInputViewSet:(id)arg1;
- (void)setInputViewsHidden:(bool)arg1;
- (void)setInterfaceAutorotationDisabled:(bool)arg1;
- (void)setPlacement:(id)arg1 starting:(id)arg2 completion:(id)arg3;
- (void)setPlacement:(id)arg1;
- (void)setPostRotationInputViewSet:(id)arg1;
- (void)setPostRotationPlacement:(id)arg1;
- (void)setRotationAwarePlacement:(id)arg1;
- (void)setShouldNotifyRemoteKeyboards:(bool)arg1;
- (void)setTemplateNotificationInfo:(id)arg1;
- (void)setVerticalVisibilityConstraint:(id)arg1;
- (void)setVisibilityConstraints:(id)arg1;
- (void)set_inputAccessoryViewController:(id)arg1;
- (void)set_inputViewController:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldNotifyRemoteKeyboards;
- (unsigned long long)supportedInterfaceOrientations;
- (void)syncToExistingAnimations;
- (id)templateNotificationInfo;
- (void)transitionDidFinish:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transitioningFrame;
- (id)transitioningView;
- (void)translateDetected:(id)arg1;
- (void)translateToPlacement:(id)arg1;
- (void)undock;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(bool)arg2 animated:(bool)arg3;
- (void)updateConstraintInsets;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)updateScrollViewContentInsetBottom:(double)arg1;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(bool)arg2;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (id)verticalVisibilityConstraint;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (void)viewWillLayoutSubviews;
- (id)visibilityConstraints;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrame;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willResume:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
- (id)windowForAutorotation;

@end
