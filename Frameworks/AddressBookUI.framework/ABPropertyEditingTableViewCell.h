/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPropertyEditingTableViewCellDelegate>, NSString, UITextField;

@interface ABPropertyEditingTableViewCell : UITableViewCell <ABStyleProviding> {
    <ABPropertyEditingTableViewCellDelegate> *_delegate;
    NSString *_placeholder;
    int _property;
    UITextField *_textField;
}

@property <ABPropertyEditingTableViewCellDelegate> * delegate;
@property(copy) NSString * placeholder;
@property int property;
@property bool usesLargeFont;
@property(copy) NSString * value;

- (void)_resizeAndCenterTextField;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (void)dealloc;
- (id)delegate;
- (id)initWithReuseIdentifier:(id)arg1 property:(int)arg2 delegate:(id)arg3;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isFirstResponder;
- (void)layoutSubviews;
- (id)placeholder;
- (int)property;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setProperty:(int)arg1;
- (void)setUsesLargeFont:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)styleProvider;
- (void)textFieldValueDidChange:(id)arg1;
- (bool)usesLargeFont;
- (id)value;

@end
