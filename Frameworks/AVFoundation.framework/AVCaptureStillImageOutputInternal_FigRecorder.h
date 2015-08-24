/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutputInternal_FigRecorder : NSObject {
    BOOL EV0CaptureEnabled;
    int HDRCaptureMode;
    BOOL SISActive;
    BOOL SISEnabled;
    BOOL SISSupported;
    unsigned long imageDataFormatType;
    BOOL isCapturingPhoto;
    float jpegQuality;
    BOOL jpegQualitySpecified;
    BOOL noiseReductionEnabled;
    NSDictionary *outputSettings;
    struct CGSize { 
        float width; 
        float height; 
    } previewImageSize;
    BOOL rawCaptureEnabled;
    unsigned long shutterSoundID;
    BOOL squareCropEnabled;
    NSMutableArray *stillImageRequests;
    BOOL suspendsVideoProcessingDuringCapture;
}

- (void)dealloc;
- (id)init;

@end
