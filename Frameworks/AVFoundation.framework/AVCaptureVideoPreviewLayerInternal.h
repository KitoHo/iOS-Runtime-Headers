/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnection, AVCaptureSession, AVWeakReference, CALayer, NSString;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    boolautomaticallyAdjustsMirroring;
    boolchromaNoiseReductionEnabled;
    booldisableActions;
    boolisPaused;
    boolisPresentationLayer;
    boolmirrored;
    boolvisible;
    } captureDeviceTransform;
    int changeSeed;
    AVCaptureConnection *connection;
    struct OpaqueFigCaptureSession { } *figCaptureSession;
    NSString *gravity;
    long long orientation;
    double previewRotationDegrees;
    } previewSize;
    double rollAdjustment;
    } sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    AVCaptureSession *session;
    NSString *sinkID;
    CALayer *sublayer;
    AVWeakReference *weakReference;
}

@end
