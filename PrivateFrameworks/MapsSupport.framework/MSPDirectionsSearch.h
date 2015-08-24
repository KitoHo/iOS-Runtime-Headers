/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPDirectionsSearch : PBCodable <NSCopying> {
    GEOStorageRouteRequestStorage *_routeRequestStorage;
    PBUnknownFields *_unknownFields;
}

@property (nonatomic, readonly) BOOL hasRouteRequestStorage;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRouteRequestStorage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeRequestStorage;
- (void)setRouteRequestStorage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
