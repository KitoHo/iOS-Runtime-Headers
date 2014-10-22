/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PLCameraControllerDelegate>, AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureMovieFileOutput, AVCaptureOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, BKSAccelerometer, CAMAvalancheCaptureService, CAMDebugCaptureService, CAMEffectsRenderer, CIFilter, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSTimer;

@interface CAMCaptureController : NSObject <AVCaptureMetadataOutputObjectsDelegate, PLCameraEffectsRendererDelegate, BKSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    struct CGSize { 
        double width; 
        double height; 
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
        unsigned int supportsVideo : 1; 
        unsigned int supportsHDRRear : 1; 
        unsigned int supportsHDRFront : 1; 
        unsigned int supportsSuggestedHDRRear : 1; 
        unsigned int supportsSuggestedHDRFront : 1; 
        unsigned int supportsAvalancheAnalysisRear : 1; 
        unsigned int supportsAvalancheAnalysisFront : 1; 
        unsigned int supportsMogulRear : 1; 
        unsigned int supportsMogulFront : 1; 
        unsigned int supportsLiveEffects : 1; 
        unsigned int supportsPanorama : 1; 
        unsigned int supportsVideoStillCapture : 1; 
        unsigned int supportsPreviewDuringHDR : 1; 
        unsigned int supportsTimelapse : 1; 
        unsigned int hasFlash : 1; 
        unsigned int hasBackCamera : 1; 
        unsigned int hasFrontCamera : 1; 
        unsigned int deferStartVideoCapture : 1; 
        unsigned int inCall : 1; 
        unsigned int isCapturingPanorama : 1; 
        unsigned int isProcessingPanorama : 1; 
        unsigned int focusDisabled : 1; 
        unsigned int serverDied : 1; 
        unsigned int didGetDeviceUnavailableInBackground : 1; 
        unsigned int didSetLocationData : 1; 
        unsigned int isChangingMode : 1; 
        unsigned int flashWillFireAutomatically : 1; 
        unsigned int torchWillFireAutomatically : 1; 
        unsigned int isCameraApp : 1; 
        unsigned int didSendPreviewStartedCallbackToEmptyDelegate : 1; 
        unsigned int didGetPreviewStartedCallbackAfterResume : 1; 
        unsigned int logFocusInfo : 1; 
        unsigned int logPreviewInfo : 1; 
        unsigned int logCaptureInfo : 1; 
        unsigned int logFlashInfo : 1; 
        unsigned int logDebugInfo : 1; 
        unsigned int logPanoInfo : 1; 
        unsigned int enable720p60Recording : 1; 
        unsigned int isInternalInstall : 1; 
        unsigned int shouldTearDownPano : 1; 
        unsigned int convertSampleBufferToJPEG : 1; 
        unsigned int delegateDidStartSession : 1; 
        unsigned int delegateWillStartPreview : 1; 
        unsigned int delegatePreviewDidStart : 1; 
        unsigned int delegateSessionDidStart : 1; 
        unsigned int delegateDidStopSession : 1; 
        unsigned int delegateWillStopSession : 1; 
        unsigned int delegateSessionDidStop : 1; 
        unsigned int delegateSessionWasInterrupted : 1; 
        unsigned int delegateSessionInterruptionEnded : 1; 
        unsigned int delegateServerDied : 1; 
        unsigned int delegateCleanApertureDidChange : 1; 
        unsigned int delegateModeWillChange : 1; 
        unsigned int delegateModeDidChange : 1; 
        unsigned int delegateWillTakePhoto : 1; 
        unsigned int delegateDidTakePhoto : 1; 
        unsigned int delegateCapturedPhoto : 1; 
        unsigned int delegateDidChangeCaptureAbility : 1; 
        unsigned int delegateDidChangePanoramaConfiguration : 1; 
        unsigned int delegateDidUpdatePanoramaPreview : 1; 
        unsigned int delegateDidReceivePanoramaIssue : 1; 
        unsigned int delegateDidStartPanoramaCapture : 1; 
        unsigned int delegateWillStopPanoramaCapture : 1; 
        unsigned int delegatePanoramaWillStartProcessing : 1; 
        unsigned int delegatePanoramaDidStopProcessing : 1; 
        unsigned int delegateCapturedPanorama : 1; 
        unsigned int delegateVideoCaptureDidStart : 1; 
        unsigned int delegateDidStopVideoCapture : 1; 
        unsigned int delegateVideoCaptureDidStop : 1; 
        unsigned int delegateDidChangeFocusMode : 1; 
        unsigned int delegateDidChangeExposureMode : 1; 
        unsigned int delegateFocusDidStart : 1; 
        unsigned int delegateFocusDidEnd : 1; 
        unsigned int delegateExposureDidStart : 1; 
        unsigned int delegateExposureDidEnd : 1; 
        unsigned int delegateWillResetFocusExposure : 1; 
        unsigned int delegateDidChangeUserLockedFocus : 1; 
        unsigned int delegateDidChangeUserLockedExposure : 1; 
        unsigned int delegateDidChangeExposureTargetBias : 1; 
        unsigned int delegateFaceMetadataDidChange : 1; 
        unsigned int delegateVideoZoomFactorDidChange : 1; 
        unsigned int delegateFlashWillFireChanged : 1; 
        unsigned int delegateTorchActiveChanged : 1; 
        unsigned int delegateTorchAvailabilityChanged : 1; 
        unsigned int delegateHDRSuggestionChanged : 1; 
        unsigned int delegateDidStartVideoRequest : 1; 
        unsigned int delegateDidStopVideoRequest : 1; 
        unsigned int delegateDidFinishVideoRequest : 1; 
        unsigned int delegateDidStartCapturingPanoramaRequest : 1; 
        unsigned int delegateDidStopCapturingPanoramaRequest : 1; 
        unsigned int delegateDidStartProcessingPanoramaRequest : 1; 
        unsigned int delegateDidStopProcessingPanoramaRequest : 1; 
        unsigned int delegateDidFinishPanoramaRequest : 1; 
        unsigned int delegatePanoramaConfigurationChanged : 1; 
        unsigned int delegateDidOutputPanoramaParameters : 1; 
    CAMAvalancheCaptureService *__avalancheCaptureService;
    NSObject<OS_dispatch_queue> *__captureIsolationQueue;
    NSMutableArray *__currentFaceMetadata;
    CAMDebugCaptureService *__debugCaptureService;
    NSMutableArray *__deferredVideoCaptureRequests;
    long long __deviceLockCount;
    NSObject<OS_dispatch_queue> *__effectFilterIndexQueue;
    NSDictionary *__effectFilterIndices;
    NSObject<OS_dispatch_queue> *__effectRenderingQueue;
    double __ignoreSubjectAreaChangesUntilTime;
    NSMutableArray *__inflightPanoramaCaptureRequests;
    NSMutableArray *__inflightStillImageCaptureRequests;
    NSMutableArray *__inflightVideoCaptureResponses;
    id __lockLensPositionCompletionBlock;
    float __lockLensPositionTarget;
    NSMutableArray *__processingPanoramaCaptureRequests;
    NSMutableDictionary *__servicesByType;
    BKSAccelerometer *_accelerometer;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureVideoDataOutput *_avCaptureOutputEffectPreview;
    AVCaptureMetadataOutput *_avCaptureOutputMetadata;
    NSObject<OS_dispatch_queue> *_avCaptureOutputMetadataQueue;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureSession *_avCaptureSession;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    long long _cameraDevice;
    } _cameraFlags;
    long long _cameraMode;
    long long _cameraOrientation;
    int _captureOrientation;
    } _cleanAperture;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    NSTimer *_delaySuspendTimer;
    <PLCameraControllerDelegate> *_delegate;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSObject<OS_dispatch_queue> *_dispatchTimerQueue;
    CAMEffectsRenderer *_effectsRenderer;
    long long _flashMode;
    int _hdrEV0PhotoCaptureCount;
    NSTimer *_idleTimerTimer;
    unsigned long long _ioSurfaceCounter;
    unsigned long long _keepAliveCounter;
    NSTimer *_keepAliveFailsafeTimer;
    NSTimer *_keepAliveTimer;
    struct CGImage { } *_lastVideoPreviewFrameImageRef;
    double _maxVideoZoomFactorFront;
    double _maxVideoZoomFactorRear;
    double _maximumCaptureDuration;
    AVCaptureDeviceFormat *_mogulFormatBack;
    AVCaptureDeviceFormat *_mogulFormatFront;
    struct _CAImageQueue { } *_panoramaImageQueue;
    float _panoramaPreviewScale;
    } _panoramaPreviewSize;
    struct OpaqueFigSampleBufferProcessor { } *_panoramaProcessor;
    AVCaptureVideoPreviewLayer *_previewLayer;
    NSArray *_supportedCameraModes;
    NSString *_videoCapturePath;
    int _videoCaptureQuality;
    bool_HDRDetectionEnabled;
    bool__atomicEffectsAvailable;
    bool__atomicModeChangeWaitingForConfigureSession;
    bool__atomicModeChangeWaitingForPreviewStarted;
    bool__configuringCamera;
    bool__ignoreSubjectAreaChanges;
    bool__locationAcquiredForTimelapseCapture;
    bool__lockExposureAfterExposeFinishes;
    bool__lockFocusAfterFocusFinishes;
    bool__panoramaProcessorReadyForSampleBuffers;
    bool__previewLayerEnabledForRenderer;
    bool__previewPaused;
    bool__rebuildingSession;
    bool__sessionReady;
    bool__videoDataOutputEnabledForRenderer;
    bool__wasStillImageStabilzationOnBeforeTimedCapture;
    bool_canCapturePhotoFromVideoModeWhenNotRecording;
    bool_capturingTimelapse;
    bool_delaySuspend;
    bool_disableAllPreviewSuspensionDuringCapture;
    bool_hdrCaptureIncludesEV0Image;
    bool_imageWriterQueueIsAvailable;
    bool_isFocusingOnFace;
    bool_mogulFormatBackSupportsAlternate;
    bool_mogulFormatFrontSupportsAlternate;
    bool_performingAvalancheCapture;
    bool_resetExposureWhenSubjectAreaChanged;
    bool_resetFocusWhenSubjectAreaChanged;
    bool_shouldBeStopped;
    bool_use60FPSVideo;
    bool_useAlternateSlomoFront;
    bool_useAlternateSlomoRear;
    bool_userLockedExposure;
    bool_userLockedFocus;
    id postSessionSetupBlock;
}

@property(getter=isHDRDetectionEnabled) bool HDRDetectionEnabled;
@property(getter=isHDRSuggested,readonly) bool HDRSuggested;
@property(setter=_setAtomicEffectsAvailable:) bool _atomicEffectsAvailable;
@property(getter=_isAtomicModeChangeWaitingForConfigureSession,setter=_setAtomicModeChangeWaitingForConfigureSession:) bool _atomicModeChangeWaitingForConfigureSession;
@property(getter=_isAtomicModeChangeWaitingForPreviewStarted,setter=_setAtomicModeChangeWaitingForPreviewStarted:) bool _atomicModeChangeWaitingForPreviewStarted;
@property(readonly) CAMAvalancheCaptureService * _avalancheCaptureService;
@property(retain,readonly) NSObject<OS_dispatch_queue> * _captureIsolationQueue;
@property(getter=_isConfiguringCamera,setter=_setConfiguringCamera:) bool _configuringCamera;
@property(readonly) NSMutableArray * _currentFaceMetadata;
@property(readonly) CAMDebugCaptureService * _debugCaptureService;
@property(readonly) NSMutableArray * _deferredVideoCaptureRequests;
@property(setter=_setDeviceLockCount:) long long _deviceLockCount;
@property(retain,readonly) NSObject<OS_dispatch_queue> * _effectFilterIndexQueue;
@property(setter=_setEffectFilterIndices:,retain) NSDictionary * _effectFilterIndices;
@property(retain,readonly) NSObject<OS_dispatch_queue> * _effectRenderingQueue;
@property(setter=_setEffectsAvailable:) bool _effectsAvailable;
@property(readonly) bool _ignoreSubjectAreaChanges;
@property(readonly) double _ignoreSubjectAreaChangesUntilTime;
@property(readonly) NSMutableArray * _inflightPanoramaCaptureRequests;
@property(readonly) NSMutableArray * _inflightStillImageCaptureRequests;
@property(readonly) NSMutableArray * _inflightVideoCaptureResponses;
@property(readonly) bool _locationAcquiredForTimelapseCapture;
@property(readonly) bool _lockExposureAfterExposeFinishes;
@property(readonly) bool _lockFocusAfterFocusFinishes;
@property(setter=_setLockLensPositionCompletionBlock:,copy) id _lockLensPositionCompletionBlock;
@property(setter=_setLockLensPositionTarget:) float _lockLensPositionTarget;
@property(getter=_isModeChangeWaitingForConfigureSession,setter=_setModeChangeWaitingForConfigureSession:) bool _modeChangeWaitingForConfigureSession;
@property(getter=_isModeChangeWaitingForPreviewStarted,setter=_setModeChangeWaitingForPreviewStarted:) bool _modeChangeWaitingForPreviewStarted;
@property(readonly) bool _panoramaProcessorReadyForSampleBuffers;
@property(setter=_setPreviewLayerEnabledForRenderer:) bool _previewLayerEnabledForRenderer;
@property(getter=_isPreviewPaused,setter=_setPreviewPaused:) bool _previewPaused;
@property(readonly) NSMutableArray * _processingPanoramaCaptureRequests;
@property bool _rebuildingSession;
@property(readonly) NSMutableDictionary * _servicesByType;
@property(getter=_isSessionReady,setter=_setSessionReady:) bool _sessionReady;
@property(setter=_setVideoDataOutputEnabledForRenderer:) bool _videoDataOutputEnabledForRenderer;
@property(readonly) bool _wasStillImageStabilzationOnBeforeTimedCapture;
@property(retain,readonly) CIFilter * activeFilter;
@property(readonly) bool allowsAlternateSlomoFront;
@property(readonly) bool allowsAlternateSlomoRear;
@property long long cameraDevice;
@property long long cameraMode;
@property(readonly) long long cameraOrientation;
@property bool canCapturePhotoFromVideoModeWhenNotRecording;
@property int captureOrientation;
@property(getter=isCapturingTimelapse) bool capturingTimelapse;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cleanAperture;
@property bool convertSampleBufferToJPEG;
@property AVCaptureDevice * currentDevice;
@property AVCaptureDeviceInput * currentInput;
@property AVCaptureOutput * currentOutput;
@property(readonly) AVCaptureSession * currentSession;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool disableAllPreviewSuspensionDuringCapture;
@property(retain) CAMEffectsRenderer * effectsRenderer;
@property struct CGPoint { double x1; double x2; } exposurePointOfInterest;
@property float exposureTargetBias;
@property(readonly) float exposureTargetBiasDefault;
@property(readonly) float exposureTargetBiasMax;
@property(readonly) float exposureTargetBiasMin;
@property long long flashMode;
@property struct CGPoint { double x1; double x2; } focusPointOfInterest;
@property(readonly) unsigned long long hash;
@property(readonly) AVCaptureStillImageOutput * imageOutput;
@property bool isCameraApp;
@property(readonly) bool isStillImageStabilizationActive;
@property(readonly) float panoramaPreviewScale;
@property(readonly) struct CGSize { double x1; double x2; } panoramaPreviewSize;
@property bool performingAvalancheCapture;
@property(copy) id postSessionSetupBlock;
@property(readonly) AVCaptureVideoPreviewLayer * previewLayer;
@property int previewOrientation;
@property bool resetExposureWhenSubjectAreaChanged;
@property bool resetFocusWhenSubjectAreaChanged;
@property(readonly) Class superclass;
@property(copy) NSArray * supportedCameraModes;
@property(readonly) bool supportsHDR;
@property(readonly) bool supportsHDRSuggestion;
@property bool use60FPSVideo;
@property bool useAlternateSlomoFront;
@property bool useAlternateSlomoRear;
@property bool userLockedExposure;
@property bool userLockedFocus;
@property double videoZoomFactor;

+ (id)_dateFormatterForVideoMetadata;
+ (bool)_shouldExtractDiagnostics;
+ (float)focusLensPositionCurrentSentinel;
+ (bool)isStillImageMode:(long long)arg1;
+ (bool)isVideoMode:(long long)arg1;
+ (double)panoramaPreviewHorizontalInset;
+ (struct CGSize { double x1; double x2; })panoramaPreviewSize;
+ (id)sharedInstance;
+ (id)videoMetadataArrayWithLocation:(id)arg1 date:(id)arg2 didSetLocationData:(bool*)arg3;

- (void).cxx_destruct;
- (long long)_AVExposureModeForCAMExposureMode:(int)arg1;
- (long long)_AVFocusModeForCAMFocusMode:(int)arg1;
- (int)_CAMExposureModeForAVExposureMode:(long long)arg1;
- (int)_CAMFocusModeForAVFocusMode:(long long)arg1;
- (unsigned long long)_activeFilterIndex;
- (long long)_addOrientationMetadataToResponse:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applyAudioSettingsFromRequest:(id)arg1;
- (void)_applyCaptureSettingsFromStillImageRequest:(id)arg1 withConnection:(id)arg2;
- (void)_applyCaptureSettingsFromVideoRequest:(id)arg1;
- (void)_applyFlashSettingsFromRequest:(id)arg1;
- (void)_applyHDRSettingsFromRequest:(id)arg1;
- (void)_applyStillImageStabilizationSettingsFromRequest:(id)arg1;
- (void)_applyTorchSettingsFromVideoRequest:(id)arg1;
- (bool)_atomicEffectsAvailable;
- (void)_autofocusAfterCapture;
- (id)_avalancheCaptureService;
- (void)_callStateDidChange:(id)arg1;
- (bool)_canCapturePhotoFromVideoMode;
- (void)_cancelDelayedFocusRequests;
- (id)_captureConnectionForStillImageCapture;
- (id)_captureIsolationQueue;
- (id)_captureMainQueueConfigurationOptions;
- (void)_capturedPhotoWithCaptureDictionary:(id)arg1 metadata:(id)arg2;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(bool)arg3;
- (void)_checkKeepAliveStatus;
- (void)_cleanupPanoramaOnSessionQueue:(bool)arg1;
- (void)_clearPreviewLayer;
- (void)_completedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (void)_completedWriteForResponse:(id)arg1 request:(id)arg2 error:(id)arg3;
- (bool)_configureSessionWithCameraMode:(long long)arg1 cameraDevice:(long long)arg2 options:(id)arg3;
- (void)_createAssetForPanoramaResponse:(id)arg1;
- (void)_createAssetForVideoCaptureResponse:(id)arg1;
- (void)_createPanoramaServicesIfNecessary;
- (void)_createServicesIfNecessaryForMode:(long long)arg1;
- (void)_createStillImageServicesIfNecessary;
- (void)_createTimelapseServicesIfNecessary;
- (void)_createVideoServicesIfNecessary;
- (id)_currentFaceMetadata;
- (id)_currentVideoConnection;
- (id)_debugCaptureService;
- (void)_debugFocusState;
- (void)_debug_cancelWaitForIris;
- (void)_debug_checkIris;
- (id)_debug_dispatchTimerQueue;
- (void)_debug_teardownDispatchTimer;
- (void)_debug_waitForIrisToOpen;
- (id)_deferredVideoCaptureRequests;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_destroyAllServices;
- (void)_destroyCamera;
- (void)_deviceConfigurationForPanoramaOptions:(struct __CFDictionary { }*)arg1 captureDevice:(id)arg2 deviceFormat:(id*)arg3 minFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4 maxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg5;
- (long long)_deviceLockCount;
- (void)_deviceStarted:(id)arg1;
- (bool)_didSendPreviewStartedCallbackToEmptyDelegate;
- (void)_didTakePhoto;
- (void)_disableIdleIndefinitely;
- (void)_disableSubjectAreaChangeMonitoringIfNeeded;
- (id)_effectFilterIndexQueue;
- (id)_effectFilterIndices;
- (id)_effectRenderingQueue;
- (bool)_effectsAvailable;
- (void)_enableKeepAliveFailsafeTimer;
- (void)_enableSubjectAreaChangedMonitoringIfNeededFromFocusCompleted:(bool)arg1 fromExposureCompleted:(bool)arg2;
- (void)_exposureCompleted;
- (void)_exposureStarted;
- (void)_exposureTargetBiasChanged;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_faceRectangleChanged;
- (void)_flashStateChanged;
- (void)_focusCompleted;
- (void)_focusStarted;
- (void)_forceDelaySuspendTimeout;
- (void)_forceKeepAliveFailsafeTimeout;
- (void)_generatedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (bool)_ignoreSubjectAreaChanges;
- (double)_ignoreSubjectAreaChangesUntilTime;
- (void)_imageWriterQueueAvailabilityChanged;
- (void)_inCallStatusChanged:(bool)arg1;
- (id)_inflightPanoramaCaptureRequests;
- (id)_inflightStillImageCaptureRequests;
- (id)_inflightVideoCaptureResponses;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (bool)_isAtomicModeChangeWaitingForConfigureSession;
- (bool)_isAtomicModeChangeWaitingForPreviewStarted;
- (bool)_isCapturingStillFromVideoMode;
- (bool)_isConfiguringCamera;
- (bool)_isFocusModeContinuousAutoFocusAtCenter;
- (bool)_isModeChangeWaitingForConfigureSession;
- (bool)_isModeChangeWaitingForPreviewStarted;
- (bool)_isPreviewPaused;
- (bool)_isSessionReady;
- (void)_jankyPreviewStartedWorkaround;
- (double)_limitZoomFactor:(double)arg1 forDevice:(id)arg2;
- (bool)_locationAcquiredForTimelapseCapture;
- (bool)_lockCurrentDeviceForConfiguration;
- (bool)_lockExposureAfterExposeFinishes;
- (bool)_lockFocusAfterFocusFinishes;
- (void)_lockFocusAndExposureForPano;
- (void)_lockFocusForAvalancheCapture;
- (id)_lockLensPositionCompletionBlock;
- (float)_lockLensPositionTarget;
- (bool)_modeAllowsAEAF;
- (bool)_modeUsesCompassHeading;
- (id)_mogulFormatFromDevice:(id)arg1 frameRate:(double)arg2;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (struct __IOSurface { }*)_newFilteredSurfaceFromSurface:(struct __IOSurface { }*)arg1 filters:(id)arg2;
- (void)_notifyControllerModeDidChange;
- (void)_notifyEffectFilterIndexChanged;
- (void)_notifyServicesOfCompletedResponse:(id)arg1 error:(id)arg2;
- (void)_notifyServicesOfEnqueuedRequest:(id)arg1;
- (void)_notifyServicesOfGeneratedResponse:(id)arg1 error:(id)arg2;
- (void)_panoShouldEnd;
- (void)_panoramaDidReceiveErrorNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveIssueWithPanoramaString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveStatusNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveWarningNotificationString:(struct __CFString { }*)arg1;
- (bool)_panoramaProcessorReadyForSampleBuffers;
- (id)_photoModeSessionPresetForMode:(long long)arg1 device:(long long)arg2;
- (void)_pptTestSetAutofocusDisabled:(bool)arg1;
- (bool)_previewLayerEnabledForRenderer;
- (void)_previewStarted;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(bool)arg3;
- (void)_processPanoramaRequest:(id)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_processingPanoramaCaptureRequests;
- (bool)_rebuildingSession;
- (void)_recoverFromServerError;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
- (void)_resetFocus:(bool)arg1 andExposure:(bool)arg2;
- (void)_resetFocusAndExposureIfNotExplicitlyLocked;
- (void)_resetIdleTimer;
- (void)_resetRecentFaceMetadata;
- (void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(id)arg1;
- (bool)_safeSetCameraMode:(long long)arg1 cameraDevice:(long long)arg2;
- (unsigned long long)_sanitizeEffectFilterIndex:(unsigned long long)arg1 forMode:(long long)arg2;
- (id)_sanitizePanoramaCaptureRequest:(id)arg1;
- (id)_sanitizeStillImageRequest:(id)arg1;
- (id)_sanitizeVideoCaptureRequest:(id)arg1;
- (bool)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (void)_saveStillImageResponse:(id)arg1 completionBlock:(id)arg2;
- (void)_serverDied:(id)arg1;
- (long long)_serviceTypeForCaptureRequest:(id)arg1;
- (id)_servicesByType;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_setAtomicEffectsAvailable:(bool)arg1;
- (void)_setAtomicModeChangeWaitingForConfigureSession:(bool)arg1;
- (void)_setAtomicModeChangeWaitingForPreviewStarted:(bool)arg1;
- (void)_setCameraMode:(long long)arg1 cameraDevice:(long long)arg2 forceConfigure:(bool)arg3;
- (void)_setCameraMode:(long long)arg1 cameraDevice:(long long)arg2;
- (void)_setConfiguringCamera:(bool)arg1;
- (void)_setDefaultPrewarmDate:(id)arg1;
- (void)_setDelaySuspend:(bool)arg1;
- (void)_setDeviceLockCount:(long long)arg1;
- (void)_setEffectFilterIndices:(id)arg1;
- (void)_setEffectsAvailable:(bool)arg1;
- (void)_setEffectsRenderer:(id)arg1;
- (void)_setEndianAndCircularTestEnabled:(bool)arg1;
- (void)_setExposureMode:(long long)arg1;
- (void)_setFaceDetectionEnabled:(bool)arg1 forceDisableImageProcessing:(bool)arg2 forCaptureDevice:(id)arg3 captureOutput:(id)arg4;
- (void)_setFlashMode:(long long)arg1 force:(bool)arg2;
- (void)_setFocusMode:(long long)arg1 forceSmoothFocus:(bool)arg2;
- (void)_setFocusModeLockedWithLensPosition;
- (void)_setKeepAlive:(bool)arg1 forVideoCapture:(bool)arg2;
- (void)_setLocationEnabled:(bool)arg1;
- (void)_setLockLensPositionCompletionBlock:(id)arg1;
- (void)_setLockLensPositionTarget:(float)arg1;
- (void)_setModeChangeWaitingForConfigureSession:(bool)arg1;
- (void)_setModeChangeWaitingForPreviewStarted:(bool)arg1;
- (void)_setOrientation;
- (void)_setOrientationEventsEnabled:(bool)arg1;
- (void)_setOrientationForConnection:(id)arg1;
- (void)_setPerformingAvalancheCapture:(bool)arg1;
- (void)_setPreviewLayerEnabledForRenderer:(bool)arg1;
- (void)_setPreviewPaused:(bool)arg1;
- (void)_setSessionReady:(bool)arg1;
- (void)_setSubjectAreaChangeMonitoringEnabled:(bool)arg1;
- (void)_setSupportedCameraModes:(id)arg1;
- (void)_setVideoCapturePath:(id)arg1;
- (void)_setVideoDataOutputEnabledForRenderer:(bool)arg1;
- (bool)_setupCamera;
- (void)_setupPanoramaForDevice:(id)arg1 output:(id)arg2 options:(out const struct __CFDictionary {}**)arg3;
- (bool)_shouldDisableLocationForTimelapseRecording;
- (bool)_shouldResetExposureWhenSubjectAreaChanged;
- (bool)_shouldResetFocusWhenSubjectAreaChanged;
- (void)_startContinuousAEAFAtCenter;
- (void)_startContinuousAutoExposureAtCenter;
- (void)_startContinuousAutoFocusAtCenter;
- (void)_startPreview:(id)arg1;
- (void)_startPreviewWithCameraDevice:(long long)arg1 cameraMode:(long long)arg2 effectFilterIndices:(id)arg3;
- (id)_stillImageCaptureResponseForRequest:(id)arg1 error:(id)arg2;
- (void)_subjectAreaDidChange:(id)arg1;
- (void)_suggestedHDRChanged;
- (bool)_supportsHDRSuggestionForCaptureDevice:(id)arg1;
- (void)_synchronizeSettings;
- (void)_tearDownCamera;
- (void)_teardownDelaySuspendTimer;
- (void)_teardownKeepAliveFailsafeTimer;
- (void)_teardownKeepAliveTimer;
- (void)_torchActiveChanged;
- (void)_torchLevelChanged;
- (void)_unlockCurrentDeviceForConfiguration;
- (void)_updateCallStatus;
- (void)_updateEffectsRendererFilterIndexForceStateChange:(bool)arg1 renderNotifyBlock:(id)arg2;
- (void)_updateEffectsRendererMirroring;
- (void)_updateEffectsVideoDataOutputEnabled;
- (void)_updateFocusAndExposureForVideoRecording;
- (void)_updateIdleTimerForCapturingTimelapseChanged;
- (void)_updateIdleTimerForDidFinishRecording;
- (void)_updateIdleTimerForDidFinishVideoRecording;
- (void)_updateIdleTimerForPreviewStarted;
- (void)_updateIdleTimerForPreviewStopped;
- (void)_updateIdleTimerForStartVideoCapture;
- (void)_updateIdleTimerForStillImageCaptured;
- (void)_updateIdleTimerForStopVideoCapture;
- (void)_updateImagePickerMetadataForResponse:(id)arg1;
- (void)_updateOrientationForConnection:(id)arg1;
- (void)_updatePreviewLayerEnabled;
- (void)_updateResponse:(id)arg1 withOriginalIOSurface:(struct __IOSurface { }*)arg2 originalSize:(unsigned long long)arg3 unfilteredPreviewSurface:(struct __IOSurface { }*)arg4 unfilteredPreviewSize:(unsigned long long)arg5 filteredPreviewSurface:(struct __IOSurface { }*)arg6 filteredPreviewSize:(unsigned long long)arg7 metadata:(id)arg8 error:(id)arg9;
- (void)_updateResponse:(id)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 metadata:(id)arg3 error:(id)arg4;
- (void)_updateSupportedCameraModes;
- (void)_updateTorchAvailability;
- (void)_updateWhiteBalanceModeForExposureMode:(long long)arg1;
- (bool)_useSmoothFocus;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id*)arg2;
- (void)_verifyVideoConsolidationForVideoResponse:(id)arg1;
- (bool)_videoDataOutputEnabledForRenderer;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(bool)arg1;
- (id)_videoModeSessionPresetForDevice:(long long)arg1 options:(id)arg2;
- (void)_wasInterrupted:(id)arg1;
- (bool)_wasStillImageStabilzationOnBeforeTimedCapture;
- (void)_whiteBalanceCompleted;
- (long long)_whiteBalanceModeForExposureMode:(long long)arg1;
- (void)_whiteBalanceStarted;
- (void)_willTakePhoto;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (id)activeFilter;
- (bool)allowsAlternateSlomoFront;
- (bool)allowsAlternateSlomoRear;
- (long long)cameraDevice;
- (void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(bool)arg2;
- (void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(bool)arg2 animated:(bool)arg3;
- (void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(bool)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(bool)arg2;
- (void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(bool)arg2;
- (void)cameraEffectsRendererDidStartPreview:(id)arg1;
- (long long)cameraMode;
- (long long)cameraOrientation;
- (bool)canCapturePanorama;
- (bool)canCapturePhoto;
- (bool)canCapturePhotoDuringRecording;
- (bool)canCapturePhotoFromVideoModeWhenNotRecording;
- (bool)canCaptureVideo;
- (bool)canChangeFocusOrExposure;
- (bool)canContinueAvalancheCapture;
- (void)cancelAvalancheCapture;
- (void)cancelVideoZoomRamp;
- (void)captureIOSurface;
- (int)captureOrientation;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)capturePhoto;
- (bool)capturePhotoUsingHDR:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cleanAperture;
- (bool)convertSampleBufferToJPEG;
- (id)currentDevice;
- (id)currentInput;
- (double)currentMaxFrameDuration;
- (double)currentMinFrameDuration;
- (id)currentOutput;
- (id)currentSession;
- (bool)currentlyAllowedToExposeAtPointOfInterestWithMode:(int)arg1;
- (bool)currentlyAllowedToFocusAtPointOfInterestWithMode:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)disableAllPreviewSuspensionDuringCapture;
- (unsigned long long)effectFilterIndexForMode:(long long)arg1;
- (id)effectFilterIndices;
- (int)effectiveExposureMode;
- (int)effectiveFocusMode;
- (id)effectsRenderer;
- (void)enqueueBlockInCaptureSessionQueue:(id)arg1;
- (void)enqueueBlockOnMainQueue:(id)arg1;
- (void)enqueuePanoramaRequest:(id)arg1;
- (bool)enqueueStillImageCaptureRequest:(id)arg1;
- (void)enqueueVideoCaptureRequest:(id)arg1;
- (void)executeBlockOnMainQueue:(id)arg1;
- (struct CGPoint { double x1; double x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (float)exposureTargetBiasDefault;
- (float)exposureTargetBiasMax;
- (float)exposureTargetBiasMin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectangle;
- (void)finishAvalancheCapture;
- (long long)flashMode;
- (bool)flashWillFire;
- (float)focusLensPosition;
- (struct CGPoint { double x1; double x2; })focusPointOfInterest;
- (bool)hasFlash;
- (bool)hasFrontCamera;
- (bool)hasInheritedForegroundState;
- (bool)hasRearCamera;
- (id)imageOutput;
- (bool)imageWriterQueueIsAvailable;
- (bool)inCall;
- (id)init;
- (bool)isCameraApp;
- (bool)isCapturingPanorama;
- (bool)isCapturingTimelapse;
- (bool)isCapturingVideo;
- (bool)isChangingModes;
- (bool)isExposing;
- (bool)isExposureModeCenteredContinuous;
- (bool)isExposurePointOfInterestSupported;
- (bool)isFocusPointOfInterestSupported;
- (bool)isFocusing;
- (bool)isFocusingOnFace;
- (bool)isHDRDetectionEnabled;
- (bool)isHDRSuggested;
- (bool)isPreviewMirrored;
- (bool)isReady;
- (bool)isStillImageStabilizationActive;
- (bool)isSupportedExposureMode:(int)arg1;
- (bool)isSupportedFocusMode:(int)arg1;
- (bool)isTorchActive;
- (bool)isTorchDisabled;
- (bool)isTorchOn;
- (bool)lockDeviceForFocusConfiguration;
- (double)maximumZoomFactorForDevice:(long long)arg1;
- (double)minimumVideoCaptureDuration;
- (double)minimumZoomFactorForDevice:(long long)arg1;
- (double)mogulFrameRate;
- (void)notifyLocationAcquiredForTimelapse;
- (long long)numberOfCapturedAvalanchePhotos;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)panoramaPreviewScale;
- (struct CGSize { double x1; double x2; })panoramaPreviewSize;
- (void)panoramaProcessorOutputCallbackWithStatus:(int)arg1 buffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)pausePreview;
- (void)performAutofocusAfterCapture;
- (bool)performingAvalancheCapture;
- (void)postOrientationChangedNotification:(long long)arg1 force:(bool)arg2;
- (id)postSessionSetupBlock;
- (id)previewLayer;
- (int)previewOrientation;
- (void)rampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (id)recentFaceMetadata;
- (void)releaseIOSurface;
- (bool)resetExposureWhenSubjectAreaChanged;
- (void)resetFocusAndExposureIfNotExplicitlyLocked;
- (bool)resetFocusWhenSubjectAreaChanged;
- (void)restartContinuousAEAFAtCenter;
- (void)resumePreview;
- (void)resumeSubjectAreaChangesAfterDelay:(double)arg1;
- (void)setCameraDevice:(long long)arg1;
- (void)setCameraMode:(long long)arg1 device:(long long)arg2;
- (void)setCameraMode:(long long)arg1;
- (void)setCanCapturePhotoFromVideoModeWhenNotRecording:(bool)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setCapturingTimelapse:(bool)arg1;
- (void)setConvertSampleBufferToJPEG:(bool)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setCurrentInput:(id)arg1;
- (void)setCurrentOutput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableAllPreviewSuspensionDuringCapture:(bool)arg1;
- (void)setEffectFilterIndex:(unsigned long long)arg1 forMode:(long long)arg2;
- (void)setEffectFilterIndices:(id)arg1 forceStateChange:(bool)arg2;
- (void)setExposureMode:(int)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setExposureTargetBias:(float)arg1;
- (void)setFaceDetectionEnabled:(bool)arg1 forceDisableImageProcessing:(bool)arg2;
- (void)setFlashMode:(long long)arg1;
- (void)setFocusDisabled:(bool)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionBlock:(id)arg2;
- (void)setFocusPointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHDRDetectionEnabled:(bool)arg1;
- (void)setIsCameraApp:(bool)arg1;
- (void)setPanoramaCaptureDirection:(int)arg1;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (void)setPostSessionSetupBlock:(id)arg1;
- (void)setPreviewOrientation:(int)arg1;
- (void)setResetExposureWhenSubjectAreaChanged:(bool)arg1;
- (void)setResetFocusWhenSubjectAreaChanged:(bool)arg1;
- (void)setUse60FPSVideo:(bool)arg1;
- (void)setUseAlternateSlomoFront:(bool)arg1;
- (void)setUseAlternateSlomoRear:(bool)arg1;
- (void)setUserLockedExposure:(bool)arg1;
- (void)setUserLockedFocus:(bool)arg1 exposure:(bool)arg2;
- (void)setUserLockedFocus:(bool)arg1;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (void)set_rebuildingSession:(bool)arg1;
- (void)smoothFocusAtCenterForVideoRecording;
- (void)startAvalancheCapture;
- (void)startPreview:(id)arg1;
- (void)startPreview;
- (void)startVideoCapture;
- (void)stopPanoramaCapture;
- (void)stopPreview;
- (void)stopVideoCapture;
- (id)supportedCameraModes;
- (bool)supportsAvalancheAnalysisForDevice:(long long)arg1;
- (bool)supportsHDR;
- (bool)supportsHDRForDevice:(long long)arg1 mode:(long long)arg2;
- (bool)supportsHDRSuggestion;
- (bool)supportsHDRSuggestionForDevice:(long long)arg1;
- (bool)supportsLiveEffects;
- (bool)supportsPanorama;
- (bool)supportsPreviewDuringHDR;
- (bool)supportsVideoCapture;
- (void)suspendSubjectAreaChanges;
- (void)unlockDeviceForFocusConfiguration;
- (bool)use60FPSVideo;
- (bool)useAlternateSlomoFront;
- (bool)useAlternateSlomoRear;
- (bool)userLockedExposure;
- (bool)userLockedFocus;
- (id)videoCapturePath;
- (double)videoZoomFactor;

@end
