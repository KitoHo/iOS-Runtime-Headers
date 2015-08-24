/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    } _parameters;
    double _radius;
    int _status;
}

@property (nonatomic, readonly) double*parameters;
@property (nonatomic, readonly) unsigned int parametersCount;
@property (nonatomic) double radius;
@property (nonatomic) int status;

- (void)addParameters:(double)arg1;
- (void)clearParameters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double*)parameters;
- (double)parametersAtIndex:(unsigned int)arg1;
- (unsigned int)parametersCount;
- (double)radius;
- (BOOL)readFrom:(id)arg1;
- (void)setParameters:(double*)arg1 count:(unsigned int)arg2;
- (void)setRadius:(double)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
