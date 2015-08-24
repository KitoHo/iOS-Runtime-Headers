/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode> {
    float _aeMaxGain;
    BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
    BWFigVideoCaptureDevice *_captureDevice;
    BOOL _chromaNoiseReductionEnabled;
    BWNodeOutput *_detectedFacesOutput;
    BOOL _detectedFacesOutputEnabled;
    BOOL _lowLightBoostSupportedForFormat;
    float _maxFrameRate;
    int _maxIntegrationTimeOverride;
    float _minFrameRate;
    struct { 
        int width; 
        int height; 
    } _minOutputDimensions;
    int _minOutputDimensionsSensorFormatIndex;
    int _motionAttachmentsSource;
    int _offlineConfigurationSeed;
    struct { 
        int width; 
        int height; 
    } _outputDimensions;
    BOOL _requiresOverscan;
    int _resolvedOfflineConfigurationSeed;
    int _resolvedSensorFormatIndex;
    struct { 
        int width; 
        int height; 
    } _sensorDimensions;
    int _sensorFormatIndex;
    struct { 
        int width; 
        int height; 
    } _sensorOverscanDimensions;
    unsigned long _sensorPixelFormat;
    BWNodeOutput *_stillImageOutput;
    id /* block */ _stillImageSBufHandler;
    NSObject<OS_dispatch_queue> *_streamEventDispatchQueue;
    NSObject<OS_dispatch_group> *_streamEventNotificationGroup;
    BOOL _streamFormatChangeInFlight;
    struct { 
        int width; 
        int height; 
    } _streamOutputDimensions;
    struct { 
        int width; 
        int height; 
    } _streamOutputDimensionsAfterFormatChange;
    int _streamSensorFormatIndex;
    unsigned long _streamSensorPixelFormat;
    unsigned long _streamSensorPixelFormatAfterFormatChange;
    BOOL _temporalNoiseReductionEnabled;
    BWNodeOutput *_videoCaptureOutput;
    id /* block */ _videoSBufHandler;
}

@property (readonly) BWFigVideoCaptureDevice *captureDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BWNodeOutput *detectedFacesOutput;
@property (readonly) unsigned int hash;
@property (readonly) BWNodeOutput *stillImageOutput;
@property (readonly) Class superclass;
@property (readonly) BWNodeOutput *videoCaptureOutput;

+ (int)_indexOfFormatInFormatsArray:(id)arg1 matchingSensorDimensions:(struct { int x1; int x2; })arg2 sensorPixelFormat:(unsigned long)arg3 sensorFormatIndex:(int)arg4;
+ (id)captureDeviceSourceNodeWithCaptureDevice:(id)arg1;
+ (void)initialize;

- (void)_bringStreamFormatIndexUpToDate;
- (void)_bringStreamPixelFormatUpToDate;
- (long)_bringStreamUpToDate;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(BOOL*)arg1 sensorPixelFormatChanged:(BOOL*)arg2 outputDimensionsChanged:(BOOL*)arg3;
- (id)_initWithCaptureDevice:(id)arg1;
- (long)_lockFramerateToMaxSupportedByCurrentSensorFormat;
- (struct { int x1; int x2; })_maxOutputDimensionsForResolvedSensorFormatIndex;
- (void)_registerForStreamNotifications;
- (void)_resolveOfflineConfiguration;
- (void)_unregisterFromStreamNotifications;
- (void)_updateMetadataConfigurations;
- (void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
- (long)_updateStreamOutputDimensions;
- (float)aeMaxGain;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (id)captureDevice;
- (BOOL)chromaNoiseReductionEnabled;
- (struct OpaqueCMClock { }*)clock;
- (id)colorInfoForOutput:(id)arg1;
- (void)dealloc;
- (id)detectedFacesOutput;
- (BOOL)detectedFacesOutputEnabled;
- (BOOL)hasNonLiveConfigurationChanges;
- (BOOL)lowLightBoostSupportedForFormat;
- (void)makeCurrentConfigurationLive;
- (float)maxFrameRate;
- (int)maxIntegrationTimeOverride;
- (float)minFrameRate;
- (struct { int x1; int x2; })minOutputDimensions;
- (int)motionAttachmentsSource;
- (id)nodeSubType;
- (struct { int x1; int x2; })outputDimensions;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)requiresOverscan;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorFormatIndex;
- (struct { int x1; int x2; })sensorOverscanDimensions;
- (unsigned long)sensorPixelFormat;
- (void)setAeMaxGain:(float)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setDetectedFacesOutputEnabled:(BOOL)arg1;
- (void)setLowLightBoostSupportedForFormat:(BOOL)arg1;
- (void)setMaxFrameRate:(float)arg1;
- (void)setMaxIntegrationTimeOverride:(int)arg1;
- (void)setMinFrameRate:(float)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setRequiresOverscan:(BOOL)arg1;
- (void)setSensorDimensions:(struct { int x1; int x2; })arg1;
- (void)setSensorFormatIndex:(int)arg1;
- (void)setSensorPixelFormat:(unsigned long)arg1;
- (void)setTemporalNoiseReductionEnabled:(BOOL)arg1;
- (BOOL)start:(id*)arg1;
- (id)stillImageOutput;
- (BOOL)stop:(id*)arg1;
- (BOOL)temporalNoiseReductionEnabled;
- (void)updateOutputRequirements;
- (id)videoCaptureOutput;

@end
