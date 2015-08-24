/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAOutputStream : NSOutputStream {
    EAAccessory *_accessory;
    struct __CFSocket { } *_cfSocket;
    id _delegate;
    BOOL _hasSpaceAvailable;
    BOOL _hasSpaceAvailableEventSent;
    BOOL _isAtEndEventSent;
    BOOL _isOpenCompletedEventSent;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSRecursiveLock *_runloopLock;
    EASession *_session;
    int _sock;
    struct __CFRunLoopSource { } *_socketRunLoopSource;
    NSRecursiveLock *_statusLock;
    unsigned int _streamStatus;
}

- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_performAtEndOfStreamValidation;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_streamWriteable;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (void)endStream;
- (BOOL)hasSpaceAvailable;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;
- (void)open;
- (void)openCompleted;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;

@end
