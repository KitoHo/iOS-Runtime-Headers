/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray;

@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration, TSDMixing> {
    NSMutableArray *_tabs;
}

+ (id)tabs;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (id)init;
- (id)initWithArchive:(const struct TabsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSWP::TabArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTabs:(id)arg1;
- (void)insertTab:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)saveToArchive:(struct TabsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSWP::TabArchive> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)setPosition:(double)arg1 forTab:(id)arg2;
- (id)tabAfterPosition:(double)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
- (id)tabAtPosition:(double)arg1;

@end
