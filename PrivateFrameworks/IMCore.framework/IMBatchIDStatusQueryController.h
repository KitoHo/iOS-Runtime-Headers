/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, NSMutableArray, NSTimer;

@interface IMBatchIDStatusQueryController : NSObject {
    NSMutableArray *_imHandles;
    NSMutableArray *_imHandlesQueried;
    NSTimer *_nextQueryTimer;
    int _numberOfQueriesDone;
    NSDate *_timeOfDeath;
    bool_isDead;
}

- (void)_invalidateNextQueryTimer;
- (void)_nextQuery:(id)arg1;
- (void)_scheduleNextQuery:(double)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)setIMHandles:(id)arg1;

@end
