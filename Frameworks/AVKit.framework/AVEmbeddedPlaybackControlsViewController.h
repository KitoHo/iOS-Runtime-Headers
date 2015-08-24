/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVEmbeddedPlaybackControlsViewController : AVPlaybackControlsViewController {
    NSLayoutConstraint *_controlsContainerViewHeightLayoutConstraint;
    unsigned int _controlsVisibilityHasBeenManagedBefore;
    UILabel *_elapsedTimeLabel;
    NSString *_elapsedTimeLabelText;
    UIButton *_fullScreenButton;
    NSMutableArray *_layoutConstraints;
    UILabel *_liveStreamingLabel;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UIView *_lowerControlsSubContainerView;
    UIButton *_mediaSelectionButton;
    UIButton *_playPauseButton;
    unsigned int _playPauseButtonEnabled;
    unsigned int _playing;
    UILabel *_remainingTimeLabel;
    NSString *_remainingTimeLabelText;
    UILabel *_scrubInstructionsSubtitleLabel;
    UILabel *_scrubInstructionsTitleLabel;
    AVScrubber *_scrubber;
    unsigned int _scrubberEnabled;
    NSArray *_scrubberLoadedTimeRanges;
    float _scrubberMaximumValue;
    float _scrubberMinimumValue;
    float _scrubberValue;
    unsigned int _showsLoadingIndicator;
    unsigned int _showsMediaSelectionButton;
    unsigned int _showsScrubInstructions;
    unsigned int _showsStreamingControls;
}

- (void).cxx_destruct;
- (void)_hideScrubInstructions;
- (void)_manageControlsVisibility;
- (void)_scrubberBeginTracking:(id)arg1;
- (void)_scrubberEndTracking:(id)arg1;
- (void)_showScrubInstructions;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isPlayPauseButtonEnabled;
- (BOOL)isPlaying;
- (BOOL)isScrubberEnabled;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)scrubberLoadedTimeRanges;
- (float)scrubberWidth;
- (void)setPlayPauseButtonEnabled:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setScrubberEnabled:(BOOL)arg1;
- (void)setScrubberLoadedTimeRanges:(id)arg1;
- (void)setShowsLoadingIndicator:(BOOL)arg1;
- (void)setShowsMediaSelectionButton:(BOOL)arg1;
- (void)setShowsStreamingControls:(BOOL)arg1;
- (BOOL)showsLoadingIndicator;
- (BOOL)showsMediaSelectionButton;
- (BOOL)showsStreamingControls;
- (void)updateElapsedTimeLabel:(id)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)updateScrubberValue:(float)arg1;
- (void)updateViewConstraints;
- (void)viewWillLayoutSubviews;

@end
