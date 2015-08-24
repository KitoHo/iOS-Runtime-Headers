/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRouteRequest : GEODirectionsRequest

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)init;
- (id)initWithFeedback:(id)arg1;
- (id)initWithQuickETARequest:(id)arg1 withFeedback:(id)arg2;
- (Class)responseClass;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (void)_commonSetup:(id)arg1;
- (id)initWithDirectionsRequest:(id)arg1 origin:(id)arg2 destination:(id)arg3 withFeedback:(id)arg4;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

- (void)fetchDirectionsWithCompletion:(id /* block */)arg1;
- (id)initWithDeparture:(double)arg1;
- (id)initWithOrigin:(id)arg1 andDestination:(id)arg2 departure:(double)arg3;
- (id)initWithZilch:(id)arg1 departure:(double)arg2;

@end
