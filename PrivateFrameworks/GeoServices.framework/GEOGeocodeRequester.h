/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGeocodeRequester : NSObject {
    NSMapTable *_pendingBatchGeocodes;
    NSMapTable *_pendingGeocodes;
    NSLock *_pendingGeocodesLock;
}

+ (void)_countryProvidersDidChange:(id)arg1;
+ (id)sharedGeocodeRequester;

- (void)batchReverseGeocode:(id)arg1 success:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;
- (void)cancelBatchReverseGeocode:(id)arg1;
- (void)cancelGeocode:(id)arg1;
- (void)dealloc;
- (void)forwardGeocode:(id)arg1 success:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;
- (id)init;
- (void)reverseGeocode:(id)arg1 success:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

@end
