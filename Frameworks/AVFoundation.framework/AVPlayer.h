/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerInternal, NSArray, NSError, NSString;

@interface AVPlayer : NSObject {
    AVPlayerInternal *_player;
}

@property(setter=_setDisplaysUsedForPlayback:,copy) NSArray * _displaysUsedForPlayback;
@property(readonly) long long _externalProtectionStatus;
@property bool allowsOutOfBandTextTrackRendering;
@property bool allowsPixelBufferPoolSharing;
@property bool appliesMediaSelectionCriteriaAutomatically;
@property(copy) NSString * audioOutputDeviceUniqueID;
@property(getter=isAudioPlaybackEnabledAtAllRates,readonly) bool audioPlaybackEnabledAtAllRates;
@property bool disallowsAMRAudio;
@property(readonly) NSError * error;
@property float maxRateForAudioPlayback;
@property float minRateForAudioPlayback;
@property(readonly) long long status;

+ (bool)automaticallyNotifiesObserversOfActionAtItemEnd;
+ (bool)automaticallyNotifiesObserversOfAirPlayVideoActive;
+ (bool)automaticallyNotifiesObserversOfAutoSwitchStreamVariants;
+ (bool)automaticallyNotifiesObserversOfCurrentItem;
+ (bool)automaticallyNotifiesObserversOfExternalPlaybackActive;
+ (bool)automaticallyNotifiesObserversOfRate;
+ (bool)automaticallyNotifiesObserversOfUserVolume;
+ (bool)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;
+ (bool)automaticallyNotifiesObserversOfUsesAudioOnlyModeForExternalPlayback;
+ (bool)automaticallyNotifiesObserversOfVibrationPattern;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingActionAtItemEnd;
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;
+ (id)keyPathsForValuesAffectingMuted;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingVolume;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;

- (bool)_CALayerDestinationIsTVOut;
- (long long)_actionAtItemEnd;
- (void)_addFPListeners;
- (void)_addLayer:(id)arg1 withPixelBufferAttributes:(id)arg2;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1;
- (bool)_airPlayVideoActive;
- (bool)_allowsExternalPlayback;
- (bool)_allowsPixelBufferPoolSharing;
- (bool)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;
- (bool)_appliesMediaSelectionCriteriaAutomatically;
- (void)_attachClosedCaptionLayersToFigPlayer;
- (void)_attachFigPlayerToSubtitleLayers;
- (bool)_attachItem:(id)arg1 andPerformOperation:(long long)arg2 withObject:(id)arg3;
- (void)_attachVideoLayersToFigPlayer;
- (id)_audioOutputDeviceUniqueID;
- (id)_avPlayerLayers;
- (id)_cachedValueForKey:(id)arg1;
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)arg1;
- (bool)_carplayIsActive;
- (void)_changeStatusToFailedWithError:(id)arg1;
- (void)_checkDefaultsWriteForPerformanceLogging;
- (id)_clientName;
- (long long)_clientPriority;
- (id)_closedCaptionLayers;
- (void)_conformVideoLayer:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_coordinateWithRemovalOfItem:(id)arg1;
- (struct OpaqueFigPlayer { }*)_copyFigPlayer;
- (id)_copyPerformanceDataForCurrentItem;
- (void)_createPlayer:(long long)arg1 item:(id)arg2 preparationRequested:(bool)arg3 completionHandler:(id)arg4;
- (int)_createPrerollID;
- (void)_currentItemStatusIsReadyToPlay;
- (long long)_defaultActionAtItemEnd;
- (void)_detachClosedCaptionLayersFromFigPlayer;
- (void)_detachFigPlayerFromSubtitleLayers;
- (void)_detachVideoLayersFromFigPlayer;
- (void)_didAccessKVOForKey:(id)arg1;
- (void)_didFinishSuspension:(id)arg1;
- (bool)_disallowsAMRAudio;
- (bool)_disallowsHardwareAcceleratedVideoDecoder;
- (id)_displaysUsedForPlayback;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (bool)_externalPlaybackActive;
- (long long)_externalProtectionStatus;
- (long long)_extractVerifiedFPExternalProtectionStatus:(id)arg1;
- (id)_fpNotificationNames;
- (bool)_hasAssociatedAVPlayerLayerInPIPMode;
- (bool)_hasAssociatedOnscreenAVPlayerLayer;
- (bool)_iapdExtendedModeIsActive;
- (bool)_insertItem:(id)arg1 afterItem:(id)arg2;
- (bool)_insertPlaybackItemOfItem:(id)arg1 inPlayerQueueAfterPlaybackItemOfItem:(id)arg2;
- (bool)_isChangingValueForKey:(id)arg1;
- (bool)_isClosedCaptionDisplayEnabled;
- (bool)_isDisplayingClosedCaptions;
- (bool)_isMuted;
- (long long)_itemOkayToPlayWhileTransitioningToBackground:(id)arg1;
- (id)_items;
- (void)_logPerformanceDataForCurrentItem;
- (void)_logPerformanceDataForPreviousItem;
- (void)_noteDisplaySize:(struct CGSize { double x1; double x2; })arg1 forPlayerLayer:(id)arg2;
- (bool)_outputObscuredDueToInsufficientExternalProtection;
- (id)_pixelBufferAttributeMediator;
- (id)_playbackDisplaysForFigPlayer;
- (float)_playerVolume;
- (id)_propertyStorage;
- (float)_rate;
- (void)_removeAllItems;
- (void)_removeAllLayers;
- (void)_removeFPListeners;
- (bool)_removeItem:(id)arg1;
- (void)_removeLayer:(id)arg1;
- (bool)_resumePlayback:(double)arg1 error:(id*)arg2;
- (void)_setActionAtItemEnd:(long long)arg1 allowingAdvance:(bool)arg2;
- (void)_setCALayerDestinationIsTVOut:(bool)arg1;
- (void)_setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)_setClientName:(id)arg1;
- (void)_setClientPriority:(long long)arg1;
- (void)_setCurrentItem:(id)arg1;
- (void)_setDisplaysUsedForPlayback:(id)arg1;
- (void)_setEQPreset:(int)arg1;
- (void)_setFigPlaybackItemToMakeCurrent:(struct OpaqueFigPlaybackItem { }*)arg1;
- (void)_setNeroVideoGravityOnFigPlayer;
- (void)_setPreferredLanguageList:(id)arg1;
- (void)_setStoppingFadeOutDuration:(float)arg1;
- (void)_setUserVolume:(float)arg1;
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(bool)arg1;
- (bool)_shouldDetachVideoLayersFromFigPlayer;
- (bool)_shouldLogPerformanceData;
- (void)_startObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_stateDispatchQueue;
- (void)_stopObservingPropertiesOfCurrentItem:(id)arg1;
- (id)_subtitleLayers;
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;
- (void)_updateClosedCaptionLayerBounds:(id)arg1;
- (void)_updateCurrentItemPreferredPixelBufferAttributesAndVideoLayerSuppression;
- (void)_updateDecoderPixelBufferAttributes:(id)arg1 onFigPlayer:(struct OpaqueFigPlayer { }*)arg2;
- (float)_userVolume;
- (bool)_usesAudioOnlyModeForExternalPlayback;
- (bool)_usesExternalPlaybackWhileExternalScreenIsActive;
- (id)_videoLayers;
- (id)_weakReference;
- (void)_willAccessKVOForKey:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (long long)actionAtItemEnd;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 queue:(id)arg2 usingBlock:(id)arg3;
- (bool)allowsAirPlayVideo;
- (bool)allowsExternalPlayback;
- (bool)allowsOutOfBandTextTrackRendering;
- (bool)allowsPixelBufferPoolSharing;
- (bool)appliesMediaSelectionCriteriaAutomatically;
- (id)audioOutputDeviceUniqueID;
- (bool)autoSwitchStreamVariants;
- (void)cancelPendingPrerolls;
- (id)currentItem;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (void)dealloc;
- (id)defaultMediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (bool)disallowsAMRAudio;
- (bool)disallowsHardwareAcceleratedVideoDecoder;
- (id)dispatchQueue;
- (id)error;
- (id)expectedAssetTypes;
- (long long)externalPlaybackType;
- (id)externalPlaybackVideoGravity;
- (void)finalize;
- (id)init;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithPlayerItem:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isAirPlayVideoActive;
- (bool)isAudioPlaybackEnabledAtAllRates;
- (bool)isClosedCaptionDisplayEnabled;
- (bool)isDisplayingClosedCaptions;
- (bool)isExternalPlaybackActive;
- (bool)isMuted;
- (struct OpaqueCMClock { }*)masterClock;
- (float)maxRateForAudioPlayback;
- (id)mediaSelectionCriteriaForMediaCharacteristic:(id)arg1;
- (float)minRateForAudioPlayback;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)outputObscuredDueToInsufficientExternalProtection;
- (void)pause;
- (void)play;
- (id)playerAVAudioSession;
- (void)prepareItem:(id)arg1 withCompletionHandler:(id)arg2;
- (bool)preparesItemsForPlaybackAsynchronously;
- (void)prerollAtRate:(float)arg1 completionHandler:(id)arg2;
- (void)prerollOperationDidComplete:(bool)arg1 notificationPayload:(struct __CFDictionary { }*)arg2;
- (float)rate;
- (void)removeAudioPlaybackRateLimits;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)seekToDate:(id)arg1 completionHandler:(id)arg2;
- (void)seekToDate:(id)arg1;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id)arg2;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 completionHandler:(id)arg4;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)seekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setAllowsAirPlayVideo:(bool)arg1;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAllowsOutOfBandTextTrackRendering:(bool)arg1;
- (void)setAllowsPixelBufferPoolSharing:(bool)arg1;
- (void)setAppliesMediaSelectionCriteriaAutomatically:(bool)arg1;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (void)setAutoSwitchStreamVariants:(bool)arg1;
- (void)setClosedCaptionDisplayEnabled:(bool)arg1;
- (void)setDisallowsAMRAudio:(bool)arg1;
- (void)setDisallowsHardwareAcceleratedVideoDecoder:(bool)arg1;
- (void)setExpectedAssetTypes:(id)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setMaxRateForAudioPlayback:(float)arg1;
- (void)setMediaSelectionCriteria:(id)arg1 forMediaCharacteristic:(id)arg2;
- (void)setMinRateForAudioPlayback:(float)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPreparesItemsForPlaybackAsynchronously:(bool)arg1;
- (void)setRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 atHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setRate:(float)arg1 withVolumeRampDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setRate:(float)arg1;
- (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(bool)arg1;
- (void)setUsesAudioOnlyModeForExternalPlayback:(bool)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVibrationPattern:(id)arg1;
- (void)setVolume:(float)arg1;
- (long long)status;
- (bool)usesAirPlayVideoWhileAirPlayScreenIsActive;
- (bool)usesAudioOnlyModeForExternalPlayback;
- (bool)usesExternalPlaybackWhileExternalScreenIsActive;
- (id)valueForUndefinedKey:(id)arg1;
- (id)vibrationPattern;
- (float)volume;
- (void)willChangeValueForKey:(id)arg1;

@end
