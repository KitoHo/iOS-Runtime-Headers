/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AXAccessQueue, NSMutableArray, NSMutableDictionary;

@interface AXSpringBoardServer : AXServer {
    AXAccessQueue *_accessQueue;
    NSMutableArray *_actionHandlers;
    id _currentAlertHandler;
    NSMutableArray *_gestureOverrides;
    NSMutableDictionary *_reachabilityHandlers;
}

@property(retain) AXAccessQueue * accessQueue;
@property(retain) NSMutableArray * actionHandlers;
@property(copy) id currentAlertHandler;
@property(retain) NSMutableArray * gestureOverrides;
@property(retain) NSMutableDictionary * reachabilityHandlers;

+ (id)server;

- (id)_axSpringBoardServerInstance;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)_axSpringBoardServerInstanceIfExists;
- (void)_didConnectToClient;
- (void)_didConnectToServer;
- (id)_handleActionResult:(id)arg1;
- (id)_handleGestureOverrideResult:(id)arg1;
- (id)_handleReachabilityResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (bool)_isSystemAppFrontmostExcludingSiri:(bool)arg1;
- (id)_serviceName;
- (bool)_shouldDispatchLocally;
- (bool)_shouldValidateEntitlements;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)accessQueue;
- (id)actionHandlers;
- (int)activeApplicationOrientation;
- (long long)activeInterfaceOrientation;
- (id)applicationWithIdentifier:(id)arg1;
- (bool)areSystemGesturesDisabledByAccessibility;
- (bool)areSystemGesturesDisabledNatively;
- (void)cancelReachabilityDetection;
- (void)cleanupAlertHandler;
- (void)copyStringToPasteboard:(id)arg1;
- (id)currentAlertHandler;
- (void)dealloc;
- (void)dismissAppSwitcher;
- (void)dismissSiri;
- (id)focusedAppPID;
- (id)focusedAppProcess;
- (id)gestureOverrides;
- (bool)hasActiveCall;
- (bool)hasActiveOrPendingCall;
- (bool)hasActiveOrPendingCallOrFaceTime;
- (void)hideAlert;
- (void)hideNotificationCenter;
- (id)init;
- (id)installedApps;
- (bool)isAppSwitcherVisible;
- (bool)isControlCenterVisible;
- (bool)isGuidedAccessActive;
- (bool)isInspectorMinimized;
- (bool)isMakingEmergencyCall;
- (bool)isMediaPlaying;
- (bool)isNotificationCenterVisible;
- (bool)isOrientationLocked;
- (bool)isPointInsideAccessibilityInspector:(id)arg1;
- (bool)isPurpleBuddyAppFrontmost;
- (bool)isRingerMuted;
- (bool)isScreenLockedWithPasscode:(bool*)arg1;
- (bool)isSettingsAppFrontmost;
- (bool)isSideSwitchUsedForOrientation;
- (bool)isSiriTalkingOrListening;
- (bool)isSiriVisible;
- (bool)isSpeakThisTemporarilyDisabled;
- (bool)isSyncingRestoringResettingOrUpdating;
- (bool)isSystemAppFrontmost;
- (bool)isSystemAppFrontmostExludingSiri;
- (bool)isSystemAppShowingAnAlert;
- (bool)isSystemSleeping;
- (bool)isVoiceControlRunning;
- (void)openAppSwitcher;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)openSCATCommonTasks;
- (void)openSCATCustomGestureCreation;
- (void)openSiri;
- (void)openVoiceControl;
- (void)pauseMedia;
- (int)pid;
- (int)purpleBuddyPID;
- (id)reachabilityHandlers;
- (double)reachabilityOffset;
- (void)registerOverrideIntentForGesture:(unsigned long long)arg1 withHandler:(id)arg2 withIdentifierCallback:(id)arg3;
- (void)registerReachabilityHandler:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)registerSpringBoardActionHandler:(id)arg1 withIdentifierCallback:(id)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)removeOverrideIntent:(id)arg1;
- (void)removeReachabilityHandler:(id)arg1;
- (void)resetDimTimer;
- (void)resumeMedia;
- (id)runningAppPIDs;
- (id)runningAppProcesses;
- (void)setAccessQueue:(id)arg1;
- (void)setActionHandlers:(id)arg1;
- (void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(bool)arg2;
- (void)setCurrentAlertHandler:(id)arg1;
- (void)setGestureOverrides:(id)arg1;
- (void)setHearingAidControlVisible:(bool)arg1;
- (void)setOrientationLocked:(bool)arg1;
- (void)setReachabilityHandlers:(id)arg1;
- (void)setShowSpeechPlaybackControls:(bool)arg1;
- (void)setSiriIsTalking:(bool)arg1;
- (void)setVolume:(double)arg1;
- (void)showAlert:(long long)arg1 withHandler:(id)arg2 withData:(id)arg3;
- (void)showAlert:(long long)arg1 withHandler:(id)arg2;
- (void)showControlCenter:(bool)arg1;
- (bool)showNotificationCenter:(bool)arg1;
- (void)showNotificationCenter;
- (void)startHearingAidServer;
- (id)systemAppInfoWithQuery:(unsigned long long)arg1;
- (void)takeScreenshot;
- (void)toggleNotificationCenter;
- (int)topEventPidOverride;
- (void)unlockDevice;
- (double)volumeLevel;

@end
