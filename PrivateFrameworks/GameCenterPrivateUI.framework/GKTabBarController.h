/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKBubbleFlowRootViewController, NSArray;

@interface GKTabBarController : UITabBarController {
    GKBubbleFlowRootViewController *_bubbleFlowRootViewController;
    unsigned long long _deferedRotationCount;
}

@property(retain) GKBubbleFlowRootViewController * bubbleFlowRootViewController;
@property unsigned long long deferedRotationCount;
@property(readonly) NSArray * modalChildViewControllers;
@property(readonly) bool tabBarCovered;

- (void)_ensureWeHaveAPresentedBubbleFlowRootViewController;
- (bool)_hasBubbleFlowRootViewController;
- (bool)_isBeingCoveredByBubbleFlowRootViewController;
- (bool)_useBubbleFlowRootViewControllerToPresent:(id)arg1;
- (id)bubbleFlowRootViewController;
- (void)clearInterstitialViewAnimated:(bool)arg1;
- (void)dealloc;
- (id)deferRotation;
- (unsigned long long)deferedRotationCount;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (id)init;
- (id)modalChildViewControllers;
- (void)popAllModalViewControllersAnimated:(bool)arg1 completion:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)setBubbleFlowRootViewController:(id)arg1;
- (void)setDeferedRotationCount:(unsigned long long)arg1;
- (bool)shouldAutorotate;
- (void)showInterstitialViewAnimated:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)tabBarCovered;
- (id)viewControllers;

@end
