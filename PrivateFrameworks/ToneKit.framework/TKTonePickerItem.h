/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSString, TKTonePickerController, TKTonePickerSectionItem;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {
    unsigned long long _itemKind;
    long long _numberOfChildren;
    TKTonePickerController *_parentTonePickerController;
}

@property(setter=_setParentTonePickerController:) TKTonePickerController * _parentTonePickerController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property unsigned long long itemKind;
@property long long numberOfChildren;
@property(readonly) TKTonePickerSectionItem * parentSectionItem;
@property(readonly) Class superclass;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)_parentTonePickerController;
- (void)_setItemKind:(unsigned long long)arg1;
- (void)_setNumberOfChildren:(long long)arg1;
- (void)_setParentTonePickerController:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
- (unsigned long long)itemKind;
- (long long)numberOfChildren;
- (id)parentSectionItem;

@end
