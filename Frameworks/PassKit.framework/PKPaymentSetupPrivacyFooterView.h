/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIButton, UILabel;

@interface PKPaymentSetupPrivacyFooterView : UIView {
    long long _context;
    UIButton *_linkButton;
    UILabel *_message;
}

@property long long context;
@property(retain) UIButton * linkButton;
@property(retain) UILabel * message;

- (id)_highlightedStringAttributes;
- (id)_normalStringAttributes;
- (long long)context;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (void)layoutSubviews;
- (id)linkButton;
- (id)message;
- (void)setContext:(long long)arg1;
- (void)setLinkButton:(id)arg1;
- (void)setMessage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
