/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLStructType, NSString;

@interface MTLArgument : NSObject {
    unsigned long long _access;
    unsigned long long _index;
    NSString *_name;
    unsigned long long _type;
    bool_active;
}

@property(readonly) unsigned long long access;
@property(getter=isActive,readonly) bool active;
@property(readonly) unsigned long long bufferAlignment;
@property(readonly) unsigned long long bufferDataSize;
@property(readonly) unsigned long long bufferDataType;
@property(readonly) MTLStructType * bufferStructType;
@property(readonly) unsigned long long index;
@property(readonly) NSString * name;
@property(readonly) unsigned long long textureDataType;
@property(readonly) unsigned long long textureType;
@property(readonly) unsigned long long threadgroupMemoryAlignment;
@property(readonly) unsigned long long threadgroupMemoryDataSize;
@property(readonly) unsigned long long type;

- (unsigned long long)access;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferDataType;
- (id)bufferStructType;
- (void)dealloc;
- (id)describe;
- (id)description;
- (unsigned long long)index;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(bool)arg5;
- (bool)isActive;
- (id)name;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)type;

@end
