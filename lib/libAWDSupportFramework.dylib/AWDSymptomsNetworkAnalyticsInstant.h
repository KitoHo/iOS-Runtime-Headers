/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSymptomsNetworkAnalyticsInstant : PBCodable <NSCopying> {
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    unsigned long long _connAttempts;
    unsigned long long _connSuccess;
    unsigned long long _cumulInternetOutageSecs;
    unsigned int _dnsServers;
    struct { 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
        unsigned int connAttempts : 1; 
        unsigned int connSuccess : 1; 
        unsigned int cumulInternetOutageSecs : 1; 
        unsigned int packetsIn : 1; 
        unsigned int packetsOut : 1; 
        unsigned int rttMinUsecs : 1; 
        unsigned int timestamp : 1; 
        unsigned int dnsServers : 1; 
        unsigned int networkType : 1; 
        unsigned int penalizedDnsServers : 1; 
        unsigned int hasInternetConn : 1; 
    } _has;
    BOOL _hasInternetConn;
    NSString *_identifier;
    int _networkType;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    unsigned int _penalizedDnsServers;
    unsigned long long _rttMinUsecs;
    unsigned long long _timestamp;
}

@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) unsigned long long connAttempts;
@property (nonatomic) unsigned long long connSuccess;
@property (nonatomic) unsigned long long cumulInternetOutageSecs;
@property (nonatomic) unsigned int dnsServers;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasConnAttempts;
@property (nonatomic) BOOL hasConnSuccess;
@property (nonatomic) BOOL hasCumulInternetOutageSecs;
@property (nonatomic) BOOL hasDnsServers;
@property (nonatomic) BOOL hasHasInternetConn;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic) BOOL hasInternetConn;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasPenalizedDnsServers;
@property (nonatomic) BOOL hasRttMinUsecs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int networkType;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) unsigned int penalizedDnsServers;
@property (nonatomic) unsigned long long rttMinUsecs;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (unsigned long long)connAttempts;
- (unsigned long long)connSuccess;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cumulInternetOutageSecs;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dnsServers;
- (BOOL)hasBytesIn;
- (BOOL)hasBytesOut;
- (BOOL)hasConnAttempts;
- (BOOL)hasConnSuccess;
- (BOOL)hasCumulInternetOutageSecs;
- (BOOL)hasDnsServers;
- (BOOL)hasHasInternetConn;
- (BOOL)hasIdentifier;
- (BOOL)hasInternetConn;
- (BOOL)hasNetworkType;
- (BOOL)hasPacketsIn;
- (BOOL)hasPacketsOut;
- (BOOL)hasPenalizedDnsServers;
- (BOOL)hasRttMinUsecs;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkType;
- (unsigned long long)packetsIn;
- (unsigned long long)packetsOut;
- (unsigned int)penalizedDnsServers;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)rttMinUsecs;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setConnAttempts:(unsigned long long)arg1;
- (void)setConnSuccess:(unsigned long long)arg1;
- (void)setCumulInternetOutageSecs:(unsigned long long)arg1;
- (void)setDnsServers:(unsigned int)arg1;
- (void)setHasBytesIn:(BOOL)arg1;
- (void)setHasBytesOut:(BOOL)arg1;
- (void)setHasConnAttempts:(BOOL)arg1;
- (void)setHasConnSuccess:(BOOL)arg1;
- (void)setHasCumulInternetOutageSecs:(BOOL)arg1;
- (void)setHasDnsServers:(BOOL)arg1;
- (void)setHasHasInternetConn:(BOOL)arg1;
- (void)setHasInternetConn:(BOOL)arg1;
- (void)setHasNetworkType:(BOOL)arg1;
- (void)setHasPacketsIn:(BOOL)arg1;
- (void)setHasPacketsOut:(BOOL)arg1;
- (void)setHasPenalizedDnsServers:(BOOL)arg1;
- (void)setHasRttMinUsecs:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNetworkType:(int)arg1;
- (void)setPacketsIn:(unsigned long long)arg1;
- (void)setPacketsOut:(unsigned long long)arg1;
- (void)setPenalizedDnsServers:(unsigned int)arg1;
- (void)setRttMinUsecs:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
