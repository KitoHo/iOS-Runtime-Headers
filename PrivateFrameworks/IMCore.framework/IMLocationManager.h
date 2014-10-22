/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class CLLocation, CLLocationManager, NSDate, NSError, NSMutableArray, NSString, NSTimer;

@interface IMLocationManager : IMChat <CLLocationManagerDelegate, IMLocationManager> {
    NSError *_error;
    NSMutableArray *_handlers;
    NSDate *_locateStartTime;
    CLLocation *_location;
    CLLocationManager *_locationManager;
    NSTimer *_locationUpdateTimer;
    NSTimer *_timeoutHandler;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSError * error;
@property(retain) NSMutableArray * handlers;
@property(readonly) unsigned long long hash;
@property(retain) NSDate * locateStartTime;
@property(retain) CLLocation * location;
@property(readonly) bool locationAuthorizationDenied;
@property(retain) CLLocationManager * locationManager;
@property(retain) NSTimer * locationUpdateTimer;
@property(readonly) Class superclass;

+ (Class)__CLLocationManagerClass;
+ (id)locationShifter;
+ (id)sharedInstance;

- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)handlers;
- (id)init;
- (id)locateStartTime;
- (id)location;
- (bool)locationAuthorizationDenied;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationManager;
- (id)locationUpdateTimer;
- (void)setError:(id)arg1;
- (void)setHandlers:(id)arg1;
- (void)setLocateStartTime:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationUpdateTimer:(id)arg1;
- (void)shiftedLocationWithLocation:(id)arg1 completion:(id)arg2;
- (void)startUpdatingCurrentLocationWithHandler:(id)arg1;

@end
