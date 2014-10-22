/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessageCriterion, NSIndexSet;

@interface _MFLibraryContentIndexResultsKey : NSObject {
    MFMessageCriterion *_criterion;
    NSIndexSet *_mailboxIDs;
}

@property(retain) MFMessageCriterion * criterion;
@property(copy) NSIndexSet * mailboxIDs;

- (id)criterion;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxIDs;
- (void)setCriterion:(id)arg1;
- (void)setMailboxIDs:(id)arg1;

@end
