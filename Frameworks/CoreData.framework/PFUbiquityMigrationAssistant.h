/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary, NSString, PFUbiquityLocation;

@interface PFUbiquityMigrationAssistant : NSObject {
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSString *_currentModelVersionHash;
    NSString *_localPeerID;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_orderedReceipts;
    NSString *_previousModelVersionHash;
    NSMutableArray *_receiptLocations;
    NSString *_ubiquityName;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property(readonly) NSString * currentModelVersionHash;
@property(readonly) NSString * previousModelVersionHash;

- (void)_populateBaselineAndTransactionLogLocations;
- (id)baselineLocationsByModelVersionHash;
- (bool)canUseReceipts;
- (id)currentModelVersionHash;
- (void)dealloc;
- (bool)electPreviousModelVersionHashFromTransactionLogsError:(id*)arg1;
- (id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3 modelVersionHash:(id)arg4;
- (id)latestBaselineLocationSkipModelVersionHash:(id)arg1;
- (id)latestTransactionLogForModelVersionHash:(id)arg1;
- (id)orderedReceipts;
- (id)previousModelVersionHash;
- (id)receiptLocations;
- (id)transactionLogLocationsByModelVersionHash;
- (id)transactionLogLocationsForModelVersionHash:(id)arg1;

@end
