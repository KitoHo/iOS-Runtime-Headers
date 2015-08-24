/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationPresentationController : UIPresentationController {
    UIView *_dimmingView;
    NSLayoutConstraint *_leftConstraint;
    struct __CFArray { } *_observers;
    struct CGSize { 
        float width; 
        float height; 
    } _preferredContentSize;
    NSLayoutConstraint *_rightConstraint;
    NSLayoutConstraint *_topConstraint;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } maximumContentSize;

- (void)_notifyObserversAboutDidAdjustToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_notifyObserversAboutWillAdjustToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)addPresentationObserver:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (struct CGSize { float x1; float x2; })maximumContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionWillBegin;
- (void)removePresentationObserver:(id)arg1;
- (BOOL)shouldRemovePresentersView;

@end
