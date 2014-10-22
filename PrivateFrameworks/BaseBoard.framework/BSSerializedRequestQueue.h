/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface BSSerializedRequestQueue : NSObject {
    id _conditionBlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain,readonly) NSObject<OS_dispatch_queue> * serialQueue;

- (void)_enqueueSerialConditionalRequest:(id)arg1;
- (void)dealloc;
- (void)enqueueAsyncRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(id)arg3;
- (id)serialQueue;

@end
