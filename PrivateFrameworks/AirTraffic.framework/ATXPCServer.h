/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>, NSSet;

@interface ATXPCServer : NSObject {
    NSObject<OS_xpc_object> *_conn;
    NSMutableSet *_connections;
    id _defaultMessageHandler;
    id _disconnectHandler;
    NSMutableDictionary *_handlerMap;
    NSObject<OS_dispatch_source> *_idleTimerSource;
    id _lockdownHandler;
    id _shutdownHandler;
    NSObject<OS_dispatch_queue> *_timerQueue;
    bool_timerHasFiredSinceLastMessage;
}

@property(readonly) NSSet * connections;
@property(copy) id defaultMessageHandler;
@property(copy) id disconnectHandler;
@property(copy) id lockdownHandler;
@property(copy) id shutdownHandler;

- (void).cxx_destruct;
- (id)_connections;
- (bool)_doingWork;
- (void)_handleNewConnection:(id)arg1;
- (id)_handlerForMessageName:(id)arg1;
- (id)_highAvailabilityQueue;
- (void)_rescheduleIdleTimerSourceWithInterval:(double)arg1;
- (void)_resetMessageFlag;
- (void)_runShutdownHandler;
- (id)connections;
- (void)dealloc;
- (id)defaultMessageHandler;
- (id)disconnectHandler;
- (id)initListenerWithServiceName:(id)arg1;
- (id)lockdownHandler;
- (void)setDefaultMessageHandler:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (void)setHandlerForMessageName:(id)arg1 handler:(id)arg2;
- (void)setIdleTimerInterval:(double)arg1;
- (void)setLockdownHandler:(id)arg1;
- (void)setShutdownHandler:(id)arg1;
- (id)shutdownHandler;

@end
