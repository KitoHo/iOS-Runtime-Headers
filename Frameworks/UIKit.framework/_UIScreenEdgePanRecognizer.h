/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIScreenEdgePanRecognizerDelegate>, NSString, UIDelayedAction, _UIScreenEdgePanRecognizerSettings;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    <_UIScreenEdgePanRecognizerDelegate> *_delegate;
    double _gestureRestrictionFactor;
    long long _initialInterfaceOrientation;
    } _initialTouchLocation;
    double _initialTouchTimestamp;
    } _lastTouchLocation;
    double _lastTouchTimestamp;
    UIDelayedAction *_recognitionTimer;
    unsigned long long _recognizedRegion;
    } _screenBounds;
    _UIScreenEdgePanRecognizerSettings *_settings;
    long long _state;
    unsigned long long _targetEdges;
    unsigned long long _touchedRegion;
    long long _type;
    bool_hasDoneInitialBackProjectionTest;
    bool_hasRecordedData;
    bool_requiresFlatThumb;
    bool_requiresLongPress;
    bool_useGrapeFlags;
}

@property(readonly) struct CGPoint { double x1; double x2; } _lastTouchLocation;
@property(copy,readonly) NSString * debugDescription;
@property <_UIScreenEdgePanRecognizerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long recognizedRegion;
@property bool requiresFlatThumb;
@property(getter=isRequiringLongPress,readonly) bool requiringLongPress;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property(retain) _UIScreenEdgePanRecognizerSettings * settings;
@property bool shouldUseGrapeFlags;
@property(readonly) long long state;
@property(readonly) Class superclass;
@property unsigned long long targetEdges;

+ (bool)_edgeSwipeNavigationGestureEnabled;

- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (struct CGPoint { double x1; double x2; })_lastTouchLocation;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_setState:(long long)arg1;
- (unsigned long long)_targetEdges;
- (long long)_type;
- (void)dealloc;
- (id)delegate;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 interfaceOrientation:(long long)arg4;
- (id)initWithType:(long long)arg1;
- (bool)isRequiringLongPress;
- (unsigned long long)recognizedRegion;
- (bool)requiresFlatThumb;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)setDelegate:(id)arg1;
- (void)setRequiresFlatThumb:(bool)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSettings:(id)arg1;
- (void)setShouldUseGrapeFlags:(bool)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)settings;
- (bool)shouldUseGrapeFlags;
- (long long)state;
- (unsigned long long)targetEdges;

@end
