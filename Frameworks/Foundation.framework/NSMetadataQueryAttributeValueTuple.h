/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject {
    id _attr;
    unsigned long long _count;
    void *_reserved;
    id _value;
}

@property(copy,readonly) NSString * attribute;
@property(readonly) unsigned long long count;
@property(retain,readonly) id value;

- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;
- (id)attribute;
- (unsigned long long)count;
- (void)dealloc;
- (id)value;

@end
