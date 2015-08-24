/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeOrderedLayerToken : NSObject <TSTStrokeLayerStrokeAndRange> {
    <TSTStrokeLayerStrokeAndRange> *_majorStrokeLayerToken;
    <TSTStrokeLayerStrokeAndRange> *_minorStrokeLayerToken;
    int _order;
    struct TSTSimpleRange { 
        int origin; 
        unsigned int length; 
    } _range;
    TSDStroke *_stroke;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) <TSTStrokeLayerStrokeAndRange> *majorStrokeLayerToken;
@property (nonatomic, retain) <TSTStrokeLayerStrokeAndRange> *minorStrokeLayerToken;
@property (nonatomic) int order;
@property (nonatomic) struct TSTSimpleRange { int x1; unsigned int x2; } range;
@property (nonatomic, retain) TSDStroke *stroke;
@property (readonly) Class superclass;

+ (id)tokenWithStroke:(id)arg1 range:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5;

- (void)dealloc;
- (id)initWithStroke:(id)arg1 range:(struct TSTSimpleRange { int x1; unsigned int x2; })arg2 order:(int)arg3 majorStrokeLayerToken:(id)arg4 minorStrokeLayerToken:(id)arg5;
- (id)majorStrokeLayerToken;
- (id)minorStrokeLayerToken;
- (int)order;
- (struct TSTSimpleRange { int x1; unsigned int x2; })range;
- (void)setMajorStrokeLayerToken:(id)arg1;
- (void)setMinorStrokeLayerToken:(id)arg1;
- (void)setOrder:(int)arg1;
- (void)setRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg1;
- (void)setStroke:(id)arg1;
- (id)stroke;

@end
