/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSinkNode : BWNode {
    struct OpaqueFigSimpleMutex { } *_configurationHandlerLock;
    NSMutableArray *_configurationLiveHandlers;
    NSMutableArray *_configurationLiveIDs;
    NSMutableArray *_handlersToCallWhenActive;
    NSMutableArray *_handlersToCallWhenIdle;
    long long _liveConfigurationID;
    int _stateLock;
    FigStateMachine *_stateMachine;
}

@property (readonly) NSString *currentStateDebugString;
@property (readonly) long long liveConfigurationID;

+ (void)initialize;

- (void)_setupSinkNodeStateMachine;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)currentStateDebugString;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)init;
- (long long)liveConfigurationID;
- (id)nodeType;
- (void)notifyWhenActive:(id /* block */)arg1;
- (void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(id /* block */)arg2;
- (void)notifyWhenIdle:(id /* block */)arg1;

@end
