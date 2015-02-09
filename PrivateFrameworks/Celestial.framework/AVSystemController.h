/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVSystemController : NSObject {
    struct AVSystemControllerPrivate { boolx1; boolx2; float x3; id x4; struct OpaqueFigPlayer {} *x5; } *_priv;
}

+ (void)initialize;
+ (id)sharedAVSystemController;

- (bool)allowUserToExceedEUVolumeLimit;
- (id)attributeForKey:(id)arg1;
- (bool)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (bool)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (bool)changeActiveCategoryVolumeBy:(float)arg1;
- (bool)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (bool)changeVolumeForAccessoryBy:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (bool)currentRouteHasVolumeControl;
- (void)dealloc;
- (bool)didCancelRoutePicking:(id)arg1;
- (bool)enablePortDiscovery:(bool)arg1;
- (bool)getActiveCategoryMuted:(bool*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (bool)getActiveCategoryMuted:(bool*)arg1;
- (bool)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3;
- (bool)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (bool)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2;
- (bool)getPortDiscoveryEnabled;
- (bool)getVibeIntensity:(float*)arg1;
- (bool)getVolume:(float*)arg1 forCategory:(id)arg2;
- (bool)getVolumeForAccessory:(float*)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (void)handleServerDied;
- (id)init;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3;
- (bool)okToNotifyFromThisThread;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)pickableRoutesForCategory:(id)arg1;
- (void)postEffectiveVolumeNotification:(void*)arg1;
- (void)postFullMuteDidChangeNotification:(void*)arg1;
- (id)routeForCategory:(id)arg1;
- (bool)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (bool)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (bool)setActiveCategoryVolumeTo:(float)arg1;
- (bool)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(bool)arg2;
- (bool)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (bool)setVibeIntensityTo:(float)arg1;
- (bool)setVolumeForAccessoryTo:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4;
- (bool)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (bool)toggleActiveCategoryMuted;
- (bool)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (id)volumeCategoryForAudioCategory:(id)arg1;
- (bool)willStartRoutePicking:(id)arg1;

@end
