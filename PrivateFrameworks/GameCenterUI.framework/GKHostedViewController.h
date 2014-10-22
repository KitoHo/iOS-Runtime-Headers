/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKGame, GKRemoteViewController;

@interface GKHostedViewController : UIViewController {
    GKGame *_game;
    GKRemoteViewController *_remoteViewController;
    id _remoteViewReadyHandler;
    bool_gkIsDisappearing;
    bool_isRequestingRemoteViewController;
    bool_presentingRemoteViewController;
    bool_shouldPresentRemoteViewController;
}

@property(retain) GKGame * game;
@property bool gkIsDisappearing;
@property bool isRequestingRemoteViewController;
@property bool presentingRemoteViewController;
@property(retain) GKRemoteViewController * remoteViewController;
@property(copy) id remoteViewReadyHandler;
@property bool shouldPresentRemoteViewController;

- (id)_presentingViewController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (void)didGetRemoteViewController;
- (void)didReceiveMemoryWarning;
- (void)dismissModalViewControllerAnimated:(bool)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)donePressed:(id)arg1;
- (id)game;
- (bool)gkIsDisappearing;
- (id)hostSideViewControllerClassName;
- (id)init;
- (bool)isRequestingRemoteViewController;
- (void)presentRemoteViewControllerIfNeeded;
- (bool)presentingRemoteViewController;
- (id)remoteViewController;
- (id)remoteViewReadyHandler;
- (void)requestRemoteViewControllerIfNeeded;
- (void)resetRemoteViewController;
- (id)serviceSideViewControllerClassName;
- (void)setGame:(id)arg1;
- (void)setGkIsDisappearing:(bool)arg1;
- (void)setIsRequestingRemoteViewController:(bool)arg1;
- (void)setPresentingRemoteViewController:(bool)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRemoteViewReadyHandler:(id)arg1;
- (void)setShouldPresentRemoteViewController:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldPresentRemoteViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
