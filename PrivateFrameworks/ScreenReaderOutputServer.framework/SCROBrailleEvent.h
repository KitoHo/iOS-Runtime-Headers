/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleEvent : NSObject {
    id _data2;
    id _data3;
    id _data;
    int _type;
    bool_shouldDisplay;
}

@property bool shouldDisplay;

+ (id)eventWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
+ (id)eventWithType:(int)arg1 data:(id)arg2;

- (id)data2;
- (id)data3;
- (id)data;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1 data:(id)arg2 data2:(id)arg3 data3:(id)arg4;
- (void)setShouldDisplay:(bool)arg1;
- (bool)shouldDisplay;
- (int)type;

@end
