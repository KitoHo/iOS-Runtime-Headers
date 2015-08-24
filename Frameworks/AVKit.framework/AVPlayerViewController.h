/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerViewController : UIViewController <UIPopoverControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    id _activeAudioRouteDidChangeObserver;
    unsigned int _animateFullScreenTransition;
    unsigned int _animateFullScreenTransitionForPresenting;
    AVAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    UIView *_containerView;
    UIView *_contentOverlayView;
    UIView *_contentView;
    UIView *_controlsView;
    <AVPlayerViewControllerDelegate> *_delegate;
    struct { 
        unsigned int playerViewController_shouldExitFullScreenWithReason : 1; 
    } _delegateRespondsTo;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    AVFullScreenViewController *_fullScreenViewController;
    AVTouchIgnoringView *_iAdPrerollView;
    unsigned int _isAnimatingPlaybackControlsViewVisibility;
    unsigned int _isShowingPlaybackControlsViewAfterUserInteraction;
    unsigned int _isShowingPlaybackControlsViewForAudioOnlyContent;
    unsigned int _isShowingPlaybackControlsViewForPlayingOnExternalScreen;
    unsigned int _isShowingPlaybackControlsViewForUnsupportedContent;
    unsigned int _isShowingPlaybackControlsViewForUserInteraction;
    unsigned int _isTransitioningToOrFromFullScreen;
    NSTimer *_loadingIndicatorTimer;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UIPopoverController *_mediaSelectionPopoverController;
    AVNowPlayingInfoController *_nowPlayingInfoController;
    AVPlaybackControlsViewController *_playbackControlsViewController;
    int _playbackControlsViewControllerScaleButtonType;
    unsigned int _playbackControlsViewControllerShouldShowLoadingIndicator;
    unsigned int _playbackControlsViewControllerShowsScaleButton;
    int _playbackControlsViewVisibilityCounter;
    unsigned int _playbackControlsViewVisibilityNeedsUpdate;
    NSTimer *_playbackControlsViewVisibilityTimer;
    AVPlayerController *_playerController;
    unsigned int _playerShouldAutoplay;
    AVRemoteCommandController *_remoteCommandController;
    id _remoteCommandControllerDidReceiveStopCommandEventObserver;
    id _screenDidConnectObserver;
    id _screenDidDisconnectObserver;
    id _screenModeDidChangeObserver;
    UIWindow *_secondScreenWindow;
    unsigned int _showsExitFullScreenButton;
    unsigned int _showsPlaybackControls;
    unsigned int _showsPlaybackControlsView;
    AVUnsupportedContentIndicatorView *_unsupportedContentIndicatorView;
    CALayer<AVVideoLayer> *_videoLayer;
    int _videoLayerGravity;
    AVVideoLayerView *_videoLayerView;
}

@property (nonatomic, readonly) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPlayerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIView *iAdPrerollView;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (getter=isReadyForDisplay, nonatomic, readonly) BOOL readyForDisplay;
@property (nonatomic) BOOL showsExitFullScreenButton;
@property (nonatomic) BOOL showsPlaybackControls;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } videoBounds;
@property (nonatomic, copy) NSString *videoGravity;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

+ (void)initialize;
+ (id)keyPathsForValuesAffectingPlayer;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoGravity;

- (void).cxx_destruct;
- (void)_fireLoadingIndicatorTimer:(id)arg1;
- (void)_firePlaybackControlsViewVisibilityTimer:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_hidePlaybackControlsViewIfPossible;
- (void)_hidePlaybackControlsViewIfPossibleAfterDelayIfPlaying;
- (void)_hidePlaybackControlsViewIfPossibleUntilFurtherUserInteraction;
- (BOOL)_isAudioOnlyContent;
- (BOOL)_isUnsupportedContent;
- (void)_setPlaybackControlsViewVisibilityNeedsUpdate;
- (void)_showOrHidePlaybackControlsView;
- (void)_showPlaybackControlsViewIfNeeded;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlaying;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (BOOL)_showsPlaybackControlsView;
- (void)_transitionFromFullScreenViewControllerAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_transitionFromFullScreenViewControllerWithReason:(int)arg1;
- (void)_transitionToFullScreenViewControllerAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAudioOnlyIndicatorView;
- (void)_updateExternalPlaybackIndicatorView;
- (void)_updatePlaybackControlsViewController;
- (void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
- (void)_updatePlaybackControlsViewVisibilityForPlayingOnExternalScreen;
- (void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
- (void)_updatePlaybackControlsViewVisibilityIfNeeded;
- (void)_updateScaleButtonType;
- (void)_updateShowsScaleButton;
- (void)_updateUnsupportedContentIndicatorView;
- (void)_updateVideoLayerView;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animationEnded:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)childViewControllerForStatusBarHidden;
- (id)contentOverlayView;
- (void)dealloc;
- (id)delegate;
- (void)doneButtonTapped:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enterFullScreenAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)enterFullScreenWithCompletionHandler:(id /* block */)arg1;
- (void)exitFullScreenAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)exitFullScreenWithCompletionHandler:(id /* block */)arg1;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)hidePlaybackControlsViewForTouchUp;
- (id)iAdPrerollView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithVideoLayer:(id)arg1;
- (BOOL)isReadyForDisplay;
- (void)loadView;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (id)playerController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)scaleButtonTapped:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setShowsExitFullScreenButton:(BOOL)arg1;
- (void)setShowsPlaybackControls:(BOOL)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)showPlaybackControlsViewForTouchDown;
- (void)showPlaybackControlsViewForVolumeChange;
- (BOOL)showsExitFullScreenButton;
- (BOOL)showsPlaybackControls;
- (void)togglePlayback:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoBounds;
- (id)videoGravity;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

// Image: /System/Library/Frameworks/iAd.framework/iAd

+ (void)preparePrerollAds;

- (id)_iAd_prerollController;
- (void)cancelPreroll;
- (void)playPrerollAdWithCompletionHandler:(id /* block */)arg1;
- (void)set_iAd_prerollController:(id)arg1;

@end
