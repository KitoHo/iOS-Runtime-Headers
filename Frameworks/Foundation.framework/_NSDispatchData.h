/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSDispatchData : NSData

+ (BOOL)supportsSecureCoding;

- (BOOL)_allowsDirectEncoding;
- (BOOL)_isDispatchData;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (unsigned int)length;
- (id)subdataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
