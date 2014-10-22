/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPLocationBound, CKDPRecordFieldIdentifier, CKDPRecordFieldValue;

@interface CKDPQueryFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    CKDPLocationBound *_bounds;
    CKDPRecordFieldIdentifier *_fieldName;
    CKDPRecordFieldValue *_fieldValue;
    } _has;
    int _type;
}

@property(retain) CKDPLocationBound * bounds;
@property(retain) CKDPRecordFieldIdentifier * fieldName;
@property(retain) CKDPRecordFieldValue * fieldValue;
@property(readonly) bool hasBounds;
@property(readonly) bool hasFieldName;
@property(readonly) bool hasFieldValue;
@property bool hasType;
@property int type;

- (void).cxx_destruct;
- (id)bounds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (id)fieldValue;
- (bool)hasBounds;
- (bool)hasFieldName;
- (bool)hasFieldValue;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFieldValue:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
