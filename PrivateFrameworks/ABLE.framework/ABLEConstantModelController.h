/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@interface ABLEConstantModelController : ABLEModelController {
    unsigned long long _constantValue;
    boolvalid;
}

@property(readonly) unsigned long long constantValue;

- (void)calculateBONForCurrentLevel:(float)arg1 andChargeState:(bool)arg2 atDate:(id)arg3 onQueue:(id)arg4 usingHandler:(id)arg5;
- (unsigned long long)constantValue;
- (bool)existsDataForPredictionUsingDay:(id)arg1 andOffsetDays:(id)arg2;
- (bool)existsDataForPredictionUsingDefaultOffsetsAndDay:(id)arg1;
- (id)initWithConstant:(unsigned long long)arg1;
- (void)resetModel;
- (void)setValid:(bool)arg1;
- (void)significantEvent;
- (bool)valid;

@end
