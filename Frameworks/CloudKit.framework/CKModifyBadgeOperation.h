/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CKModifyBadgeOperation : CKOperation {
    unsigned long long _badgeValue;
    id _modifyBadgeCompletionBlock;
}

@property unsigned long long badgeValue;
@property(copy) id modifyBadgeCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (unsigned long long)badgeValue;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithBadgeValue:(unsigned long long)arg1;
- (id)modifyBadgeCompletionBlock;
- (void)performCKOperation;
- (void)setBadgeValue:(unsigned long long)arg1;
- (void)setModifyBadgeCompletionBlock:(id)arg1;

@end
