/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSPObject;

@interface TSPPasteboardObject : TSPObject {
    TSPObject *_appNativeObject;
    NSArray *_drawables;
    TSPObject *_guideStorage;
    NSArray *_styles;
    TSPObject *_stylesheet;
    TSPObject *_theme;
    TSPObject *_wpStorage;
    bool_isCrossAppPaste;
    bool_isCrossDocumentPaste;
    bool_isSmartCopyPaste;
    bool_isTextPrimary;
}

@property(retain) TSPObject * appNativeObject;
@property(copy) NSArray * drawables;
@property(retain) TSPObject * guideStorage;
@property(readonly) bool isCrossAppPaste;
@property(readonly) bool isCrossDocumentPaste;
@property bool isSmartCopyPaste;
@property bool isTextPrimary;
@property(copy) NSArray * styles;
@property(retain) TSPObject * stylesheet;
@property(retain) TSPObject * theme;
@property(retain) TSPObject * wpStorage;

- (void).cxx_destruct;
- (id)appNativeObject;
- (id)drawables;
- (id)guideStorage;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isSmartCopyPaste;
- (bool)isTextPrimary;
- (void)saveToArchiver:(id)arg1;
- (void)setAppNativeObject:(id)arg1;
- (void)setDrawables:(id)arg1;
- (void)setGuideStorage:(id)arg1;
- (void)setIsSmartCopyPaste:(bool)arg1;
- (void)setIsTextPrimary:(bool)arg1;
- (void)setStyles:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setWpStorage:(id)arg1;
- (id)styles;
- (id)stylesheet;
- (id)theme;
- (long long)tsp_identifier;
- (id)wpStorage;

@end
