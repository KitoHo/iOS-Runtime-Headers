/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBInputBackdropView : UIView {
    BOOL _hasEndRect;
    BOOL _hasStartRect;
    unsigned int _innerCorners;
    UIKBBackdropView *_inputBackdropFullView;
    UIKBBackdropView *_inputBackdropLeftView;
    UIKBBackdropView *_inputBackdropRightView;
    BOOL _isTransitioning;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _savedEndRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _savedStartRect;
    int _style;
    float _transitionGap;
    float _transitionLeftOffset;
}

@property (nonatomic, retain) UIKBBackdropView *inputBackdropFullView;
@property (nonatomic, retain) UIKBBackdropView *inputBackdropLeftView;
@property (nonatomic, retain) UIKBBackdropView *inputBackdropRightView;

+ (BOOL)_retroactivelyRequiresConstraintBasedLayout;

- (void)_beginSplitTransitionIfNeeded:(float)arg1 gapWidth:(float)arg2;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (BOOL)_isTransitioning;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 leftOffset:(float)arg2 gapWidth:(float)arg3 progress:(float)arg4;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 leftOffset:(float)arg2 gapWidth:(float)arg3 progress:(float)arg4 innerCorners:(unsigned int)arg5;
- (void)_setInitialProgressWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setProgress:(float)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 primaryBackdrop:(BOOL)arg2;
- (id)inputBackdropFullView;
- (id)inputBackdropLeftView;
- (id)inputBackdropRightView;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 andRightViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 innerCorners:(int)arg3;
- (void)setInputBackdropFullView:(id)arg1;
- (void)setInputBackdropLeftView:(id)arg1;
- (void)setInputBackdropRightView:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(int)arg1 isSplit:(BOOL)arg2;

@end
