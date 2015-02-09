/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSDate, NSDateFormatter, NSString, UIButton, UIDatePicker, UITableViewCell, UITextField;

@interface PKPaymentCardManualEntryViewController : PKPaymentCardDetailsViewController <UITextFieldDelegate, CRCameraReaderDelegate> {
    UITableViewCell *_cardHolderNameCell;
    UITableViewCell *_cardNumberCell;
    UITextField *_cardNumberField;
    NSDateFormatter *_dateFormatter;
    NSDate *_expirationDate;
    UITableViewCell *_expirationDateCell;
    UITextField *_expirationDateField;
    UIDatePicker *_expirationDatePicker;
    UITextField *_nameField;
    UIButton *_photoButton;
    UITableViewCell *_securityCodeCell;
    void *_unifiedMeCard;
    bool_hasScrolledToShowFields;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)_addFromCamera:(id)arg1;
- (id)_cardHolderNameCell;
- (id)_cardNumberCell;
- (void)_clearTextFieldColors;
- (id)_defaultCell;
- (void)_displayNewExpiration:(id)arg1;
- (id)_expirationDateCell;
- (id)_name;
- (id)_securityCodeCell;
- (void)_updateTextField:(id)arg1 withDate:(id)arg2;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidDisplayMessage:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReaderDidFindTarget:(id)arg1;
- (void)cancelCameraCapture:(id)arg1;
- (void)dealloc;
- (void)handleNext:(id)arg1;
- (id)headerView;
- (id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (bool)isComplete;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
