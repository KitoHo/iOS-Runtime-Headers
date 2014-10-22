/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)endpointName;
- (void)eraseEverything;
- (void)onQueueEraseEverything;
- (void)onQueuePrefetch:(id)arg1;
- (void)onQueueShutdown;
- (void)prefetch:(id)arg1;
- (id)remoteObjectProtocol;
- (void)shutdown;
- (bool)withinQueueCanReinitializeRemoteState;
- (void)withinQueueInvalidateState;
- (id)withinQueuePermanentShutdownReason;
- (void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1;
- (void)withinQueueReinitializeRemoteState;

@end
