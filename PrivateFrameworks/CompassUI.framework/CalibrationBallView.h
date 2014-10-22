/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@class UIView;

@interface CalibrationBallView : UIView {
    double _ballRadius;
    UIView *_ballView;
    double _currentAngle;
    double _trackRadius;
}

@property(setter=setAngle:) double currentAngle;
@property double trackRadius;

- (id)ballView;
- (double)currentAngle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ballRadius:(double)arg2;
- (void)layoutSubviews;
- (void)setAngle:(double)arg1;
- (void)setTrackRadius:(double)arg1;
- (double)trackRadius;

@end
