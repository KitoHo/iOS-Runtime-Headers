/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@class <CUIKSingleDayTimelineLayoutScreenUtils>, <CUIKSingleDayTimelineViewItem>, CUIKSingleDayTimelineLayoutPartition, NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {
    CUIKSingleDayTimelineLayoutPartition *_correspondingPartition;
    NSMutableArray *_currentOccurrences;
    double _originalFitnessLevel;
    <CUIKSingleDayTimelineLayoutScreenUtils> *_screenUtilsDelegate;
    double _temporaryFitnessLevel;
    <CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtBeginning;
    <CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtEnd;
    bool_ignoreFirstOccurrenceInFitnessCalculations;
    bool_ignoreLastOccurrenceInFitnessCalculations;
    bool_isOnlyBucket;
    bool_originalFitnessLevelRequiresCalculation;
    bool_temporaryFitnessLevelRequiresCalculation;
    bool_useTemporaryFitnessLevel;
}

@property(retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;
@property(retain) NSMutableArray * currentOccurrences;
@property bool isOnlyBucket;
@property(readonly) NSArray * occurrences;

- (void).cxx_destruct;
- (id)_occurrencesForFitnessLevel;
- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;
- (void)addOccurrenceTemporarilyToEnd:(id)arg1;
- (id)correspondingPartition;
- (id)currentOccurrences;
- (id)earliestOccurrence;
- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3;
- (bool)isOnlyBucket;
- (void)makeTemporaryChangesPermanent;
- (id)occurrences;
- (void)removeOccurrenceAtBeginningTemporarily;
- (void)removeOccurrenceAtEndTemporarily;
- (void)revertTemporaryChanges;
- (void)setCorrespondingPartition:(id)arg1;
- (void)setCurrentOccurrences:(id)arg1;
- (void)setIsOnlyBucket:(bool)arg1;
- (void)stampFramesOntoOccurrences;

@end
