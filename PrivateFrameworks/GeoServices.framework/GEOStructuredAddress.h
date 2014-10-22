/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOStructuredAddress : PBCodable <NSCopying, GEOURLSerializable> {
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    NSString *_administrativeArea;
    NSString *_administrativeAreaCode;
    NSMutableArray *_areaOfInterests;
    NSString *_country;
    NSString *_countryCode;
    NSMutableArray *_dependentLocalitys;
    NSString *_fullThoroughfare;
    } _geoIds;
    NSString *_inlandWater;
    NSString *_locality;
    NSString *_ocean;
    NSString *_postCode;
    NSString *_postCodeExtension;
    NSString *_postCodeFull;
    NSString *_premise;
    NSString *_premises;
    NSString *_subAdministrativeArea;
    NSString *_subLocality;
    NSMutableArray *_subPremises;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
}

@property(retain) NSString * administrativeArea;
@property(retain) NSString * administrativeAreaCode;
@property(retain) NSMutableArray * areaOfInterests;
@property(retain) NSString * country;
@property(retain) NSString * countryCode;
@property(copy,readonly) NSString * debugDescription;
@property(retain) NSMutableArray * dependentLocalitys;
@property(copy,readonly) NSString * description;
@property(retain) NSString * fullThoroughfare;
@property(readonly) long long* geoIds;
@property(readonly) unsigned long long geoIdsCount;
@property(readonly) bool hasAdministrativeArea;
@property(readonly) bool hasAdministrativeAreaCode;
@property(readonly) bool hasCountry;
@property(readonly) bool hasCountryCode;
@property(readonly) bool hasFullThoroughfare;
@property(readonly) bool hasInlandWater;
@property(readonly) bool hasLocality;
@property(readonly) bool hasOcean;
@property(readonly) bool hasPostCode;
@property(readonly) bool hasPostCodeExtension;
@property(readonly) bool hasPostCodeFull;
@property(readonly) bool hasPremise;
@property(readonly) bool hasPremises;
@property(readonly) bool hasSubAdministrativeArea;
@property(readonly) bool hasSubLocality;
@property(readonly) bool hasSubThoroughfare;
@property(readonly) bool hasThoroughfare;
@property(readonly) unsigned long long hash;
@property(retain) NSString * inlandWater;
@property(retain) NSString * locality;
@property(retain) NSString * ocean;
@property(retain) NSString * postCode;
@property(retain) NSString * postCodeExtension;
@property(retain) NSString * postCodeFull;
@property(retain) NSString * premise;
@property(retain) NSString * premises;
@property(retain) NSString * subAdministrativeArea;
@property(retain) NSString * subLocality;
@property(retain) NSMutableArray * subPremises;
@property(retain) NSString * subThoroughfare;
@property(readonly) Class superclass;
@property(retain) NSString * thoroughfare;

- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (void)addAreaOfInterest:(id)arg1;
- (void)addDependentLocality:(id)arg1;
- (void)addGeoId:(long long)arg1;
- (void)addSubPremise:(id)arg1;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areaOfInterestAtIndex:(unsigned long long)arg1;
- (id)areaOfInterests;
- (unsigned long long)areaOfInterestsCount;
- (void)clearAreaOfInterests;
- (void)clearDependentLocalitys;
- (void)clearGeoIds;
- (void)clearSubPremises;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)countryCode;
- (void)dealloc;
- (id)dependentLocalityAtIndex:(unsigned long long)arg1;
- (id)dependentLocalitys;
- (unsigned long long)dependentLocalitysCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullThoroughfare;
- (long long)geoIdAtIndex:(unsigned long long)arg1;
- (long long*)geoIds;
- (unsigned long long)geoIdsCount;
- (bool)hasAdministrativeArea;
- (bool)hasAdministrativeAreaCode;
- (bool)hasCountry;
- (bool)hasCountryCode;
- (bool)hasFullThoroughfare;
- (bool)hasInlandWater;
- (bool)hasLocality;
- (bool)hasOcean;
- (bool)hasPostCode;
- (bool)hasPostCodeExtension;
- (bool)hasPostCodeFull;
- (bool)hasPremise;
- (bool)hasPremises;
- (bool)hasSubAdministrativeArea;
- (bool)hasSubLocality;
- (bool)hasSubThoroughfare;
- (bool)hasThoroughfare;
- (unsigned long long)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)inlandWater;
- (bool)isEqual:(id)arg1;
- (id)locality;
- (void)mergeFrom:(id)arg1;
- (id)ocean;
- (id)postCode;
- (id)postCodeExtension;
- (id)postCodeFull;
- (id)premise;
- (id)premises;
- (bool)readFrom:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setAreaOfInterests:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDependentLocalitys:(id)arg1;
- (void)setFullThoroughfare:(id)arg1;
- (void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setInlandWater:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setPostCode:(id)arg1;
- (void)setPostCodeExtension:(id)arg1;
- (void)setPostCodeFull:(id)arg1;
- (void)setPremise:(id)arg1;
- (void)setPremises:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubPremises:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subPremiseAtIndex:(unsigned long long)arg1;
- (id)subPremises;
- (unsigned long long)subPremisesCount;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)urlRepresentation;
- (void)writeTo:(id)arg1;

@end
