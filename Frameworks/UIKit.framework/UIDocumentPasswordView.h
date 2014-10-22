/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject<UIDocumentPasswordViewDelegate>, NSString, UIDocumentPasswordField, UIImageView, UILabel, UITextField;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
    UIImageView *_iconView;
    UILabel *_label;
    UIDocumentPasswordField *_passwordTextField;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property NSObject<UIDocumentPasswordViewDelegate> * passwordDelegate;
@property(readonly) UITextField * passwordField;
@property(readonly) Class superclass;

- (bool)_canDrawContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconRectForContainerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_labelFont;
- (double)_labelHorizontalOffset;
- (id)_labelTextColor;
- (void)_passwordEntered:(id)arg1;
- (double)_textFieldWidth;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithDocumentName:(id)arg1;
- (void)layoutSubviews;
- (id)passwordDelegate;
- (id)passwordField;
- (void)setPasswordDelegate:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

@end
