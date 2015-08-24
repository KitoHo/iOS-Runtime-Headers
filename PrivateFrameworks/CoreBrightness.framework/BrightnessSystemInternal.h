/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemInternal : NSThread <NSXPCListenerDelegate> {
    id /* block */ _callback;
    NSMutableDictionary *_clients;
    NSMutableDictionary *_clientsProps;
    bool _initializationComplete;
    bool _shouldKeepRunning;
    NSTimer *_timer;
    BLControl *bl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)clientConnectedWithExpObj:(id)arg1;
- (void)clientDisconnectedWithExpObj:(id)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (void)destroyServer;
- (id)init;
- (BOOL)isAlsSupported;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)main;
- (void)notifyClientsForProperty:(id)arg1 key:(id)arg2;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)runXPCServer;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)timerFire:(id)arg1;

@end
