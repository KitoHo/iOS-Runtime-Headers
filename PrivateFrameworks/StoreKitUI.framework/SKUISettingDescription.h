/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingDescription : NSObject {
    BOOL _editsValid;
    SKUISettingsGroupDescription *_parent;
    SKUIViewElement *_viewElement;
}

@property (nonatomic, readonly) BOOL allowsSelection;
@property (nonatomic, readonly) BOOL editsValid;
@property (nonatomic) SKUISettingsGroupDescription *parent;
@property (nonatomic, retain) SKUIViewElement *viewElement;

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (BOOL)allowsEdit;
+ (Class)viewClassForSettingDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteSetting;
- (void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_dispatchUpdate:(id)arg1;
- (void)_hideSetting;
- (BOOL)_initiallyHidden;
- (BOOL)_isHidden;
- (void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_reloadSetting;
- (void)_revealSetting;
- (void)_setEditsValid:(BOOL)arg1;
- (BOOL)allowsSelection;
- (void)beginEditing;
- (void)cancelEdits;
- (BOOL)commitEdits:(id /* block */)arg1;
- (void)discardEdits;
- (BOOL)editsValid;
- (void)handleSelectionOnCompletion:(id /* block */)arg1;
- (id)indexPath;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (id)parent;
- (void)reloadData;
- (void)reloadWithViewElement:(id)arg1 parent:(id)arg2;
- (void)setParent:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)viewElement;

@end
