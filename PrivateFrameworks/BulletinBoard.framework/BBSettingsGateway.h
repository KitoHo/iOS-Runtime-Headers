/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {
    id _activeOverrideTypesChangedHandler;
    NSXPCConnection *_connection;
    id _overrideStateChangeHandler;
    id _overrideStatusChangeHandler;
    id _overridesChangedHandler;
    id _overridesEffectiveWhileUnlockedChangedHandler;
    id _privilegedSenderGroupChangedHandler;
    id _privilegedSenderTypesChangedHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)clientInterface;
+ (void)initialize;
+ (id)serverInterface;

- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesChanged:(id)arg1 source:(unsigned long long)arg2;
- (void)behaviorOverridesEffectiveWhileUnlockedChanged:(bool)arg1 source:(unsigned long long)arg2;
- (void)dealloc;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithCompletion:(id)arg1;
- (void)getBehaviorOverridesEnabledWithCompletion:(id)arg1;
- (void)getBehaviorOverridesWithCompletion:(id)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(id)arg1;
- (void)getPrivilegedSenderTypesWithCompletion:(id)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withCompletion:(id)arg2;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (void)getSectionOrderRuleWithCompletion:(id)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setActiveBehaviorOverrideTypesChangeHandler:(id)arg1;
- (void)setActiveBehaviorOverrideTypesWithSourceChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStateChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrideStatus:(long long)arg1;
- (void)setBehaviorOverrideStatusChangeHandler:(id)arg1;
- (void)setBehaviorOverrideStatusWithSourceChangeHandler:(id)arg1;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setBehaviorOverridesChangeHandler:(id)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeHandler:(id)arg1;
- (void)setBehaviorOverridesEnabled:(bool)arg1;
- (void)setBehaviorOverridesWithSourceChangeHandler:(id)arg1;
- (void)setOrderedSectionIDs:(id)arg1 forCategory:(long long)arg2;
- (void)setOrderedSectionIDs:(id)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2;
- (void)setPrivilegedSenderAddressBookGroupRecordIDWithSourceChangeHandler:(id)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1;
- (void)setPrivilegedSenderTypesWithSourceChangeHandler:(id)arg1;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)setSectionOrderRule:(long long)arg1;

@end
