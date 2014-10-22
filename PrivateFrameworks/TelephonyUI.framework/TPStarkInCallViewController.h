/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPStarkInCallViewControllerDelegate>, NSArray, NSString, NSTimer, TPStarkInCallButtonsView, TPStarkInCallHardPauseButton, TPStarkPhoneCallGalleryView, TUCall, TUReplyWithMessageStore, UIView;

@interface TPStarkInCallViewController : UIViewController <TPStarkPhoneCallGalleryViewDelegate, TPStarkHardPauseButtonDelegate, TPStarkInCallButtonsViewDelegate, UIActionSheetDelegate> {
    TPStarkInCallButtonsView *_buttonsView;
    TUCall *_callToDecline;
    NSArray *_conferenceParticipants;
    unsigned short _currentMode;
    <TPStarkInCallViewControllerDelegate> *_delegate;
    TUCall *_failedCall;
    UIView *_flippyView;
    TPStarkPhoneCallGalleryView *_galleryView;
    TPStarkInCallHardPauseButton *_hardPauseButton;
    TUCall *_incomingPhoneCall;
    NSArray *_primaryPhoneCalls;
    TUReplyWithMessageStore *_replyWithMessageStore;
    NSTimer *_viewUpdateClockTickTimer;
}

@property(retain) TPStarkInCallButtonsView * buttonsView;
@property(retain) TUCall * callToDecline;
@property(copy) NSArray * conferenceParticipants;
@property unsigned short currentMode;
@property(copy,readonly) NSString * debugDescription;
@property <TPStarkInCallViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) TUCall * failedCall;
@property(retain) UIView * flippyView;
@property(retain) TPStarkPhoneCallGalleryView * galleryView;
@property(retain) TPStarkInCallHardPauseButton * hardPauseButton;
@property(readonly) unsigned long long hash;
@property(retain) TUCall * incomingPhoneCall;
@property(readonly) bool isDismissable;
@property(copy) NSArray * primaryPhoneCalls;
@property(readonly) Class superclass;
@property(retain) NSTimer * viewUpdateClockTickTimer;

- (id)__sanitizedPrimaryPhoneCallOrdering:(id)arg1;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_sendMessageResponse:(id)arg1 toCall:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (id)allConferenceParticipantCalls;
- (bool)areIncomingCallOptionsAllowed;
- (id)buttonsView;
- (void)callFailedNotification:(id)arg1;
- (id)callToDecline;
- (bool)canSendMessage;
- (bool)canSendMessageToCall:(id)arg1;
- (id)conferenceParticipantCallsForPhoneCall:(id)arg1;
- (id)conferenceParticipants;
- (id)currentActivePhoneCall;
- (bool)currentCallStateWarrantsCallWaitingMode;
- (unsigned short)currentMode;
- (void)dealloc;
- (id)delegate;
- (id)failedCall;
- (id)flippyView;
- (id)galleryView;
- (void)handleAlertControllerSendMessageResponse:(id)arg1;
- (id)hardPauseButton;
- (void)hardPauseButtonDidChangeVisibility:(id)arg1;
- (void)highlightHardPauseButton;
- (void)inCallButtonWasTapped:(id)arg1;
- (id)incomingPhoneCall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAddCallAllowed;
- (bool)isDismissable;
- (bool)isKeypadAllowed;
- (bool)isMergeCallsAllowed;
- (bool)isMuted;
- (bool)isSpringBoardPasscodeLocked;
- (bool)isSwapCallsAllowed;
- (void)loadView;
- (void)muteStateChangedNotification:(id)arg1;
- (id)primaryPhoneCalls;
- (id)primaryPhoneCallsForGalleryView:(id)arg1;
- (id)replyWithMessageStore;
- (id)representativePhoneCallForConferenceForGalleryView:(id)arg1;
- (void)selectNextHighlightableControlAscending:(bool)arg1;
- (void)setButtonsView:(id)arg1;
- (void)setCallToDecline:(id)arg1;
- (void)setConferenceParticipants:(id)arg1;
- (void)setCurrentMode:(unsigned short)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFailedCall:(id)arg1;
- (void)setFlippyView:(id)arg1;
- (void)setGalleryView:(id)arg1;
- (void)setHardPauseButton:(id)arg1;
- (void)setIncomingPhoneCall:(id)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setPrimaryPhoneCalls:(id)arg1 conferencePhoneCalls:(id)arg2 incomingPhoneCall:(id)arg3;
- (void)setPrimaryPhoneCalls:(id)arg1;
- (void)setViewUpdateClockTickTimer:(id)arg1;
- (void)updateButtonsViewState;
- (void)viewDidAppear:(bool)arg1;
- (id)viewUpdateClockTickTimer;
- (void)viewUpdateClockTickTimerFired:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
