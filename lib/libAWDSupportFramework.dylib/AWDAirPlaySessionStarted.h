/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlaySessionStarted : PBCodable <NSCopying> {
    unsigned int _audioCompressionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioCompressionType : 1; 
        unsigned int initiator : 1; 
        unsigned int sessionType : 1; 
        unsigned int transportType : 1; 
    } _has;
    unsigned int _initiator;
    unsigned int _sessionType;
    NSString *_sessionUUID;
    unsigned long long _timestamp;
    unsigned int _transportType;
}

@property (nonatomic) unsigned int audioCompressionType;
@property (nonatomic) BOOL hasAudioCompressionType;
@property (nonatomic) BOOL hasInitiator;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int initiator;
@property (nonatomic) unsigned int sessionType;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;

- (unsigned int)audioCompressionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAudioCompressionType;
- (BOOL)hasInitiator;
- (BOOL)hasSessionType;
- (BOOL)hasSessionUUID;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (unsigned int)initiator;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)sessionType;
- (id)sessionUUID;
- (void)setAudioCompressionType:(unsigned int)arg1;
- (void)setHasAudioCompressionType:(BOOL)arg1;
- (void)setHasInitiator:(BOOL)arg1;
- (void)setHasSessionType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setInitiator:(unsigned int)arg1;
- (void)setSessionType:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
