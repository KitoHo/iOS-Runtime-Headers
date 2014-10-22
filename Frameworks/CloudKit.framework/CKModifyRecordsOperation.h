/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordsOperation : CKDatabaseOperation {
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
    NSData *_clientChangeTokenData;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSMutableArray *_deletedRecordIDs;
    id _modifyRecordsCompletionBlock;
    id _perRecordCompletionBlock;
    id _perRecordProgressBlock;
    NSMutableDictionary *_recordErrors;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSMutableDictionary *_recordsByRecordIDs;
    NSArray *_recordsToSave;
    long long _savePolicy;
    NSMutableArray *_savedRecords;
    bool_atomic;
    bool_shouldOnlySaveAssetContent;
}

@property(retain) NSMutableDictionary * assetsByRecordIDAndRecordKey;
@property bool atomic;
@property(copy) NSData * clientChangeTokenData;
@property(retain) NSDictionary * conflictLosersToResolveByRecordID;
@property(retain) NSMutableArray * deletedRecordIDs;
@property(copy) id modifyRecordsCompletionBlock;
@property(copy) id perRecordCompletionBlock;
@property(copy) id perRecordProgressBlock;
@property(retain) NSMutableDictionary * recordErrors;
@property(copy) NSArray * recordIDsToDelete;
@property(copy) NSDictionary * recordIDsToDeleteToEtags;
@property(retain) NSMutableDictionary * recordsByRecordIDs;
@property(copy) NSArray * recordsToSave;
@property long long savePolicy;
@property(retain) NSMutableArray * savedRecords;
@property bool shouldOnlySaveAssetContent;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)assetsByRecordIDAndRecordKey;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (id)deletedRecordIDs;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id)modifyRecordsCompletionBlock;
- (id)perRecordCompletionBlock;
- (id)perRecordProgressBlock;
- (void)performCKOperation;
- (id)recordErrors;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsByRecordIDs;
- (id)recordsToSave;
- (long long)savePolicy;
- (id)savedRecords;
- (void)setAssetsByRecordIDAndRecordKey:(id)arg1;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setModifyRecordsCompletionBlock:(id)arg1;
- (void)setPerRecordCompletionBlock:(id)arg1;
- (void)setPerRecordProgressBlock:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsByRecordIDs:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setSavedRecords:(id)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;

@end
