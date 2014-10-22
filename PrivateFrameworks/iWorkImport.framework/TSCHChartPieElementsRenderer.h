/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSIndexSet;

@interface TSCHChartPieElementsRenderer : TSCHRenderer {
    struct CGPoint { 
        double x; 
        double y; 
    boolmDidMoveDuringTouchIfNotThenRotateChartForDemo;
    boolmPartialRenderingInclusionFlag;
    float mHitExplosion;
    } mHitPoint;
    float mHitRadius;
    unsigned long long mHitSeries;
    float mHitStartAngle;
    NSIndexSet *mPartialRenderingSeriesIndexSet;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartLayoutSpaceRenderingRect;
- (int)chunkPlane;
- (void)dealloc;
- (void)drawAll;
- (void)drawAllButSeriesIndicies:(id)arg1;
- (void)drawOnlySeriesIndicies:(id)arg1;
- (void)p_drawOnlyShadow:(id)arg1 forImage:(struct CGLayer { }*)arg2 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 intoContext:(struct CGContext { }*)arg4 atViewScale:(double)arg5 usingBlendMode:(int)arg6 opacity:(double)arg7;
- (void)p_drawOnlyShapeImage:(struct CGLayer { }*)arg1 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 intoContext:(struct CGContext { }*)arg3 usingBlendMode:(int)arg4 opacity:(double)arg5;
- (void)p_drawWedgePathIntoContext:(struct CGContext { }*)arg1 path:(struct CGPath { }*)arg2 fill:(id)arg3 stroke:(id)arg4 opacity:(double)arg5;
- (struct CGLayer { }*)p_newCGLayerForUserSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 outUserSpaceLayerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGLayer { }*)p_newPreRenderedImageWithContext:(struct CGContext { }*)arg1 path:(struct CGPath { }*)arg2 fill:(id)arg3 stroke:(id)arg4 shadow:(id)arg5 outUserSpaceLayerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)p_shouldRenderSeriesIndex:(unsigned long long)arg1;

@end
