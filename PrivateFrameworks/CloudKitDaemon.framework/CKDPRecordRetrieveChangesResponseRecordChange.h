/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable <NSCopying> {
    NSString *_etag;
    struct { 
        unsigned int type : 1; 
    } _has;
    CKDPRecord *_record;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRecordType *_recordType;
    int _type;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) BOOL hasEtag;
@property (nonatomic, readonly) BOOL hasRecord;
@property (nonatomic, readonly) BOOL hasRecordIdentifier;
@property (nonatomic, readonly) BOOL hasRecordType;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) CKDPRecord *record;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPRecordType *recordType;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (BOOL)hasEtag;
- (BOOL)hasRecord;
- (BOOL)hasRecordIdentifier;
- (BOOL)hasRecordType;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)record;
- (id)recordIdentifier;
- (id)recordType;
- (void)setEtag:(id)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
