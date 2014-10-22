/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentCalendar, NSDate, NSString;

@interface EKPersistentInviteReplyNotification : EKPersistentObject {
}

@property(readonly) bool alerted;
@property(readonly) EKPersistentCalendar * calendar;
@property(readonly) NSString * calendarName;
@property(readonly) NSDate * creationDate;
@property(readonly) NSString * shareeAddress;
@property(readonly) NSString * shareeDisplayName;
@property(readonly) NSString * shareeFirstName;
@property(readonly) NSString * shareeLastName;
@property(readonly) int status;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (bool)alerted;
- (id)calendar;
- (id)calendarName;
- (id)creationDate;
- (id)shareeAddress;
- (id)shareeDisplayName;
- (id)shareeFirstName;
- (id)shareeLastName;
- (int)status;

@end
