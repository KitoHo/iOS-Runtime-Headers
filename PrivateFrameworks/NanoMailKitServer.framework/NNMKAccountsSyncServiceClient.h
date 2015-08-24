/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAccountsSyncServiceClient : NNMKSyncServiceEndpoint {
    <NNMKAccountsSyncServiceClientDelegate> *_delegate;
}

@property (nonatomic) <NNMKAccountsSyncServiceClientDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(int)arg2;
- (id)initWithQueue:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;

@end
