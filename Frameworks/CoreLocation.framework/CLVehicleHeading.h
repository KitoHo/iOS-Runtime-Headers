/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSDate;

@interface CLVehicleHeading : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property(readonly) NSDate * timestamp;
@property(readonly) double trueHeading;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientVehicleHeading:(struct { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)timestamp;
- (double)trueHeading;

@end
