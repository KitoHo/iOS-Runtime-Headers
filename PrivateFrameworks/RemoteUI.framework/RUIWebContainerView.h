/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {
    <RUIWebContainerViewDelegate> *_delegate;
    BOOL _highlighted;
    BOOL _reallyHighlighted;
    UIWebView *_webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIWebContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWebView *webView;

- (void).cxx_destruct;
- (void)_setHighlightedNow;
- (id)delegate;
- (float)heightForWidth:(float)arg1;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setUserStyleSheet:(id)arg1;
- (id)webView;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
