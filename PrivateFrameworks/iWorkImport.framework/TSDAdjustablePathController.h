/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDPathSource, TSDShapeRep;

@interface TSDAdjustablePathController : NSObject {
    TSDShapeRep *mRep;
}

@property(readonly) unsigned long long enabledKnobs;
@property(readonly) TSDPathSource * pathSource;
@property(readonly) TSDShapeRep * rep;

- (void)drawBorder;
- (unsigned long long)enabledKnobs;
- (id)initWithRep:(id)arg1;
- (unsigned long long)knobUnderPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)mouseDown:(id)arg1 onControlKnob:(unsigned long long)arg2;
- (void)moveControlKnob:(unsigned long long)arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)pathSource;
- (struct CGPoint { double x1; double x2; })positionOfKnob:(unsigned long long)arg1 transformed:(bool)arg2;
- (id)rep;
- (void)setGeometry:(id)arg1 previousGeometry:(id)arg2;

@end
