/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <HAPAccessoryServerBrowserBTLEDelegate>, CBCentralManager, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate> {
    CBCentralManager *_centralManager;
    <HAPAccessoryServerBrowserBTLEDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMapTable *_discoveredPeripheralsWithAccessories;
    NSMapTable *_identifersWithReachabilityScanTuples;
    NSObject<OS_dispatch_source> *_lostAccessoryServerTimer;
    NSMapTable *_peripheralsWithConnectionRequestTuples;
    NSMutableArray *_powerOnCentralManagerCompletions;
    id _reachabilityCompletion;
    NSMutableArray *_targetedScanAccessoryIdentifiers;
    NSObject<OS_dispatch_source> *_targetedScanTimer;
    bool_performingGeneralScan;
}

@property(retain) CBCentralManager * centralManager;
@property(copy,readonly) NSString * debugDescription;
@property <HAPAccessoryServerBrowserBTLEDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property(copy,readonly) NSString * description;
@property(retain) NSMapTable * discoveredPeripheralsWithAccessories;
@property(readonly) unsigned long long hash;
@property(retain) NSMapTable * identifersWithReachabilityScanTuples;
@property(retain) NSObject<OS_dispatch_source> * lostAccessoryServerTimer;
@property(getter=isPerformingGeneralScan) bool performingGeneralScan;
@property(retain) NSMapTable * peripheralsWithConnectionRequestTuples;
@property(retain) NSMutableArray * powerOnCentralManagerCompletions;
@property(copy) id reachabilityCompletion;
@property(readonly) Class superclass;
@property(retain) NSMutableArray * targetedScanAccessoryIdentifiers;
@property(retain) NSObject<OS_dispatch_source> * targetedScanTimer;

- (void).cxx_destruct;
- (void)_callPowerOnCompletionsWithError:(id)arg1;
- (void)_cancelLostAccessoryServerTimer;
- (void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)_handleConnectionRequestCompletionForPeripheral:(id)arg1;
- (void)_handleTargetedScanTimeout;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1;
- (bool)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id*)arg3 pairingUsername:(id*)arg4;
- (void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1;
- (void)_performTimedConnectionRequestForIdentifier:(id)arg1;
- (void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(id)arg3;
- (void)_powerOnCentralManagerWithCompletion:(id)arg1;
- (void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(id)arg3;
- (void)_removeIdentifiersForReachabilityScan;
- (void)_removeLostAccessoryServers;
- (void)_setupLostAccessoryServerTimer;
- (bool)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1;
- (void)_startDiscoveringAccessoryServers;
- (void)_startScanningForPairingPeers;
- (void)_stopActiveScan;
- (void)_updateTargetedScanTimer;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (id)centralManager;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)connectToBTLEAccessoryServer:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (void)disconnectFromBTLEAccessoryServer:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredPeripheralsWithAccessories;
- (id)identifersWithReachabilityScanTuples;
- (id)initWithQueue:(id)arg1;
- (bool)isPerformingGeneralScan;
- (id)lostAccessoryServerTimer;
- (id)peripheralsWithConnectionRequestTuples;
- (id)powerOnCentralManagerCompletions;
- (void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(id)arg3;
- (id)reachabilityCompletion;
- (void)setCentralManager:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiscoveredPeripheralsWithAccessories:(id)arg1;
- (void)setIdentifersWithReachabilityScanTuples:(id)arg1;
- (void)setLostAccessoryServerTimer:(id)arg1;
- (void)setPerformingGeneralScan:(bool)arg1;
- (void)setPeripheralsWithConnectionRequestTuples:(id)arg1;
- (void)setPowerOnCentralManagerCompletions:(id)arg1;
- (void)setReachabilityCompletion:(id)arg1;
- (void)setReachabilityCompletionHandler:(id)arg1;
- (void)setTargetedScanAccessoryIdentifiers:(id)arg1;
- (void)setTargetedScanTimer:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (id)targetedScanAccessoryIdentifiers;
- (id)targetedScanTimer;

@end
