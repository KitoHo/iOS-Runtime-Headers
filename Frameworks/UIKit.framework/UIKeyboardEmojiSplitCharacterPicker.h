/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKeyboardEmojiCategory, UIKeyboardEmojiInputController, UILabel;

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiInput> {
    UIKeyboardEmojiCategory *_category;
    UIKeyboardEmojiInputController *_inputController;
    UILabel *_optionalDescription;
}

@property(retain) UIKeyboardEmojiCategory * category;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)category;
- (id)charactersForRow:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)reloadForCategory:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setCategory:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
