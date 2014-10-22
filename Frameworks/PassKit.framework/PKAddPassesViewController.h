/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKAddPassesViewControllerDelegate>, NSArray, NSDate, NSURL, PKRemoteAddPassesViewController, _UIAsyncInvocation;

@interface PKAddPassesViewController : UIViewController {
    NSURL *_URL;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    <PKAddPassesViewControllerDelegate> *_delegate;
    NSArray *_passes;
    NSDate *_perfTestingForIngestion;
    long long _previousStatusBarStyle;
    PKRemoteAddPassesViewController *_remoteViewController;
    bool_allowsPassIngestion;
    bool_succeeded;
    bool_viewHasAppeared;
}

@property(retain) NSURL * URL;
@property(retain) _UIAsyncInvocation * cancelViewServiceRequest;
@property <PKAddPassesViewControllerDelegate> * delegate;
@property(retain) NSArray * passes;
@property long long previousStatusBarStyle;
@property(retain) PKRemoteAddPassesViewController * remoteViewController;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)canAddPasses;

- (id)URL;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (id)cancelViewServiceRequest;
- (void)dealloc;
- (id)delegate;
- (void)ingestionDidFinishWithResult:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (id)passes;
- (long long)previousStatusBarStyle;
- (id)remoteViewController;
- (void)setAllowsPassIngestion:(bool)arg1;
- (void)setCancelViewServiceRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPasses:(id)arg1;
- (void)setPreviousStatusBarStyle:(long long)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)succeeded;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
