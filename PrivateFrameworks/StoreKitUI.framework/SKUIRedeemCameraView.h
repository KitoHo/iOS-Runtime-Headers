/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIRedeemCameraViewDelegate>, NSString, SKUIClientContext, SKUIITunesPassConfiguration, SKUIRedeemCameraLandingView, SKUIRedeemITunesPassLockup, SKUIRedeemTextField, UIButton, UIImage, UIView;

@interface SKUIRedeemCameraView : UIView <UITextFieldDelegate> {
    SKUIClientContext *_clientContext;
    <SKUIRedeemCameraViewDelegate> *_delegate;
    SKUIITunesPassConfiguration *_iTunesPassConfiguration;
    SKUIRedeemITunesPassLockup *_iTunesPassLockup;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_overlay;
    UIView *_redeemerView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
}

@property(retain) SKUIITunesPassConfiguration * ITunesPassConfiguration;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIRedeemCameraViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(getter=isEnabled) bool enabled;
@property(readonly) unsigned long long hash;
@property(retain) UIImage * image;
@property(readonly) Class superclass;
@property(copy) NSString * text;

- (void).cxx_destruct;
- (id)ITunesPassConfiguration;
- (void)_hideKeyboard;
- (void)_iTunesPassLearnMoreAction:(id)arg1;
- (bool)_isShowingRedeemer;
- (void)_landingButtonAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (void)_pauseRedeemer;
- (void)_resumeRedeemer;
- (void)_showRedeemer:(bool)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)image;
- (id)initWithClientContext:(id)arg1;
- (bool)isEnabled;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setITunesPassConfiguration:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)showKeyboard;
- (void)start;
- (id)text;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
