/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController {
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteView *_paletteView;
    SKUIPaletteViewElement *_viewElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPaletteViewElement:(id)arg1;
- (void)reloadSectionViews;
- (id)view;
- (id)viewForElementIdentifier:(id)arg1;
- (void)willAppearInNavigationBar;

@end
