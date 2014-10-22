/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLEngineLibrary, CPLPlatformObject, NSString;

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent> {
    CPLEngineLibrary *_engineLibrary;
    CPLPlatformObject *_platformObject;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) CPLEngineLibrary * engineLibrary;
@property(readonly) unsigned long long hash;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (id)bestErrorForUnderlyingError:(id)arg1;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id)arg2;
- (id)componentName;
- (id)downloadBatchTaskForSyncAnchor:(id)arg1 completionHandler:(id)arg2;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id)arg1;
- (void)getStatusWithCompletionHandler:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;
- (id)platformObject;
- (id)removeLibraryTaskWithCompletionHandler:(id)arg1;
- (id)resourceDownloadTaskForResource:(id)arg1 clientBundleID:(id)arg2 didStartHandler:(id)arg3 progressHandler:(id)arg4 completionHandler:(id)arg5;
- (id)resourcePublishTaskForResource:(id)arg1 completionHandler:(id)arg2;
- (id)resourceUploadTaskForResource:(id)arg1 ofRecord:(id)arg2 didStartHandler:(id)arg3 progressHandler:(id)arg4 completionHandler:(id)arg5;
- (id)setupTaskCreateLibraryIfNecessary:(bool)arg1 withCompletionHandler:(id)arg2;
- (id)simpleDataForSyncAnchor:(id)arg1;
- (bool)supportsDelayedUploads;
- (id)uploadBatchTaskForBatch:(id)arg1 completionHandler:(id)arg2;

@end
