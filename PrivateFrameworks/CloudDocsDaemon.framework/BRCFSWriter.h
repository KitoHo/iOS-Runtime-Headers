/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCAccountSession, NSObject<OS_dispatch_queue>, NSString;

@interface BRCFSWriter : NSObject <BRCModule, BRCFileCoordinationWriting> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BRCAccountSession *_session;
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_suspendCount;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSObject<OS_dispatch_queue> * serialQueue;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyChangesForAliasWithRank:(id)arg1 container:(id)arg2 li:(id)arg3 si:(id)arg4 diffs:(unsigned long long)arg5;
- (void)_stageCreationOfDirectory:(id)arg1;
- (long long)applyAdditionsForItemID:(id)arg1 inContainer:(id)arg2;
- (void)applyChangesForItem:(id)arg1 rank:(id)arg2 inContainer:(id)arg3;
- (void)close;
- (void)fixupItemsAtStartup;
- (id)initWithAccountSession:(id)arg1;
- (void)resume;
- (id)serialQueue;
- (void)stageCreationOfFault:(id)arg1 serverItem:(id)arg2 forCreation:(bool)arg3;
- (void)suspend;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;

@end
