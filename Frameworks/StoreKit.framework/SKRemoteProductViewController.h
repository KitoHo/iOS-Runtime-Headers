/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSString, SKStoreProductViewController;

@interface SKRemoteProductViewController : _UIRemoteViewController <SKUIClientProductPageViewController> {
    SKStoreProductViewController *_productViewController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property SKStoreProductViewController * productViewController;
@property(readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinish;
- (void)didFinishWithResult:(id)arg1;
- (void)didReceiveTitle:(id)arg1;
- (void)loadDidFinishWithResult:(id)arg1 error:(id)arg2;
- (void)presentPageWithRequest:(id)arg1 animated:(id)arg2;
- (id)productViewController;
- (void)promptForStarRating;
- (void)setProductViewController:(id)arg1;
- (void)setStatusBarHidden:(id)arg1 withAnimation:(id)arg2;
- (void)setStatusBarStyle:(id)arg1 animated:(id)arg2;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
