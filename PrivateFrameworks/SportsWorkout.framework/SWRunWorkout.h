/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSData, NSString, SWPaceModel, SWRunSensor;

@interface SWRunWorkout : SWWorkout <SWRunSensorPacketObserver> {
    SWPaceModel *_paceModel;
    SWRunSensor *_sensor;
    float _weightInLbs;
    bool_hasStarted;
    bool_isCalibration;
}

@property(readonly) bool canBeUsedForRunCalibration;
@property(readonly) bool canBeUsedForWalkCalibration;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isCalibration;
@property(readonly) bool isWalk;
@property(readonly) float maximumCalibrationDistanceMiles;
@property(readonly) float minimumCalibrationDistanceMiles;
@property(copy) NSData * paceModelParameters;
@property(readonly) SWRunSensor * sensor;
@property(readonly) Class superclass;
@property float weightInLbs;

+ (id)workoutWithSensor:(id)arg1;

- (void)activateWorkout;
- (bool)calibrateWithDistanceMiles:(float)arg1 forWalk:(bool)arg2;
- (bool)canBeUsedForRunCalibration;
- (bool)canBeUsedForWalkCalibration;
- (void)dealloc;
- (id)initWithSensor:(id)arg1;
- (bool)isCalibration;
- (bool)isWalk;
- (float)maximumCalibrationDistanceMiles;
- (float)minimumCalibrationDistanceMiles;
- (id)paceModelParameters;
- (void)pauseWorkout;
- (bool)recalibrateWithAdjustedDistanceMiles:(float)arg1;
- (void)resetCalibration;
- (void)sensor:(id)arg1 didReceivePacketPayload:(const char *)arg2 timestamp:(unsigned long long)arg3;
- (id)sensor;
- (void)setIsCalibration:(bool)arg1;
- (void)setPaceModelParameters:(id)arg1;
- (void)setWeightInLbs:(float)arg1;
- (float)weightInLbs;
- (id)workoutData;

@end
