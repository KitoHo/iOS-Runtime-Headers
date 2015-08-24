/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKGroupInfo : NSObject {
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    BOOL _selected;
    BOOL _showSelectAllButton;
    EKSource *_source;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    NSString *_typeTitle;
}

@property (nonatomic, readonly, retain) NSArray *calendarInfos;
@property (nonatomic, readonly, copy) NSSet *calendarSet;
@property (nonatomic, readonly) BOOL isSubscribed;
@property (nonatomic, readonly) unsigned int numCalendars;
@property (nonatomic, readonly) unsigned int numSelectableCalendars;
@property (nonatomic, readonly) unsigned int numSelectedCalendars;
@property (nonatomic) BOOL selected;
@property (nonatomic, readonly, copy) NSSet *selectedCalendarSet;
@property (nonatomic, readonly) BOOL showAddCalendarButton;
@property (nonatomic, readonly) BOOL showCalendarNameIfSolitary;
@property (nonatomic) BOOL showSelectAllButton;
@property (nonatomic, readonly) int sortOrder;
@property (nonatomic, retain) EKSource *source;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *typeTitle;

- (void).cxx_destruct;
- (id)calendarAtIndex:(unsigned int)arg1;
- (id)calendarInfos;
- (id)calendarSet;
- (id)copyCalendars;
- (id)description;
- (id)init;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (void)insertDeclinedEventsItem;
- (BOOL)isSubscribed;
- (unsigned int)numCalendars;
- (unsigned int)numSelectableCalendars;
- (unsigned int)numSelectedCalendars;
- (void)removeCalendar:(id)arg1;
- (void)selectAll;
- (void)selectNone;
- (BOOL)selected;
- (id)selectedCalendarSet;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setShowSelectAllButton:(BOOL)arg1;
- (void)setSource:(id)arg1;
- (BOOL)showAddCalendarButton;
- (BOOL)showCalendarNameIfSolitary;
- (BOOL)showSelectAllButton;
- (int)sortOrder;
- (id)source;
- (id)title;
- (id)titleForBeginningOfSentence:(BOOL)arg1;
- (id)typeTitle;

@end
