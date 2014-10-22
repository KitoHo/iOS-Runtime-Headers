/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOVersionManifest, NSMutableArray, NSString;

@interface GEOActiveTileGroup : PBCodable <NSCopying> {
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_autocompleteURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSString *_forwardGeocoderURL;
    unsigned int _identifier;
    NSString *_locationShiftURL;
    NSString *_mapMatchURL;
    NSString *_polyLocationShiftURL;
    NSString *_problemCategoriesURL;
    NSString *_problemNotificationAvailabilityURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSString *_regionalResourcesURL;
    NSString *_releaseInfo;
    NSMutableArray *_resources;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_searchURL;
    NSString *_simpleETAURL;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    NSString *_usageURL;
    GEOVersionManifest *_versionManifest;
}

@property(retain) NSString * addressCorrectionInitURL;
@property(retain) NSString * addressCorrectionUpdateURL;
@property(retain) NSMutableArray * announcementsSupportedLanguages;
@property(retain) NSString * announcementsURL;
@property(retain) NSMutableArray * attributions;
@property(retain) NSString * autocompleteURL;
@property(retain) NSString * batchReverseGeocoderURL;
@property(retain) NSString * directionsURL;
@property(retain) NSString * dispatcherURL;
@property(retain) NSString * etaURL;
@property(retain) NSString * forwardGeocoderURL;
@property(readonly) bool hasAddressCorrectionInitURL;
@property(readonly) bool hasAddressCorrectionUpdateURL;
@property(readonly) bool hasAnnouncementsURL;
@property(readonly) bool hasAutocompleteURL;
@property(readonly) bool hasBatchReverseGeocoderURL;
@property(readonly) bool hasDirectionsURL;
@property(readonly) bool hasDispatcherURL;
@property(readonly) bool hasEtaURL;
@property(readonly) bool hasForwardGeocoderURL;
@property(readonly) bool hasLocationShiftURL;
@property(readonly) bool hasMapMatchURL;
@property(readonly) bool hasPolyLocationShiftURL;
@property(readonly) bool hasProblemCategoriesURL;
@property(readonly) bool hasProblemNotificationAvailabilityURL;
@property(readonly) bool hasProblemOptInURL;
@property(readonly) bool hasProblemStatusURL;
@property(readonly) bool hasProblemSubmissionURL;
@property(readonly) bool hasRegionalResourcesURL;
@property(readonly) bool hasReleaseInfo;
@property(readonly) bool hasResourcesURL;
@property(readonly) bool hasReverseGeocoderURL;
@property(readonly) bool hasReverseGeocoderVersionsURL;
@property(readonly) bool hasSearchAttributionManifestURL;
@property(readonly) bool hasSearchURL;
@property(readonly) bool hasSimpleETAURL;
@property(readonly) bool hasUniqueIdentifier;
@property(readonly) bool hasUsageURL;
@property(readonly) bool hasVersionManifest;
@property unsigned int identifier;
@property(retain) NSString * locationShiftURL;
@property(retain) NSString * mapMatchURL;
@property(retain) NSString * polyLocationShiftURL;
@property(retain) NSString * problemCategoriesURL;
@property(retain) NSString * problemNotificationAvailabilityURL;
@property(retain) NSString * problemOptInURL;
@property(retain) NSString * problemStatusURL;
@property(retain) NSString * problemSubmissionURL;
@property(retain) NSMutableArray * regionalResourceRegions;
@property(retain) NSMutableArray * regionalResourceTiles;
@property(retain) NSString * regionalResourcesURL;
@property(retain) NSString * releaseInfo;
@property(retain) NSMutableArray * resources;
@property(retain) NSString * resourcesURL;
@property(retain) NSString * reverseGeocoderURL;
@property(retain) NSString * reverseGeocoderVersionsURL;
@property(retain) NSString * searchAttributionManifestURL;
@property(retain) NSString * searchURL;
@property(retain) NSString * simpleETAURL;
@property(retain) NSMutableArray * tileSets;
@property(retain) NSString * uniqueIdentifier;
@property(retain) NSString * usageURL;
@property(retain) GEOVersionManifest * versionManifest;

- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (void)_resetBestLanguages;
- (id)activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)addRegionalResourceTile:(id)arg1;
- (void)addResource:(id)arg1;
- (void)addTileSet:(id)arg1;
- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)announcementsURL;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)autocompleteURL;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)batchReverseGeocoderURL;
- (void)clearAnnouncementsSupportedLanguages;
- (void)clearAttributions;
- (void)clearRegionalResourceRegions;
- (void)clearRegionalResourceTiles;
- (void)clearResources;
- (void)clearTileSets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (id)etaURL;
- (id)flatRegionalResourceTilesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)forwardGeocoderURL;
- (bool)hasAddressCorrectionInitURL;
- (bool)hasAddressCorrectionUpdateURL;
- (bool)hasAnnouncementsURL;
- (bool)hasAutocompleteURL;
- (bool)hasBatchReverseGeocoderURL;
- (bool)hasDirectionsURL;
- (bool)hasDispatcherURL;
- (bool)hasEtaURL;
- (bool)hasForwardGeocoderURL;
- (bool)hasLocationShiftURL;
- (bool)hasMapMatchURL;
- (bool)hasPolyLocationShiftURL;
- (bool)hasProblemCategoriesURL;
- (bool)hasProblemNotificationAvailabilityURL;
- (bool)hasProblemOptInURL;
- (bool)hasProblemStatusURL;
- (bool)hasProblemSubmissionURL;
- (bool)hasRegionalResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)hasRegionalResourcesURL;
- (bool)hasReleaseInfo;
- (bool)hasResourcesURL;
- (bool)hasReverseGeocoderURL;
- (bool)hasReverseGeocoderVersionsURL;
- (bool)hasSearchAttributionManifestURL;
- (bool)hasSearchURL;
- (bool)hasSimpleETAURL;
- (bool)hasUniqueIdentifier;
- (bool)hasUsageURL;
- (bool)hasVersionManifest;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)locationShiftURL;
- (id)mapMatchURL;
- (void)mergeFrom:(id)arg1;
- (id)multiTileURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 useStatusCodes:(bool*)arg2;
- (id)polyLocationShiftURL;
- (id)problemCategoriesURL;
- (id)problemNotificationAvailabilityURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (bool)readFrom:(id)arg1;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (id)regionalResourceRegions;
- (unsigned long long)regionalResourceRegionsCount;
- (id)regionalResourceRegionsForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (id)regionalResourceTiles;
- (unsigned long long)regionalResourceTilesCount;
- (id)regionalResourcesURL;
- (id)releaseInfo;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (id)resources;
- (unsigned long long)resourcesCount;
- (id)resourcesURL;
- (id)reverseGeocoderURL;
- (id)reverseGeocoderVersionsURL;
- (id)searchAttributionManifestURL;
- (id)searchURL;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setAutocompleteURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setForwardGeocoderURL:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setLocationShiftURL:(id)arg1;
- (void)setMapMatchURL:(id)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemNotificationAvailabilityURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setRegionalResourceRegions:(id)arg1;
- (void)setRegionalResourceTiles:(id)arg1;
- (void)setRegionalResourcesURL:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (void)setReverseGeocoderURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSearchURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setTileSets:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUsageURL:(id)arg1;
- (void)setVersionManifest:(id)arg1;
- (id)simpleETAURL;
- (bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (id)tileSets;
- (unsigned long long)tileSetsCount;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)uniqueIdentifier;
- (id)usageURL;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)versionManifest;
- (void)writeTo:(id)arg1;

@end
