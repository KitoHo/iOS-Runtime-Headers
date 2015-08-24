/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUChartBackgroundView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _lineInsets;
    NSNumber *_maxValue;
    NSNumber *_minValue;
}

@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } lineInsets;
@property (nonatomic, retain) NSNumber *maxValue;
@property (nonatomic, retain) NSNumber *minValue;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })lineInsets;
- (id)maxValue;
- (id)minValue;
- (void)setLineInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;

@end
