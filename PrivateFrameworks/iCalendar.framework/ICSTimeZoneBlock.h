/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent {
}

@property(retain) ICSDate * dtstart;
@property(retain) NSArray * rdate;
@property(retain) NSArray * rrule;
@property NSArray * tzname;
@property long long tzoffsetfrom;
@property long long tzoffsetto;

- (void)addRecurrenceDate:(id)arg1;
- (long long)compare:(id)arg1;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (id)dtstart;
- (id)rdate;
- (id)rrule;
- (void)setDtstart:(id)arg1;
- (void)setRdate:(id)arg1;
- (void)setRrule:(id)arg1;
- (void)setTzname:(id)arg1;
- (void)setTzoffsetfrom:(long long)arg1;
- (void)setTzoffsetto:(long long)arg1;
- (id)tzname;
- (long long)tzoffsetfrom;
- (long long)tzoffsetto;
- (bool)validate:(id*)arg1;

@end
