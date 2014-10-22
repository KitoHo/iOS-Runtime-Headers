/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyGroupAlertItem : ABPropertyGroupItem {
}

@property(getter=isTone,readonly) bool tone;
@property(getter=isVibration,readonly) bool vibration;

- (id)_toneManager;
- (id)_vibrationManager;
- (bool)canRemove;
- (id)description;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (bool)isEquivalentToItem:(id)arg1 whenEditing:(bool)arg2;
- (bool)isTone;
- (bool)isValidValue:(id)arg1;
- (bool)isVibration;

@end
