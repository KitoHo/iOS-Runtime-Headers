/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <NSCopying>, <PUEditPluginHostViewControllerDataSource>, <PUEditPluginHostViewControllerDelegate>, NSString, PUEditPlugin, UIViewController;

@interface PUEditPluginHostViewController : UIViewController <PLDismissableViewController> {
    id __disablingIdleTimerToken;
    UIViewController *__remoteViewController;
    <NSCopying> *__request;
    <PUEditPluginHostViewControllerDataSource> *_dataSource;
    <PUEditPluginHostViewControllerDelegate> *_delegate;
    PUEditPlugin *_plugin;
    bool__didHandleCancel;
    bool__didHandleDone;
    bool__extensionDidBeginContentEditing;
}

@property(setter=_setDidHandleCancel:) bool _didHandleCancel;
@property(setter=_setDidHandleDone:) bool _didHandleDone;
@property(setter=_setDisablingIdleTimerToken:,retain) id _disablingIdleTimerToken;
@property(setter=_setExtensionDidBeginContentEditing:) bool _extensionDidBeginContentEditing;
@property(setter=_setRemoteViewController:,retain) UIViewController * _remoteViewController;
@property(setter=_setRequest:,copy) <NSCopying> * _request;
@property <PUEditPluginHostViewControllerDataSource> * dataSource;
@property(copy,readonly) NSString * debugDescription;
@property <PUEditPluginHostViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) PUEditPlugin * plugin;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_beginDisablingIdleTimer;
- (bool)_didHandleCancel;
- (bool)_didHandleDone;
- (id)_disablingIdleTimerToken;
- (void)_dismiss;
- (void)_endDisablingIdleTimerIfNecessary;
- (bool)_extensionDidBeginContentEditing;
- (id)_extensionVendorProxy;
- (void)_handleCancel;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (id)_hostContext;
- (id)_remoteViewController;
- (id)_request;
- (void)_setDidHandleCancel:(bool)arg1;
- (void)_setDidHandleDone:(bool)arg1;
- (void)_setDisablingIdleTimerToken:(id)arg1;
- (void)_setExtensionDidBeginContentEditing:(bool)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setRequest:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithPlugin:(id)arg1;
- (void)loadRemoteViewControllerWithCompletionHandler:(id)arg1;
- (void)loadView;
- (id)plugin;
- (bool)prepareForDismissingForced:(bool)arg1;
- (bool)pu_wantsStatusBarVisible;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(id)arg2 timeout:(double)arg3;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(id)arg1 timeout:(double)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
