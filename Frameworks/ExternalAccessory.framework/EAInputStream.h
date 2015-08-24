/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAInputStream : NSInputStream {
    EAAccessory *_accessory;
    id _delegate;
    BOOL _hasNewBytesAvailable;
    char *_inputFromAccBuffer;
    NSCondition *_inputFromAccCondition;
    NSMutableData *_inputFromAccData;
    NSObject<OS_dispatch_queue> *_inputFromAccQueue;
    BOOL _isAtEndEventSent;
    BOOL _isOpenCompletedEventSent;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSRecursiveLock *_runloopLock;
    EASession *_session;
    int _sock;
    NSObject<OS_dispatch_source> *_sockListenSource;
    NSRecursiveLock *_statusLock;
    unsigned int _streamStatus;
}

- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_performAtEndOfStreamValidation;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (void)endStream;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int*)arg2;
- (BOOL)hasBytesAvailable;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;
- (void)open;
- (void)openCompleted;
- (id)propertyForKey:(id)arg1;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned int)streamStatus;

@end
