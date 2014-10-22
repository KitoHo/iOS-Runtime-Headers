/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {
    boolmFillCanApplyToCALayer;
    boolmLayerNeedsUpdate;
    CALayer *mBlackBackgroundLayer;
}

@property(readonly) KNSlideBackgroundInfo * slideBackgroundInfo;

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3;

- (id)additionalLayersUnderLayer;
- (void)dealloc;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isOpaque;
- (bool)isSelectable;
- (void)processChangedProperty:(int)arg1;
- (id)slideBackgroundInfo;
- (id)textureForContext:(id)arg1;
- (int)tilingMode;
- (bool)wantsToDistortWithImagerContext;

@end
