/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEORouteMatch, MKAnnotationView, NSHashTable, NSString;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {
    MKAnnotationView *_annotationView;
    NSHashTable *_presentationCoordinateObservers;
}

@property MKAnnotationView * annotationView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property struct { double x1; double x2; } presentationCoordinate;
@property double presentationCourse;
@property(retain) GEORouteMatch * routeMatch;
@property(readonly) Class superclass;
@property(getter=isTracking) bool tracking;

- (void).cxx_destruct;
- (void)addPresentationCoordinateChangedObserver:(id)arg1;
- (id)annotationView;
- (bool)isTracking;
- (struct { double x1; double x2; })presentationCoordinate;
- (double)presentationCourse;
- (void)removePresentationCoordinateChangedObserver:(id)arg1;
- (id)routeMatch;
- (void)setAnimatingToCoordinate:(bool)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setTracking:(bool)arg1;

@end
