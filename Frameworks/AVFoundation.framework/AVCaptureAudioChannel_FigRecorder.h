/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureAudioChannelInternal_FigRecorder;

@interface AVCaptureAudioChannel_FigRecorder : NSObject {
    AVCaptureAudioChannelInternal_FigRecorder *_internal;
}

@property(readonly) float averagePowerLevel;
@property(readonly) float peakHoldLevel;

- (float)averagePowerLevel;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isKindOfClass:(Class)arg1;
- (float)peakHoldLevel;

@end
