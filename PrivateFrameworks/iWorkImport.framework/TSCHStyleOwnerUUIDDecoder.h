/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerUUIDDecoder : NSObject {
    unsigned int mIndex;
    unsigned char mUUID;
}

+ (id)UUIDDecoderWithUUID:(id)arg1;

- (unsigned char)decodeByte;
- (unsigned int)decodeNSUIntegerFromUInt64;
- (unsigned long long)decodeUInt64;
- (void)endDecode;
- (id)initWithUUID:(id)arg1;
- (BOOL)p_hasSpaceToDecodeNumberOfBytes:(unsigned int)arg1;

@end
