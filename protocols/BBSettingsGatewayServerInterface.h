/* Generated by RuntimeBrowser.
 */

@protocol BBSettingsGatewayServerInterface <NSObject>

@required

- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getBehaviorOverridesEnabledWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getBehaviorOverridesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPrivilegedSenderTypesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)getSectionInfoForCategory:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getSectionOrderRuleWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverrideStatus:(int)arg1 source:(unsigned int)arg2;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverrides:(NSArray *)arg1 source:(unsigned int)arg2;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned int)arg2;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(BOOL)arg1;
- (void)setOrderedSectionIDs:(NSArray *)arg1 forCategory:(int)arg2;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(NSString *)arg2 source:(unsigned int)arg3;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(BOOL)arg1;
- (void)setPrivilegedSenderTypes:(unsigned int)arg1 source:(unsigned int)arg2;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setSectionInfo:(BBSectionInfo *)arg1 forSectionID:(NSString *)arg2 inCategory:(int)arg3;
- (void)setSectionOrderRule:(int)arg1;

@end
