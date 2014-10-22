/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSMutableArray;

@interface MFIMAPCommandPipeline : NSObject {
    unsigned int _full : 1;
    unsigned int _sending : 1;
    unsigned long long _chunkSize;
    unsigned long long _expectedSize;
    NSMutableArray *_fetchUnits;
}

- (void)_removeFetchUnitMatchingResponse:(id)arg1;
- (void)addFetchCommandForUid:(unsigned int)arg1 fetchItem:(id)arg2 expectedLength:(unsigned long long)arg3 bodyDataConsumer:(id)arg4 consumerSection:(id)arg5;
- (unsigned long long)chunkSize;
- (void)dealloc;
- (unsigned long long)expectedSize;
- (id)failureResponsesFromSendingCommandsWithConnection:(id)arg1;
- (bool)isFull;
- (bool)isSending;
- (void)setChunkSize:(unsigned long long)arg1;
- (void)setFull:(bool)arg1;

@end
