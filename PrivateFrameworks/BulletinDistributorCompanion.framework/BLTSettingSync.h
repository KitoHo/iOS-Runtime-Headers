/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSettingSync : BLTSettingSyncInternal <BBObserverDelegate, BLTSectionInfoListDelegate, PSYSyncCoordinatorDelegate> {
    PSYSyncCoordinator *_pairedSyncCoordinator;
    NSMutableDictionary *_sectionIDsToInfosToSync;
    BLTSectionInfoList *_sectionInfoList;
    NSObject<OS_dispatch_queue> *_sectionInfoProcessingQueue;
    NSObject<OS_dispatch_queue> *_sectionInfoSenderQueue;
    NSObject<OS_dispatch_semaphore> *_sectionInfoSenderReleaseSignal;
    bool _sendingSectionInfo;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconProcessingQueue;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconSenderQueue;
    NSObject<OS_dispatch_semaphore> *_subsectionParameterIconSenderReleaseSignal;
    int _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enqueueAndSendEffectiveSectionInfo:(id)arg1;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)_sendEffectiveSectionInfo:(id)arg1;
- (void)_sendEffectiveSectionInfo:(id)arg1 waitForAcknowledgement:(BOOL)arg2 withQueue:(id)arg3 andCompletion:(id /* block */)arg4;
- (void)_sendSectionIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(int)arg3 waitForAcknowledgement:(BOOL)arg4 withQueue:(id)arg5 andCompletion:(id /* block */)arg6;
- (void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 withQueue:(id)arg4 andCompletion:(id /* block */)arg5;
- (void)_updateAllBBSectionsWithCompletion:(id /* block */)arg1 withProgress:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (void)removeDNDHandlers;
- (void)sectionInfoList:(id)arg1 receivedEffectiveSectionInfo:(id)arg2;
- (void)setDNDHandlers;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
- (id)universalSectionIDForSectionID:(id)arg1;

@end
