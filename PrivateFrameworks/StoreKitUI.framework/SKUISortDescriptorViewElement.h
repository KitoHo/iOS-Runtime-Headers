/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISortDescriptorViewElement : SKUIViewElement {
    BOOL _ascending;
    NSString *_property;
}

@property (getter=isAscending, nonatomic, readonly) BOOL ascending;
@property (nonatomic, readonly, copy) NSString *property;

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isAscending;
- (id)property;

@end
