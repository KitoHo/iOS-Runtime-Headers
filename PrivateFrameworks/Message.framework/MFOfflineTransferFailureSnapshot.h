/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding> {
    NSString *_originalMailboxID;
    unsigned long long _originalMessageFlags;
    NSString *_originalRemoteID;
}

@property (nonatomic, readonly) NSString *originalMailboxID;
@property (nonatomic, readonly) unsigned long long originalMessageFlags;
@property (nonatomic, readonly) NSString *originalRemoteID;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalRemoteID:(id)arg1 mailboxID:(id)arg2 messageFlags:(unsigned long long)arg3;
- (id)originalMailboxID;
- (unsigned long long)originalMessageFlags;
- (id)originalRemoteID;

@end
