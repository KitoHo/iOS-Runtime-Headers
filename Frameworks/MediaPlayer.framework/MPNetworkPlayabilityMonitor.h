/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPNetworkPlayabilityMonitor : NSObject {
    long long _effectiveNetworkTypeForCloudPlayback;
    double _lastAverageBitrate;
    long long _networkType;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) long long effectiveNetworkTypeForPlayback;
@property(readonly) double lastAverageBitrate;
@property(readonly) long long networkType;

+ (id)sharedNetworkPlayabilityMonitor;

- (void).cxx_destruct;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (void)dealloc;
- (long long)effectiveNetworkTypeForPlayback;
- (id)init;
- (double)lastAverageBitrate;
- (long long)networkType;

@end
