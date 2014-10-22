/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIDocumentPickerManagementViewController : UITableViewController {
    NSArray *_allPickers;
}

@property(retain) NSArray * allPickers;

- (void)_doneButtonPressed;
- (id)allPickers;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAllPickers:(id)arg1;
- (void)switchToggled:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
