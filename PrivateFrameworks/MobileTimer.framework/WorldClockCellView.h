/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class <WorldClockCellViewDelegate>, AnalogClockView, DigitalClockLabel, NSTimeZone, UILabel;

@interface WorldClockCellView : UIView <Clock> {
    AnalogClockView *_analogClock;
    UILabel *_combinedLabel;
    <WorldClockCellViewDelegate> *_delegate;
    DigitalClockLabel *_digitalClock;
    UILabel *_nameLabel;
    long long _nowInMinutes;
    long long _style;
    NSTimeZone *_timeZone;
    bool_editing;
    bool_started;
}

@property(readonly) AnalogClockView * analogClock;
@property(readonly) UILabel * combinedLabel;
@property <WorldClockCellViewDelegate> * delegate;
@property(readonly) DigitalClockLabel * digitalClock;
@property(readonly) UILabel * nameLabel;
@property(readonly) int runMode;
@property(readonly) bool started;
@property long long style;

+ (id)combinedStringFromDate:(id)arg1 withTimezoneOffset:(long long)arg2 dayText:(id*)arg3 hourText:(id*)arg4 usesSeparateLines:(bool)arg5;
+ (double)defaultCellHeight;

- (id)analogClock;
- (double)coarseUpdateInterval;
- (id)combinedLabel;
- (void)dealloc;
- (id)delegate;
- (id)digitalClock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)localeChange:(id)arg1;
- (id)nameLabel;
- (int)runMode;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)setStyle:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)significantTimeChange:(id)arg1;
- (void)start;
- (bool)started;
- (void)stop;
- (id)stringFromDate:(id)arg1 withTimezoneOffset:(long long)arg2;
- (long long)style;
- (double)updateInterval;
- (void)updateTime;
- (void)updateTimeContinuously:(long long)arg1;

@end
