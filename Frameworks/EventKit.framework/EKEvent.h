/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendarDate, EKEventStore, EKParticipant, NSArray, NSDate, NSNumber, NSString, NSURL;

@interface EKEvent : EKCalendarItem {
    EKCalendarDate *_occurrenceEndDate;
    EKCalendarDate *_occurrenceStartDate;
    EKCalendarDate *_originalOccurrenceEndDate;
    NSNumber *_originalOccurrenceIsAllDay;
    EKCalendarDate *_originalOccurrenceStartDate;
    bool_occurrenceIsAllDay;
    bool_requiresDetachDueToSnoozedAlarm;
}

@property(readonly) NSString * UUID;
@property(getter=isAllDay) bool allDay;
@property(readonly) bool allowsPrivacyLevelModifications;
@property(readonly) NSArray * attachments;
@property(readonly) bool attendeeReplyChanged;
@property int availability;
@property(readonly) long long birthdayPersonID;
@property(readonly) bool canBeRespondedTo;
@property(readonly) bool canDetachSingleOccurrence;
@property(readonly) bool canSetAvailability;
@property(readonly) bool dateChanged;
@property(readonly) double duration;
@property(readonly) double durationIncludingTravel;
@property(readonly) bool eligibleForTravelAdvisories;
@property(readonly) EKCalendarDate * endCalendarDate;
@property(copy) NSDate * endDate;
@property(readonly) struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; } endDateGr;
@property(readonly) NSString * eventIdentifier;
@property(readonly) EKEventStore * eventStore;
@property(readonly) NSURL * externalURL;
@property(copy,readonly) NSDate * initialEndDate;
@property(copy,readonly) NSDate * initialStartDate;
@property unsigned long long invitationStatus;
@property(readonly) bool isAllDayDirty;
@property(readonly) bool isDetached;
@property(readonly) bool isEditable;
@property(readonly) bool isEndDateDirty;
@property(readonly) bool isStartDateDirty;
@property(readonly) bool isStatusDirty;
@property(readonly) bool isTravelTimeEditable;
@property(readonly) bool locationChanged;
@property(readonly) unsigned int modifiedProperties;
@property(readonly) NSDate * occurrenceDate;
@property(copy) EKCalendarDate * occurrenceEndDate;
@property bool occurrenceIsAllDay;
@property(copy) EKCalendarDate * occurrenceStartDate;
@property(readonly) EKParticipant * organizer;
@property(copy) EKCalendarDate * originalOccurrenceEndDate;
@property(copy) NSNumber * originalOccurrenceIsAllDay;
@property(copy) EKCalendarDate * originalOccurrenceStartDate;
@property int participationStatus;
@property(readonly) NSDate * participationStatusModifiedDate;
@property(readonly) int pendingParticipationStatus;
@property long long privacyLevel;
@property bool requiresDetachDueToSnoozedAlarm;
@property(copy) NSString * responseComment;
@property(readonly) bool responseMustApplyToAll;
@property(readonly) EKCalendarDate * startCalendarDate;
@property(readonly) EKCalendarDate * startCalendarDateIncludingTravelTime;
@property(copy) NSDate * startDate;
@property(readonly) struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; } startDateGr;
@property(readonly) NSDate * startDateIncludingTravel;
@property(readonly) int status;
@property(readonly) bool timeChanged;
@property(readonly) bool titleChanged;
@property long long travelAdvisoryBehavior;
@property(readonly) bool travelAdvisoryBehaviorIsEffectivelyEnabled;
@property(readonly) long long travelRoutingMode;
@property double travelTime;
@property(copy,readonly) NSString * uniqueId;

+ (id)eventWithEventStore:(id)arg1;
+ (id)privacyLevelAsString:(long long)arg1;

- (bool)_cancelWithSpan:(int)arg1 error:(id*)arg2;
- (bool)_checkStartDateConstraintAgainstDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2 error:(id*)arg3;
- (id)_commentIconString;
- (id)_dateForNextOccurrence;
- (void)_deleteThisOccurrence;
- (bool)_deleteWithSpan:(int)arg1 error:(id*)arg2;
- (void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(bool)arg3;
- (id)_effectiveTimeZone;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2;
- (bool)_isAllDay;
- (bool)_isInitialOccurrenceDate:(id)arg1;
- (bool)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2;
- (int)_parentParticipationStatus;
- (id)_persistentEvent;
- (void)_sendModifiedNote;
- (bool)_shouldCancelInsteadOfDeleteWithSpan:(int)arg1;
- (bool)_shouldDeclineInsteadOfDelete;
- (id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1;
- (id)_travelTimeInternalDescription;
- (bool)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1;
- (bool)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id*)arg2;
- (bool)_validateDurationConstrainedToRecurrenceInterval;
- (bool)allowsAlarmModifications;
- (bool)allowsCalendarModifications;
- (bool)allowsPrivacyLevelModifications;
- (bool)allowsRecurrenceModifications;
- (bool)attendeeReplyChanged;
- (int)availability;
- (long long)birthdayPersonID;
- (bool)canBeRespondedTo;
- (bool)canDetachSingleOccurrence;
- (bool)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (bool)canSetAvailability;
- (bool)changingAllDayPropertyIsAllowed;
- (void)clearInvitationStatus;
- (bool)commitWithSpan:(int)arg1 error:(id*)arg2;
- (id)committedValueForKey:(id)arg1;
- (long long)compareStartDateWithEvent:(id)arg1;
- (bool)dateChanged;
- (long long)daySpan;
- (void)dealloc;
- (id)description;
- (void)didCommit;
- (id)dirtyPropertiesToSkip;
- (double)duration;
- (double)durationIncludingTravel;
- (bool)eligibleForTravelAdvisories;
- (id)endCalendarDate;
- (id)endDate;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDateGr;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (id)eventIdentifier;
- (id)eventStore;
- (id)exportToICS;
- (id)externalURI;
- (id)externalURL;
- (bool)hasHumanInviteesToDisplay;
- (bool)hasSelfAttendee;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEventStore:(id)arg1;
- (id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2;
- (id)initWithPersistentObject:(id)arg1;
- (id)initialEndDate;
- (id)initialStartDate;
- (unsigned long long)invitationStatus;
- (bool)isAllDay;
- (bool)isAllDayDirty;
- (bool)isDetached;
- (bool)isEditable;
- (bool)isEndDateDirty;
- (bool)isEqual:(id)arg1;
- (bool)isStartDateDirty;
- (bool)isStatusDirty;
- (bool)isTentative;
- (bool)isTravelTimeEditable;
- (bool)locationChanged;
- (unsigned int)modifiedProperties;
- (bool)needsOccurrenceCacheUpdate;
- (id)occurrenceDate;
- (id)occurrenceEndDate;
- (bool)occurrenceIsAllDay;
- (id)occurrenceStartDate;
- (id)originalOccurrenceEndDate;
- (id)originalOccurrenceIsAllDay;
- (id)originalOccurrenceStartDate;
- (int)participationStatus;
- (id)participationStatusModifiedDate;
- (int)pendingParticipationStatus;
- (long long)privacyLevel;
- (id)recurrenceRule;
- (bool)refresh;
- (bool)removeWithSpan:(int)arg1 error:(id*)arg2;
- (bool)requiresDetach;
- (bool)requiresDetachDueToSnoozedAlarm;
- (id)responseComment;
- (bool)responseMustApplyToAll;
- (void)revert;
- (void)rollback;
- (void)setAllDay:(bool)arg1;
- (void)setAvailability:(int)arg1;
- (void)setEndDate:(id)arg1;
- (void)setInvitationStatus:(unsigned long long)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(bool)arg1;
- (void)setOccurrenceEndDate:(id)arg1;
- (void)setOccurrenceIsAllDay:(bool)arg1;
- (void)setOccurrenceStartDate:(id)arg1;
- (void)setOriginalOccurrenceEndDate:(id)arg1;
- (void)setOriginalOccurrenceIsAllDay:(id)arg1;
- (void)setOriginalOccurrenceStartDate:(id)arg1;
- (void)setParticipationStatus:(int)arg1;
- (void)setPrivacyLevel:(long long)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setRequiresDetachDueToSnoozedAlarm:(bool)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTravelAdvisoryBehavior:(long long)arg1;
- (void)setTravelTime:(double)arg1;
- (bool)sg_isCuratedEventFromSuggestionNewerThan:(double)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)sortEKParticipantsIgnoringNonHumans:(id)arg1;
- (id)sortedEKAttachmentsDisplayStrings;
- (id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1;
- (id)startCalendarDate;
- (id)startCalendarDateIncludingTravelTime;
- (id)startDate;
- (id)startDateForRecurrence;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDateGr;
- (id)startDateIncludingTravel;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (int)status;
- (bool)timeChanged;
- (id)title;
- (bool)titleChanged;
- (long long)travelAdvisoryBehavior;
- (bool)travelAdvisoryBehaviorIsEffectivelyEnabled;
- (long long)travelRoutingMode;
- (double)travelTime;
- (id)uniqueId;
- (bool)validateRecurrenceRule:(id)arg1 error:(id*)arg2;
- (bool)validateWithSpan:(int)arg1 error:(id*)arg2;

@end
