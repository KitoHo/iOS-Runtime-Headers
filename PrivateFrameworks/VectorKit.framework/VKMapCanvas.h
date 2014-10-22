/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <GEORoutePreloadSession>, <VKInteractiveMapDelegate>, <VKRouteMatchedAnnotationPresentation>, <VKTrackableAnnotation>, GEOMapRegion, NSArray, NSString, VKAnchorWrapper, VKCamera, VKMapCameraController, VKMapModel, VKPolylineOverlayPainter, VKStyleManager;

@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKOverlayContainerRouteDelegate, VKInteractiveMap> {
    struct CGSize { 
        double width; 
        double height; 
    VKMapCameraController *_cameraController;
    VKCamera *_defaultTrackingCamera;
    <VKInteractiveMapDelegate> *_delegate;
    } _lastCanvasSize;
    float _lastValidCanvasSizeZoomLevel;
    VKMapModel *_map;
    bool_hasLastValidCanvasSizeZoomLevel;
}

@property bool allowDatelineWraparound;
@property(readonly) double altitude;
@property(getter=isAnimatingToTrackAnnotation,readonly) bool animatingToTrackAnnotation;
@property long long annotationTrackingZoomStyle;
@property struct { double x1; double x2; double x3; } centerCoordinate;
@property(copy,readonly) NSString * debugDescription;
@property bool debugDynamicMapModesEnabled;
@property(retain) VKCamera * defaultTrackingCamera;
@property <VKInteractiveMapDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property bool dynamicMapModesEnabled;
@property(readonly) VKAnchorWrapper * externalAnchors;
@property(retain) NSArray * externalTrafficIncidents;
@property(retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter;
@property(getter=isFullyDrawn,readonly) bool fullyDrawn;
@property(getter=isFullyPitched,readonly) bool fullyPitched;
@property(readonly) unsigned long long hash;
@property bool isPitchable;
@property bool labelMarkerSelectionEnabled;
@property long long labelScaleFactor;
@property bool localizeLabels;
@property(readonly) VKMapModel * map;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) GEOMapRegion * mapRegionOfInterest;
@property long long mapType;
@property(readonly) double maximumZoomLevel;
@property(readonly) double minimumZoomLevel;
@property long long navigationShieldSize;
@property(readonly) double pitch;
@property(getter=isPitched,readonly) bool pitched;
@property(readonly) double presentationYaw;
@property <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property(retain) <GEORoutePreloadSession> * routePreloadSession;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;
@property long long shieldIdiom;
@property long long shieldSize;
@property bool shouldLoadFallbackTiles;
@property bool shouldLoadMapMargin;
@property bool showsBuildings;
@property bool showsPointsOfInterest;
@property bool staysCenteredDuringPinch;
@property bool staysCenteredDuringRotation;
@property(retain) VKStyleManager * styleManager;
@property(readonly) Class superclass;
@property(readonly) <VKTrackableAnnotation> * trackingAnnotation;
@property int trackingCameraPanStyle;
@property(getter=isTrackingHeading,readonly) bool trackingHeading;
@property double trackingZoomScale;
@property bool trafficEnabled;
@property double userZoomFocusStyleGroundspanMeters;
@property double userZoomFocusStyleMaxGroundspanMeters;
@property double userZoomFocusStyleMinGroundspanMeters;
@property(readonly) NSArray * visibleTileSets;
@property(readonly) double yaw;

+ (bool)supportsMapType:(long long)arg1 scale:(int)arg2;

- (id).cxx_construct;
- (struct CGPoint { double x1; double x2; })_centerScreenPoint;
- (void)_resetMaximumZoomLevel;
- (void)_setMaximumZoomLevel:(double)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(unsigned long long)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)_updateViewTransform;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(bool)arg2;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (bool)allowDatelineWraparound;
- (double)altitude;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (id)annotationCoordinateTest;
- (id)annotationMarkerDeselectionCallback;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 avoidCurrent:(bool)arg2;
- (id)annotationMarkers;
- (id)annotationRectTest;
- (long long)annotationTrackingZoomStyle;
- (id)attributionsForCurrentRegion;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(bool)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(bool)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(bool)arg2;
- (void)cameraController:(id)arg1 pouncingToCameraPosition:(struct VKPoint { double x1; double x2; double x3; })arg2 orientation:(const struct { double x1[4][4]; }*)arg3;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(bool)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (bool)canEnter3DMode;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)clearScene;
- (void)clearSceneIsEffectivelyHidden:(bool)arg1;
- (id)consoleString:(bool)arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToCameraModelPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertCoordinateToPoint:(struct { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertMapPointToPoint:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (struct { double x1; double x2; })convertPointToMapPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)currentSceneRequiresMSAA;
- (double)currentZoomLevel;
- (bool)currentZoomLevelAllowsRotation;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (void)dealloc;
- (bool)debugDynamicMapModesEnabled;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)defaultTrackingCamera;
- (id)delegate;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)deselectLabelMarker;
- (id)detailedDescription;
- (void)didStartPanningDeceleration;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (bool)dynamicMapModesEnabled;
- (struct VKEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (void)enter3DMode;
- (void)exit3DMode;
- (id)externalAnchors;
- (id)externalTrafficIncidents;
- (id)focusedLabelsPolylinePainter;
- (void)forceSceneLoad;
- (void)gglWillDrawWithTimestamp;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (id)initShouldRasterize:(bool)arg1 contentScale:(double)arg2 target:(id)arg3 device:(const struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; }*)arg4 inBackground:(bool)arg5 locale:(id)arg6;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (bool)isAnimatingToTrackAnnotation;
- (bool)isFullyDrawn;
- (bool)isFullyPitched;
- (bool)isPitchable;
- (bool)isPitched;
- (bool)isPointValidForGesturing:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isShowingNoDataPlaceholders;
- (bool)isTrackingHeading;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 selectableLabelsOnly:(bool)arg2;
- (bool)labelMarkerSelectionEnabled;
- (id)labelMarkers;
- (long long)labelScaleFactor;
- (bool)localizeLabels;
- (id)map;
- (void)mapModel:(id)arg1 didUpdateContainsOverlay:(bool)arg2;
- (void)mapModel:(id)arg1 didUpdateNavigationPuckSize:(float)arg2;
- (void)mapModel:(id)arg1 needsPanByOffset:(struct CGPoint { double x1; double x2; })arg2 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg3 animated:(bool)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)mapModel:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(bool)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (bool)mapModelInNav:(id)arg1;
- (bool)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelWillBecomFullyDrawn:(id)arg1;
- (double)mapModelZoomScale:(id)arg1;
- (id)mapRegion;
- (id)mapRegionOfInterest;
- (long long)mapType;
- (double)maximumZoomLevel;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevel;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (id)navTileSource;
- (long long)navigationShieldSize;
- (void)overlayContainer:(id)arg1 updatedMatchedSection:(struct fast_shared_ptr<vk::RouteLineSection> { struct _fast_shared_ptr_control {} *x1; })arg2 index:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3;
- (id)overlays;
- (void)panWithOffset:(struct CGPoint { double x1; double x2; })arg1 relativeToScreenPoint:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;
- (void)pauseTracking;
- (id)persistentOverlays;
- (double)pitch;
- (void)preloadNavigationSceneResourcesWithDevice:(const struct shared_ptr<ggl::Device> { struct Device {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (double)presentationYaw;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; boolx3; }*)arg2;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)reloadStylesheet;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(unsigned long long)arg2 setupHandler:(id)arg3;
- (void)resetRenderQueue:(struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)resetTileContainers;
- (bool)restoreViewportFromInfo:(id)arg1;
- (id)routeLineSplitAnnotation;
- (id)routePreloadSession;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (struct VKPoint { double x1; double x2; double x3; })screenPointForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (void)selectLabelMarker:(id)arg1;
- (id)selectedAnnotationMarker;
- (id)selectedLabelMarker;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)setAnnotationTrackingZoomStyle:(long long)arg1;
- (void)setApplicationState:(unsigned int)arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(bool)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(id)arg7;
- (void)setContentsScale:(double)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugDynamicMapModesEnabled:(bool)arg1;
- (void)setDefaultTrackingCamera:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(bool)arg2;
- (void)setDynamicMapModesEnabled:(bool)arg1;
- (void)setEdgeInsets:(struct VKEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExternalTrafficIncidents:(id)arg1;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsPitchable:(bool)arg1;
- (void)setLabelMarkerSelectionEnabled:(bool)arg1;
- (void)setLabelScaleFactor:(long long)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapRegion:(id)arg1 animated:(bool)arg2;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(bool)arg4;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(long long)arg1;
- (void)setNavigationShieldSize:(long long)arg1;
- (void)setNeedsDisplay;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShieldIdiom:(long long)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setShouldLimitTrackingCameraHeight:(bool)arg1;
- (void)setShouldLoadFallbackTiles:(bool)arg1;
- (void)setShouldLoadMapMargin:(bool)arg1;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setStaysCenteredDuringPinch:(bool)arg1;
- (void)setStaysCenteredDuringRotation:(bool)arg1;
- (void)setStyleManager:(id)arg1;
- (void)setStylesheetMapDisplayStyle:(unsigned long long)arg1;
- (void)setStylesheetName:(id)arg1;
- (void)setTargetDisplay:(long long)arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (void)setTrackingCameraPanStyle:(int)arg1;
- (void)setTrackingZoomScale:(double)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (void)setUserZoomFocusStyleGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMaxGroundspanMeters:(double)arg1;
- (void)setUserZoomFocusStyleMinGroundspanMeters:(double)arg1;
- (void)setYaw:(double)arg1 animated:(bool)arg2;
- (long long)shieldIdiom;
- (long long)shieldSize;
- (bool)shouldHideOffscreenSelectedAnnotation;
- (bool)shouldLoadFallbackTiles;
- (bool)shouldLoadMapMargin;
- (bool)showsBuildings;
- (bool)showsPointsOfInterest;
- (void)startPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1 panAtStartPoint:(bool)arg2;
- (void)startPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(bool)arg2 animated:(bool)arg3;
- (bool)staysCenteredDuringPinch;
- (bool)staysCenteredDuringRotation;
- (void)stopPanningAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopRegionAnimation;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)stopSnappingAnimations;
- (void)stopTracking;
- (void)stopTrackingAnnotation;
- (id)styleManager;
- (void)stylesheetAnimationDidEnd:(bool)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(unsigned long long)arg1 toStyle:(unsigned long long)arg2;
- (long long)targetDisplay;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (id)trackingAnnotation;
- (int)trackingCameraPanStyle;
- (bool)trackingCanZoomIn;
- (bool)trackingCanZoomOut;
- (double)trackingZoomScale;
- (bool)trafficEnabled;
- (void)transferCamera:(id)arg1;
- (void)transitionToTracking:(bool)arg1 mapMode:(long long)arg2 pounceCompletionHandler:(id)arg3;
- (void)updateCameraContext:(id)arg1;
- (void)updateCameraForFrameResize;
- (void)updatePanWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)updatePitchWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotationWithFocusPoint:(struct CGPoint { double x1; double x2; })arg1 newValue:(double)arg2;
- (double)userZoomFocusStyleGroundspanMeters;
- (double)userZoomFocusStyleMaxGroundspanMeters;
- (double)userZoomFocusStyleMinGroundspanMeters;
- (id)viewportInfo;
- (id)visibleTileSets;
- (double)yaw;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
