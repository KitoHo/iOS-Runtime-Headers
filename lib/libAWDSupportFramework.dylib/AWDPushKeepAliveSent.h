/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushKeepAliveSent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int keepAliveACKDuration : 1; 
        unsigned int linkQuality : 1; 
        unsigned int nextKeepAliveInterval : 1; 
        unsigned int timeSinceLastKeepAlive : 1; 
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    } _has;
    unsigned int _keepAliveACKDuration;
    int _linkQuality;
    unsigned int _nextKeepAliveInterval;
    unsigned int _timeSinceLastKeepAlive;
    unsigned long long _timestamp;
}

@property unsigned int connectionType;
@property unsigned int dualChannelState;
@property(retain) NSString * guid;
@property bool hasConnectionType;
@property bool hasDualChannelState;
@property(readonly) bool hasGuid;
@property bool hasKeepAliveACKDuration;
@property bool hasLinkQuality;
@property bool hasNextKeepAliveInterval;
@property bool hasTimeSinceLastKeepAlive;
@property bool hasTimestamp;
@property unsigned int keepAliveACKDuration;
@property int linkQuality;
@property unsigned int nextKeepAliveInterval;
@property unsigned int timeSinceLastKeepAlive;
@property unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dualChannelState;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasDualChannelState;
- (bool)hasGuid;
- (bool)hasKeepAliveACKDuration;
- (bool)hasLinkQuality;
- (bool)hasNextKeepAliveInterval;
- (bool)hasTimeSinceLastKeepAlive;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)keepAliveACKDuration;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nextKeepAliveInterval;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setHasKeepAliveACKDuration:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasNextKeepAliveInterval:(bool)arg1;
- (void)setHasTimeSinceLastKeepAlive:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setKeepAliveACKDuration:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setNextKeepAliveInterval:(unsigned int)arg1;
- (void)setTimeSinceLastKeepAlive:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)timeSinceLastKeepAlive;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
