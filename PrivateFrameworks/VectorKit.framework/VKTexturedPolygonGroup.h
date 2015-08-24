/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTexturedPolygonGroup : VKPolygonGroup {
    BOOL _needsTextureUpdate;
    VKSharedResources *_sharedResources;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _texture;
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _textureVariant;
}

@property (nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*texture;
@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*textureVariant;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })_textureForName:(id)arg1;
- (void)dealloc;
- (id)initWithStyleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; }*)arg1 tile:(id)arg2 fixedAroundCentroid:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3 contentScale:(float)arg4 sharedResources:(id)arg5;
- (void)setNeedsTextureUpdate;
- (id)styleAttributes;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*)texture;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int x4; int x5; unsigned int x6; int x7; int x8; int x9; float x10; struct TextureDataAbstract {} *x11; bool x12; bool x13; bool x14; unsigned int x15; unsigned int x16; int x17; int x18; }*)textureVariant;
- (void)updateTextures;
- (void)updateTexturesIfNecessary;

@end
