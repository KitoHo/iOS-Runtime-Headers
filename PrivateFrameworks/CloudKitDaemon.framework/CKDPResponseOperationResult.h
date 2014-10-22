/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying> {
    struct { 
        unsigned int code : 1; 
    int _code;
    CKDPResponseOperationResultError *_error;
    } _has;
}

@property int code;
@property(retain) CKDPResponseOperationResultError * error;
@property bool hasCode;
@property(readonly) bool hasError;

- (void).cxx_destruct;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasCode;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setError:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
