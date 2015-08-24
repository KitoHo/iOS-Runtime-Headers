/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate> {
    <PKPassPaymentPayStateViewDelegate> *_delegate;
    PKGlyphView *_glyph;
    UILabel *_label;
    float _labelAlpha;
    int _state;
    BOOL _touchRecognizingHint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPaymentPayStateViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKGlyphView *glyph;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) float labelAlpha;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic) BOOL touchRecognizingHint;

- (void)_applyStateWithTextOverride:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)_canEmphasizeState:(int)arg1;
- (id)_labelForState:(int)arg1 textOverride:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)emphasizeStateIfPossible:(int)arg1 withTextOverride:(id)arg2;
- (id)glyph;
- (void)glyphView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)label;
- (float)labelAlpha;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setLabelAlpha:(float)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 textOverride:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setTouchRecognizingHint:(BOOL)arg1;
- (int)state;
- (BOOL)touchRecognizingHint;

@end
