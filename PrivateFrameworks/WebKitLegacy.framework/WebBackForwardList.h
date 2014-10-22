/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class WebBackForwardListPrivate, WebHistoryItem;

@interface WebBackForwardList : NSObject {
    WebBackForwardListPrivate *_private;
}

@property(readonly) WebHistoryItem * backItem;
@property(readonly) int backListCount;
@property int capacity;
@property(readonly) WebHistoryItem * currentItem;
@property(readonly) WebHistoryItem * forwardItem;
@property(readonly) int forwardListCount;

+ (void)initialize;

- (void)_close;
- (void)addItem:(id)arg1;
- (id)backItem;
- (int)backListCount;
- (id)backListWithLimit:(int)arg1;
- (int)capacity;
- (bool)containsItem:(id)arg1;
- (id)currentItem;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)finalize;
- (id)forwardItem;
- (int)forwardListCount;
- (id)forwardListWithLimit:(int)arg1;
- (void)goBack;
- (void)goForward;
- (void)goToItem:(id)arg1;
- (id)init;
- (id)initWithBackForwardList:(struct PassRefPtr<WebCore::BackForwardList> { struct BackForwardList {} *x1; })arg1;
- (id)itemAtIndex:(int)arg1;
- (unsigned long long)pageCacheSize;
- (void)removeItem:(id)arg1;
- (void)setCapacity:(int)arg1;
- (void)setPageCacheSize:(unsigned long long)arg1;
- (void)setToMatchDictionaryRepresentation:(id)arg1;

@end
