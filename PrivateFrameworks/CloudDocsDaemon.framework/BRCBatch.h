/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class CKDatabaseOperation, NSArray;

@interface BRCBatch : NSObject {
    CKDatabaseOperation *_batchOperation;
    NSArray *_operations;
}

@property(retain) CKDatabaseOperation * batchOperation;
@property(retain) NSArray * operations;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long transferredSize;

- (void).cxx_destruct;
- (id)batchOperation;
- (void)cancelIfNeeded;
- (id)description;
- (id)operations;
- (void)setBatchOperation:(id)arg1;
- (void)setOperations:(id)arg1;
- (unsigned long long)size;
- (unsigned long long)transferredSize;

@end
