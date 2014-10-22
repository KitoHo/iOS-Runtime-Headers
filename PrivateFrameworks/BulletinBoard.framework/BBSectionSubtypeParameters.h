/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBColor, BBSectionIcon, BBSectionSubtypeParameters, NSNumber, NSSet, NSString;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding> {
    NSString *_alternateActionLabel;
    NSString *_bannerAccessoryRemoteServiceBundleIdentifier;
    NSString *_bannerAccessoryRemoteViewControllerClassName;
    NSNumber *_boxedBannerShowsSubtitle;
    NSNumber *_boxedCanBeSilencedByMenuButtonPress;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedIPodOutAlertType;
    NSNumber *_boxedIgnoresQuietMode;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedPreventLock;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedSuppressesAlertsWhenAppIsActive;
    NSNumber *_boxedSuppressesMessageForPrivacy;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_fullAlternateActionLabel;
    NSString *_fullUnlockActionLabel;
    NSString *_missedBannerDescriptionFormat;
    NSString *_secondaryContentRemoteServiceBundleIdentifier;
    NSString *_secondaryContentRemoteViewControllerClassName;
    BBSectionIcon *_sectionIconOverride;
    BBColor *_tintColor;
    NSString *_topic;
    NSString *_unlockActionLabel;
}

@property(retain) NSSet * alertSuppressionAppIDs;
@property(copy) NSString * alternateActionLabel;
@property(copy) NSString * bannerAccessoryRemoteServiceBundleIdentifier;
@property(copy) NSString * bannerAccessoryRemoteViewControllerClassName;
@property bool bannerShowsSubtitle;
@property(retain) NSNumber * boxedBannerShowsSubtitle;
@property(retain) NSNumber * boxedCanBeSilencedByMenuButtonPress;
@property(retain) NSNumber * boxedCoalescesWhenLocked;
@property(retain) NSNumber * boxedIPodOutAlertType;
@property(retain) NSNumber * boxedIgnoresQuietMode;
@property(retain) NSNumber * boxedInertWhenLocked;
@property(retain) NSNumber * boxedPreservesUnlockActionCase;
@property(retain) NSNumber * boxedPreventLock;
@property(retain) NSNumber * boxedRealertCount;
@property(retain) NSNumber * boxedSubtypePriority;
@property(retain) NSNumber * boxedSuppressesAlertsWhenAppIsActive;
@property(retain) NSNumber * boxedSuppressesMessageForPrivacy;
@property(retain) NSNumber * boxedVisuallyIndicatesWhenDateIsInFuture;
@property bool canBeSilencedByMenuButtonPress;
@property bool coalescesWhenLocked;
@property BBSectionSubtypeParameters * fallbackParameters;
@property(copy) NSString * fullAlternateActionLabel;
@property(copy) NSString * fullUnlockActionLabel;
@property long long iPodOutAlertType;
@property bool ignoresQuietMode;
@property bool inertWhenLocked;
@property(copy) NSString * missedBannerDescriptionFormat;
@property bool preservesUnlockActionCase;
@property bool preventLock;
@property unsigned long long realertCount;
@property(copy) NSString * secondaryContentRemoteServiceBundleIdentifier;
@property(copy) NSString * secondaryContentRemoteViewControllerClassName;
@property(copy) BBSectionIcon * sectionIconOverride;
@property unsigned long long subtypePriority;
@property bool suppressesAlertsWhenAppIsActive;
@property bool suppressesMessageForPrivacy;
@property(retain) BBColor * tintColor;
@property(copy) NSString * topic;
@property(copy) NSString * unlockActionLabel;
@property bool visuallyIndicatesWhenDateIsInFuture;

+ (bool)supportsSecureCoding;

- (id)alertSuppressionAppIDs;
- (id)alternateActionLabel;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (bool)bannerShowsSubtitle;
- (id)boxedBannerShowsSubtitle;
- (id)boxedCanBeSilencedByMenuButtonPress;
- (id)boxedCoalescesWhenLocked;
- (id)boxedIPodOutAlertType;
- (id)boxedIgnoresQuietMode;
- (id)boxedInertWhenLocked;
- (id)boxedPreservesUnlockActionCase;
- (id)boxedPreventLock;
- (id)boxedRealertCount;
- (id)boxedSubtypePriority;
- (id)boxedSuppressesAlertsWhenAppIsActive;
- (id)boxedSuppressesMessageForPrivacy;
- (id)boxedVisuallyIndicatesWhenDateIsInFuture;
- (bool)canBeSilencedByMenuButtonPress;
- (bool)coalescesWhenLocked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackParameters;
- (id)fullAlternateActionLabel;
- (id)fullUnlockActionLabel;
- (long long)iPodOutAlertType;
- (bool)ignoresQuietMode;
- (bool)inertWhenLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithFallbackParameters:(id)arg1;
- (id)missedBannerDescriptionFormat;
- (bool)preservesUnlockActionCase;
- (bool)preventLock;
- (unsigned long long)realertCount;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)sectionIconOverride;
- (void)setAlertSuppressionAppIDs:(id)arg1;
- (void)setAlternateActionLabel:(id)arg1;
- (void)setBannerAccessoryRemoteServiceBundleIdentifier:(id)arg1;
- (void)setBannerAccessoryRemoteViewControllerClassName:(id)arg1;
- (void)setBannerShowsSubtitle:(bool)arg1;
- (void)setBoxedBannerShowsSubtitle:(id)arg1;
- (void)setBoxedCanBeSilencedByMenuButtonPress:(id)arg1;
- (void)setBoxedCoalescesWhenLocked:(id)arg1;
- (void)setBoxedIPodOutAlertType:(id)arg1;
- (void)setBoxedIgnoresQuietMode:(id)arg1;
- (void)setBoxedInertWhenLocked:(id)arg1;
- (void)setBoxedPreservesUnlockActionCase:(id)arg1;
- (void)setBoxedPreventLock:(id)arg1;
- (void)setBoxedRealertCount:(id)arg1;
- (void)setBoxedSubtypePriority:(id)arg1;
- (void)setBoxedSuppressesAlertsWhenAppIsActive:(id)arg1;
- (void)setBoxedSuppressesMessageForPrivacy:(id)arg1;
- (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)arg1;
- (void)setCanBeSilencedByMenuButtonPress:(bool)arg1;
- (void)setCoalescesWhenLocked:(bool)arg1;
- (void)setFallbackParameters:(id)arg1;
- (void)setFullAlternateActionLabel:(id)arg1;
- (void)setFullUnlockActionLabel:(id)arg1;
- (void)setIPodOutAlertType:(long long)arg1;
- (void)setIgnoresQuietMode:(bool)arg1;
- (void)setInertWhenLocked:(bool)arg1;
- (void)setMissedBannerDescriptionFormat:(id)arg1;
- (void)setPreservesUnlockActionCase:(bool)arg1;
- (void)setPreventLock:(bool)arg1;
- (void)setRealertCount:(unsigned long long)arg1;
- (void)setSecondaryContentRemoteServiceBundleIdentifier:(id)arg1;
- (void)setSecondaryContentRemoteViewControllerClassName:(id)arg1;
- (void)setSectionIconOverride:(id)arg1;
- (void)setSubtypePriority:(unsigned long long)arg1;
- (void)setSuppressesAlertsWhenAppIsActive:(bool)arg1;
- (void)setSuppressesMessageForPrivacy:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (void)setVisuallyIndicatesWhenDateIsInFuture:(bool)arg1;
- (unsigned long long)subtypePriority;
- (bool)suppressesAlertsWhenAppIsActive;
- (bool)suppressesMessageForPrivacy;
- (id)tintColor;
- (id)topic;
- (id)unlockActionLabel;
- (bool)visuallyIndicatesWhenDateIsInFuture;

@end
