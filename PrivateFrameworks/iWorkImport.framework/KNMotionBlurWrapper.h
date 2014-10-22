/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSMapTable, TSDGLMotionBlurEffect, TSDGLShader;

@interface KNMotionBlurWrapper : NSObject {
    double _duration;
    TSDGLMotionBlurEffect *_motionBlurEffect;
    NSMapTable *_objectDataBufferMapTable;
    TSDGLShader *_objectDefaultMotionBlurShader;
    TSDGLShader *_objectDefaultShader;
    NSArray *_textures;
    bool_isBackFaceCullingEnabled;
    bool_shouldDisableMotionBlurFromDefaults;
    bool_shouldDrawMotionBlur;
    bool_shouldDrawTextOnSeparatePass;
    bool_shouldDrawTexturesInReverseOrder;
    bool_shouldFillBackground;
}

@property(readonly) TSDGLMotionBlurEffect * motionBlurEffect;
@property(readonly) TSDGLShader * objectShader;
@property bool shouldDrawMotionBlur;
@property bool shouldDrawTextOnSeparatePass;
@property bool shouldDrawTexturesInReverseOrder;
@property(retain) NSArray * textures;

+ (id)newDefaultTextureDrawOptionBlockWithAnimationDict:(id)arg1 pluginContext:(id)arg2 animationContext:(id)arg3 projectionTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg4 animationCacheDict:(id)arg5 animationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;

- (void)dealloc;
- (void)drawMotionBlurWithPluginContext:(id)arg1 textureDrawOptionsBlock:(id)arg2 setupCustomShaderBlock:(id)arg3;
- (id)initWithFramebufferSize:(struct CGSize { double x1; double x2; })arg1 slideSize:(struct CGSize { double x1; double x2; })arg2 textures:(id)arg3 duration:(double)arg4;
- (id)motionBlurEffect;
- (id)objectShader;
- (id)p_drawPassesWithTextures:(id)arg1 textureDrawOptionsMap:(id)arg2;
- (void)p_setBackFaceCullingEnabled:(bool)arg1;
- (void)p_setupDataBuffers;
- (id)p_textureDrawOptionsMapTableWithPercent:(double)arg1 isWarmingUp:(bool)arg2 textureDrawOptionsBlock:(id)arg3;
- (void)setShouldDrawMotionBlur:(bool)arg1;
- (void)setShouldDrawTextOnSeparatePass:(bool)arg1;
- (void)setShouldDrawTexturesInReverseOrder:(bool)arg1;
- (void)setTextures:(id)arg1;
- (bool)shouldDrawMotionBlur;
- (bool)shouldDrawTextOnSeparatePass;
- (bool)shouldDrawTexturesInReverseOrder;
- (id)textures;

@end
