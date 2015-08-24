/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying> {
    long long _dataInKB;
    long long _dataOutKB;
    struct { 
        unsigned int dataInKB : 1; 
        unsigned int dataOutKB : 1; 
        unsigned int timestamp : 1; 
        unsigned int secondaryFlowFailureCount : 1; 
        unsigned int secondaryFlowSuccessCount : 1; 
        unsigned int postConnectTcpFallbackCount : 1; 
    } _has;
    NSString *_interfaceName;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _postConnectSubflowFailureErrors;
    BOOL _postConnectTcpFallbackCount;
    int _secondaryFlowFailureCount;
    int _secondaryFlowSuccessCount;
    unsigned long long _timestamp;
}

@property (nonatomic) long long dataInKB;
@property (nonatomic) long long dataOutKB;
@property (nonatomic) BOOL hasDataInKB;
@property (nonatomic) BOOL hasDataOutKB;
@property (nonatomic, readonly) BOOL hasInterfaceName;
@property (nonatomic) BOOL hasPostConnectTcpFallbackCount;
@property (nonatomic) BOOL hasSecondaryFlowFailureCount;
@property (nonatomic) BOOL hasSecondaryFlowSuccessCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic, readonly) int*postConnectSubflowFailureErrors;
@property (nonatomic, readonly) unsigned int postConnectSubflowFailureErrorsCount;
@property (nonatomic) BOOL postConnectTcpFallbackCount;
@property (nonatomic) int secondaryFlowFailureCount;
@property (nonatomic) int secondaryFlowSuccessCount;
@property (nonatomic) unsigned long long timestamp;

- (void)addPostConnectSubflowFailureErrors:(int)arg1;
- (void)clearPostConnectSubflowFailureErrors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataInKB;
- (long long)dataOutKB;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDataInKB;
- (BOOL)hasDataOutKB;
- (BOOL)hasInterfaceName;
- (BOOL)hasPostConnectTcpFallbackCount;
- (BOOL)hasSecondaryFlowFailureCount;
- (BOOL)hasSecondaryFlowSuccessCount;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)interfaceName;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int*)postConnectSubflowFailureErrors;
- (int)postConnectSubflowFailureErrorsAtIndex:(unsigned int)arg1;
- (unsigned int)postConnectSubflowFailureErrorsCount;
- (BOOL)postConnectTcpFallbackCount;
- (BOOL)readFrom:(id)arg1;
- (int)secondaryFlowFailureCount;
- (int)secondaryFlowSuccessCount;
- (void)setDataInKB:(long long)arg1;
- (void)setDataOutKB:(long long)arg1;
- (void)setHasDataInKB:(BOOL)arg1;
- (void)setHasDataOutKB:(BOOL)arg1;
- (void)setHasPostConnectTcpFallbackCount:(BOOL)arg1;
- (void)setHasSecondaryFlowFailureCount:(BOOL)arg1;
- (void)setHasSecondaryFlowSuccessCount:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setPostConnectSubflowFailureErrors:(int*)arg1 count:(unsigned int)arg2;
- (void)setPostConnectTcpFallbackCount:(BOOL)arg1;
- (void)setSecondaryFlowFailureCount:(int)arg1;
- (void)setSecondaryFlowSuccessCount:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
