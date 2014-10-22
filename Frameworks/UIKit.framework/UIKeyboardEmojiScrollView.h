/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, UIKeyboardEmojiCategory, UIKeyboardEmojiInputController, UILabel, UIPageControl, UIScrollView, UIView;

@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiPressIndicationDelegate> {
    UIKeyboardEmojiCategory *_category;
    UILabel *_categoryLabel;
    int _currentPage;
    UIKeyboardEmojiInputController *_inputController;
    UILabel *_optionalDescription;
    UIPageControl *_pageControl;
    NSMutableArray *_pages;
    UIView *_pressIndicator;
    UIScrollView *_scrollView;
    bool_whiteText;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) UIView * pressIndicator;
@property(readonly) Class superclass;
@property bool whiteText;

- (void)clearPages;
- (int)currentPage;
- (void)dealloc;
- (void)delayLayout;
- (void)doLayout;
- (long long)emojiCountPerPageForRotation;
- (void)ensureSurrounded;
- (void)forceLayout;
- (void)goToFirstPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)installPressIndicatorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)interruptScrolling;
- (void)layoutPages;
- (void)layoutRecents;
- (void)pageChanged;
- (id)pressIndicator;
- (void)reloadForCategory:(id)arg1;
- (void)removePressIndicator;
- (void)saveFirstVisibleEmojiIndex;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setPressIndicator:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setScrollDelay:(double)arg1;
- (void)setWhiteText:(bool)arg1;
- (bool)shouldCache;
- (bool)whiteText;

@end
