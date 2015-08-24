/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCompanionSyncedItem : PBCodable <NSCopying, SYObject> {
    MSPBookmarkStorage *_bookmark;
    MSPPinStorage *_pin;
    MSPSearchRequestStorage *_searchRequest;
    NSString *_syncId;
    PBUnknownFields *_unknownFields;
}

@property (nonatomic, retain) MSPBookmarkStorage *bookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL hasBookmark;
@property (nonatomic, readonly) BOOL hasPin;
@property (nonatomic, readonly) BOOL hasSearchRequest;
@property (nonatomic, readonly) BOOL hasSyncId;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MSPPinStorage *pin;
@property (nonatomic, retain) MSPSearchRequestStorage *searchRequest;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *syncId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)bookmark;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBookmark;
- (BOOL)hasPin;
- (BOOL)hasSearchRequest;
- (BOOL)hasSyncId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)pin;
- (BOOL)readFrom:(id)arg1;
- (id)searchRequest;
- (void)setBookmark:(id)arg1;
- (void)setPin:(id)arg1;
- (void)setSearchRequest:(id)arg1;
- (void)setSyncId:(id)arg1;
- (id)syncId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
