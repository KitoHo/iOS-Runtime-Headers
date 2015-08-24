/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceRequestTicket : NSObject <GEOMapServiceTicket> {
    BOOL _canceled;
    <GEOMapItem> *_mapItemToRefine;
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    GEOMapRegion *_resultBoundingRegion;
    GEOMapServiceTraits *_traits;
}

@property (getter=isCanceled, nonatomic, readonly) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)_processRequest:(id)arg1 withHandler:(id /* block */)arg2 refinedHandler:(id /* block */)arg3 networkActivity:(id /* block */)arg4;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3;
- (BOOL)isCanceled;
- (id)resultBoundingRegion;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (id)traits;

@end
