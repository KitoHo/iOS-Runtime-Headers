/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@class <FMFSessionDelegate>, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;
    NSSet *_cachedGetHandlesFollowingMyLocation;
    NSSet *_cachedGetHandlesSharingLocationsWithMe;
    NSMutableDictionary *_cachedLocationForHandleByHandle;
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;
    NSXPCConnection *_connection;
    <FMFSessionDelegate> *_delegate;
    NSOperationQueue *_delegateQueue;
    NSMutableSet *_internalHandles;
    bool_isModelInitialized;
}

@property(retain) NSMutableDictionary * cachedCanShareLocationWithHandleByHandle;
@property(retain) NSSet * cachedGetHandlesFollowingMyLocation;
@property(retain) NSSet * cachedGetHandlesSharingLocationsWithMe;
@property(retain) NSMutableDictionary * cachedLocationForHandleByHandle;
@property(retain) NSMutableDictionary * cachedOfferExpirationForHandleByHandle;
@property(retain) NSXPCConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property <FMFSessionDelegate> * delegate;
@property(retain) NSOperationQueue * delegateQueue;
@property(copy,readonly) NSString * description;
@property(copy) NSSet * handles;
@property(readonly) unsigned long long hash;
@property(retain) NSMutableSet * internalHandles;
@property bool isModelInitialized;
@property(readonly) Class superclass;

+ (bool)FMFAllowed;
+ (bool)FMFRestricted;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (oneway void)_iCloudAccountNameWithCompletion:(id)arg1;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)addHandles:(id)arg1;
- (void)approveFriendshipRequest:(id)arg1 completion:(id)arg2;
- (id)cachedCanShareLocationWithHandleByHandle;
- (id)cachedGetHandlesFollowingMyLocation;
- (id)cachedGetHandlesSharingLocationsWithMe;
- (id)cachedLocationForHandle:(id)arg1;
- (id)cachedLocationForHandleByHandle;
- (id)cachedOfferExpirationForHandleByHandle;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)connection;
- (void)dealloc;
- (void)declineFriendshipRequest:(id)arg1 completion:(id)arg2;
- (id)delegate;
- (id)delegateQueue;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(bool)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)dispatchOnDelegateQueue:(id)arg1;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (void)forceRefresh;
- (void)getAbRecordIdForHandle:(id)arg1 completion:(id)arg2;
- (void)getActiveLocationSharingDevice:(id)arg1;
- (id)getActiveLocationSharingDevice;
- (void)getAllDevices:(id)arg1;
- (id)getAllDevices;
- (void)getAllLocations:(id)arg1;
- (void)getHandlesFollowingMyLocation:(id)arg1;
- (id)getHandlesFollowingMyLocation;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(id)arg2;
- (void)getHandlesSharingLocationsWithMe:(id)arg1;
- (id)getHandlesSharingLocationsWithMe;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(id)arg2;
- (void)getHandlesWithPendingOffers:(id)arg1;
- (id)getHandlesWithPendingOffers;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)getPendingFriendshipRequestsWithCompletion:(id)arg1;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(id)arg3;
- (void)getPrettyNameForHandle:(id)arg1 completion:(id)arg2;
- (id)handles;
- (bool)hasModelInitialized;
- (id)init;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)internalHandles;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (bool)is5XXError:(id)arg1;
- (bool)isModelInitialized;
- (void)isMyLocationEnabled:(id)arg1;
- (bool)isMyLocationEnabled;
- (void)locatingInProgressChanged:(id)arg1;
- (void)locationForHandle:(id)arg1 completion:(id)arg2;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (oneway void)modelDidLoad;
- (oneway void)networkReachabilityUpdated:(bool)arg1;
- (void)receivedMappingPacket:(id)arg1 completion:(id)arg2;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(id)arg4;
- (void)reloadDataIfNotLoaded;
- (void)removeDevice:(id)arg1 completion:(id)arg2;
- (void)removeHandles:(id)arg1;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)serverProxy;
- (void)sessionWasCreatedRefresh;
- (void)setActiveDevice:(id)arg1 completion:(id)arg2;
- (void)setCachedCanShareLocationWithHandleByHandle:(id)arg1;
- (void)setCachedGetHandlesFollowingMyLocation:(id)arg1;
- (void)setCachedGetHandlesSharingLocationsWithMe:(id)arg1;
- (void)setCachedLocationForHandleByHandle:(id)arg1;
- (void)setCachedOfferExpirationForHandleByHandle:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setExpiredInitTimestamp;
- (void)setHandles:(id)arg1;
- (void)setHideMyLocationEnabled:(bool)arg1 completion:(id)arg2;
- (void)setInternalHandles:(id)arg1;
- (void)setIsModelInitialized:(bool)arg1;
- (oneway void)setLocations:(id)arg1;
- (bool)shouldHandleErrorInFWK:(id)arg1;
- (void)startSharingMyLocationToFamilyMemberWithDSID:(id)arg1 completion:(id)arg2;
- (void)stopSharingMyLocationToFamilyMemberWithDSID:(id)arg1 completion:(id)arg2;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (id)verifyRestrictionsAndShowDialogIfRequired;

@end
