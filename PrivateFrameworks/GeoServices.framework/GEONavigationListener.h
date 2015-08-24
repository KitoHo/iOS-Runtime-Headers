/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavigationListener : NSObject {
    NSObject<OS_xpc_object> *_connection;
    id /* block */ _guidanceStateUpdatedHandler;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _routeSummaryUpdatedHandler;
}

@property (nonatomic, copy) id /* block */ guidanceStateUpdatedHandler;
@property (nonatomic, copy) id /* block */ routeSummaryUpdatedHandler;

- (void)_closeConnection;
- (void)_createConnection;
- (void)_request:(id)arg1;
- (void)dealloc;
- (id /* block */)guidanceStateUpdatedHandler;
- (id)initWithQueue:(id)arg1;
- (void)requestGuidanceState;
- (void)requestRouteSummary;
- (id /* block */)routeSummaryUpdatedHandler;
- (void)setGuidanceStateUpdatedHandler:(id /* block */)arg1;
- (void)setRouteSummaryUpdatedHandler:(id /* block */)arg1;

@end
