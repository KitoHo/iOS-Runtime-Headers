/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRGBA8AccumulationPipeline : TSCH3DRGBA8FramebufferAccumulationSubPipeline <TSCH3DFramebufferAccumulator> {
    long long mCurrentPass;
}

- (struct AccumulationData { float x1; float x2; struct RenderState { boolx_3_1_1; int x_3_1_2; boolx_3_1_3; boolx_3_1_4; boolx_3_1_5; boolx_3_1_6; boolx_3_1_7; float x_3_1_8; float x_3_1_9; struct EnableClipDistances { struct array<bool, 8> { boolx_1_3_1[8]; } x_10_2_1; } x_3_1_10; } x3; })mixedAccumulation;
- (bool)prepareFramebuffer;
- (struct AccumulationData { float x1; float x2; struct RenderState { boolx_3_1_1; int x_3_1_2; boolx_3_1_3; boolx_3_1_4; boolx_3_1_5; boolx_3_1_6; boolx_3_1_7; float x_3_1_8; float x_3_1_9; struct EnableClipDistances { struct array<bool, 8> { boolx_1_3_1[8]; } x_10_2_1; } x_3_1_10; } x3; })progressiveAccumulationWithPerentage:(float)arg1;
- (void)reset;
- (void)setupShaderEffects;

@end
