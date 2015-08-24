/* Generated by RuntimeBrowser.
 */

@protocol TSCH3DSageFillData <TSCH3DFillData>

@required

- (TSCH3DFillSetIdentifier *)fillSetIdentifier;
- (BOOL)isLayerEnabledForIndex:(unsigned int)arg1;
- (int)layerBlendModeForIndex:(unsigned int)arg1;
- (unsigned int)layerCount;
- (BOOL)layerIsEnvironmentMapForIndex:(unsigned int)arg1;
- (NSNumber *)layerLightenPercentageForIndex:(unsigned int)arg1;
- (float)layerRotationForIndex:(unsigned int)arg1;
- (float)layerScaleForIndex:(unsigned int)arg1;
- (int)layerTilingModeForIndex:(unsigned int)arg1;
- (TSCH3DTexture *)textureForIndex:(unsigned int)arg1;

@end
