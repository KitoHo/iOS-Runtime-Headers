/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSLock, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSThread, RadiosPreferences;

@interface MFNetworkController : NSObject <RadiosPreferencesDelegate> {
    NSMutableSet *_backgroundWifiClients;
    NSMutableSet *_calls;
    NSString *_dataIndicator;
    unsigned int _flags;
    int _interface;
    NSLock *_lock;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    RadiosPreferences *_radiosPreferences;
    struct __SCNetworkReachability { } *_reachability;
    struct __CFRunLoop { } *_rl;
    struct __SCDynamicStore { } *_store;
    struct __CFRunLoopSource { } *_store_source;
    struct __CTServerConnection { } *_telephony;
    NSThread *_thread;
    struct __SCPreferences { } *_wiFiPreferences;
    void *_wifiManager;
    bool_data;
    bool_dns;
    bool_hasCellDataCapability;
    bool_hasWiFiCapability;
    bool_isRoamingAllowed;
    bool_isWiFiEnabled;
}

@property void* wifiManager;

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore { }*)arg2;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection { }*)arg3;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_inititializeWifiManager;
- (bool)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (struct { int x1; int x2; })_pollDataAndCallStatus_nts;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability { }*)arg2;
- (void)_setUpTelephony_nts;
- (bool)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(bool)arg2;
- (void)_tearDownTelephony_nts;
- (void)_updateWifiClientType;
- (void)addBackgroundWifiClient:(id)arg1;
- (id)addNetworkObserverBlock:(id)arg1 queue:(id)arg2;
- (void)airplaneModeChanged;
- (id)copyDiagnosticInformation;
- (int)dataStatus;
- (void)dealloc;
- (bool)inAirplaneMode;
- (id)init;
- (void)invalidate;
- (bool)is3GConnection;
- (bool)is4GConnection;
- (bool)isDataAvailable;
- (bool)isFatPipe;
- (bool)isNetworkUp;
- (bool)isOnWWAN;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)removeNetworkObserver:(id)arg1;
- (void)setWifiManager:(void*)arg1;
- (void*)wifiManager;

@end
