/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {
    IMAccount *_account;
    BOOL _cancelled;
    Class _completionControllerClass;
    UIBarButtonItem *_customLeftButton;
    UIBarButtonItem *_customRightButton;
    <CNFRegFirstRunDelegate> *_delegate;
    BOOL _previousHidesBackButton;
    UIBarButtonItem *_previousLeftButton;
    UIBarButtonItem *_previousRightButton;
    BOOL _showingActivityIndicator;
    BOOL _timedOut;
    NSTimer *_timeoutTimer;
}

@property (nonatomic, retain) IMAccount *account;
@property (nonatomic) Class completionControllerClass;
@property (nonatomic, readonly) int currentAppearanceStyle;
@property (nonatomic, retain) UIBarButtonItem *customLeftButton;
@property (nonatomic, retain) UIBarButtonItem *customRightButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNFRegFirstRunDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL previousHidesBackButton;
@property (nonatomic, retain) UIBarButtonItem *previousLeftButton;
@property (nonatomic, retain) UIBarButtonItem *previousRightButton;
@property (readonly) Class superclass;
@property (nonatomic) BOOL timedOut;

- (void)_cancelValidationMode;
- (void)_executeDismissBlock:(id /* block */)arg1;
- (void)_handleReturnKeyTapped:(id)arg1;
- (void)_handleTimeout;
- (void)_handleValidationModeCancelled;
- (BOOL)_hidesBackButton;
- (id)_leftButtonItem;
- (void)_leftButtonTapped;
- (void)_refreshCurrentState;
- (void)_refreshNavBarAnimated:(BOOL)arg1;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_setupEventHandlers;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 allowCancel:(BOOL)arg3;
- (void)_startListeningForReturnKey;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_startValidationModeAnimated:(BOOL)arg1;
- (void)_startValidationModeAnimated:(BOOL)arg1 allowCancel:(BOOL)arg2;
- (void)_stopActivityIndicatorAnimated:(BOOL)arg1;
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_stopListeningForReturnKey;
- (void)_stopTimeout;
- (void)_stopValidationModeAnimated:(BOOL)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)_validationModeCancelButton;
- (id)account;
- (Class)completionControllerClass;
- (int)currentAppearanceStyle;
- (id)customLeftButton;
- (id)customRightButton;
- (id)customTitle;
- (void)dealloc;
- (id)delegate;
- (BOOL)dismissWithState:(unsigned int)arg1;
- (id)initWithParentController:(id)arg1 account:(id)arg2;
- (id)initWithRegController:(id)arg1;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (BOOL)previousHidesBackButton;
- (id)previousLeftButton;
- (id)previousRightButton;
- (BOOL)pushCompletionControllerIfPossible;
- (void)setAccount:(id)arg1;
- (void)setCellsChecked:(BOOL)arg1;
- (void)setCompletionControllerClass:(Class)arg1;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviousHidesBackButton:(BOOL)arg1;
- (void)setPreviousLeftButton:(id)arg1;
- (void)setPreviousRightButton:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (BOOL)timedOut;
- (id)titleString;
- (id)validationString;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
