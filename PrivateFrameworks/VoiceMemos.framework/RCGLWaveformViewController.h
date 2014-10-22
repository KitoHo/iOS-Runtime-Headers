/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCGLWaveformViewDelegate>, NSMutableArray, NSString, NSTimer, RCAcousticAnnotationView, RCGLWaveformRenderer, RCLayoutMetrics, RCUIConfiguration, RCWaveformDataSource, RCWaveformScrollView, RCWaveformSelectionOverlay, UIView;

@interface RCGLWaveformViewController : UIViewController <UIScrollViewDelegate, RCGLWaveformRendererDelegate, RCWaveformSelectionOverlayDelegate> {
    struct { 
        double beginTime; 
        double endTime; 
    struct { 
        double beginTime; 
        double endTime; 
    struct { 
        double beginTime; 
        double endTime; 
    struct { 
        double beginTime; 
        double endTime; 
    RCUIConfiguration *_UIConfiguration;
    RCAcousticAnnotationView *_acousticAnnotationView;
    UIView *_bottomLineView;
    double _currentTime;
    unsigned long long _currentTimeDisplayOptions;
    <RCGLWaveformViewDelegate> *_delegate;
    double _duration;
    } _highlightTimeRange;
    RCLayoutMetrics *_layoutMetrics;
    double _layoutWidth;
    double _maximumSelectionDuration;
    double _overlayAutoscrollBaseDuration;
    double _overlayAutoscrollRateForSelectionTracking;
    NSTimer *_overlayAutoscrollTimer;
    RCGLWaveformRenderer *_rendererController;
    float _resumingToForegroundAutoscrollRate;
    RCWaveformScrollView *_scrollView;
    } _selectedTimeRange;
    RCWaveformSelectionOverlay *_selectionOverlay;
    double _selectionVisibleMargin;
    double _timeBeganAutoscrolling;
    NSMutableArray *_timeMarkerViews;
    UIView *_topLineView;
    } _visibleTimeRange;
    } _visibleTimeRangeBeforeSelectionTracking;
    bool_clipTimeMarkersToDuration;
    bool_dragEnding;
    bool_isScrollViewAutoScrolling;
    bool_isScrollViewAutoScrollingPaused;
    bool_playing;
    bool_screenUpdatesDisabled;
    bool_scrubbing;
    bool_scrubbingEnabled;
    bool_selectedTimeRangeEditingEnabled;
    bool_selectedTimeRangeScrubbingEnabled;
    bool_shouldUpdateInDisplayLink;
    bool_timeMarkerViewsNeedInitialLayout;
    bool_timeMarkerViewsUpdatesDisabled;
}

@property(copy) RCUIConfiguration * UIConfiguration;
@property(getter=isAutoscrolling,readonly) bool autoscrolling;
@property bool clipTimeMarkersToDuration;
@property double currentTime;
@property unsigned long long currentTimeDisplayOptions;
@property(retain) RCWaveformDataSource * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property <RCGLWaveformViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property double duration;
@property(readonly) unsigned long long hash;
@property struct { double x1; double x2; } highlightTimeRange;
@property(retain) RCLayoutMetrics * layoutMetrics;
@property double maximumSelectionDuration;
@property bool playing;
@property bool screenUpdatesDisabled;
@property bool scrubbingEnabled;
@property struct { double x1; double x2; } selectedTimeRange;
@property(getter=isSelectedTimeRangeEditingEnabled) bool selectedTimeRangeEditingEnabled;
@property(getter=isSelectedTimeRangeEditingEnabled) bool selectedTimeRangeScrubbingEnabled;
@property double selectionVisibleMargin;
@property(readonly) Class superclass;
@property struct { double x1; double x2; } visibleTimeRange;

- (void).cxx_destruct;
- (id)UIConfiguration;
- (void)_applyUIConfiguration;
- (void)_autoscrollOverlayIfNecessary;
- (void)_displayLinkDidUpdate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForTimeMarkerView:(id)arg1;
- (bool)_isScrubbing;
- (bool)_isScrubbingSelectionTimeRange;
- (void)_layoutTimeMarkerViewsForCurrentlyVisibleTimeRange;
- (void)_scrollViewPanGestureRecognized:(id)arg1;
- (void)_scrubbingDidFinish;
- (void)_setSelectedTimeRange:(struct { double x1; double x2; })arg1 updateVisibleTimeRange:(bool)arg2 notifyDelegate:(bool)arg3 animationDuration:(double)arg4;
- (void)_setTimeMarkerViewUpdatesDisabled:(bool)arg1;
- (void)_setTimeMarkerViewsNeedInitialLayout:(bool)arg1;
- (void)_setVisibleTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2 completionBlock:(id)arg3;
- (bool)_shouldAutoAnimateScrollChanges;
- (bool)_shouldCenterTimeIndicator;
- (void)_startDisplayLink;
- (void)_stopDisplayLink;
- (void)_updateAnnotationViews;
- (void)_updateCurrentTimeDisplay;
- (void)_updateRendererControllerPausedState;
- (void)_updateSelectionOverlayWithAnimationDuration:(double)arg1;
- (void)_updateVisibleAreaWithAnimationDuration:(double)arg1;
- (void)_updateWaveformViewContentSizeAndOffset;
- (struct { double x1; double x2; })_visibleTimeRangeForCurrentSelectionTimeRange;
- (void)beginAutoscrollingAtTime:(double)arg1 atRate:(float)arg2;
- (bool)clipTimeMarkersToDuration;
- (double)currentTime;
- (unsigned long long)currentTimeDisplayOptions;
- (double)currentTimeIndicatorCoordinate;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (void)endAutoscrolling;
- (void)fixupScrollPositionToMatchIndicatorPositionTime;
- (struct { double x1; double x2; })highlightTimeRange;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isAutoscrolling;
- (bool)isScrollViewAutoScrolling;
- (bool)isSelectedTimeRangeEditingEnabled;
- (bool)isSelectedTimeRangeEditingEnabled;
- (id)layoutMetrics;
- (double)maximumSelectionDuration;
- (void)pauseAutoscrolling;
- (bool)playing;
- (void)resumeAutoscrollingIfPaused;
- (bool)screenUpdatesDisabled;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (bool)scrubbingEnabled;
- (struct { double x1; double x2; })selectedTimeRange;
- (double)selectionVisibleMargin;
- (void)setAutoscrolling:(bool)arg1;
- (void)setClipTimeMarkersToDuration:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTimeDisplayOptions:(unsigned long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHighlightTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })setHighlightTimeRange;
- (void)setLayoutMetrics:(id)arg1;
- (void)setMaximumSelectionDuration:(double)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setScreenUpdatesDisabled:(bool)arg1;
- (void)setScrubbingEnabled:(bool)arg1;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (void)setSelectedTimeRange:(struct { double x1; double x2; })arg1;
- (void)setSelectedTimeRangeEditingEnabled:(bool)arg1;
- (void)setSelectedTimeRangeScrubbingEnabled:(bool)arg1;
- (void)setSelectionVisibleMargin:(double)arg1;
- (void)setUIConfiguration:(id)arg1;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1 animationDuration:(double)arg2;
- (void)setVisibleTimeRange:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeByInsettingVisibleTimeRange:(struct { double x1; double x2; })arg1 inset:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (struct { double x1; double x2; })visibleTimeRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })waveformRectForLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)waveformRenderer:(id)arg1 contentWidthDidChange:(double)arg2;
- (void)waveformRendererContentDidFinishLoading:(id)arg1;
- (void)waveformRendererDidSynchronizeToDisplayLink:(id)arg1;
- (void)waveformSelectionOverlay:(id)arg1 didFinishTrackingSelectionBeginTime:(bool)arg2 endTime:(bool)arg3 assetCurrentTime:(bool)arg4;
- (double)waveformSelectionOverlay:(id)arg1 offsetForTime:(double)arg2;
- (double)waveformSelectionOverlay:(id)arg1 timeForOffset:(double)arg2;
- (void)waveformSelectionOverlay:(id)arg1 willBeginTrackingSelectionBeginTime:(bool)arg2 endTime:(bool)arg3 assetCurrentTime:(bool)arg4;
- (double)waveformSelectionOverlay:(id)arg1 willChangeAssetCurrentTime:(double)arg2 isTracking:(bool)arg3;
- (struct { double x1; double x2; })waveformSelectionOverlay:(id)arg1 willChangeSelectedTimeRange:(struct { double x1; double x2; })arg2 isTracking:(bool)arg3;

@end
