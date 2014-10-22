/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload {
    NSMutableArray *_subdownloads;
}

- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)addSubdownload:(id)arg1;
- (unsigned long long)bytesFetched;
- (void)dealloc;
- (unsigned long long)expectedLength;
- (bool)isComplete;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (void)processResults;
- (void)removeSubdownload:(id)arg1;
- (id)subdownloads;

@end
