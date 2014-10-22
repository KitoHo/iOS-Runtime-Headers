/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class BSAnimationSettings, NSString;

@interface SBFAnimationFactory : NSObject <NSCopying, _UIBasicAnimationFactory> {
    BSAnimationSettings *_settings;
}

@property(copy,readonly) NSString * debugDescription;
@property(readonly) double delay;
@property(copy,readonly) NSString * description;
@property(readonly) double duration;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (void)animateWithFactory:(id)arg1 actions:(id)arg2 completion:(id)arg3;
+ (void)animateWithFactory:(id)arg1 actions:(id)arg2;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id)arg3 completion:(id)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id)arg3;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(id)arg4 completion:(id)arg5;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(id)arg4;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(id)arg3 completion:(id)arg4;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(id)arg3;
+ (id)factoryWithAnimationAttributes:(id)arg1;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2;
+ (id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)factoryWithDuration:(double)arg1;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2;
+ (id)factoryWithSettings:(id)arg1;

- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(id)arg3 completion:(id)arg4;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_initWithSettings:(id)arg1;
- (id)_timingFunctionForAnimation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delay;
- (id)description;
- (double)duration;
- (id)factoryWithTimingFunction:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
