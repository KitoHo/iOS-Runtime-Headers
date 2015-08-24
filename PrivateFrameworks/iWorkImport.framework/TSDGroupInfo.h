/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGroupInfo : TSDDrawableInfo <TSDMixing, TSDMutableContainerInfo, TSDSelectionStatisticsContributor, TSKDocumentObject> {
    NSMutableArray *mChildInfos;
    BOOL mIsInDocument;
}

@property (getter=isAnchoredToText, nonatomic, readonly) BOOL anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) BOOL floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned int hash;
@property (getter=isInlineWithText, nonatomic, readonly) BOOL inlineWithText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;

+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
+ (id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(BOOL*)arg4;

- (void)acceptVisitor:(id)arg1;
- (void)addChildInfo:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allNestedChildrenInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (BOOL)aspectRatioLocked;
- (BOOL)canAnchor;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)childEnumerator;
- (id)childInfos;
- (BOOL)containsDisallowedElementKind:(unsigned int)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)didCopy;
- (void)ensureGeometryFitsChildren;
- (id)geometry;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct GroupArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2 upgradeDOLC:(BOOL)arg3;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned int)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned int)arg3;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (void)removeAllChildrenInDocument:(BOOL)arg1;
- (void)removeChildInfo:(id)arg1;
- (Class)repClass;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)saveToArchive:(struct GroupArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DrawableArchive {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (void)setGeometry:(id)arg1;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
