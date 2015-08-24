/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCollectionViewFlowLayout : UICollectionViewFlowLayout {
    NSMutableArray *_deletedIndexPaths;
    NSMutableArray *_handledIndexPaths;
    NSMutableArray *_insertedIndexPaths;
    NSMutableArray *_movedIndexPaths;
}

- (void).cxx_destruct;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned int)arg3;
- (void)_applyToLayoutAttributes:(id)arg1 toView:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;

@end
