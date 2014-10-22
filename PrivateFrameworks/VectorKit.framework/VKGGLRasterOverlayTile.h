/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface VKGGLRasterOverlayTile : VKTile <VKRasterOverlayTile> {
    struct shared_ptr<ggl::Texture2D> { 
        struct Texture2D {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > { 
        struct __compressed_pair<ggl::RenderItem *, std::__1::default_delete<ggl::RenderItem> > { 
            struct RenderItem {} *__first_; 
        } __ptr_; 
    struct Setup { 
        int (**_vptr$ShaderSetup)(); 
        struct vector<ggl::UniformDataElement, std::__1::allocator<ggl::UniformDataElement> > { 
            struct UniformDataElement {} *__begin_; 
            struct UniformDataElement {} *__end_; 
            struct __compressed_pair<ggl::UniformDataElement *, std::__1::allocator<ggl::UniformDataElement> > { 
                struct UniformDataElement {} *__first_; 
            } __end_cap_; 
        } _dataArray; 
        struct vector<ggl::TextureBase *, std::__1::allocator<ggl::TextureBase *> > { 
            struct TextureBase {} **__begin_; 
            struct TextureBase {} **__end_; 
            struct __compressed_pair<ggl::TextureBase **, std::__1::allocator<ggl::TextureBase *> > { 
                struct TextureBase {} **__first_; 
            } __end_cap_; 
        } _textures; 
        struct shared_ptr<ggl::Shader> { 
            struct Shader {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } _shader; 
    struct CGContext { } *_ctx;
    } _gglTexture;
    struct TextureData2D { int (**x1)(); unsigned int x2; int x3; unsigned int x4; unsigned int x5; char *x6; char **x7; unsigned long long x8; } *_imageData;
    } _renderItem;
    float _scale;
    } _shaderSetup;
    unsigned long long _size;
}

@property(readonly) struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; } gglTexture;
@property(readonly) struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range {} *x10; unsigned long long x11; }* renderItem;

- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range {} *x10; unsigned long long x11; }*)renderItem;
- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct ShaderSetup {} *x4; unsigned int x5; unsigned int x6; float x7; struct Mesh {} *x8; struct Range { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range {} *x10; unsigned long long x11; }*)setupRenderItemWithRenderState:(struct RenderState { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct DepthState { int (**x_3_1_1)(); int x_3_1_2; boolx_3_1_3; boolx_3_1_4; boolx_3_1_5; float x_3_1_6; float x_3_1_7; } x3; struct ColorState { int (**x_4_1_1)(); boolx_4_1_2; boolx_4_1_3; boolx_4_1_4; boolx_4_1_5; } x4; struct BlendState { int (**x_5_1_1)(); boolx_5_1_2; int x_5_1_3; } x5; struct StencilState { int (**x_6_1_1)(); boolx_6_1_2; boolx_6_1_3; unsigned int x_6_1_4; int x_6_1_5; int x_6_1_6; unsigned int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; } x6; struct ScissorState { int (**x_7_1_1)(); boolx_7_1_2; struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_3_1[2]; } x_3_2_1; struct Matrix<float, 2, 1> { float x_2_3_1[2]; } x_3_2_2; } x_7_1_3; } x7; struct PolygonState { int (**x_8_1_1)(); boolx_8_1_2; int x_8_1_3; int x_8_1_4; } x8; }*)arg1 mesh:(struct Mesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; }*)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGContext { }*)drawContext;
- (struct shared_ptr<ggl::Texture2D> { struct Texture2D {} *x1; struct __shared_weak_count {} *x2; })gglTexture;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 size:(unsigned long long)arg2 scale:(float)arg3;
- (bool)isEmpty;

@end
