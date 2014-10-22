/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCNotificationPipe;

@interface BRCNotificationGatherer : NSObject {
    id _gatherReply;
    BRCNotificationPipe *_pipe;
}

- (void).cxx_destruct;
- (bool)continueGatheringWithBatchSize:(unsigned long long)arg1;
- (void)done;
- (id)initWithNotificationPipe:(id)arg1 reply:(id)arg2;
- (void)invalidate;

@end
