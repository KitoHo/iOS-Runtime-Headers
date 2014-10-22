/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } mBounds;
    OITSUColor *mEndColor;
    OITSUColor *mStartColor;
}

- (id).cxx_construct;
- (void)createShading;
- (void)dealloc;
- (id)endColor;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (id)startColor;

@end
