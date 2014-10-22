/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray;

@interface _UIDynamicValueAnimation : _UIDynamicAnimation {
    NSMutableArray *_activeValues;
    id _applier;
    double _decelerationFactor;
    double _decelerationLnFactor;
    double _friction;
    double _multiplier;
    void *_stepFunction;
    double _unitSize;
    double _value;
    double _velocity;
    id _viewApplier;
}

@property(copy) NSArray * activeValues;
@property double friction;
@property double value;
@property double velocity;

+ (id)_dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(float)arg3 velocity:(float)arg4 fromValue:(double)arg5 toValue:(double)arg6;
+ (id)pu_dynamicValueAnimationWithInitialValue:(double)arg1 initialVelocity:(double)arg2 targetValue:(double)arg3 stiffness:(double)arg4 dampingFactor:(double)arg5 epsilon:(double)arg6;

- (bool)_animateForInterval:(double)arg1;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (double)_multiplier;
- (void)_setDecelerationFactor:(double)arg1;
- (void)_setMultiplier:(double)arg1;
- (void)_setVelocity:(double)arg1;
- (void)_stopAnimation;
- (void)_updateStepFunction;
- (id)activeValues;
- (void)addActiveValue:(id)arg1;
- (void)dealloc;
- (double)friction;
- (id)init;
- (id)initWithValue:(double)arg1 velocity:(double)arg2 unitSize:(double)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeActiveValue:(id)arg1;
- (void)runWithCompletion:(id)arg1;
- (void)runWithValueApplier:(id)arg1 completion:(id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)runWithValueApplier:(id)arg1 completion:(id)arg2;
- (void)setActiveValues:(id)arg1;
- (void)setFriction:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)value;
- (double)velocity;

@end
