/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFStream, NSArray, NSCondition, NSData, NSInvocation, NSString;

@interface _MFSocket : NSObject {
    NSString *_accountIdentifier;
    NSArray *_clientCertificates;
    NSCondition *_condition;
    struct __CFString { } *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSString *_host;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    NSString *_protocol;
    NSString *_service;
    NSString *_sourceApplicationBundleIdentifier;
    MFStream *_stream;
    bool_allowsTrustPrompt;
    bool_socketCanRead;
    bool_socketCanWrite;
    bool_usesOpportunisticSockets;
}

@property(copy) NSString * accountIdentifier;
@property bool allowsTrustPrompt;
@property(retain) NSArray * clientCertificates;
@property(readonly) bool isCellularConnection;
@property(readonly) bool isReadable;
@property(readonly) bool isValid;
@property(readonly) bool isWritable;
@property(readonly) NSString * remoteHostname;
@property(readonly) unsigned int remotePortNumber;
@property(readonly) NSArray * serverCertificates;
@property(copy) NSString * sourceApplicationBundleIdentifier;
@property(readonly) NSData * sourceIPAddress;
@property int timeout;
@property bool usesOpportunisticSockets;

- (unsigned int)_bufferedByteCount;
- (bool)_startSSLHandshakeWithProtocol:(id)arg1 disableSSL2:(bool)arg2 errorPtr:(id*)arg3;
- (void)abort;
- (id)accountIdentifier;
- (bool)allowsTrustPrompt;
- (id)clientCertificates;
- (bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (void)dealloc;
- (void)enableThroughputMonitoring:(bool)arg1;
- (id)init;
- (bool)isCellularConnection;
- (bool)isReadable;
- (bool)isValid;
- (bool)isWritable;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)remoteHostname;
- (unsigned int)remotePortNumber;
- (id)securityProtocol;
- (id)serverCertificates;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAllowsTrustPrompt:(bool)arg1;
- (void)setClientCertificates:(id)arg1;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (void)setEventHandler:(id)arg1;
- (bool)setSecurityProtocol:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setTimeout:(int)arg1;
- (void)setUsesOpportunisticSockets:(bool)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceIPAddress;
- (int)timeout;
- (bool)usesOpportunisticSockets;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
