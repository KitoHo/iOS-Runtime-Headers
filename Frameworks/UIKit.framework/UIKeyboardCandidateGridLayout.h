/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet;

@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout {
    struct CGSize { 
        double width; 
        double height; 
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    NSArray *_candidateGroups;
    int _candidatesVisualStyle;
    NSMutableArray *_cellAttributes;
    unsigned long long _columnsCount;
    } _contentSize;
    NSSet *_emphasizedCandidates;
    double _headerViewHeight;
    NSMutableDictionary *_supplementaryAttributes;
    } _visualStyling;
    bool_expanded;
    bool_hasSecondaryCandidates;
    bool_needsLayout;
    bool_needsPaddingForIndexScrubber;
    bool_supportsNumberKeySelection;
}

@property(retain) NSArray * candidateGroups;
@property int candidatesVisualStyle;
@property(retain) NSMutableArray * cellAttributes;
@property unsigned long long columnsCount;
@property(retain) NSSet * emphasizedCandidates;
@property bool expanded;
@property(readonly) double groupBarWidth;
@property bool hasSecondaryCandidates;
@property double headerViewHeight;
@property bool needsLayout;
@property bool needsPaddingForIndexScrubber;
@property(readonly) struct CGSize { double x1; double x2; } rowSize;
@property(retain) NSMutableDictionary * supplementaryAttributes;
@property bool supportsNumberKeySelection;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;

+ (void)deemphasizeLastItemIfNeeded:(id)arg1;
+ (id)layout;
+ (Class)layoutAttributesClass;

- (id)attributesWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)candidateGroups;
- (int)candidatesVisualStyle;
- (id)cellAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (unsigned long long)columnsCount;
- (void)dealloc;
- (id)emphasizedCandidates;
- (bool)expanded;
- (void)finishLayoutForRowWithAttributes:(id)arg1 minimumCellWidth:(double)arg2 remainingWidth:(double)arg3 rowOrigin:(struct CGPoint { double x1; double x2; })arg4 isFirstRow:(bool)arg5 isLastRow:(bool)arg6 zIndex:(long long)arg7;
- (void)getGroupBarWidth:(double*)arg1 headerAttributes:(id*)arg2;
- (double)groupBarWidth;
- (bool)hasSecondaryCandidates;
- (double)headerViewHeight;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForCandidateIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)needsLayout;
- (bool)needsPaddingForIndexScrubber;
- (id)nextCandidateIndexPathFromIndexPath:(id)arg1;
- (unsigned long long)numberOfCandidateSections;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (void)prepareLayout;
- (id)previousCandidateIndexPathFromIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })rowSize;
- (void)setCandidateGroups:(id)arg1;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setCellAttributes:(id)arg1;
- (void)setColumnsCount:(unsigned long long)arg1;
- (void)setEmphasizedCandidates:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setHasSecondaryCandidates:(bool)arg1;
- (void)setHeaderViewHeight:(double)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setNeedsPaddingForIndexScrubber:(bool)arg1;
- (void)setSupplementaryAttributes:(id)arg1;
- (void)setSupportsNumberKeySelection:(bool)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)supplementaryAttributes;
- (bool)supportsNumberKeySelection;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;

@end
