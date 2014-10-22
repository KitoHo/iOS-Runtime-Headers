/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class BSMachSendRight;

@interface FBProcessCPUStatistics : NSObject {
    struct FBProcessTimes { 
        double beginUserCPUElapsedTime; 
        double beginSystemCPUElapsedTime; 
        double beginIdleCPUElapsedTime; 
        double beginApplicationCPUElapsedTime; 
    BSMachSendRight *_taskNamePort;
    } _times;
}

@property(readonly) double totalElapsedIdleTime;
@property(readonly) double totalElapsedSystemTime;
@property(readonly) double totalElapsedTime;
@property(readonly) double totalElapsedUserTime;

- (double)_elapsedCPUTime;
- (void)_getApplicationCPUTimesForUser:(double*)arg1 system:(double*)arg2 idle:(double*)arg3;
- (void)_hostwideUserElapsedCPUTime:(double*)arg1 systemElapsedCPUTime:(double*)arg2 idleElapsedCPUTime:(double*)arg3;
- (void)dealloc;
- (id)descriptionForCrashReport;
- (id)initWithTaskNamePort:(id)arg1;
- (double)totalElapsedIdleTime;
- (double)totalElapsedSystemTime;
- (double)totalElapsedTime;
- (double)totalElapsedUserTime;
- (void)update;

@end
