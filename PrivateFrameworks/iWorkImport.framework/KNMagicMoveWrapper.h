/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, TSDMagicMoveTextureZOrderer;

@interface KNMagicMoveWrapper : NSObject {
    NSDictionary *_animationCacheDict;
    NSDictionary *_animations;
    NSMutableDictionary *_shaderCacheDictionary;
    NSMapTable *_textureToEffectDict;
    NSMapTable *_textureToMorphEffectDict;
    NSMapTable *_textureToShouldBlendIncomingDict;
    TSDMagicMoveTextureZOrderer *_textureZOrderer;
    bool_shouldDrawMotionBlur;
    bool_shouldDrawWithMotionBlur;
}

@property(readonly) NSDictionary * animationCacheDict;
@property(readonly) NSDictionary * animations;
@property(readonly) NSArray * motionBlurShaders;
@property bool shouldDrawMotionBlur;

- (id)animationCacheDict;
- (id)animations;
- (void)dealloc;
- (id)initWithContext:(id)arg1 animationOverrideBlock:(id)arg2;
- (id)motionBlurShaders;
- (id)newMotionBlurWrapperSetupShaderBlockWithPluginContext:(id)arg1;
- (void)p_addDebugAnimationsToArray:(id)arg1 forType:(long long)arg2 duration:(double)arg3;
- (id)p_magicMoveShaderWithShouldBlendIncoming:(bool)arg1 enableDebugColors:(bool)arg2 shouldDrawWithMotionBlur:(bool)arg3;
- (void)p_setAnimationGroup:(id)arg1 forLayer:(id)arg2 inDictionary:(id)arg3;
- (void)p_setupAnimationsWithContext:(id)arg1 animationOverrideBlock:(id)arg2;
- (void)p_setupShaderCacheDictionary;
- (id)p_shaderCacheKeyWithShouldBlendIncoming:(bool)arg1 enableDebugColors:(bool)arg2 shouldDrawWithMotionBlur:(bool)arg3;
- (void)setShouldDrawMotionBlur:(bool)arg1;
- (void)setupShadersWithContext:(id)arg1 animationContext:(id)arg2;
- (bool)shouldDrawMotionBlur;
- (void)teardown;
- (id)texturedRectanglesAtPercent:(double)arg1;
- (id)texturesBySortingArray:(id)arg1;

@end
