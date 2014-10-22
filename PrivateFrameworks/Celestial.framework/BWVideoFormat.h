/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface BWVideoFormat : BWFormat {
    unsigned long long _bytesPerRowAlignment;
    unsigned int _cacheMode;
    unsigned long long _extendedHeight;
    unsigned long long _extendedWidth;
    unsigned long long _height;
    NSDictionary *_pixelBufferAttributes;
    unsigned int _pixelFormat;
    unsigned long long _planeAlignment;
    unsigned long long _width;
    bool_prewireBuffers;
}

@property unsigned long long bytesPerRowAlignment;
@property unsigned int cacheMode;
@property unsigned long long extendedHeight;
@property unsigned long long extendedWidth;
@property unsigned long long height;
@property(readonly) NSDictionary * pixelBufferAttributes;
@property unsigned int pixelFormat;
@property unsigned long long planeAlignment;
@property bool prewireBuffers;
@property unsigned long long width;

+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (void)initialize;

- (id)_initWithResolvedPixelBufferAttributes:(id)arg1;
- (unsigned long long)bytesPerRowAlignment;
- (unsigned int)cacheMode;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)extendedHeight;
- (unsigned long long)extendedWidth;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)height;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;
- (id)pixelBufferAttributes;
- (unsigned int)pixelFormat;
- (unsigned long long)planeAlignment;
- (bool)prewireBuffers;
- (void)setBytesPerRowAlignment:(unsigned long long)arg1;
- (void)setCacheMode:(unsigned int)arg1;
- (void)setExtendedHeight:(unsigned long long)arg1;
- (void)setExtendedWidth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPlaneAlignment:(unsigned long long)arg1;
- (void)setPrewireBuffers:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
