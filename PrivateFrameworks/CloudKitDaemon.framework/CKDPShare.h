/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPShareIdentifier, NSData, NSMutableArray, NSString;

@interface CKDPShare : PBCodable <NSCopying> {
    struct { 
        unsigned int resourceState : 1; 
    } _has;
    NSData *_keyData;
    NSString *_keyVersion;
    NSMutableArray *_participants;
    NSData *_resource;
    NSString *_resourceProvider;
    int _resourceState;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) bool hasKeyData;
@property(readonly) bool hasKeyVersion;
@property(readonly) bool hasResource;
@property(readonly) bool hasResourceProvider;
@property bool hasResourceState;
@property(readonly) bool hasShareId;
@property(retain) NSData * keyData;
@property(retain) NSString * keyVersion;
@property(retain) NSMutableArray * participants;
@property(retain) NSData * resource;
@property(retain) NSString * resourceProvider;
@property int resourceState;
@property(retain) CKDPShareIdentifier * shareId;

- (void).cxx_destruct;
- (void)addParticipant:(id)arg1;
- (void)clearParticipants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKeyData;
- (bool)hasKeyVersion;
- (bool)hasResource;
- (bool)hasResourceProvider;
- (bool)hasResourceState;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyData;
- (id)keyVersion;
- (void)mergeFrom:(id)arg1;
- (id)participantAtIndex:(unsigned long long)arg1;
- (id)participants;
- (unsigned long long)participantsCount;
- (bool)readFrom:(id)arg1;
- (id)resource;
- (id)resourceProvider;
- (int)resourceState;
- (void)setHasResourceState:(bool)arg1;
- (void)setKeyData:(id)arg1;
- (void)setKeyVersion:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setResource:(id)arg1;
- (void)setResourceProvider:(id)arg1;
- (void)setResourceState:(int)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
