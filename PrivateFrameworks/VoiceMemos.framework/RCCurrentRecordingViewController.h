/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCCurrentRecordingViewControllerDelegate>, NSString, RCAVState, RCCurrentRecordingRemoteViewController, UIColor;

@interface RCCurrentRecordingViewController : UIViewController <RCCurrentRecordingViewControllerDelegate, RCUIServiceCurrentRecordingViewController> {
    RCAVState *_AVState;
    <RCCurrentRecordingViewControllerDelegate> *_delegate;
    UIColor *_presentationBackgroundColor;
    RCCurrentRecordingRemoteViewController *_remoteViewController;
    UIColor *_waveformForegroundColor;
    bool_isDisplayingLockscreenInterface;
    bool_screenUpdatesDisabled;
}

@property(retain) RCAVState * AVState;
@property(copy,readonly) NSString * debugDescription;
@property <RCCurrentRecordingViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (Class)remoteViewControllerClass;
+ (id)serviceViewControllerClassName;

- (void).cxx_destruct;
- (id)AVState;
- (void)_failedToBecomeReadyWithMessage:(id)arg1;
- (void)currentRecordingViewController:(id)arg1 didChangeAVState:(id)arg2;
- (void)currentRecordingViewController:(id)arg1 didDeterminteAvailability:(bool)arg2;
- (void)currentRecordingViewControllerRecordingDidEnd:(id)arg1;
- (id)delegate;
- (void)dismissLockscreenInterface;
- (id)initWithDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertRemoteViewController:(id)arg1;
- (void)loadCaptureStateWithCompletionBlock:(id)arg1;
- (void)presentLockscreenInterfaceWithBackgroundColor:(id)arg1 waveformForegroundColor:(id)arg2;
- (void)setAVState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScreenUpdatesDisabled:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end
