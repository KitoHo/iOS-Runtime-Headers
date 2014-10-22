/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSIndexPath : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long *_indexes;
    unsigned long long _length;
    void *_reserved;
}

@property(readonly) long long ab_group;
@property(readonly) long long ab_item;
@property(readonly) long long item;
@property(readonly) unsigned long long length;
@property(readonly) long long row;
@property(readonly) long long section;
@property(readonly) long long tk_row;
@property(readonly) long long tk_section;

+ (id)indexPath;
+ (id)indexPathForItem:(long long)arg1 inGroup:(long long)arg2;
+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathWithIndex:(unsigned long long)arg1;
+ (id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
+ (id)pu_indexPathsForItems:(id)arg1 inSection:(long long)arg2;
+ (bool)supportsSecureCoding;
+ (id)tk_indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (id)__ck_indexPathShiftedForInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2;
- (bool)_gkIsGlobal;
- (long long)ab_group;
- (long long)ab_item;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dd_stringValue;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned long long*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getIndexes:(unsigned long long*)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)item;
- (unsigned long long)length;
- (id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (long long)row;
- (long long)section;
- (long long)tk_row;
- (long long)tk_section;

@end
