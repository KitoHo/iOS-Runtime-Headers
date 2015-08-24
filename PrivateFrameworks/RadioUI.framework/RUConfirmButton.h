/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUConfirmButton : UIButton {
    BOOL _attemptsToUseMaximumSize;
    UIImageView *_confirmBackgroundImageView;
    UILabel *_confirmLabel;
    UIImageView *_defaultBackgroundImageView;
    UILabel *_defaultLabel;
    <RUConfirmButtonDelegate> *_delegate;
    RUFocusedTouchGestureRecognizer *_focusedTouchGestureRecognizer;
    NSMutableDictionary *_fontByControlState;
    NSMutableDictionary *_shadowOffsetByControlState;
    BOOL _showingConfirmation;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _touchAllowance;
}

@property (nonatomic) BOOL attemptsToUseMaximumSize;
@property (nonatomic, readonly) UILabel *confirmLabel;
@property (nonatomic) Class confirmLabelClass;
@property (nonatomic, readonly) UILabel *defaultLabel;
@property (nonatomic) Class defaultLabelClass;
@property (nonatomic) <RUConfirmButtonDelegate> *delegate;
@property (getter=isShowingConfirmation, nonatomic) BOOL showingConfirmation;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } touchAllowance;

+ (id)confirmButton;

- (void).cxx_destruct;
- (void)_animatedSetShowingConfirmation:(BOOL)arg1;
- (void)_gestureRecognizerChangedStateAction:(id)arg1;
- (id)_objectForState:(unsigned int)arg1 inDictionary:(id)arg2;
- (struct CGSize { float x1; float x2; })_sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forControlState:(unsigned int)arg2;
- (void)_styleLabel:(id)arg1 forState:(unsigned int)arg2;
- (void)_touchUpInsideAction:(id)arg1;
- (BOOL)attemptsToUseMaximumSize;
- (id)confirmLabel;
- (Class)confirmLabelClass;
- (void)dealloc;
- (id)defaultLabel;
- (Class)defaultLabelClass;
- (id)delegate;
- (id)fontForState:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingConfirmation;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAttemptsToUseMaximumSize:(BOOL)arg1;
- (void)setConfirmLabelClass:(Class)arg1;
- (void)setDefaultLabelClass:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1 forState:(unsigned int)arg2;
- (void)setShowingConfirmation:(BOOL)arg1;
- (void)setShowingConfirmation:(BOOL)arg1 animationDuration:(double)arg2 animationDelay:(double)arg3 animationOptions:(unsigned int)arg4 animationCompletionHandler:(id /* block */)arg5;
- (void)setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1 forState:(unsigned int)arg2;
- (void)setTouchAllowance:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 forControlState:(unsigned int)arg2;
- (unsigned int)state;
- (struct CGSize { float x1; float x2; })titleShadowOffsetForState:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })touchAllowance;

@end
