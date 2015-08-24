/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUWelcomeViewController : UIViewController <RUSignInViewControllerDelegate, RUTermsViewControllerDelegate, UIAlertViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUICircleProgressIndicator *_activityIndicatorView;
    int _applicationState;
    NSDate *_autoRetryMinimumDate;
    <RUWelcomeViewControllerDelegate> *_delegate;
    CADisplayLink *_displayLink;
    BOOL _displayingLoading;
    UIAlertView *_failedAlertView;
    BOOL _isOptingIn;
    BOOL _isScrollerStopped;
    BOOL _isVisible;
    double _lastTimestamp;
    UIButton *_learnMoreButton;
    UILabel *_loadingLabel;
    NSMutableArray *_optInCompletionHandlers;
    UICollectionView *_scrollingStackCollectionView;
    UIButton *_signInButton;
    RUSignInViewController *_signInViewController;
    MPUBorderDrawingCache *_stackItemBorderDrawingCache;
    RUTermsViewController *_termsViewController;
    _RUWelcomeTicker *_ticker;
    UILabel *_titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUWelcomeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingLoading, nonatomic) BOOL displayingLoading;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_allowsAccountModificationDidChangeNotification:(id)arg1;
- (BOOL)_allowsSignIn;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_attemptOptForReason:(int)arg1 allowAuthentication:(BOOL)arg2;
- (BOOL)_canAutomaticallyOptIn;
- (void)_checkAcceptedTermsWithCompletionHandler:(id /* block */)arg1;
- (void)_completeWithStatus:(int)arg1 didOptIn:(BOOL)arg2 retryInterval:(double)arg3;
- (void)_createEndScrollingAnimation;
- (void)_displayLinkAction:(id)arg1;
- (void)_layoutForOrientation:(int)arg1;
- (void)_learnMoreAction:(id)arg1;
- (void)_optInWithActiveAccountWithCompletionHandler:(id /* block */)arg1;
- (void)_presentSignInViewController;
- (void)_scrollWithCurrentTimestemp:(double)arg1;
- (void)_signInAction:(id)arg1;
- (id)_sortCollectionCells:(id)arg1 byDistanceFromCenter:(struct CGPoint { float x1; float x2; })arg2;
- (id)_stackImageNames;
- (void)_updateDisplayLinkStateAnimated:(BOOL)arg1;
- (void)_updateSignInButtonTitle;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)attemptOptInWithCompletionHandler:(id /* block */)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isDisplayingLoading;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayingLoading:(BOOL)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticateResponse:(id)arg2;
- (void)termsViewController:(id)arg1 didAcceptTerms:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
