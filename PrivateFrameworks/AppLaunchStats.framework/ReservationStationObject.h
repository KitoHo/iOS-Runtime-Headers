/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface ReservationStationObject : NSObject <DuetLoggerProtocol> {
    int appType;
    NSString *bundleID;
    id forceEndHandler;
    long long lockTime;
    NSObject<OS_dispatch_queue> *rsDispatchQueue;
    long long seqNum;
    unsigned long long startMachAbsoluteTime;
    NSObject<OS_dispatch_source> *theTimer;
    NSDate *timeStamp;
}

- (void).cxx_destruct;
- (void)createTimer;
- (id)init:(id)arg1;
- (bool)isFree;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)onTick;
- (void)releaseStationWithAppID:(id)arg1 seqNum:(long long)arg2 withReleaseState:(bool*)arg3;
- (void)setStation:(id)arg1 didSet:(bool*)arg2;
- (void)setStationState:(id)arg1 seq:(long long)arg2 type:(int)arg3 didset:(bool*)arg4 release:(id)arg5;

@end
