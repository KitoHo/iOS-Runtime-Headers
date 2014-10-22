/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFCompanionServiceManagerProtocol>, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString;

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver> {
    NSString *_deviceID;
    NSString *_deviceIP;
    NSString *_deviceName;
    NSString *_identifier;
    <SFCompanionServiceManagerProtocol> *_managerProxy;
    NSObject<OS_dispatch_semaphore> *_managerSemaphore;
    NSMutableDictionary *_services;
    NSMutableDictionary *_streamHandlers;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * deviceID;
@property(copy) NSString * deviceIP;
@property(copy) NSString * deviceName;
@property(readonly) unsigned long long hash;
@property(copy) NSString * identifier;
@property(retain) <SFCompanionServiceManagerProtocol> * managerProxy;
@property NSObject<OS_dispatch_semaphore> * managerSemaphore;
@property(retain) NSMutableDictionary * services;
@property(retain) NSMutableDictionary * streamHandlers;
@property(readonly) Class superclass;

+ (id)serviceManager;

- (void)dealloc;
- (id)deviceID;
- (id)deviceIP;
- (id)deviceName;
- (void)disableStreamSupportForIdentifier:(id)arg1;
- (void)getStreamsForData:(id)arg1 withStreamHandler:(id)arg2;
- (id)identifier;
- (id)init;
- (id)managerProxy;
- (id)managerSemaphore;
- (void)retrieveManagerProxy;
- (id)serviceForIdentifier:(id)arg1;
- (id)services;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceIP:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManagerProxy:(id)arg1;
- (void)setManagerSemaphore:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setStreamHandlers:(id)arg1;
- (void)signalSemaphore;
- (id)streamDataForIdentifier:(id)arg1;
- (id)streamHandlers;
- (void)streamToService:(id)arg1 withFileHandle:(id)arg2 acceptReply:(id)arg3;
- (void)streamsFromFileHandle:(id)arg1 withCompletionHandler:(id)arg2;
- (void)supportStreamsWithIdentifier:(id)arg1 withStreamHandler:(id)arg2;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidInvalidate:(id)arg1;

@end
