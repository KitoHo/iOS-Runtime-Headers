/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSFileAccessNode, NSURL;

@interface NSFileReadingClaim : NSFileAccessClaim {
    long long _linkResolutionCount;
    NSFileAccessNode *_location;
    unsigned long long _options;
    NSFileAccessNode *_rootNode;
    NSURL *_url;
    bool_urlDidChange;
}

- (bool)blocksClaim:(id)arg1;
- (void)dealloc;
- (void)devalueSelf;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(id)arg2;
- (void)granted;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(id)arg4;
- (void)invokeClaimer;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(id)arg1;
- (bool)shouldBeRevokedPriorToInvokingAccessor;

@end
