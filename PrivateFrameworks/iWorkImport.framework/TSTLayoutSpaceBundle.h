/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTLayout, TSTLayoutSpace;

@interface TSTLayoutSpaceBundle : NSObject {
    TSTLayoutSpace *mFrozenHeaderColumnsSpace;
    TSTLayoutSpace *mFrozenHeaderCornerSpace;
    TSTLayoutSpace *mFrozenHeaderRowsSpace;
    TSTLayout *mLayout;
    TSTLayoutSpace *mRepeatHeaderColumnsSpace;
    TSTLayoutSpace *mRepeatHeaderCornerSpace;
    TSTLayoutSpace *mRepeatHeaderRowsSpace;
    TSTLayoutSpace *mSpace;
}

@property(retain) TSTLayoutSpace * frozenHeaderColumnsSpace;
@property(retain) TSTLayoutSpace * frozenHeaderCornerSpace;
@property(retain) TSTLayoutSpace * frozenHeaderRowsSpace;
@property TSTLayout * layout;
@property(retain) TSTLayoutSpace * repeatHeaderColumnsSpace;
@property(retain) TSTLayoutSpace * repeatHeaderCornerSpace;
@property(retain) TSTLayoutSpace * repeatHeaderRowsSpace;
@property(retain) TSTLayoutSpace * space;

- (void)dealloc;
- (id)description;
- (id)frozenHeaderColumnsSpace;
- (id)frozenHeaderCornerSpace;
- (id)frozenHeaderRowsSpace;
- (id)getSpaceContainingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)initWithLayout:(id)arg1;
- (void)invalidateCoordinates;
- (void)invalidateCoordinatesAfterColumn:(unsigned char)arg1;
- (void)invalidateCoordinatesAfterRow:(unsigned short)arg1;
- (void)invalidateTableOffsets;
- (id)layout;
- (void)performActionOnEachLayoutSpace:(id)arg1;
- (bool)performActionOnFrozenLayoutSpaces:(id)arg1;
- (bool)performActionOnRepeatLayoutSpaces:(id)arg1;
- (id)repeatHeaderColumnsSpace;
- (id)repeatHeaderCornerSpace;
- (id)repeatHeaderRowsSpace;
- (void)setFrozenHeaderColumnsSpace:(id)arg1;
- (void)setFrozenHeaderCornerSpace:(id)arg1;
- (void)setFrozenHeaderRowsSpace:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setRepeatHeaderColumnsSpace:(id)arg1;
- (void)setRepeatHeaderCornerSpace:(id)arg1;
- (void)setRepeatHeaderRowsSpace:(id)arg1;
- (void)setSpace:(id)arg1;
- (id)space;
- (int)validateLayoutSpaces;

@end
