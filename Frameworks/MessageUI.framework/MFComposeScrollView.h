/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableSet, NSSet, UIGestureRecognizer;

@interface MFComposeScrollView : UIScrollView {
    struct CGPoint { 
        double x; 
        double y; 
    NSMutableSet *_disabledSubviews;
    long long _scrollBlocked;
    UIGestureRecognizer *_singleTapGestureRecognizer;
    } _tapLocation;
    bool_shouldScrollToFirstResponder;
    bool_subviewsDisabled;
}

@property(readonly) NSSet * disabledSubviews;
@property bool shouldScrollToFirstResponder;
@property bool subviewsDisabled;

- (bool)_scrollsToMakeFirstResponderVisible;
- (void)beginBlockingScroll;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)disableSubview:(id)arg1;
- (id)disabledSubviews;
- (void)enableSubview:(id)arg1;
- (void)endBlockingScroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setShouldScrollToFirstResponder:(bool)arg1;
- (void)setSubviewsDisabled:(bool)arg1;
- (bool)shouldScrollToFirstResponder;
- (bool)subviewsDisabled;
- (void)willRemoveSubview:(id)arg1;

@end
