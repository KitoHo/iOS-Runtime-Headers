/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKCircle : MKShape <MKOverlay> {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _boundingMapRect;
    } _coordinate;
    double _radius;
}

@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) double radius;
@property(copy,readonly) NSString * subtitle;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * title;

+ (id)circleWithCenterCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
+ (id)circleWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (id)_initWithCenterCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct { double x1; double x2; })coordinate;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)radius;

@end
