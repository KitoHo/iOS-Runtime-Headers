/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKSource, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface EKUIInviteeAlternativeTimeSearcher : NSObject {
    NSOperationQueue *_availabilityRequestsQueue;
    double _availabilitySearchDurationMultiplier;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_ignoredEventID;
    NSMutableArray *_internalOriginalConflictedParticipants;
    NSDate *_internalOriginalEndDate;
    NSDate *_internalOriginalStartDate;
    NSMutableArray *_internalTimesWhenAllAttendeesCanAttend;
    NSMutableArray *_internalTimesWhenSomeAttendeesCanAttend;
    NSMutableArray *_leftoverSpans;
    NSDate *_nextAvailabilityRangeStartDate;
    NSString *_organizerAddress;
    NSMutableDictionary *_participantAddressesToParticipants;
    NSObject<OS_dispatch_queue> *_processingQueue;
    unsigned long long _remainingSearchAttempts;
    EKSource *_source;
    id _stateChanged;
    bool_availabilityRequestInProgress;
    bool_internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
    bool_internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
}

@property bool availabilityRequestInProgress;
@property(retain) NSOperationQueue * availabilityRequestsQueue;
@property double availabilitySearchDurationMultiplier;
@property(retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property(retain) NSString * ignoredEventID;
@property(retain) NSMutableArray * internalOriginalConflictedParticipants;
@property(retain) NSDate * internalOriginalEndDate;
@property(retain) NSDate * internalOriginalStartDate;
@property bool internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
@property bool internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
@property(retain) NSMutableArray * internalTimesWhenAllAttendeesCanAttend;
@property(retain) NSMutableArray * internalTimesWhenSomeAttendeesCanAttend;
@property(retain) NSMutableArray * leftoverSpans;
@property(retain) NSDate * nextAvailabilityRangeStartDate;
@property(retain) NSString * organizerAddress;
@property(readonly) NSArray * originalConflictedParticipants;
@property(readonly) NSDate * originalEndDate;
@property(readonly) NSDate * originalStartDate;
@property(retain) NSMutableDictionary * participantAddressesToParticipants;
@property(retain) NSObject<OS_dispatch_queue> * processingQueue;
@property unsigned long long remainingSearchAttempts;
@property(readonly) bool searchingForMoreTimesWhenAllAttendeesCanAttend;
@property(readonly) bool searchingForMoreTimesWhenSomeAttendeesCanAttend;
@property(retain) EKSource * source;
@property(copy) id stateChanged;
@property(readonly) NSArray * timesWhenAllAttendeesCanAttend;
@property(readonly) NSArray * timesWhenSomeAttendeesCanAttend;

+ (id)_addressesForParticipants:(id)arg1;
+ (id)_allButFirstItemInArray:(id)arg1;
+ (id)_allButLastItemInArray:(id)arg1;
+ (long long)_binarySearchForIndexOfTimeSpanInArray:(id)arg1 containingDate:(id)arg2;
+ (id)_findHighestRankedNonOptimalTimeSpans:(id)arg1;
+ (id)_findLeftoverSpans:(id)arg1 usingFreeTimes:(id)arg2 andNonOptimalTimes:(id)arg3;
+ (void)_insertUniqueParticipants:(id)arg1 intoExistingParticipantsArray:(id)arg2;
+ (long long)_invalidBinarySearchIndex;
+ (id)_rankNonOptimalTimeSpans:(id)arg1;
+ (id)_selfOrganizerForNewlyScheduledEventWithAddress:(id)arg1;
+ (bool)_span:(id)arg1 hasSameConflictedParticipantsAsSpan:(id)arg2;
+ (void)_validateSpans:(id)arg1;
+ (id)stateAsString:(long long)arg1;

- (void).cxx_destruct;
- (void)_attemptSearch;
- (id)_filterOutUnreasonableTimeSlots:(id)arg1;
- (id)_generateNonOptimalTimesFromTimeSpans:(id)arg1;
- (id)_generateOpenFreeTimesFromTimeSpans:(id)arg1;
- (id)_generateTimeSpansForResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (id)_mergeAdjacentSpansWithSameConflictedParticipants:(id)arg1;
- (id)_participantforParticipantAddress:(id)arg1;
- (void)_processResults:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3;
- (void)_resetSearchFallbackNumbers;
- (void)_sendStateChange:(long long)arg1;
- (id)_spliceLeftTimeSpans:(id)arg1 andNewTimeSpans:(id)arg2;
- (bool)availabilityRequestInProgress;
- (id)availabilityRequestsQueue;
- (double)availabilitySearchDurationMultiplier;
- (id)callbackQueue;
- (void)dealloc;
- (id)ignoredEventID;
- (id)initWithStateChangedCallback:(id)arg1;
- (id)internalOriginalConflictedParticipants;
- (id)internalOriginalEndDate;
- (id)internalOriginalStartDate;
- (bool)internalSearchingForMoreTimesWhenAllAttendeesCanAttend;
- (bool)internalSearchingForMoreTimesWhenSomeAttendeesCanAttend;
- (id)internalTimesWhenAllAttendeesCanAttend;
- (id)internalTimesWhenSomeAttendeesCanAttend;
- (id)leftoverSpans;
- (id)nextAvailabilityRangeStartDate;
- (id)organizerAddress;
- (id)originalConflictedParticipants;
- (id)originalEndDate;
- (id)originalStartDate;
- (id)participantAddressesToParticipants;
- (id)processingQueue;
- (unsigned long long)remainingSearchAttempts;
- (void)resetWithEvent:(id)arg1 organizerAddressForNewlyScheduledEvent:(id)arg2;
- (void)searchForMoreTimesWhenAllAttendeesCanAttend;
- (void)searchForMoreTimesWhenSomeAttendeesCanAttend;
- (bool)searchingForMoreTimesWhenAllAttendeesCanAttend;
- (bool)searchingForMoreTimesWhenSomeAttendeesCanAttend;
- (void)setAvailabilityRequestInProgress:(bool)arg1;
- (void)setAvailabilityRequestsQueue:(id)arg1;
- (void)setAvailabilitySearchDurationMultiplier:(double)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setIgnoredEventID:(id)arg1;
- (void)setInternalOriginalConflictedParticipants:(id)arg1;
- (void)setInternalOriginalEndDate:(id)arg1;
- (void)setInternalOriginalStartDate:(id)arg1;
- (void)setInternalSearchingForMoreTimesWhenAllAttendeesCanAttend:(bool)arg1;
- (void)setInternalSearchingForMoreTimesWhenSomeAttendeesCanAttend:(bool)arg1;
- (void)setInternalTimesWhenAllAttendeesCanAttend:(id)arg1;
- (void)setInternalTimesWhenSomeAttendeesCanAttend:(id)arg1;
- (void)setLeftoverSpans:(id)arg1;
- (void)setNextAvailabilityRangeStartDate:(id)arg1;
- (void)setOrganizerAddress:(id)arg1;
- (void)setParticipantAddressesToParticipants:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setRemainingSearchAttempts:(unsigned long long)arg1;
- (void)setSource:(id)arg1;
- (void)setStateChanged:(id)arg1;
- (id)source;
- (id)stateChanged;
- (id)timesWhenAllAttendeesCanAttend;
- (id)timesWhenSomeAttendeesCanAttend;

@end
