/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureConnectionInternal : NSObject {
    BOOL active;
    int activeVideoStabilizationMode;
    NSArray *audioChannelLevels;
    NSMutableArray *audioChannels;
    AVCaptureInputPort *audioInputPort;
    BOOL automaticallyAdjustsVideoMirroring;
    int changeSeed;
    BOOL enabled;
    BOOL hasActiveObservers;
    BOOL hasVideoMinFrameDurationObserver;
    NSMutableArray *inputPorts;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *metadataInputPort;
    AVCaptureInputPort *metadataItemInputPort;
    AVWeakReference *outputWeakReference;
    int preferredVideoStabilizationMode;
    AVCaptureDevice *sourceDevice;
    AVCaptureInputPort *videoInputPort;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoMaxFrameDuration;
    float videoMaxScaleAndCropFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } videoMinFrameDuration;
    BOOL videoMirrored;
    BOOL videoMirroringSupported;
    int videoOrientation;
    BOOL videoOrientationSupported;
    AVWeakReference *videoPreviewLayerWeakReference;
    int videoRetainedBufferCountHint;
    float videoScaleAndCropFactor;
    BOOL videoStabilizationEnabled;
}

@end
