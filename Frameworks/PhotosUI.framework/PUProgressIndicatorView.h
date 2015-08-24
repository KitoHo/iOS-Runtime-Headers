/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUProgressIndicatorView : UIView {
    int __currentState;
    double __timestampBeganShowing;
    _UIBackdropView *_backgroundView;
    NSArray *_backgroundViewConstraints;
    id /* block */ _completionHandler;
    float _currentProgress;
    BOOL _isDeterminate;
    NSArray *_labelAndPieProgressConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSString *_localizedMessage;
    UILabel *_messageLabel;
    NSArray *_messageLabelConstraints;
    PLRoundProgressView *_pieProgressView;
    NSArray *_pieProgressViewConstraints;
    BOOL _showsBackground;
    UIActivityIndicatorView *_spinnerView;
    NSArray *_spinnerViewConstraints;
    int _style;
    BOOL _wantsAnimatedHide;
    BOOL _wantsImmediateHide;
}

@property (setter=_setCurrentState:, nonatomic) int _currentState;
@property (setter=_setTimestampBeganShowing:, nonatomic) double _timestampBeganShowing;
@property (nonatomic) float currentProgress;
@property (setter=setDeterminate:, nonatomic) BOOL isDeterminate;
@property (nonatomic, copy) NSString *localizedMessage;
@property (nonatomic) BOOL showsBackground;
@property (nonatomic, readonly) int style;

- (void).cxx_destruct;
- (int)_currentState;
- (void)_endShowingProgressIfReady;
- (id)_newBackdropBackgroundView;
- (void)_setCurrentState:(int)arg1;
- (void)_setTimestampBeganShowing:(double)arg1;
- (double)_timestampBeganShowing;
- (void)_updatePieProgress;
- (void)_updateProgressViewsAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_updateSubviewsOrdering;
- (void)beginShowingProgressImmediately:(BOOL)arg1 animated:(BOOL)arg2;
- (float)currentProgress;
- (void)endShowingProgressImmediately:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isDeterminate;
- (id)localizedMessage;
- (void)setCurrentProgress:(float)arg1;
- (void)setDeterminate:(BOOL)arg1;
- (void)setLocalizedMessage:(id)arg1;
- (void)setShowsBackground:(BOOL)arg1;
- (BOOL)showsBackground;
- (int)style;
- (void)updateConstraints;

@end
