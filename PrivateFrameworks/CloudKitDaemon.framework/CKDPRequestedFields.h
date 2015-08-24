/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRequestedFields : PBCodable <NSCopying> {
    NSMutableArray *_fields;
}

@property (nonatomic, retain) NSMutableArray *fields;

- (void).cxx_destruct;
- (void)addFields:(id)arg1;
- (void)clearFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fields;
- (id)fieldsAtIndex:(unsigned int)arg1;
- (unsigned int)fieldsCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end
