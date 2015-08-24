/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPSection : TSPObject <TSKDocumentObject, TSKModel, TSWPSection> {
    TPDocumentRoot *_documentRoot;
    BOOL _inheritPreviousHeaderFooter;
    NSString *_name;
    BOOL _pageMasterEvenOddPagesDifferent;
    BOOL _pageMasterFirstPageDifferent;
    BOOL _pageMasterFirstPageHidesHeaderFooter;
    TPPageMaster *_pageMasters;
    TSWPStorage *_parentStorage;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
    unsigned int _sectionStartKind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL inheritPreviousHeaderFooter;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) BOOL pageMasterEvenOddPagesDifferent;
@property (nonatomic) BOOL pageMasterFirstPageDifferent;
@property (nonatomic) BOOL pageMasterFirstPageHidesHeaderFooter;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic) unsigned int sectionPageNumberKind;
@property (nonatomic) unsigned int sectionPageNumberStart;
@property (nonatomic) unsigned int sectionStartKind;
@property (readonly) Class superclass;

+ (BOOL)needsObjectUUID;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)childEnumerator;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)i_clearPropertiesToDefaults;
- (void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1;
- (void)i_setDocumentRoot:(id)arg1;
- (BOOL)inheritPreviousHeaderFooter;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 section:(id)arg2;
- (BOOL)isHeaderFooterEmpty:(int)arg1;
- (BOOL)isHeaderFooterVisible:(int)arg1;
- (id)name;
- (id)objectUUIDPath;
- (void)p_makeUserGuideStorage;
- (void)p_unarchiveAndUpgrade:(id)arg1 archive:(const struct SectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; float x7; float x8; float x9; float x10; bool x11; bool x12; bool x13; bool x14; float x15; float x16; float x17; float x18; float x19; struct RepeatedPtrField<TSP::Reference> { void **x_20_1_1; int x_20_1_2; int x_20_1_3; int x_20_1_4; } x20; float x21; unsigned int x22; unsigned int x23; bool x24; bool x25; bool x26; struct Reference {} *x27; struct Reference {} *x28; struct Reference {} *x29; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x30; struct Reference {} *x31; unsigned int x32; }*)arg2;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(const struct SectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; float x7; float x8; float x9; float x10; bool x11; bool x12; bool x13; bool x14; float x15; float x16; float x17; float x18; float x19; struct RepeatedPtrField<TSP::Reference> { void **x_20_1_1; int x_20_1_2; int x_20_1_3; int x_20_1_4; } x20; float x21; unsigned int x22; unsigned int x23; bool x24; bool x25; bool x26; struct Reference {} *x27; struct Reference {} *x28; struct Reference {} *x29; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x30; struct Reference {} *x31; unsigned int x32; }*)arg1;
- (BOOL)pageMasterEvenOddPagesDifferent;
- (BOOL)pageMasterFirstPageDifferent;
- (BOOL)pageMasterFirstPageHidesHeaderFooter;
- (id)pageMasterForType:(int)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (id)pageMasters;
- (id)parentStorage;
- (void)saveToArchiver:(id)arg1;
- (unsigned int)sectionPageNumberKind;
- (unsigned int)sectionPageNumberStart;
- (unsigned int)sectionStartKind;
- (void)setInheritPreviousHeaderFooter:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setPageMasterEvenOddPagesDifferent:(BOOL)arg1;
- (void)setPageMasterFirstPageDifferent:(BOOL)arg1;
- (void)setPageMasterFirstPageHidesHeaderFooter:(BOOL)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSectionPageNumberKind:(unsigned int)arg1;
- (void)setSectionPageNumberStart:(unsigned int)arg1;
- (void)setSectionStartKind:(unsigned int)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
