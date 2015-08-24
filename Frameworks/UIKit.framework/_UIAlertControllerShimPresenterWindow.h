/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAlertControllerShimPresenterWindow : UIWindow {
    UIAlertController *_alertController;
}

@property (nonatomic, readonly, retain) UIAlertController *alertController;

+ (BOOL)_isSystemWindow;

- (id)_presentationViewController;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)alertController;
- (id)init;
- (void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id /* block */)arg3;

@end
