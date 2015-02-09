/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class BluetoothManager, NSArray, NSMutableDictionary, NSString, NSTimer, PKLinkedAppView, PKSettingTableCell, UIButton, UILabel, UIRefreshControl, UITableView, UIView;

@interface PKPassBackFaceView : PKPassFaceView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    PKSettingTableCell *_automaticUpdates;
    UITableView *_bodyTable;
    BluetoothManager *_btManager;
    UIButton *_doneButton;
    NSMutableDictionary *_fieldCellsByIndexPath;
    unsigned long long _fieldsSection;
    PKLinkedAppView *_linkedApp;
    unsigned long long _linkedAppSection;
    UIView *_locationHelpView;
    UIRefreshControl *_refreshControl;
    NSTimer *_refreshTimeoutTimer;
    NSArray *_rowCountBySection;
    unsigned long long _settingsSection;
    PKSettingTableCell *_showInLockScreen;
    UILabel *_updateDateLabel;
    bool_isBluetoothEnabled;
    bool_isLocationEnabled;
    bool_isWifiEnabled;
    bool_showsDelete;
    bool_showsLinkedApp;
    bool_showsLinks;
    bool_showsSettings;
    bool_tall;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property PKLinkedAppView * linkedApp;
@property bool showsDelete;
@property bool showsLinkedApp;
@property bool showsLinks;
@property bool showsSettings;
@property(readonly) Class superclass;

+ (id)_linkColor;
+ (id)_linkTextAttributes;
+ (bool)isWifiEnabled;

- (void)_bluetoothPowerChanged:(id)arg1;
- (void)_deleteButtonPressed:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (id)_fieldCellForIndexPath:(id)arg1;
- (id)_fieldForIndexPath:(id)arg1;
- (bool)_isBluetoothEnabled;
- (bool)_linkedAppAvailable;
- (id)_locationHelpViewForTableView:(id)arg1;
- (id)_locationRelevancyHelpText;
- (void)_refreshTimeoutFired;
- (id)_relevantBuckets;
- (bool)_settingsAvailable;
- (id)_settingsCellForRow:(unsigned long long)arg1;
- (id)_updateLabelAttributedStringWithDate:(id)arg1;
- (id)_updateLabelAttributedStringWithString:(id)arg1;
- (void)_wifiChanged:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)createBodyInvariantViews;
- (void)dealloc;
- (bool)deleteEnabled;
- (void)didMoveToWindow;
- (id)initTall:(bool)arg1;
- (bool)isFrontFace;
- (void)layoutSubviews;
- (id)linkedApp;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pushSettingsFromViewToModel;
- (void)refreshControlValueChanged:(id)arg1;
- (void)setLinkedApp:(id)arg1;
- (void)setShowsDelete:(bool)arg1;
- (void)setShowsLinkedApp:(bool)arg1;
- (void)setShowsLinks:(bool)arg1;
- (void)setShowsSettings:(bool)arg1;
- (void)setupRefreshControl:(id)arg1;
- (bool)shouldAllowRefresh;
- (bool)showBackgroundMatte;
- (bool)showUpdateDateLabel;
- (bool)showsDelete;
- (bool)showsLinkedApp;
- (bool)showsLinks;
- (bool)showsSettings;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)willMoveToSuperview:(id)arg1;

@end
