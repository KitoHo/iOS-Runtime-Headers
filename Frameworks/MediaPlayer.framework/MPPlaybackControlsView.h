/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPPlaybackControlsDelegate>, CABasicAnimation, MPAVController, MPAVItem, MPButton, MPDetailSlider, MPTimeMarker, NSString, UIActivityIndicatorView, UIImage, UILabel, UIView;

@interface MPPlaybackControlsView : UIView <MPDetailSliderDelegate> {
    unsigned int _wantsTick : 1;
    unsigned int _geniusButtonDisabled : 1;
    unsigned int _fastForwardAndRewindButtonDisabled : 1;
    unsigned int _playbackSpeedButtonDisabled : 1;
    unsigned int _mailButtonDisabled : 1;
    unsigned int _mailButtonHidden : 1;
    unsigned int _useMediaDetailSlider : 1;
    unsigned int _detailScrubbing : 1;
    unsigned int _needsUpdateButtonVisibility : 1;
    UIActivityIndicatorView *_activityIndicator;
    <MPPlaybackControlsDelegate> *_delegate;
    unsigned long long _disabledParts;
    MPButton *_fastFowardButton;
    UIView *_fastFowardButtonBezel;
    MPButton *_geniusButton;
    MPAVItem *_item;
    MPButton *_mailButton;
    MPTimeMarker *_markerForProgressControlDuration;
    MPButton *_playbackSpeedButton;
    MPAVController *_player;
    MPDetailSlider *_progressControl;
    double _progressOffset;
    MPButton *_repeatButton;
    MPButton *_rewindButton;
    UIView *_rewindButtonBezel;
    CABasicAnimation *_rewindOpacityAnimation;
    float _seekedToValue;
    MPButton *_shuffleButton;
    double _tickInterval;
    UILabel *_trackInfoLabel;
    unsigned long long _visibleParts;
}

@property(copy,readonly) NSString * debugDescription;
@property <MPPlaybackControlsDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) bool detailScrubbingHidesControls;
@property unsigned long long disabledParts;
@property(readonly) unsigned long long hash;
@property(readonly) bool hideGeniusButton;
@property(readonly) bool isScrubbing;
@property(retain) MPAVItem * item;
@property(readonly) NSString * localizedScrubSpeedText;
@property(readonly) UIImage * mailButtonImage;
@property(retain) MPAVController * player;
@property(readonly) UIImage * repeatButtonImage;
@property(readonly) unsigned long long repeatType;
@property(readonly) bool shouldOverrideProgressTimeLabelStyle;
@property(readonly) UIImage * shuffleButtonImage;
@property(readonly) bool shuffleIsOn;
@property(readonly) unsigned long long shuffleType;
@property(readonly) Class superclass;
@property unsigned long long visibleParts;

+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (void)_addOpacityAnimationToBezelView:(id)arg1 reversed:(bool)arg2;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_changeGeniusImageToNormalImage:(id)arg1;
- (void)_changeGeniusImageToPressedImage:(id)arg1;
- (void)_contentsChangedNotification:(id)arg1;
- (double)_currentDisplayTime;
- (void)_fastForwardButton:(id)arg1;
- (void)_geniusButton:(id)arg1;
- (void)_handleGeniusButtonClick;
- (void)_isGeniusEnabledDidChangeNotification:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)_mailButton:(id)arg1;
- (void)_playbackModeDidChangeNotification:(id)arg1;
- (void)_playbackSpeedButton:(id)arg1;
- (void)_registerForAVItemNotifications;
- (void)_repeatButton:(id)arg1;
- (void)_resetGeniusButtonImages;
- (void)_rewindButton:(id)arg1;
- (void)_setCurrentTime:(double)arg1 duration:(double)arg2;
- (void)_setVisiblePartsNeedReload;
- (void)_shuffleButton:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_unregisterForAVItemNotifications;
- (void)_updateButtonVisibility;
- (void)_updateForPlaybackSpeed;
- (double)_updatedDisplayDurationForTime:(double)arg1 preciseChapterMarkers:(bool)arg2;
- (void)_validityChangedNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (Class)buttonClass;
- (long long)buttonType;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)detailScrubbingHidesControls;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)didMoveToSuperview;
- (unsigned long long)disabledParts;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (id)geniusButtonImageForControlState:(unsigned long long)arg1;
- (void)handleChangeToRepeatType:(unsigned long long)arg1;
- (void)handleChangeToShuffleType:(unsigned long long)arg1;
- (bool)hideGeniusButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isScrubbing;
- (id)item;
- (void)layoutSubviews;
- (id)localizedScrubSpeedText;
- (id)mailButtonImage;
- (id)newButtonBezelViewForPart:(unsigned long long)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newProgressIndicator;
- (id)newTrackInfoLabel;
- (id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned long long)arg1;
- (id)playbackSpeedTitleForPlaybackSpeed:(unsigned long long)arg1;
- (id)player;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)progressBarClipsToChapterDuration;
- (void)registerForPlayerNotifications;
- (void)reloadButtonVisibility;
- (void)reloadControls;
- (void)reloadView;
- (id)repeatButtonImage;
- (unsigned long long)repeatType;
- (void)resetDetailSlider:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setItem:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (bool)shouldOverrideProgressTimeLabelStyle;
- (id)shuffleButtonImage;
- (bool)shuffleIsOn;
- (unsigned long long)shuffleType;
- (void)startTicking;
- (void)stopTicking;
- (void)unregisterForPlayerNotifications;
- (void)updateForEndOfDetailScrubbing;
- (unsigned long long)visibleParts;

@end
