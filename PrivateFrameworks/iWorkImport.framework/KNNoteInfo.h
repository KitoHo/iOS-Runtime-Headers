/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<TSDContainerInfo>, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>, TSWPStorage;

@interface KNNoteInfo : TSPObject <TSDContainerInfo, TSWPStorageParent, TSKDocumentObject> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    boolmShrinkTextForPrinting;
    TSWPStorage *mContainedStorage;
    } mFrameForPrinting;
    NSObject<TSDContainerInfo> *mParentInfo;
}

@property(getter=isAnchoredToText,readonly) bool anchoredToText;
@property(getter=isAttachedToBodyText,readonly) bool attachedToBodyText;
@property(retain) TSWPStorage * containedStorage;
@property(readonly) long long contentWritingDirection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isFloatingAboveText,readonly) bool floatingAboveText;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameForPrinting;
@property(copy) TSDInfoGeometry * geometry;
@property(readonly) unsigned long long hash;
@property(getter=isInlineWithText,readonly) bool inlineWithText;
@property bool matchesObjectPlaceholderGeometry;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property NSObject<TSDContainerInfo> * parentInfo;
@property bool shrinkTextForPrinting;
@property(readonly) Class superclass;
@property(readonly) int verticalAlignment;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)autoListRecognition;
- (bool)autoListTermination;
- (id)childEnumerator;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)containedStorage;
- (long long)contentWritingDirection;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForPrinting;
- (id)geometry;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 containedStorage:(id)arg2;
- (id)initWithContext:(id)arg1;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isThemeContent;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct NoteArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (Class)repClass;
- (void)saveToArchive:(struct NoteArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setContainedStorage:(id)arg1;
- (void)setFrameForPrinting:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setShrinkTextForPrinting:(bool)arg1;
- (bool)shouldHideEmptyBullets;
- (bool)shrinkTextForPrinting;
- (bool)textIsVertical;
- (int)verticalAlignment;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
