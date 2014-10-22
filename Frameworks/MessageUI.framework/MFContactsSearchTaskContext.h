/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFContactsSearchConsumer>, NSMutableSet, NSString;

@interface MFContactsSearchTaskContext : NSObject {
    <MFContactsSearchConsumer> *_consumer;
    NSMutableSet *_operations;
    NSMutableSet *_searchQueries;
    NSString *_text;
}

@property(readonly) <MFContactsSearchConsumer> * consumer;
@property(readonly) NSMutableSet * operations;
@property(readonly) NSMutableSet * searchQueries;
@property(readonly) NSString * text;

+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;

- (id)consumer;
- (void)dealloc;
- (bool)done;
- (id)operations;
- (id)searchQueries;
- (id)text;

@end
