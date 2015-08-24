/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
    NSString *_markupText;
    UIWebPaginationInfo *_paginationInfo;
    UIWebDocumentView *_webDocumentView;
}

@property (nonatomic, copy) NSString *markupText;

- (int)_recalcPageCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forPageAtIndex:(int)arg2;
- (id)initWithMarkupText:(id)arg1;
- (id)markupText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageAtIndex:(int)arg1;
- (void)removeFromPrintPageRenderer;
- (void)setMarkupText:(id)arg1;

@end
