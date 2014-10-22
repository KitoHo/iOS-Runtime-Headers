/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSKModel>, NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

@interface TSWPCommentInfo : TSWPShapeInfo <TSDAnnotationHosting> {
    TSDCommentStorage *_commentStorage;
}

@property(readonly) int annotationDisplayStringType;
@property(readonly) int annotationType;
@property(readonly) TSKAnnotationAuthor * author;
@property(readonly) NSString * changeTrackingContentFormatString;
@property(readonly) NSString * changeTrackingContentString;
@property(readonly) NSString * changeTrackingTitleString;
@property(readonly) TSDCommentStorage * commentStorage;
@property(readonly) NSDate * date;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property <TSKModel> * hostingModel;
@property(copy) TSDCommentStorage * storage;
@property(readonly) Class superclass;

+ (id)bezierPathForExportCommentOutline;
+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 storage:(id)arg3;
+ (id)commentStyleIdentifier;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_commentParagraphStyleForStylesheet:(id)arg1;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (id)p_defaultShadow;
+ (id)p_defaultStroke;
+ (void)upgradeCommentInfoStorage:(id)arg1;
+ (void)upgradeCommentInfoStyle:(id)arg1;

- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)author;
- (id)commentStorage;
- (void)commitText:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)creationDateString;
- (id)date;
- (id)hostingModel;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (bool)isLockable;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct CommentInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (id)pathSourceForExportCommentOutline;
- (Class)repClass;
- (void)saveToArchive:(struct CommentInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)searchForAnnotationsWithHitBlock:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setHostingModel:(id)arg1;
- (id)storage;
- (bool)supportsAttachedComments;
- (bool)supportsHyperlinks;
- (bool)wantsAnnotationPopover;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;

@end
