/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITrackViewElement : SKUIViewElement {
    BOOL _enabled;
    BOOL _selected;
}

@property (getter=isSelected, nonatomic, readonly) BOOL selected;
@property (nonatomic, readonly) SKUIActionsViewElement *swipeActions;

- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (BOOL)isSelected;
- (id)swipeActions;

@end
