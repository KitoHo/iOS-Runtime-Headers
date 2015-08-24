/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTextParentInfo : NSObject <TSDInfo>

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

- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)geometry;
- (BOOL)isAnchoredToText;
- (BOOL)isAttachedToBodyText;
- (BOOL)isFloatingAboveText;
- (BOOL)isInlineWithText;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;

@end
