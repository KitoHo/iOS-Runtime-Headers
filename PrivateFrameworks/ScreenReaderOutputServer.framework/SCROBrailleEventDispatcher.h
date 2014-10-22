/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {
    NSMutableArray *_brailleEventQueue;
    struct __CFArray { } *_queue;
    NSLock *_queueLock;
    struct __CFRunLoopSource { } *_queueSource;
    struct __CFRunLoop { } *_runLoop;
    id _target;
    bool_isValid;
}

- (void)_processQueue;
- (void)dealloc;
- (void)enqueueEvent:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (void)start;

@end
