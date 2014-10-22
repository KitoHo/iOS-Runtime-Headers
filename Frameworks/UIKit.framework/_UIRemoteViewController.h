/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class BKSTouchDeliveryPolicyAssertion, NSArray, NSError, NSMutableArray, NSString, UIActionSheet, UIDimmingView, UIView, _UIAsyncInvocation, _UIRemoteView, _UIRemoteViewService, _UISizeTrackingView, _UITextEffectsRemoteView, _UITextServiceSession, _UIViewServiceInterface;

@interface _UIRemoteViewController : UIViewController <_UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate> {
    int __automatic_invalidation_retainCount;
    NSArray *_allowedNotifications;
    unsigned int _deferredContextID;
    NSString *_deferredDisplayUUID;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    UIActionSheet *_hostedActionSheet;
    UIDimmingView *_hostedDimmingView;
    NSMutableArray *_preFencedCommitActions;
    int _preFencedCommitActionsLock;
    long long _preferredStatusBarStyle;
    _UITextEffectsRemoteView *_remoteKeyboardRemoteView;
    _UIRemoteViewService *_remoteViewService;
    unsigned int _serviceAccessibilityServerPort;
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    unsigned long long _serviceRegisteredScrollToTopViewCount;
    unsigned int _serviceScreenDisplayID;
    id _serviceViewControllerControlMessageProxy;
    id _serviceViewControllerProxy;
    _UIRemoteView *_serviceViewControllerRemoteView;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    _UISizeTrackingView *_sizeTrackingView;
    NSError *_terminationError;
    int _terminationErrorLock;
    _UIAsyncInvocation *_terminationInvocation;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UITextServiceSession *_textServiceSession;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
    UIView *_touchGrabbingView;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _viewControllerOperatorProxy;
    bool__automatic_invalidation_invalidated;
    bool_fencingCurrentTransaction;
    bool_isFocusDeferred;
    bool_prefersStatusBarHidden;
    bool_serviceViewShouldShareTouchesWithHost;
    bool_snapshotTextEffectsAfterRotation;
}

@property(setter=_setTouchDeliveryPolicyAssertion:,retain) BKSTouchDeliveryPolicyAssertion * _touchDeliveryPolicyAssertion;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) struct { unsigned int x1[8]; } serviceAuditToken;
@property(readonly) NSString * serviceBundleIdentifier;
@property(readonly) int serviceProcessIdentifier;
@property bool serviceViewShouldShareTouchesWithHost;
@property(readonly) Class superclass;

+ (bool)__shouldAllowHostProcessToTakeFocus;
+ (bool)__shouldHostRemoteTextEffectsWindow;
+ (id)_requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 service:(id)arg4 connectionHandler:(id)arg5;
+ (id)exportedInterface;
+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3;
+ (id)requestViewController:(id)arg1 traitCollection:(id)arg2 fromServiceWithBundleIdentifier:(id)arg3 connectionHandler:(id)arg4;
+ (id)requestViewControllerWithService:(id)arg1 connectionHandler:(id)arg2;
+ (id)requestViewControllerWithService:(id)arg1 traitCollection:(id)arg2 connectionHandler:(id)arg3;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (int)__automatic_invalidation_logic;
- (void)__dismissActionSheetWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)__dismissTextServiceSessionAnimated:(bool)arg1;
- (long long)__getPreferredInterfaceOrientation;
- (void)__presentActionSheetFromYCoordinate:(double)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(long long)arg4 destructiveButtonIndex:(long long)arg5 style:(long long)arg6;
- (void)__sendNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__setViewServiceIsDisplayingPopover:(bool)arg1;
- (bool)__shouldRemoteViewControllerFenceOperations;
- (void)__showServiceForText:(id)arg1 type:(long long)arg2 fromRectValue:(id)arg3 replyHandler:(id)arg4;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 hidden:(bool)arg2;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fenceSendRight:(id)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize { double x1; double x2; })arg1 animated:(bool)arg2 fenceSendRight:(id)arg3 withReplyHandler:(id)arg4;
- (void)__viewServicePopoverDidSetUseToolbarShine:(bool)arg1;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1 fenceSendRight:(id)arg2;
- (void)__willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)_addAutoAllowedNotifications:(id)arg1;
- (void)_addPreFencedCommitAction:(id)arg1;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (id)_appearanceSource;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (id)_cancelTouchesForCurrentEventInHostedContent;
- (id)_clientDeferralProperties;
- (bool)_customizesForPresentationInPopover;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(long long)arg1 forwardToChildControllers:(bool)arg2 skipSelf:(bool)arg3;
- (void)_firstResponderDidChange:(id)arg1;
- (id)_hostDeferralProperties;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (bool)_ignoreAppSupportedOrientations;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (void)_initializeAccessibilityPortInformation;
- (bool)_isDeallocating;
- (void)_prepareTouchDeliveryPolicy;
- (bool)_requiresKeyboardWindowWhenFirstResponder;
- (void)_restoreTextEffectsRemoteView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (bool)_serviceHasScrollToTopView;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setDeferred:(bool)arg1 forDisplayUUID:(id)arg2;
- (void)_setTouchDeliveryPolicyAssertion:(id)arg1;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (id)_touchDeliveryPolicyAssertion;
- (bool)_tryRetain;
- (void)_updateTintColor;
- (void)_updateTouchGrabbingView;
- (void)_willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(bool)arg3 skipSelf:(bool)arg4;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 forwardToChildControllers:(bool)arg3 skipSelf:(bool)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)allowedNotifications;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)disconnect;
- (bool)inheritsSecurity;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForServiceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (oneway void)release;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (struct { unsigned int x1[8]; })serviceAuditToken;
- (id)serviceBundleIdentifier;
- (int)serviceProcessIdentifier;
- (id)serviceViewControllerProxy;
- (id)serviceViewControllerProxyWithErrorHandler:(id)arg1;
- (bool)serviceViewShouldShareTouchesWithHost;
- (void)setAllowedNotifications:(id)arg1;
- (void)setInheritsSecurity:(bool)arg1;
- (void)setServiceViewShouldShareTouchesWithHost:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidInvalidateIntrinsicContentSize;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
