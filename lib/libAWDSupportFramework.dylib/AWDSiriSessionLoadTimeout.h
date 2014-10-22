/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDSiriSessionLoadTimeout : PBCodable <NSCopying> {
    struct { 
        unsigned int connectionTechnology : 1; 
        unsigned int interfaceIndex : 1; 
        unsigned int sendBufferSize : 1; 
        unsigned int timestamp : 1; 
        unsigned int wwanPreferred : 1; 
    unsigned long long _connectionTechnology;
    NSString *_connectionURL;
    } _has;
    unsigned long long _interfaceIndex;
    unsigned long long _sendBufferSize;
    unsigned long long _timestamp;
    bool_wwanPreferred;
}

@property unsigned long long connectionTechnology;
@property(retain) NSString * connectionURL;
@property bool hasConnectionTechnology;
@property(readonly) bool hasConnectionURL;
@property bool hasInterfaceIndex;
@property bool hasSendBufferSize;
@property bool hasTimestamp;
@property bool hasWwanPreferred;
@property unsigned long long interfaceIndex;
@property unsigned long long sendBufferSize;
@property unsigned long long timestamp;
@property bool wwanPreferred;

- (unsigned long long)connectionTechnology;
- (id)connectionURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionTechnology;
- (bool)hasConnectionURL;
- (bool)hasInterfaceIndex;
- (bool)hasSendBufferSize;
- (bool)hasTimestamp;
- (bool)hasWwanPreferred;
- (unsigned long long)hash;
- (unsigned long long)interfaceIndex;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sendBufferSize;
- (void)setConnectionTechnology:(unsigned long long)arg1;
- (void)setConnectionURL:(id)arg1;
- (void)setHasConnectionTechnology:(bool)arg1;
- (void)setHasInterfaceIndex:(bool)arg1;
- (void)setHasSendBufferSize:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWwanPreferred:(bool)arg1;
- (void)setInterfaceIndex:(unsigned long long)arg1;
- (void)setSendBufferSize:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWwanPreferred:(bool)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;
- (bool)wwanPreferred;

@end
