/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUSystemMediaControlsViewController : UIViewController <MPAVRoutingControllerDelegate, MPUChronologicalProgressViewDelegate, MPUMediaControlsTitlesViewDelegate, MPUNowPlayingDelegate, MPURemoteViewControllerPresentation, MPUSystemMediaControlsViewDelegate, MPUTransportControlMediaRemoteControllerDelegate, MPUTransportControlsViewDataSource, MPUTransportControlsViewDelegate, MPUTransportControlsViewLayoutDelegate> {
    UIImageView *_artworkImageView;
    NSString *_audioCategoryForDisabledHUD;
    NSArray *_currentlySupportedCommands;
    <MPUSystemMediaControlsDelegate> *_delegate;
    double _lastDurationFromUpdate;
    BOOL _lockscreenDisabledForScreenTurnOff;
    MPUSystemMediaControlsView *_mediaControlsView;
    NSArray *_notificationObservers;
    MPUNowPlayingController *_nowPlayingController;
    BOOL _nowPlayingIsRadioStation;
    BOOL _persistentUpdatesEnabled;
    MPAVRoutingController *_routingController;
    double _scrubbedTimeDestination;
    NSTimer *_scrubberCommitTimer;
    NSTimer *_skipInformationRevealTimer;
    int _style;
    MPUTransportControlMediaRemoteController *_transportControlMediaRemoteController;
    BOOL _wantsToLaunchNowPlayingApp;
}

@property (nonatomic, readonly) UIView *artworkView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUSystemMediaControlsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL persistentUpdatesEnabled;
@property (nonatomic, readonly) int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_backlightLevelChangedNotification:(id)arg1;
- (void)_beginScrubberCommitTimer;
- (void)_buyButtonActionForSender:(id)arg1 command:(unsigned int)arg2;
- (void)_commitCurrentScrubberValue;
- (id)_imageForTransportButtonWithControlType:(int)arg1;
- (void)_invalidateSkipInformationRevealTimer;
- (void)_launchCurrentNowPlayingApp;
- (void)_launchFirstPartyMusicAppForShareCommand;
- (BOOL)_mediaRemoteCommandIsSupportedAndEnabled:(unsigned int)arg1;
- (void)_revealSkipInformation;
- (void)_scheduleSkipInformationRevealTimer;
- (void)_setupNotifications;
- (BOOL)_shouldUseExtendedTransportControls;
- (void)_stopScrubberCommitTimer;
- (void)_supportedCommandsDidChangeNotification:(id)arg1;
- (void)_systemAppDidSkipTrackNotification:(id)arg1;
- (void)_tearDownNotifications;
- (void)_updateBuyButtonsWithNowPlayingInfo:(id)arg1;
- (void)_updateSupportedCommands;
- (void)_updateTransportControlCount;
- (id)artworkView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (void)mediaControlsTitlesViewWasTapped:(id)arg1;
- (void)mediaControlsViewDidCancelBuyTrackDownloadAction:(id)arg1;
- (void)mediaControlsViewDidConfirmBuyAlbumAction:(id)arg1;
- (void)mediaControlsViewDidConfirmBuyTrackAction:(id)arg1;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
- (BOOL)persistentUpdatesEnabled;
- (id)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(id)arg1;
- (void)progressViewDidBeginScrubbing:(id)arg1;
- (void)progressViewDidEndScrubbing:(id)arg1;
- (void)remoteViewControllerDidFinish;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPersistentUpdatesEnabled:(BOOL)arg1;
- (int)style;
- (void)transportControlMediaRemoteController:(id)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(id)arg3 shouldLaunchApplication:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transportControlsView:(id)arg1 adjustedFrameOfTransportButtonWithControlType:(int)arg2 proposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGSize { float x1; float x2; })transportControlsView:(id)arg1 adjustedMaximumTransportButtonSizeWithProposedSize:(struct CGSize { float x1; float x2; })arg2;
- (id)transportControlsView:(id)arg1 buttonForControlType:(int)arg2;
- (void)transportControlsView:(id)arg1 longPressBeginOnControlType:(int)arg2;
- (void)transportControlsView:(id)arg1 longPressEndOnControlType:(int)arg2;
- (void)transportControlsView:(id)arg1 tapOnControlType:(int)arg2;
- (double)transportControlsView:(id)arg1 transportButtonUnhighlightAnimationDurationForControlType:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
