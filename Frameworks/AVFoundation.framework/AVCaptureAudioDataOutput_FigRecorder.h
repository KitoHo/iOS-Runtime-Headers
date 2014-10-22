/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder>, AVCaptureAudioDataOutputInternal_FigRecorder, NSObject<OS_dispatch_queue>;

@interface AVCaptureAudioDataOutput_FigRecorder : AVCaptureOutput_FigRecorder {
    AVCaptureAudioDataOutputInternal_FigRecorder *_internal;
}

@property(readonly) NSObject<OS_dispatch_queue> * sampleBufferCallbackQueue;
@property(readonly) <AVCaptureAudioDataOutputSampleBufferDelegate_FigRecorder> * sampleBufferDelegate;

+ (void)initialize;

- (void)_AVCaptureAudioDataOutput_AudioDataBecameReady;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)didStartForSession:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (void)handleEnabledChangedForConnection:(id)arg1;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isTheOnlyDataOutput;
- (id)recommendedAudioSettingsForAssetWriterWithOutputFileType:(id)arg1;
- (id)sampleBufferCallbackQueue;
- (id)sampleBufferDelegate;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
- (void)setSession:(id)arg1;
- (id)supportedAssetWriterOutputFileTypes;

@end
