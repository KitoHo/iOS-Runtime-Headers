/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDynamicAnimationActiveValue : NSObject {
    unsigned int _lowerBoundary : 1;
    unsigned int _upperBoundary : 1;
    id _applier;
    double _boundaryPull;
    double _maximumActiveValue;
    double _minimumActiveValue;
    int _type;
    double _value;
}

@property double maximumActiveValue;
@property double minimumActiveValue;
@property int type;
@property double value;

+ (id)activeValue:(double)arg1 ofType:(int)arg2;
+ (id)lowerBoundary:(double)arg1 ofType:(int)arg2;
+ (id)upperBoundary:(double)arg1 ofType:(int)arg2;

- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (id)_applier;
- (double)_boundaryPull;
- (bool)_isLowerBoundary;
- (bool)_isUpperBoundary;
- (void)_setBoundaryPull:(double)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (double)maximumActiveValue;
- (double)minimumActiveValue;
- (void)setMaximumActiveValue:(double)arg1;
- (void)setMinimumActiveValue:(double)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(double)arg1;
- (int)type;
- (double)value;

@end
