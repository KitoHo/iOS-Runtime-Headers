/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUNowPlayingPlaybackControlsView : MPPlaybackControlsView <MPDetailSliderDelegate, MPUNowPlayingTransportControlsDelegate, UIActionSheetDelegate> {
    MPUApplicationDefaults *_applicationDefaults;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _artworkFrame;
    UIActionSheet *_createActionSheet;
    SKUICircleProgressIndicator *_createActivityIndicatorView;
    UIButton *_createButton;
    NSArray *_createButtonActions;
    BOOL _isDetailScrubbing;
    int _orientation;
    MPUSkipLimitView *_skipLimitView;
    UIView *_titlesView;
    MPUNowPlayingTransportControls *_transportControls;
    BOOL _usesMiniProgressControl;
    MPVolumeSlider *_volumeSlider;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _boundsForCenteringCreateActivityIndicatorView;
@property (nonatomic, readonly) UIView *_createButton;
@property (nonatomic, readonly) float _textButtonBottomVerticalInsetBaselinePhone;
@property (nonatomic, readonly) float _textButtonVerticalInsetBaselinePad;
@property (nonatomic, readonly) float _titlesLastResortVerticalOffsetPhone;
@property (nonatomic, readonly) float _transportControlsLastResortVerticalOffsetPhone;
@property (nonatomic, readonly) float _volumeBottomVerticalInsetPhone;
@property (nonatomic, retain) MPUApplicationDefaults *applicationDefaults;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } artworkFrame;
@property (nonatomic, readonly) UIActionSheet *createActionSheet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int orientation;
@property (getter=isShowingCreateLoadingIndicator, nonatomic) BOOL showingCreateLoadingIndicator;
@property (nonatomic, readonly) MPUSkipLimitView *skipLimitView;
@property (readonly) Class superclass;
@property (nonatomic) UIView *titlesView;
@property (nonatomic) BOOL usesMiniProgressControl;

+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (id)_availableCreateActionsForItem:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForCenteringCreateActivityIndicatorView;
- (void)_createAction:(id)arg1;
- (id)_createButton;
- (void)_defaultsDidChangeNotification:(id)arg1;
- (BOOL)_isCreateAvailable;
- (void)_layoutSkipLimitView;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (BOOL)_shouldAddBottomGap;
- (float)_textButtonBottomVerticalInsetBaselinePhone;
- (float)_textButtonVerticalInsetBaselinePad;
- (id)_titleForCreateAction:(int)arg1;
- (float)_titlesLastResortVerticalOffsetPhone;
- (Class)_transportControlsClass;
- (float)_transportControlsLastResortVerticalOffsetPhone;
- (void)_updateForItemDidChangeAnimated:(BOOL)arg1;
- (float)_volumeBottomVerticalInsetPhone;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)applicationDefaults;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })artworkFrame;
- (int)buttonType;
- (id)createActionSheet;
- (void)dealloc;
- (BOOL)detailScrubbingHidesControls;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingCreateLoadingIndicator;
- (void)layoutSubviews;
- (id)newButtonForPart:(unsigned long long)arg1;
- (id)newProgressIndicator;
- (int)orientation;
- (void)registerForPlayerNotifications;
- (void)reloadView;
- (id)repeatButtonImage;
- (void)setApplicationDefaults:(id)arg1;
- (void)setArtworkFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setPlayer:(id)arg1;
- (void)setShowingCreateLoadingIndicator:(BOOL)arg1;
- (void)setTitlesView:(id)arg1;
- (void)setUsesMiniProgressControl:(BOOL)arg1;
- (void)setUsesMiniProgressControl:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldOverrideProgressTimeLabelStyle;
- (id)shuffleButtonImage;
- (id)skipLimitView;
- (void)tintColorDidChange;
- (id)titlesView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transportControlsDidLayoutSubviews:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (BOOL)usesMiniProgressControl;

@end
