/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    long _SecCMSError;
    struct SecCmsDigestContextStr { } *_digest;
    struct SecCmsEnvelopedDataStr { } *_envelopedData;
    BOOL _isEncrypted;
    struct SecCmsMessageStr { } *_message;
    struct SecCmsSignedDataStr { } *_signedData;
    NSArray *_signers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) long lastSecCMSError;
@property (nonatomic, readonly) NSArray *signers;
@property (readonly) Class superclass;

- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithPartData:(id)arg1 error:(id*)arg2;
- (BOOL)isContentEncrypted;
- (BOOL)isContentSigned;
- (long)lastSecCMSError;
- (id)signedData;
- (id)signers;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id*)arg2;

@end
