/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBTLE : HAPAccessoryServer <CBPeripheralDelegate> {
    CBService *_accessoryInfoService;
    NSString *_accessoryPairingUsername;
    unsigned int _availableInstanceID;
    HAPAccessoryServerBrowserBTLE *_browser;
    NSMapTable *_btleCharacteristicToHAPCharacteristicMap;
    NSMapTable *_btleServiceToHAPServiceMap;
    unsigned int _characteristicDiscoveryRequestCount;
    NSObject<OS_dispatch_source> *_connectionLifetimeTimer;
    NSString *_controllerUsername;
    <HAPAccessoryServerBTLEDelegatePrivate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _disconnecting;
    NSMapTable *_hapCharacteristicReadCompletionQueues;
    NSMapTable *_hapCharacteristicWriteCompletionQueues;
    CBCharacteristic *_identifyCharacteristic;
    CBCharacteristic *_manufacturerCharacteristic;
    CBCharacteristic *_modelCharacteristic;
    CBCharacteristic *_pairSetupCharacteristic;
    CBCharacteristic *_pairVerifyCharacteristic;
    id /* block */ _pairVerifyCompletionBlock;
    unsigned long long _pairingFeatureFlags;
    CBCharacteristic *_pairingFeaturesCharacteristic;
    BOOL _pairingFeaturesRead;
    CBService *_pairingService;
    struct PairingSessionPrivate { } *_pairingSession;
    CBCharacteristic *_pairingsCharacteristic;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_readNonce;
    BOOL _removeOnDisconnect;
    CBCharacteristic *_serialNumberCharacteristic;
    NSData *_sessionReadKey;
    NSData *_sessionWriteKey;
    BOOL _startPairingRequested;
    unsigned int _state;
    id /* block */ _unpairedIdentifyCompletionBlock;
    BOOL _unpairedIdentifyRequested;
    NSMutableData *_writeNonce;
}

@property (nonatomic, retain) CBService *accessoryInfoService;
@property (nonatomic, retain) NSString *accessoryPairingUsername;
@property (nonatomic) unsigned int availableInstanceID;
@property (nonatomic) HAPAccessoryServerBrowserBTLE *browser;
@property (nonatomic, retain) NSMapTable *btleCharacteristicToHAPCharacteristicMap;
@property (nonatomic, retain) NSMapTable *btleServiceToHAPServiceMap;
@property (nonatomic) unsigned int characteristicDiscoveryRequestCount;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *connectionLifetimeTimer;
@property (nonatomic, retain) NSString *controllerUsername;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPAccessoryServerBTLEDelegatePrivate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (getter=isDisconnecting, nonatomic) BOOL disconnecting;
@property (nonatomic, retain) NSMapTable *hapCharacteristicReadCompletionQueues;
@property (nonatomic, retain) NSMapTable *hapCharacteristicWriteCompletionQueues;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CBCharacteristic *identifyCharacteristic;
@property (nonatomic, retain) CBCharacteristic *manufacturerCharacteristic;
@property (nonatomic, retain) CBCharacteristic *modelCharacteristic;
@property (nonatomic, retain) CBCharacteristic *pairSetupCharacteristic;
@property (nonatomic, retain) CBCharacteristic *pairVerifyCharacteristic;
@property (nonatomic, copy) id /* block */ pairVerifyCompletionBlock;
@property (nonatomic) unsigned long long pairingFeatureFlags;
@property (nonatomic, retain) CBCharacteristic *pairingFeaturesCharacteristic;
@property (nonatomic) BOOL pairingFeaturesRead;
@property (nonatomic, retain) CBService *pairingService;
@property (nonatomic, retain) CBCharacteristic *pairingsCharacteristic;
@property (nonatomic, retain) CBPeripheral *peripheral;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableData *readNonce;
@property (nonatomic) BOOL removeOnDisconnect;
@property (nonatomic, retain) CBCharacteristic *serialNumberCharacteristic;
@property (nonatomic, retain) NSData *sessionReadKey;
@property (nonatomic, retain) NSData *sessionWriteKey;
@property (nonatomic) BOOL startPairingRequested;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unpairedIdentifyCompletionBlock;
@property (nonatomic) BOOL unpairedIdentifyRequested;
@property (nonatomic, retain) NSMutableData *writeNonce;

+ (id)_convertFromBTLEToHAPUUID:(id)arg1;

- (void).cxx_destruct;
- (void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (id)_btleCharacteristicForHAPCharacteristic:(id)arg1;
- (void)_cancelConnectionLifetimeTimer;
- (void)_checkForAuthPrompt;
- (BOOL)_checkPairedState;
- (void)_createPrimaryAccessoryFromAdvertisementData;
- (id)_decryptData:(id)arg1 error:(id*)arg2;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1;
- (id /* block */)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1;
- (void)_enqueueReadCompletionHandler:(id /* block */)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;
- (void)_enqueueWriteCompletionHandler:(id /* block */)arg1 forCharacteristic:(id)arg2;
- (long)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_establishSecureSession;
- (void)_getAttributeDatabase;
- (void)_handleConnectionLifetimeTimeout;
- (void)_handleDisconnectionWithQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2;
- (void)_handleHAPServiceDiscovery;
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2;
- (long)_handlePairSetupExchangeWithData:(id)arg1;
- (long)_handlePairVerifyExchangeWithData:(id)arg1;
- (void)_handlePairingStateMachine;
- (void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(BOOL)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(BOOL)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_handleSuccessfulBTLEConnection;
- (void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2;
- (id)_hapCharacteristicForBTLECharacteristic:(id)arg1;
- (BOOL)_isSessionEstablished;
- (id)_nextInstanceID;
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;
- (id)_pairSetupHAPCharacteristic;
- (long)_pairSetupStart;
- (long)_pairSetupTryPassword:(id)arg1;
- (id)_pairVerifyHAPCharacteristic;
- (long)_pairVerifyStart;
- (id)_parseBTLEService:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_readValueForCharacteristic:(id)arg1 withCompletionHandler:(id /* block */)arg2 queue:(id)arg3;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_resetState;
- (id)_serverIdentifier;
- (id)_serverName;
- (void)_setupBTLEConnectionToPeripheral;
- (BOOL)_shouldEnableSessionSecurity;
- (void)_updateConnectionLifetimeTimer;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(id /* block */)arg4 queue:(id)arg5;
- (id)accessoryInfoService;
- (id)accessoryPairingUsername;
- (BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (unsigned int)availableInstanceID;
- (id)briefDescription;
- (id)browser;
- (id)btleCharacteristicToHAPCharacteristicMap;
- (id)btleServiceToHAPServiceMap;
- (unsigned int)characteristicDiscoveryRequestCount;
- (id)connectionLifetimeTimer;
- (void)continuePairingAfterAuthPrompt;
- (id)controllerUsername;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)handleConnectionWithError:(id)arg1;
- (void)handleDisconnectionWithError:(id)arg1 withQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)hapCharacteristicReadCompletionQueues;
- (id)hapCharacteristicWriteCompletionQueues;
- (BOOL)hasPairings;
- (id)identifier;
- (id)identifyCharacteristic;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 browser:(id)arg5 keyStore:(id)arg6;
- (BOOL)isDisconnecting;
- (BOOL)isPaired;
- (int)linkType;
- (id)manufacturerCharacteristic;
- (id)modelCharacteristic;
- (id)pairSetupCharacteristic;
- (id)pairVerifyCharacteristic;
- (id /* block */)pairVerifyCompletionBlock;
- (unsigned long long)pairingFeatureFlags;
- (id)pairingFeaturesCharacteristic;
- (BOOL)pairingFeaturesRead;
- (id)pairingService;
- (id)pairingsCharacteristic;
- (id)peripheral;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)queue;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)readNonce;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)removeOnDisconnect;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)serialNumberCharacteristic;
- (id)sessionReadKey;
- (id)sessionWriteKey;
- (void)setAccessoryInfoService:(id)arg1;
- (void)setAccessoryPairingUsername:(id)arg1;
- (void)setAvailableInstanceID:(unsigned int)arg1;
- (void)setBrowser:(id)arg1;
- (void)setBtleCharacteristicToHAPCharacteristicMap:(id)arg1;
- (void)setBtleServiceToHAPServiceMap:(id)arg1;
- (void)setCharacteristicDiscoveryRequestCount:(unsigned int)arg1;
- (void)setConnectionLifetimeTimer:(id)arg1;
- (void)setControllerUsername:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDisconnecting:(BOOL)arg1;
- (void)setHapCharacteristicReadCompletionQueues:(id)arg1;
- (void)setHapCharacteristicWriteCompletionQueues:(id)arg1;
- (void)setIdentifyCharacteristic:(id)arg1;
- (void)setManufacturerCharacteristic:(id)arg1;
- (void)setModelCharacteristic:(id)arg1;
- (void)setPairSetupCharacteristic:(id)arg1;
- (void)setPairVerifyCharacteristic:(id)arg1;
- (void)setPairVerifyCompletionBlock:(id /* block */)arg1;
- (void)setPairingFeatureFlags:(unsigned long long)arg1;
- (void)setPairingFeaturesCharacteristic:(id)arg1;
- (void)setPairingFeaturesRead:(BOOL)arg1;
- (void)setPairingService:(id)arg1;
- (void)setPairingsCharacteristic:(id)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadNonce:(id)arg1;
- (void)setRemoveOnDisconnect:(BOOL)arg1;
- (void)setSerialNumberCharacteristic:(id)arg1;
- (void)setSessionReadKey:(id)arg1;
- (void)setSessionWriteKey:(id)arg1;
- (void)setStartPairingRequested:(BOOL)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setUnpairedIdentifyCompletionBlock:(id /* block */)arg1;
- (void)setUnpairedIdentifyRequested:(BOOL)arg1;
- (void)setWriteNonce:(id)arg1;
- (void)startPairing;
- (BOOL)startPairingRequested;
- (unsigned int)state;
- (BOOL)stopPairingWithError:(id*)arg1;
- (BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (id /* block */)unpairedIdentifyCompletionBlock;
- (BOOL)unpairedIdentifyRequested;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)writeNonce;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;

@end
