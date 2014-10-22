/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface DASharedCalendarContext : NSObject {
    NSString *_accountID;
    NSString *_calendarID;
    id _completionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    bool_shouldSyncCalendar;
}

@property(readonly) NSString * accountID;
@property(readonly) NSString * calendarID;
@property(copy,readonly) id completionBlock;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property bool shouldSyncCalendar;

- (void).cxx_destruct;
- (id)accountID;
- (id)calendarID;
- (id)completionBlock;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4;
- (id)queue;
- (void)setShouldSyncCalendar:(bool)arg1;
- (bool)shouldSyncCalendar;

@end
