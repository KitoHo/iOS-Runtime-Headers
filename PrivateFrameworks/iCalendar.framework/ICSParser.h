/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class ICSTokenizer, NSData;

@interface ICSParser : NSObject {
    NSData *_data;
    ICSTokenizer *_lexer;
    long long _options;
}

@property(readonly) ICSTokenizer * lexer;

+ (id)entitiesFromNSData:(id)arg1 options:(long long)arg2;

- (bool)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2;
- (id)lexer;
- (id)makeComponent:(char *)arg1;
- (void)parseComponent:(id)arg1;
- (id)parseData;
- (void)parseParameter:(id)arg1;
- (bool)parseProperty:(id)arg1;

@end
