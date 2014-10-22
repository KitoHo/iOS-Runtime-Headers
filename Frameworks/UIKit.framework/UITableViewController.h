/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIRefreshControl, UITableView, UITableViewDataSource, _UIFilteredDataSource;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
        unsigned int insetsApplied : 1; 
        unsigned int adjustingInsets : 1; 
    _UIFilteredDataSource *_filteredDataSource;
    long long _filteredDataType;
    id _keyboardSupport;
    id _staticDataSource;
    } _tableViewControllerFlags;
    long long _tableViewStyle;
}

@property bool clearsSelectionOnViewWillAppear;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) UIRefreshControl * refreshControl;
@property(getter=_staticDataSource,setter=_setStaticDataSource:,retain) UITableViewDataSource * staticDataSource;
@property(readonly) Class superclass;
@property(retain) UITableView * tableView;

- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (void)_applyDefaultDataSourceToTable:(id)arg1;
- (id)_existingTableView;
- (long long)_filteredDataType;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1;
- (long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1;
- (void)_setFilteredDataType:(long long)arg1;
- (void)_setStaticDataSource:(id)arg1;
- (id)_staticDataSource;
- (bool)_viewControllerWasSelected;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (bool)clearsSelectionOnViewWillAppear;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)refreshControl;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setClearsSelectionOnViewWillAppear:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setRefreshControl:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
