/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSIncomingResponse : NSObject {
    NSData *_data;
    NSString *_idsIdentifier;
    unsigned short _messageID;
    id _pbResponse;
    NSString *_requestIDSIdentifier;
    NSDictionary *_requestPersistentUserInfo;
    NSDate *_requestSent;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbResponse;
@property (nonatomic, copy) NSString *requestIDSIdentifier;
@property (nonatomic, retain) NSDictionary *requestPersistentUserInfo;
@property (nonatomic, retain) NSDate *requestSent;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)idsIdentifier;
- (unsigned short)messageID;
- (id)pbResponse;
- (id)requestIDSIdentifier;
- (id)requestPersistentUserInfo;
- (id)requestSent;
- (void)setData:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbResponse:(id)arg1;
- (void)setRequestIDSIdentifier:(id)arg1;
- (void)setRequestPersistentUserInfo:(id)arg1;
- (void)setRequestSent:(id)arg1;

@end
