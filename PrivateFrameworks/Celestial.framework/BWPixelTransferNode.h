/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWPixelBufferPool;

@interface BWPixelTransferNode : BWNode {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct { 
        int width; 
        int height; 
    int _cropMode;
    } _inputCropRect;
    BWPixelBufferPool *_intermediateBufferPool;
    } _intermediatePoolDimensions;
    int _liveCropMode;
    } _liveInputCropRect;
    int _liveRotationDegrees;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    unsigned long long _outputHeight;
    unsigned int _outputPixelFormat;
    unsigned long long _outputWidth;
    int _rotationDegrees;
    struct OpaqueVTImageRotationSession { } *_rotationSession;
    int _rotationSessionRotationDegrees;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    bool_flipHorizontal;
    bool_flipVertical;
    bool_haveLiveInputCropRect;
    bool_liveFlipHorizontal;
    bool_liveFlipVertical;
    bool_liveLowSpeed;
    bool_livePassesBuffersThroughWhenPossible;
    bool_liveZeroFillBuffers;
    bool_lowSpeed;
    bool_makeCurrentConfigurationLiveOnNextRenderCallback;
    bool_passesBuffersThroughWhenPossible;
    bool_rotationSessionFlipHorizontal;
    bool_rotationSessionFlipVertical;
    bool_rotationSessionLowSpeed;
    bool_rotationSessionZeroFillBuffers;
}

+ (void)initialize;

- (bool)_emitIfMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)_ensureIntermediatePoolWithDimensions:(struct { int x1; int x2; })arg1;
- (void)_ensureRotationSession;
- (void)_ensureTransferSession;
- (struct { int x1; int x2; })_intermediateBufferDimensionsForInputDimensions:(struct { int x1; int x2; })arg1 outputDimensions:(struct { int x1; int x2; })arg2;
- (void)_makeCurrentConfigurationLive;
- (id)_preferredPixelFormats;
- (id)_preferredPixelFormatsWithInputPixelFormatFirst;
- (void)_updateOutputRequirements;
- (bool)_zeroFillBuffers;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (int)cropMode;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (bool)flipHorizontal;
- (bool)flipVertical;
- (bool)hasNonLiveConfigurationChanges;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputCropRect;
- (bool)lowSpeed;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (id)nodeType;
- (unsigned long long)outputHeight;
- (unsigned int)outputPixelFormat;
- (unsigned long long)outputWidth;
- (bool)passesBuffersThroughWhenPossible;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (int)rotationDegrees;
- (void)setCropMode:(int)arg1;
- (void)setFlipHorizontal:(bool)arg1;
- (void)setFlipVertical:(bool)arg1;
- (void)setInputCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLowSpeed:(bool)arg1;
- (void)setOutputHeight:(unsigned long long)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setOutputWidth:(unsigned long long)arg1;
- (void)setPassesBuffersThroughWhenPossible:(bool)arg1;
- (void)setRotationDegrees:(int)arg1;

@end
