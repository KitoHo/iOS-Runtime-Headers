/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSWPHeaderFooterProvider>, TSWPLayout;

@interface TSWPPageLayout : TSDLayout {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _headerFooterBorderRects[2][3];
    } _headerFooterClipRects[2][3];
    TSWPLayout *_headerFooterLayouts[2][3];
}

@property(readonly) bool allowsHeaderFooter;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bodyRect;
@property(readonly) double footerHeight;
@property(readonly) bool hasFooters;
@property(readonly) bool hasHeaders;
@property(readonly) <TSWPHeaderFooterProvider> * headerFooterProvider;
@property(readonly) bool headerFooterProviderValid;
@property(readonly) double headerHeight;

- (id).cxx_construct;
- (bool)allowsHeaderFooter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bodyRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })borderRectForHeaderFooter:(int)arg1 atIndex:(int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRectForHeaderFooter:(int)arg1 atIndex:(int)arg2;
- (double)footerHeight;
- (bool)hasFooters;
- (bool)hasHeaders;
- (id)headerFooterLayout:(int)arg1 atIndex:(int)arg2;
- (id)headerFooterProvider;
- (bool)headerFooterProviderValid;
- (double)headerHeight;
- (void)i_clearHeaderFooterLayouts;
- (void)i_insertValidatedHeaderFooterLayouts;
- (bool)i_updateHeaderFooterLayouts;
- (bool)isHeaderFooterLayout:(id)arg1;
- (bool)p_isHeaderFooter:(int)arg1 editingAtFragmentIndex:(int)arg2;
- (void)p_updateHeaderFooterClipAndBorderRect;
- (void)p_updateHeaderFooterClipAndBorderRects:(int)arg1;
- (bool)shouldHeaderFooterBeVisible:(int)arg1;

@end
