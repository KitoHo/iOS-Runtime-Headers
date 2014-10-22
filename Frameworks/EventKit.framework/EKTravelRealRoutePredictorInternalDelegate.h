/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString;

@interface EKTravelRealRoutePredictorInternalDelegate : NSObject <GEORouteHypothesizerDelegate> {
    NSDate *_lastUpdateDate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSDate * lastUpdateDate;
@property(readonly) Class superclass;

- (id)lastUpdateDate;
- (void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2;
- (void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2;
- (void)routeHypothesizerArrived:(id)arg1;
- (void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2;

@end
