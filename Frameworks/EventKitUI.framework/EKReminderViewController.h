/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKReminderViewControllerDelegate>, <EKStyleProvider>, EKEventStore, EKReminder, EKReminderEditor, NSString;

@interface EKReminderViewController : UIViewController <EKCalendarItemEditorDelegate, EKReminderEditorDelegate, EKPickerTableViewDelegate> {
    SEL _datePickerAction;
    id _datePickerTarget;
    <EKReminderViewControllerDelegate> *_delegate;
    EKReminderEditor *_editor;
    double _minimumTableHeight;
    bool_shouldShowDatePicker;
}

@property(copy,readonly) NSString * debugDescription;
@property <EKReminderViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) EKReminderEditor * editor;
@property(retain) EKEventStore * eventStore;
@property(readonly) unsigned long long hash;
@property(retain) EKReminder * reminder;
@property(retain) <EKStyleProvider> * styleProvider;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_eventStoreChanged:(id)arg1;
- (bool)allowContextProvider:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didEndDatePickingWithTarget:(id)arg1 animated:(bool)arg2;
- (void)editItemChanged;
- (void)editor:(id)arg1 didChangeHeightAnimated:(bool)arg2;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (id)editor;
- (id)eventStore;
- (id)getCurrentContext;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (void)pickerTableViewDidChangeDatePickerInterval:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)reminder;
- (void)saveReminderAnimated:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setReminder:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (id)viewForActionSheet;
- (void)viewSizeChangedAnimated:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willBeginDatePickingWithDate:(id)arg1 target:(id)arg2 action:(SEL)arg3 animated:(bool)arg4 minimumTableHeight:(double)arg5;

@end
