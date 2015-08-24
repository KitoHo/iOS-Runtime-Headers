/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    NSData *mData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)bufferedInputStream;
- (id)bufferedInputStreamWithBufferSize:(unsigned long)arg1;
- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)data;
- (long long)dataLength;
- (void)dealloc;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)inputStream;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)isReadable;

@end
