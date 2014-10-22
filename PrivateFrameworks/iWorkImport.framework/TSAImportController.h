/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <NSFilePresenter>, <TSAImportDelegate>, <TSKImporter>, NSError, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_group>, NSOperationQueue, NSString, NSURL, NSUUID, TSPObjectContext, TSUProgressContext, TSUTemporaryDirectory;

@interface TSAImportController : NSObject <TSADocumentRootDelegate, TSPObjectContextDelegate, NSFilePresenter, TSKImportExportDelegate> {
    struct { 
        unsigned int success : 1; 
        unsigned int isPasswordProtected : 1; 
        unsigned int isCleanedUp : 1; 
        unsigned int isImportCancelled : 1; 
        unsigned int preserveDocumentAfterImport : 1; 
        unsigned int shouldNotifyProgress : 1; 
    NSMutableArray *_deferredWriters;
    <TSAImportDelegate> *_delegate;
    TSPObjectContext *_documentContext;
    NSString *_documentType;
    NSURL *_documentURL;
    NSError *_error;
    } _flags;
    NSMutableSet *_importWarnings;
    <TSKImporter> *_importer;
    NSObject<OS_dispatch_group> *_passphraseCompletionGroup;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_presentedItemURL;
    TSUProgressContext *_progressContext;
    NSString *_sourcePath;
    TSUTemporaryDirectory *_temporaryDFFDirectory;
    TSUTemporaryDirectory *_temporaryDirectory;
}

@property(readonly) bool areNewExternalReferencesToDataAllowed;
@property(readonly) NSUUID * baseUUIDForObjectUUID;
@property(readonly) bool canUpgradeDocumentSupport;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * defaultDraftName;
@property <TSAImportDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) NSString * documentCachePath;
@property(readonly) TSPObjectContext * documentContext;
@property(readonly) int documentTypeCategory;
@property(readonly) NSError * error;
@property(readonly) <NSFilePresenter> * filePresenter;
@property(readonly) bool hasWarnings;
@property(readonly) unsigned long long hash;
@property(readonly) bool ignoreDocumentSupport;
@property(readonly) <TSKImporter> * importer;
@property(readonly) bool importingDesignDemoDoc;
@property(readonly) bool isBrowsingVersions;
@property(readonly) bool isDocumentSupportTemporary;
@property(readonly) bool isImportCancelled;
@property(readonly) bool isPasswordProtected;
@property(readonly) NSString * name;
@property(retain,readonly) NSOperationQueue * presentedItemOperationQueue;
@property(copy,readonly) NSURL * presentedItemURL;
@property bool preserveDocumentAfterImport;
@property(readonly) bool preserveDocumentRevisionIdentifierForSequenceZero;
@property(copy,readonly) NSURL * primaryPresentedItemURL;
@property(retain) TSUProgressContext * progressContext;
@property(readonly) NSString * sourcePath;
@property(readonly) Class superclass;
@property(readonly) NSURL * temporaryURL;

- (void)_beginImport;
- (void)_continueImportWithSuccess:(bool)arg1 error:(id)arg2 completedSteps:(int)arg3;
- (void)_performImportWithCompletedSteps:(int)arg1;
- (id)_prepareTemplate:(id)arg1;
- (bool)_saveContextToTemporaryURL:(id)arg1 passphrase:(id)arg2 originalURL:(id)arg3 documentUUID:(id)arg4 error:(id*)arg5;
- (void)_setPresentedItemURL:(id)arg1;
- (void)addIncompatibleMovieInfo:(id)arg1 withCompatibilityLevel:(long long)arg2;
- (void)addPersistenceWarnings:(id)arg1;
- (void)addWarning:(id)arg1;
- (bool)areNewExternalReferencesToDataAllowed;
- (bool)beginImport;
- (void)beginImportAsync;
- (void)cancelImport;
- (void)dealloc;
- (id)defaultDraftName;
- (id)delegate;
- (void)didBeginImportToTemporaryURL:(id)arg1;
- (void)didSaveImportedDocumentWithPassphrase:(id)arg1;
- (id)documentContext;
- (int)documentTypeCategory;
- (id)error;
- (void)finishImportWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)hasWarnings;
- (bool)ignoreDocumentSupport;
- (bool)import;
- (id)importer;
- (Class)importerClass;
- (id)initWithPath:(id)arg1 delegate:(id)arg2;
- (id)initWithPath:(id)arg1 documentType:(id)arg2 delegate:(id)arg3;
- (bool)isBrowsingVersions;
- (bool)isImportCancelled;
- (bool)isPasswordProtected;
- (id)makeObjectContextWithTemplateInfo:(id)arg1 error:(id*)arg2;
- (id)name;
- (bool)needsFileCoordination;
- (void)prepareForImportDisplayingProgress:(bool)arg1;
- (void)presentPersistenceError:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (bool)preserveDocumentAfterImport;
- (id)progressContext;
- (void)relinquishPresentedItemToWriter:(id)arg1;
- (void)removeFilePresenter;
- (void)removeWarning:(id)arg1;
- (void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPreserveDocumentAfterImport:(bool)arg1;
- (void)setProgressContext:(id)arg1;
- (void)showProgressIfNeededForURL:(id)arg1;
- (id)sourcePath;
- (id)templateInfoWithName:(id)arg1 variantIndex:(unsigned long long)arg2;
- (id)templateInfoWithName:(id)arg1;
- (id)temporaryURL;
- (id)warnings;
- (void)willSaveImportedDocument;

@end
