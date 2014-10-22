/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKAsset, CKRecordID, NSData, NSError, NSMutableArray, NSNumber, NSString, NSURL;

@interface CKDMMCSItem : NSObject {
    CKAsset *_asset;
    NSData *_assetKey;
    NSData *_authRequest;
    NSString *_authToken;
    unsigned int _chunkCount;
    NSURL *_contentBaseURL;
    NSNumber *_deviceID;
    NSError *_error;
    NSNumber *_fileID;
    NSNumber *_generationID;
    unsigned long long _itemID;
    unsigned long long _offset;
    NSString *_owner;
    unsigned int _packageIndex;
    NSString *_path;
    double _progress;
    CKRecordID *_recordID;
    NSString *_recordKey;
    NSString *_recordType;
    NSString *_referenceIdentifierString;
    NSData *_referenceSignature;
    NSString *_requestor;
    NSMutableArray *_sectionItems;
    NSData *_signature;
    unsigned long long _size;
    NSString *_uploadReceipt;
    NSData *_wrappedAssetKey;
    bool_finished;
    bool_hasOffset;
    bool_hasSize;
}

@property(readonly) CKAsset * asset;
@property(retain) NSData * assetKey;
@property(retain) NSData * authRequest;
@property(retain) NSString * authToken;
@property unsigned int chunkCount;
@property(retain) NSURL * contentBaseURL;
@property(retain) NSNumber * deviceID;
@property(retain) NSError * error;
@property(retain) NSNumber * fileID;
@property(readonly) NSURL * fileURL;
@property(getter=isFinished) bool finished;
@property(retain) NSNumber * generationID;
@property bool hasOffset;
@property bool hasSize;
@property unsigned long long itemID;
@property unsigned long long offset;
@property(retain) NSString * owner;
@property unsigned int packageIndex;
@property(retain) NSString * path;
@property double progress;
@property(retain) CKRecordID * recordID;
@property(retain) NSString * recordKey;
@property(retain) NSString * recordType;
@property(retain) NSString * referenceIdentifierString;
@property(retain) NSData * referenceSignature;
@property(retain) NSString * requestor;
@property(retain) NSMutableArray * sectionItems;
@property(retain) NSData * signature;
@property unsigned long long size;
@property(retain) NSString * uploadReceipt;
@property(retain) NSData * wrappedAssetKey;

+ (int)openFileDescriptorForDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 path:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)asset;
- (id)assetKey;
- (id)authRequest;
- (id)authToken;
- (unsigned int)chunkCount;
- (id)contentBaseURL;
- (id)description;
- (id)deviceID;
- (id)error;
- (id)fileID;
- (id)fileURL;
- (id)generationID;
- (bool)getFileSize:(unsigned long long*)arg1 withError:(id*)arg2;
- (bool)hasOffset;
- (bool)hasSize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPackage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFinished;
- (unsigned long long)itemID;
- (unsigned long long)offset;
- (int)openFileDescriptorWithError:(id*)arg1;
- (id)owner;
- (unsigned int)packageIndex;
- (id)path;
- (double)progress;
- (id)recordID;
- (id)recordKey;
- (id)recordType;
- (id)referenceIdentifierString;
- (id)referenceSignature;
- (id)requestor;
- (id)sectionItems;
- (void)setAssetKey:(id)arg1;
- (void)setAuthRequest:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setChunkCount:(unsigned int)arg1;
- (void)setContentBaseURL:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setItemID:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setOwner:(id)arg1;
- (void)setPackageIndex:(unsigned int)arg1;
- (void)setPath:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)setReferenceIdentifierString:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setSectionItems:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (void)setWrappedAssetKey:(id)arg1;
- (id)signature;
- (unsigned long long)size;
- (id)uploadReceipt;
- (id)wrappedAssetKey;

@end
