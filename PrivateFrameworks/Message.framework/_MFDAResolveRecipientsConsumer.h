/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject <DAResolveRecipientsConsumer> {
    MFConditionLock *_conditionLock;
    NSError *_error;
    NSDictionary *_resolvedRecipientsByEmailAddress;
}

@property(readonly) NSError * error;

- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)error;
- (id)init;
- (void)resolvedRecipientsByEmailAddress:(id)arg1;
- (id)waitForResolvedRecipients;

@end
