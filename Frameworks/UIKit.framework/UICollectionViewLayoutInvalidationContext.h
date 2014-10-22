/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface UICollectionViewLayoutInvalidationContext : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct { 
        unsigned int invalidateDataSource : 1; 
        unsigned int invalidateEverything : 1; 
    } _contentOffsetAdjustment;
    } _contentSizeAdjustment;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    } _invalidationContextFlags;
    NSArray *_updateItems;
}

@property struct CGPoint { double x1; double x2; } contentOffsetAdjustment;
@property struct CGSize { double x1; double x2; } contentSizeAdjustment;
@property bool invalidateDataSourceCounts;
@property bool invalidateEverything;
@property(readonly) NSDictionary * invalidatedDecorationIndexPaths;
@property(readonly) NSArray * invalidatedItemIndexPaths;
@property(readonly) NSDictionary * invalidatedSupplementaryIndexPaths;
@property(getter=_updateItems,setter=_setUpdateItems:) NSArray * updateItems;

- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)_invalidatedSupplementaryViews;
- (void)_setInvalidateDataSourceCounts:(bool)arg1;
- (void)_setInvalidateEverything:(bool)arg1;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (void)_setUpdateItems:(id)arg1;
- (id)_updateItems;
- (struct CGPoint { double x1; double x2; })contentOffsetAdjustment;
- (struct CGSize { double x1; double x2; })contentSizeAdjustment;
- (void)dealloc;
- (bool)invalidateDataSourceCounts;
- (void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (bool)invalidateEverything;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)invalidatedDecorationIndexPaths;
- (id)invalidatedItemIndexPaths;
- (id)invalidatedSupplementaryIndexPaths;
- (void)setContentOffsetAdjustment:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentSizeAdjustment:(struct CGSize { double x1; double x2; })arg1;

@end
