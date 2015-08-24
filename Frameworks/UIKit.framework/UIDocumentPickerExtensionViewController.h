/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentPickerExtensionViewController : UIViewController <_UIDocumentPickerExtensionViewController> {
    unsigned int _documentPickerMode;
    NSURL *_documentStorageURL;
    NSURL *_originalURL;
    NSString *_providerIdentifier;
    NSArray *_validTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int documentPickerMode;
@property (nonatomic, copy) NSURL *documentStorageURL;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSURL *originalURL;
@property (nonatomic, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *validTypes;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_documentPickerDidDismiss;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setDocumentStorageURL:(id)arg1;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned int)arg1;
- (void)_setProviderIdentifier:(id)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setUploadURL:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)dealloc;
- (void)dismissGrantingAccessToURL:(id)arg1;
- (unsigned int)documentPickerMode;
- (id)documentStorageURL;
- (id)originalURL;
- (void)prepareForDocumentSelectionInMode:(unsigned int)arg1;
- (void)prepareForPresentationInMode:(unsigned int)arg1;
- (id)providerIdentifier;
- (id)validTypes;

@end
