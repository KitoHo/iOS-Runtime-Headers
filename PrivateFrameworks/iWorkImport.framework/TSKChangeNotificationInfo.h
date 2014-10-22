/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKChangeEntry, TSKCountedObserver;

@interface TSKChangeNotificationInfo : NSObject {
    TSKCountedObserver *_countedObserver;
    TSKChangeEntry *_entry;
}

@property(retain,readonly) TSKCountedObserver * countedObserver;
@property(retain,readonly) TSKChangeEntry * entry;

- (id)countedObserver;
- (void)dealloc;
- (id)entry;
- (id)initWithCountedObserver:(id)arg1 changeEntry:(id)arg2;

@end
