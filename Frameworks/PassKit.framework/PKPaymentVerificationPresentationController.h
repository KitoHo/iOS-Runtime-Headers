/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentVerificationPresentationController : NSObject <SKStoreProductViewControllerDelegate> {
    BOOL _bankAppNotFound;
    <PKPaymentVerificationPresentationDelegate> *_delegate;
    <PKPaymentVerificationEntryDelegate> *_entryDelegate;
    NSNumber *_inStoreBankAppStoreID;
    NSString *_inStoreBankAppTitle;
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    PKPaymentPass *_pass;
    PKPassView *_passView;
    PKVerificationRequestRecord *_requestRecord;
    int _setupContext;
    PKPaymentWebService *_webService;
}

@property (readonly) NSString *alternateMethodButtonTitle;
@property (readonly) NSString *completeVerificationButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentVerificationPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PKPaymentVerificationEntryDelegate> *entryDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly) NSString *verificationBodyString;
@property (readonly) PKVerificationRequestRecord *verificationRecord;
@property (readonly) NSString *verificationTitleString;

- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (unsigned int)_channelType;
- (void)_completeVerificationUsingBankApp;
- (void)_completeVerificationUsingCodeEntry;
- (void)_completeVerificationUsingOutboundCall;
- (void)_didChangePresentation;
- (BOOL)_isBankAppInstalled;
- (void)_launchBankApp;
- (id)_outboundCallPhoneNumber;
- (void)_performStoreLookupForBankApp;
- (id)_textMessageFormattedPhoneNumber:(id)arg1;
- (id)_voiceCallFormattedPhoneNumber:(id)arg1;
- (id)alternateMethodButtonTitle;
- (void)bodyLabelPressed:(id)arg1;
- (void)completeVerification:(id)arg1;
- (id)completeVerificationButtonTitle;
- (void)dealloc;
- (id)delegate;
- (id)entryDelegate;
- (id)initWithPaymentPass:(id)arg1 passView:(id)arg2 webService:(id)arg3 context:(int)arg4 delegate:(id)arg5;
- (void)selectOtherVerificationMethod:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntryDelegate:(id)arg1;
- (void)setRequestRecord:(id)arg1;
- (void)sharedPaymentServiceChanged:(id)arg1;
- (id)verificationBodyString;
- (id)verificationRecord;
- (id)verificationTitleString;

@end
