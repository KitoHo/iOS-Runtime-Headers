/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDAccessoryManager, HMDCloudDataSyncManager, HMDCloudDataSyncStateFilter, HMDIDSMessageDispatcher, HMDIdentityRegistry, HMDMessageFilterChain, HMDNameValidator, HMDPersistentStore, HMDPowerManager, HMMessageDispatcher, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface HMDHomeManager : NSObject <HMMessageReceiver, IDSServiceDelegate, HMDAccessoryManagerDelegate> {
    NSObject<OS_dispatch_source> *_accessoryFinderTimer;
    HMDAccessoryManager *_accessoryManager;
    NSMutableDictionary *_associatedRemotePeers;
    HMDCloudDataSyncManager *_cloudDataSyncManager;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
    unsigned long long _cloudOperationRetryCount;
    NSObject<OS_dispatch_source> *_cloudOperationRetryTimer;
    NSObject<OS_dispatch_source> *_cloudUploadTimer;
    unsigned long long _generationCounter;
    NSMutableDictionary *_homeNames;
    NSMutableArray *_homes;
    HMDIdentityRegistry *_identityRegistry;
    HMDIDSMessageDispatcher *_idsMessageDispatcher;
    HMMessageDispatcher *_messageDispatcher;
    HMDMessageFilterChain *_msgFilterChain;
    HMDNameValidator *_nameValidator;
    long long _networkConnectionAvailable;
    NSMutableArray *_pendingAccessoryTransactions;
    NSMutableDictionary *_pendingDataSyncAcks;
    NSMutableDictionary *_pendingRemoteSessions;
    NSMutableArray *_pendingResponsesForAccessoryFinder;
    NSMutableSet *_pendingResponsesForRemoteAccessSetup;
    HMDPowerManager *_powerManager;
    NSUUID *_primaryHomeUUID;
    struct __SCNetworkReachability { } *_reachability;
    HMDPersistentStore *_store;
    NSMutableSet *_unassociatedRemotePeers;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    bool_accountActive;
    bool_accountStatusFailedDueToNetworkFailure;
    bool_backOffOperationInProgress;
    bool_lastAnswerForShouldCloudSyncData;
    bool_newiCloudAccountAdded;
    bool_uploadToCloudIsPending;
}

@property(retain) NSObject<OS_dispatch_source> * accessoryFinderTimer;
@property(retain) HMDAccessoryManager * accessoryManager;
@property bool accountActive;
@property bool accountStatusFailedDueToNetworkFailure;
@property(retain) NSMutableDictionary * associatedRemotePeers;
@property bool backOffOperationInProgress;
@property(retain) HMDCloudDataSyncManager * cloudDataSyncManager;
@property(retain) HMDCloudDataSyncStateFilter * cloudDataSyncStateFilter;
@property unsigned long long cloudOperationRetryCount;
@property(retain) NSObject<OS_dispatch_source> * cloudOperationRetryTimer;
@property(retain) NSObject<OS_dispatch_source> * cloudUploadTimer;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property unsigned long long generationCounter;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableDictionary * homeNames;
@property(retain) NSMutableArray * homes;
@property(retain) HMDIdentityRegistry * identityRegistry;
@property(retain) HMDIDSMessageDispatcher * idsMessageDispatcher;
@property bool lastAnswerForShouldCloudSyncData;
@property(retain) HMMessageDispatcher * messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property(retain) HMDMessageFilterChain * msgFilterChain;
@property(retain) HMDNameValidator * nameValidator;
@property long long networkConnectionAvailable;
@property bool newiCloudAccountAdded;
@property(retain) NSMutableArray * pendingAccessoryTransactions;
@property(retain) NSMutableDictionary * pendingDataSyncAcks;
@property(retain) NSMutableDictionary * pendingRemoteSessions;
@property(retain) NSMutableArray * pendingResponsesForAccessoryFinder;
@property(retain) NSMutableSet * pendingResponsesForRemoteAccessSetup;
@property(retain) HMDPowerManager * powerManager;
@property(retain) NSUUID * primaryHomeUUID;
@property struct __SCNetworkReachability { }* reachability;
@property(retain) HMDPersistentStore * store;
@property(readonly) Class superclass;
@property(retain) NSMutableSet * unassociatedRemotePeers;
@property bool uploadToCloudIsPending;
@property(retain) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

+ (id)activeAccountIdentifier;
+ (id)getCurrentUserID;
+ (bool)shouldDisableCloudDataSync;

- (void).cxx_destruct;
- (void)_acceptHomeInvite:(id)arg1;
- (void)_accessoriesAreLocallyReachableOnTransientDevice:(bool)arg1 forHome:(id)arg2;
- (id)_accessoryIdentifiersForHome:(id)arg1;
- (void)_addPairingForRemoteAccessPoint:(id)arg1 destination:(id)arg2 controllerInfo:(id)arg3 forHome:(id)arg4;
- (void)_addPendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_autoAddUser:(id)arg1 destination:(id)arg2 forHome:(id)arg3;
- (void)_cancelAccessoryFinderTimer;
- (void)_checkForRemotePeers;
- (void)_configureHomes:(id)arg1;
- (void)_electRemoteAccessPeerForHome:(id)arg1;
- (void)_eraseConfigurationWithCompletionHandler:(id)arg1;
- (bool)_eraseLocalHomeConfiguration:(bool)arg1;
- (void)_fetchDataFromCloud;
- (id)_filterAccessories:(id)arg1 inHome:(id)arg2;
- (id)_filterAccessories:(id)arg1 withUUIDs:(id)arg2;
- (bool)_findAnyAccessoryWithIdentities:(id)arg1 inAccessories:(id)arg2;
- (void)_findRemotePeerContainingAccessories:(id)arg1 forHome:(id)arg2;
- (void)_handleAccessHomeInvite:(id)arg1;
- (void)_handleAccountStatusDetermined:(id)arg1;
- (void)_handleAddRemoteAccessRequest:(id)arg1;
- (void)_handleAreYouAtHome:(id)arg1;
- (void)_handleControllerKeyAvailable;
- (void)_handleDataFromCloudWithHomes:(id)arg1 primaryHome:(id)arg2 accessories:(id)arg3 needConflictResolution:(bool)arg4;
- (void)_handleDoYouSeeUnpairedAccessories:(id)arg1;
- (void)_handleElectDeviceForIDSSession:(id)arg1;
- (void)_handleHomeDataSync:(id)arg1;
- (void)_handleIDSAccountStatusChanged:(id)arg1;
- (void)_handleLogControl:(id)arg1;
- (void)_handlePrimaryAccountDeleted:(id)arg1;
- (void)_handlePrimaryAccountModified:(id)arg1;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)_handleRemoteSessionTornDown:(id)arg1;
- (void)_handleRequestAddHome:(id)arg1;
- (void)_handleRequestFetchHomeConfiguration:(id)arg1;
- (void)_handleRequestIsUserUsingHomeKit:(id)arg1;
- (void)_handleRequestRemoveHome:(id)arg1;
- (void)_handleRequestSetPrimaryHome:(id)arg1;
- (void)_handleRequestSubmitAWDMetric:(id)arg1;
- (void)_handleResetConfiguration:(id)arg1;
- (void)_handleResetHome:(id)arg1;
- (void)_handleUserRemoved:(id)arg1;
- (id)_homeWithName:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (void)_mergeHomeDataWithRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(bool)arg4 idsDataSync:(bool)arg5;
- (void)_monitorReachability;
- (void)_postHomesDidUpdateNotification;
- (void)_postiCloudSigninState:(bool)arg1;
- (void)_processAnyPendingRequestsForRemoteAccess:(bool)arg1;
- (void)_pushChangesForHome:(id)arg1 toRegularUsersOfHome:(id)arg2;
- (void)_pushChangesForHome:(id)arg1 toRemoteDevicesOnSameAccount:(id)arg2;
- (void)_pushChangesToAllUsersOfAllHomes;
- (void)_pushChangesToCloud;
- (void)_pushChangesToUsers:(id)arg1 forHome:(id)arg2;
- (void)_pushChangesToUsersThatHaveNotAcknowledged;
- (void)_registerForMessages;
- (void)_removeAllUsersOfHome:(id)arg1;
- (void)_removeFromUnassociatedPeers:(id)arg1;
- (void)_removeHome:(id)arg1 withMessage:(id)arg2;
- (void)_removePendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_resetCloudOperationRetryCounters;
- (void)_retryCloudOperationWithName:(id)arg1 completionHandler:(id)arg2;
- (void)_saveToPersistentStore;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(bool)arg3;
- (void)_saveWithReason:(id)arg1 postSyncNotification:(bool)arg2;
- (void)_sendInviteRequestToUser:(id)arg1 forHome:(id)arg2 confirm:(bool)arg3 queue:(id)arg4 completionHandler:(id)arg5;
- (void)_sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)_sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3;
- (void)_startAccessoryFinderTimer;
- (void)_startAccessoryFinderTimerExpired;
- (void)_startCloudOperationRetryWithTimeout:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)_startScanningForAccessories:(id)arg1;
- (void)_startTimerToResetCloudOperationRetryCounter;
- (void)_startUploadTimer;
- (void)_stopCloudOperationRetryTimer;
- (void)_stopUploadTimer;
- (void)_suspendXPCConnectionAndMergeRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(bool)arg4 idsDataSync:(bool)arg5 completionHandler:(id)arg6;
- (void)_teardownRemoteAccessForHome:(id)arg1;
- (void)_updateCloudDataSyncWithAccountState:(bool)arg1;
- (void)_uploadHomeConfigToCloud;
- (void)accessoriesAreLocallyReachableOnTransientDevice:(bool)arg1 forHome:(id)arg2;
- (id)accessoryFinderTimer;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (id)accessoryManager;
- (bool)accountActive;
- (bool)accountStatusFailedDueToNetworkFailure;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)associatedRemotePeers;
- (bool)backOffOperationInProgress;
- (void)checkTimerTriggersForHomes;
- (id)cloudDataSyncManager;
- (id)cloudDataSyncStateFilter;
- (unsigned long long)cloudOperationRetryCount;
- (id)cloudOperationRetryTimer;
- (id)cloudUploadTimer;
- (bool)doesSaveReasonAffectOnlyLocalData:(id)arg1;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (unsigned long long)generationCounter;
- (void)handleBackgroundTaskAgentJob:(const char *)arg1 forHomeWithUUID:(id)arg2;
- (id)homeNames;
- (id)homes;
- (id)identifiersOfAccessories:(id)arg1;
- (void)identifiersOfAccessoriesFromLocalAccessoryTransactions:(id*)arg1 accessoriesRemoved:(id*)arg2;
- (id)identityRegistry;
- (id)idsMessageDispatcher;
- (id)initWithMessageDispatcher:(id)arg1 idsMessageDispatcher:(id)arg2 accessoryManager:(id)arg3 messageFilterChain:(id)arg4 homes:(id)arg5 primaryHome:(id)arg6 identityRegistry:(id)arg7 store:(id)arg8;
- (bool)isThisDeviceAdminOfHome:(id)arg1;
- (bool)lastAnswerForShouldCloudSyncData;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgFilterChain;
- (id)nameValidator;
- (long long)networkConnectionAvailable;
- (bool)newiCloudAccountAdded;
- (void)notifyPrimaryHomeUpdated:(id)arg1;
- (void)notifySyncDataChanged;
- (id)pendingAccessoryTransactions;
- (id)pendingDataSyncAcks;
- (id)pendingRemoteSessions;
- (id)pendingResponsesForAccessoryFinder;
- (id)pendingResponsesForRemoteAccessSetup;
- (void)postHomesDidUpdateNotification;
- (id)powerManager;
- (id)primaryHomeUUID;
- (struct __SCNetworkReachability { }*)reachability;
- (id)remotePeerDeviceAddress:(id)arg1;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (void)saveRequestFromHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(bool)arg4;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(bool)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(bool)arg2;
- (void)sendInviteRequestToUser:(id)arg1 forHome:(id)arg2 confirm:(bool)arg3 queue:(id)arg4 completionHandler:(id)arg5;
- (void)sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3;
- (void)setAccessoryFinderTimer:(id)arg1;
- (void)setAccessoryManager:(id)arg1;
- (void)setAccountActive:(bool)arg1;
- (void)setAccountStatusFailedDueToNetworkFailure:(bool)arg1;
- (void)setAssociatedRemotePeers:(id)arg1;
- (void)setBackOffOperationInProgress:(bool)arg1;
- (void)setCloudDataSyncManager:(id)arg1;
- (void)setCloudDataSyncStateFilter:(id)arg1;
- (void)setCloudOperationRetryCount:(unsigned long long)arg1;
- (void)setCloudOperationRetryTimer:(id)arg1;
- (void)setCloudUploadTimer:(id)arg1;
- (void)setGenerationCounter:(unsigned long long)arg1;
- (void)setHomeNames:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setHomesConfigured:(bool)arg1;
- (void)setIdentityRegistry:(id)arg1;
- (void)setIdsMessageDispatcher:(id)arg1;
- (void)setLastAnswerForShouldCloudSyncData:(bool)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setMsgFilterChain:(id)arg1;
- (void)setNameValidator:(id)arg1;
- (void)setNetworkConnectionAvailable:(long long)arg1;
- (void)setNewiCloudAccountAdded:(bool)arg1;
- (void)setPendingAccessoryTransactions:(id)arg1;
- (void)setPendingDataSyncAcks:(id)arg1;
- (void)setPendingRemoteSessions:(id)arg1;
- (void)setPendingResponsesForAccessoryFinder:(id)arg1;
- (void)setPendingResponsesForRemoteAccessSetup:(id)arg1;
- (void)setPowerManager:(id)arg1;
- (void)setPrimaryHomeUUID:(id)arg1;
- (void)setReachability:(struct __SCNetworkReachability { }*)arg1;
- (void)setStore:(id)arg1;
- (void)setUnassociatedRemotePeers:(id)arg1;
- (void)setUploadToCloudIsPending:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)store;
- (id)unassociatedRemotePeers;
- (bool)uploadToCloudIsPending;
- (id)uuid;
- (id)workQueue;

@end
