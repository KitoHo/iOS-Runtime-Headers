/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIKeyboardCandidateBarDelegate>, <UIKeyboardCandidateListDelegate>, NSArray, NSIndexPath, NSString, TIKeyboardCandidateResultSet, UIImageView, UIKBCandidateCollectionView, UIKBThemedView;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource> {
    struct CGPoint { 
        double x; 
        double y; 
    <UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    UIImageView *_candidateMaskView;
    TIKeyboardCandidateResultSet *_candidateResultSet;
    NSArray *_candidateViews;
    unsigned long long _currentCandidateViewIndex;
    <UIKeyboardCandidateBarDelegate> *_delegate;
    NSIndexPath *_dragStartNextPageIndexPath;
    } _dragStartOffset;
    NSIndexPath *_dragStartPreviousPageIndexPath;
    NSArray *_filteredCandidates;
    NSString *_inlineText;
    UIKBThemedView *_secondaryCandidatesViewEdgeGradient;
    id _skippedSetCandidatesBlock;
    double _upArrowWidth;
    bool_canExtend;
    bool_didSkipLayout;
    bool_forceReloadInitiallyHiddenCandidates;
    bool_shouldSkipLayoutUntilScrollViewAnimationEnds;
}

@property bool canExtend;
@property <UIKeyboardCandidateListDelegate> * candidateListDelegate;
@property(retain) UIImageView * candidateMaskView;
@property(retain) TIKeyboardCandidateResultSet * candidateResultSet;
@property(retain) NSArray * candidateViews;
@property(readonly) TIKeyboardCandidateResultSet * candidates;
@property(readonly) UIKBCandidateCollectionView * currentCandidateView;
@property unsigned long long currentCandidateViewIndex;
@property(copy,readonly) NSString * debugDescription;
@property <UIKeyboardCandidateBarDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property bool didSkipLayout;
@property(copy) NSIndexPath * dragStartNextPageIndexPath;
@property struct CGPoint { double x1; double x2; } dragStartOffset;
@property(copy) NSIndexPath * dragStartPreviousPageIndexPath;
@property(retain) NSArray * filteredCandidates;
@property bool forceReloadInitiallyHiddenCandidates;
@property(readonly) unsigned long long hash;
@property(copy) NSString * inlineText;
@property(retain) UIKBThemedView * secondaryCandidatesViewEdgeGradient;
@property bool shouldSkipLayoutUntilScrollViewAnimationEnds;
@property(copy) id skippedSetCandidatesBlock;
@property(readonly) Class superclass;
@property double upArrowWidth;

+ (double)defaultCandidateWidth;
+ (double)defaultPagingDistanceThreshold;
+ (double)defaultPagingVelocityThreshold;
+ (double)height;
+ (double)heightForInterfaceOrientation:(long long)arg1;
+ (double)heightForLastRow;
+ (double)heightForRowAtIndex:(unsigned long long)arg1 interfaceOrientation:(long long)arg2;
+ (double)heightForRowAtIndex:(unsigned long long)arg1;
+ (unsigned long long)numberOfRows;
+ (unsigned long long)numberOfRowsForInterfaceOrientation:(long long)arg1;
+ (void)setScreenTraits:(id)arg1;

- (Class)_barCellClassForSection:(long long)arg1;
- (id)_candidateViewForSection:(long long)arg1;
- (void)_clearData;
- (unsigned long long)_countOfItemsInSection:(long long)arg1;
- (double)_emptySpaceForItemsToIndex:(unsigned long long)arg1 inSection:(long long)arg2;
- (id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2;
- (id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1;
- (id)_indexPathForFirstVisibleItem;
- (id)_indexPathForLastVisibleItem;
- (id)_itemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2;
- (id)_nextPageIndexPath;
- (void)_performSkippedLayoutIfNeeded;
- (id)_previousPageIndexPath;
- (void)_reloadData;
- (void)_reloadDataByAppendingAtEnd:(bool)arg1 initiallyHiddenCandidatesChanged:(bool)arg2;
- (void)_scrollToFirstCandidateInSection:(long long)arg1 withAnimation:(bool)arg2;
- (long long)_sectionForSectionIndex:(unsigned long long)arg1 candidateView:(id)arg2;
- (unsigned long long)_sectionIndexForSection:(long long)arg1;
- (void)_showCandidateAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 scrollCellToVisible:(bool)arg3 animated:(bool)arg4;
- (void)_showPageAtIndexPath:(id)arg1;
- (bool)_showingInitiallyHiddenCandidates;
- (void)_stepSelectedCandidateInDirection:(bool)arg1 candidateView:(id)arg2 section:(long long)arg3;
- (void)_stepSelectedCandidateInDirection:(bool)arg1;
- (void)_updateCanExtendState;
- (void)_updateCandidateViews;
- (double)_widthOfItemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2;
- (void)adjustSelectionToNearestVisibleCandidate;
- (bool)canExtend;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)candidateBarLayoutDidFinishPreparingLayout;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)candidateMaskView;
- (id)candidateResultSet;
- (id)candidateViews;
- (id)candidates;
- (void)candidatesDidChange;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)count;
- (id)currentCandidate;
- (id)currentCandidateView;
- (unsigned long long)currentCandidateViewIndex;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (id)delegate;
- (bool)didSkipLayout;
- (id)dragStartNextPageIndexPath;
- (struct CGPoint { double x1; double x2; })dragStartOffset;
- (id)dragStartPreviousPageIndexPath;
- (id)filteredCandidates;
- (bool)forceReloadInitiallyHiddenCandidates;
- (bool)hasCandidates;
- (bool)hasNextPage;
- (bool)hasPreviousPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (bool)isExtendedList;
- (bool)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)revealHiddenCandidates;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)secondaryCandidatesViewEdgeGradient;
- (unsigned long long)selectedSortIndex;
- (void)setCanExtend:(bool)arg1;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateMaskView:(id)arg1;
- (void)setCandidateResultSet:(id)arg1;
- (void)setCandidateViews:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCurrentCandidateViewIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSkipLayout:(bool)arg1;
- (void)setDragStartNextPageIndexPath:(id)arg1;
- (void)setDragStartOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDragStartPreviousPageIndexPath:(id)arg1;
- (void)setFilteredCandidates:(id)arg1;
- (void)setForceReloadInitiallyHiddenCandidates:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInlineText:(id)arg1;
- (void)setSecondaryCandidatesViewEdgeGradient:(id)arg1;
- (void)setShouldSkipLayoutUntilScrollViewAnimationEnds:(bool)arg1;
- (void)setSkippedSetCandidatesBlock:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setUpArrowWidth:(double)arg1;
- (bool)shouldSkipLayoutUntilScrollViewAnimationEnds;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (struct CGSize { double x1; double x2; })sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2;
- (id)skippedSetCandidatesBlock;
- (id)statisticsIdentifier;
- (double)upArrowWidth;
- (unsigned long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
- (id)visibleCandidates;

@end
