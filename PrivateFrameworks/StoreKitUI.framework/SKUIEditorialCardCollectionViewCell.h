/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditorialCardCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIPerspectiveView, SKUIViewElementView> {
    NSMutableArray *_allLockupViews;
    struct CGSize { 
        float width; 
        float height; 
    } _primaryLockupSize;
    SKUIVerticalLockupView *_primaryLockupView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (float)maximumPerspectiveHeightForSize:(struct CGSize { float x1; float x2; })arg1;
+ (struct CGSize { float x1; float x2; })preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setPerspectiveTargetView:(id)arg1;
- (void)setVanishingPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (id)viewForElementIdentifier:(id)arg1;

@end
