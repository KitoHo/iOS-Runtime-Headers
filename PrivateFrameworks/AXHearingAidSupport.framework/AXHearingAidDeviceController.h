/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingAidDeviceController : NSObject <AXHADeviceControllerProtocol, CBCentralManagerDelegate> {
    AXHATimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    AXHATimer *_availableDeviceTimer;
    NSMutableArray *_availablePeripherals;
    NSMutableArray *_availableSearchBlocks;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    NSMutableArray *_connectedDevices;
    NSMutableArray *_connectedSearchBlocks;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXHATimer *_deviceUpdatesTimer;
    BOOL _isScanning;
    NSMutableArray *_loadedDevices;
    NSMutableArray *_persistentDevices;
    NSMutableArray *_updateDeviceBlocks;
    NSMutableArray *centralRequestBlocks;
}

@property (nonatomic, retain) NSMutableArray *availablePeripherals;
@property (nonatomic, retain) NSMutableArray *availableSearchBlocks;
@property (nonatomic, retain) NSMutableArray *centralRequestBlocks;
@property (nonatomic, retain) NSMutableArray *connectedDevices;
@property (nonatomic, retain) NSMutableArray *connectedSearchBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NSMutableArray *loadedDevices;
@property (nonatomic, retain) NSMutableArray *persistentDevices;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateDeviceBlocks;

+ (id)sharedController;

- (void)addAvailableDevice:(id)arg1;
- (void)addConnectedDevice:(id)arg1;
- (void)addLoadedDevice:(id)arg1;
- (id)availablePeripherals;
- (id)availableSearchBlocks;
- (void)cancelPendingConnections;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (id)centralRequestBlocks;
- (void)clearAvailableDevices;
- (void)clearConnectedDevices;
- (void)clearLoadedDevices;
- (void)clearMissingHearingAids;
- (void)connectToPeripheral:(id)arg1;
- (id)connectedDevices;
- (id)connectedSearchBlocks;
- (void)dealloc;
- (void)device:(id)arg1 didUpdateProperty:(int)arg2;
- (void)deviceDidFinishLoading:(id)arg1;
- (void)disconnectFromPeripheral:(id)arg1;
- (void)forgetDevice:(id)arg1;
- (id)hearingAidForDeviceID:(id)arg1;
- (id)hearingAidForPeripheral:(id)arg1;
- (id)hearingAidsForUUID:(id)arg1;
- (id)init;
- (BOOL)isBluetoothAvailable;
- (BOOL)isConnected;
- (BOOL)isPartiallyConnected;
- (BOOL)isScanning;
- (id)loadedDevices;
- (void)loadedDevicesDidChange;
- (void)mergeDevice:(id)arg1 withDevice:(id)arg2;
- (void)pairedHearingAidsDidChange;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (BOOL)peripheralIsPaired:(id)arg1;
- (id)persistentDevices;
- (void)registerForPropertyUpdates:(id /* block */)arg1;
- (void)removeAvailableDevice:(id)arg1;
- (void)removeConnectedDevice:(id)arg1;
- (void)removeLoadedDevice:(id)arg1;
- (void)resetConnectionToPeripheral:(id)arg1;
- (void)searchForAvailableDevices;
- (void)searchForAvailableDevicesWithCompletion:(id /* block */)arg1;
- (void)searchForConnectedDevices;
- (void)sendRequestToCentralManager:(id /* block */)arg1;
- (void)setAvailablePeripherals:(id)arg1;
- (void)setAvailableSearchBlocks:(id)arg1;
- (void)setCentralRequestBlocks:(id)arg1;
- (void)setConnectedDevices:(id)arg1;
- (void)setConnectedSearchBlocks:(id)arg1;
- (void)setLoadedDevices:(id)arg1;
- (void)setPersistentDevices:(id)arg1;
- (void)setUpdateDeviceBlocks:(id)arg1;
- (void)stopPropertyUpdates;
- (void)stopSearching;
- (void)unpairPeripheral:(id)arg1;
- (id)updateDeviceBlocks;
- (void)updateProperty:(int)arg1 forDeviceID:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forDeviceID:(id)arg3;

@end
