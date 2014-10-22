/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CoreDAVTaskGroupDelegate>, ICSDocument, NSString, NSURL;

@interface CalDAVSetOfficeHoursTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {
    ICSDocument *_calendarAvailability;
    NSURL *_inboxURL;
}

@property(retain) ICSDocument * calendarAvailability;
@property(copy,readonly) NSString * debugDescription;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSURL * inboxURL;
@property(readonly) Class superclass;

- (id)calendarAvailability;
- (void)dealloc;
- (id)inboxURL;
- (id)initWithAccountInfoProvider:(id)arg1 inboxURL:(id)arg2 calendarAvailability:(id)arg3 taskManager:(id)arg4;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setCalendarAvailability:(id)arg1;
- (void)setInboxURL:(id)arg1;
- (void)startTaskGroup;

@end
