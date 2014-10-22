/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVStyleAttribute : PBCodable <NSCopying> {
    struct { 
        unsigned int intValue : 1; 
    } _has;
    int _intValue;
    unsigned int _key;
}

@property bool hasIntValue;
@property int intValue;
@property unsigned int key;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntValue;
- (unsigned long long)hash;
- (int)intValue;
- (bool)isEqual:(id)arg1;
- (unsigned int)key;
- (bool)readFrom:(id)arg1;
- (void)setHasIntValue:(bool)arg1;
- (void)setIntValue:(int)arg1;
- (void)setKey:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
