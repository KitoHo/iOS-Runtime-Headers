/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UINavigationController;

@interface PUNavigationTransition : PUViewControllerTransition {
    long long __operation;
    UINavigationController *_navigationController;
    double _popDuration;
    double _pushDuration;
}

@property(setter=_setOperation:) long long _operation;
@property UINavigationController * navigationController;
@property(readonly) double popDuration;
@property(readonly) double pushDuration;

+ (id)animationControllerForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 inNavigationController:(id)arg4;
+ (bool)shouldCrossFadeBottomBarsForNavigationController:(id)arg1;

- (void).cxx_destruct;
- (long long)_operation;
- (void)_setOperation:(long long)arg1;
- (void)animateTransition:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)completeInteractiveOperation:(long long)arg1 finished:(bool)arg2;
- (void)completeTransition:(bool)arg1;
- (void)finishInteractiveTransition;
- (id)initWithDuration:(double)arg1;
- (id)initWithPushDuration:(double)arg1 popDuration:(double)arg2;
- (id)navigationController;
- (double)popDuration;
- (double)pushDuration;
- (void)setNavigationController:(id)arg1;
- (void)transitionDidStartOperation:(long long)arg1 animated:(bool)arg2 interactive:(bool)arg3;
- (double)transitionDuration:(id)arg1;
- (void)transitionWillAnimateOperation:(long long)arg1 interactive:(bool)arg2;
- (void)transitionWillStartOperation:(long long)arg1 animated:(bool)arg2 interactive:(bool)arg3;

@end
