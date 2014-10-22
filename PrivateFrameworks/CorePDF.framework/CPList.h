/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct __CFArray { } *items;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPListItem *parentItem;
    } spacer;
    int type;
}

@property unsigned int ordinalPrefixLength;
@property unsigned int ordinalSuffixLength;
@property(retain) CPListItem * parentItem;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } spacer;
@property int type;

- (void)addItem:(id)arg1;
- (bool)containsParagraph:(id)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)init;
- (bool)isMultilevel;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (unsigned int)ordinalPrefixLength;
- (unsigned int)ordinalSuffixLength;
- (id)parentItem;
- (void)setOrdinalPrefixLength:(unsigned int)arg1;
- (void)setOrdinalSuffixLength:(unsigned int)arg1;
- (void)setParentItem:(id)arg1;
- (void)setSpacer:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setType:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })spacer;
- (int)type;

@end
