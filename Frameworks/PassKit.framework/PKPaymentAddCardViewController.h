/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPaymentSetupViewControllerDelegate>, ACAccountStore, NSArray, PKPaymentWebService;

@interface PKPaymentAddCardViewController : PKPaymentSetupTableViewController {
    ACAccountStore *_accountStore;
    <PKPaymentSetupViewControllerDelegate> *_delegate;
    NSArray *_eligibleCards;
    PKPaymentWebService *_webService;
}

@property <PKPaymentSetupViewControllerDelegate> * delegate;
@property(retain) NSArray * eligibleCards;
@property(retain) PKPaymentWebService * webService;

- (void)_pushCardDetailsViewControllerForCredential:(id)arg1;
- (void)_pushCardList:(id)arg1;
- (void)_pushManualCardDetailsViewController;
- (void)aboutButtonTouched:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)eligibleCards;
- (id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(long long)arg3 delegate:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEligibleCards:(id)arg1;
- (void)setWebService:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)webService;

@end
