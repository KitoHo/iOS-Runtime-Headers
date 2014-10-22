/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSUColor;

@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer> {
}

@property struct CGSize { double x1; double x2; } baseNaturalSize;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property struct CGPoint { double x1; double x2; } endPoint;
@property(retain) TSUColor * firstColor;
@property(retain) NSArray * gradientStops;
@property unsigned long long gradientType;
@property(readonly) unsigned long long hash;
@property bool isAdvancedGradient;
@property(retain) TSUColor * lastColor;
@property double opacity;
@property struct CGPoint { double x1; double x2; } startPoint;
@property(readonly) Class superclass;

- (void)evenlyDistributeStops;
- (void)insertGradientStop:(id)arg1;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (id)insertStopAtFraction:(double)arg1;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)removeStop:(id)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)reverseStopOrder;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)setEndPoint:(struct CGPoint { double x1; double x2; })arg1 inShapeWithNaturalSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setFirstColor:(id)arg1;
- (void)setGradientAngleInDegrees:(double)arg1;
- (void)setGradientStops:(id)arg1;
- (void)setGradientType:(unsigned long long)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setLastColor:(id)arg1;
- (void)setStartPoint:(struct CGPoint { double x1; double x2; })arg1 inShapeWithNaturalSize:(struct CGSize { double x1; double x2; })arg2;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)upgradeIfNecessaryWithBaseNaturalSize:(struct CGSize { double x1; double x2; })arg1;

@end
