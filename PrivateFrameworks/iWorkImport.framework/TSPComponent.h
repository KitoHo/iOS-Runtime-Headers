/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSPComponentDelegate>, NSDictionary, NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, TSPComponentExternalReferenceMap, TSPObject;

@interface TSPComponent : NSObject <NSDiscardableContent> {
    struct { 
        unsigned int usesDelayedArchiving : 1; 
        unsigned int modified : 1; 
        unsigned int persisted : 1; 
        unsigned int isStoredOutsideObjectArchive : 1; 
        unsigned int packageIdentifier : 2; 
        unsigned int discarded : 1; 
    int _accessCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_dataReferences;
    <TSPComponentDelegate> *_delegate;
    unsigned long long _encodedLength;
    TSPComponentExternalReferenceMap *_externalReferenceMap;
    } _flags;
    long long _identifier;
    NSString *_locator;
    NSDictionary *_objectUUIDToIdentifierDictionary;
    NSString *_preferredLocator;
    unsigned long long _readVersion;
    unsigned long long _saveToken;
    TSPObject *_strongRootObject;
    TSPObject *_weakRootObject;
    unsigned long long _writeVersion;
    NSHashTable *_writtenObjects;
}

@property(readonly) unsigned long long encodedLength;
@property(readonly) long long identifier;
@property(readonly) bool isStoredOutsideObjectArchive;
@property(readonly) bool isTransientComponent;
@property(readonly) NSString * locator;
@property(readonly) bool modified;
@property(readonly) bool needsArchiving;
@property(readonly) NSDictionary * objectUUIDToIdentifierDictionary;
@property(readonly) unsigned char packageIdentifier;
@property(readonly) bool persisted;
@property(readonly) NSString * preferredLocator;
@property(readonly) unsigned long long readVersion;
@property(retain) TSPObject * rootObject;
@property(readonly) unsigned long long saveToken;
@property(readonly) unsigned long long writeVersion;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (bool)beginContentAccess;
- (void)didReadObjects:(id)arg1;
- (void)discardContentIfPossible;
- (unsigned long long)encodedLength;
- (void)endContentAccess;
- (void)enumerateDataReferences:(id)arg1;
- (void)enumerateExternalReferences:(id)arg1;
- (struct ComponentExternalReferenceInfo { long long x1; boolx2; })externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (long long)identifier;
- (id)init;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(bool)arg5 encodedLength:(unsigned long long)arg6;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; int x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; unsigned long long x13; boolx14; int x15; unsigned int x16[1]; }*)arg2 packageIdentifier:(unsigned char)arg3 encodedLength:(unsigned long long)arg4;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (bool)isCachingEnabled;
- (bool)isContentDiscarded;
- (bool)isStoredOutsideObjectArchive;
- (bool)isTransientComponent;
- (id)locator;
- (void)markAsDiscarded;
- (bool)modified;
- (bool)needsArchiving;
- (bool)needsArchivingImpl;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (id)objectUUIDToIdentifierDictionary;
- (unsigned char)packageIdentifier;
- (bool)persisted;
- (id)preferredLocator;
- (unsigned long long)readVersion;
- (id)rootObject;
- (void)saveToMessage:(struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; int x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; unsigned long long x13; boolx14; int x15; unsigned int x16[1]; }*)arg1 saveToken:(unsigned long long)arg2 writtenComponentInfo:(const struct WrittenComponentInfo { id x1; id x2; boolx3; boolx4; id x5; boolx6; boolx7; id x8; id x9; boolx10; unsigned long long x11; unsigned long long x12; id x13; id x14; id x15; id x16; }*)arg3;
- (unsigned long long)saveToken;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setLocator:(id)arg1;
- (void)setModified:(bool)arg1 forObject:(id)arg2 isDocumentUpgrade:(bool)arg3;
- (void)setModified:(bool)arg1 forObject:(id)arg2;
- (void)setModifiedImpl:(bool)arg1 forObject:(id)arg2;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(bool)arg4 rootObjectOrNil:(id)arg5 archivedObjects:(id)arg6 externalReferenceMap:(id)arg7 dataReferences:(id)arg8 readVersion:(unsigned long long)arg9 writeVersion:(unsigned long long)arg10 objectUUIDToIdentifierDictionary:(id)arg11 saveToken:(unsigned long long)arg12 encodedLength:(unsigned long long)arg13 wasCopied:(bool)arg14 wasModifiedDuringWrite:(bool)arg15;
- (void)setRootObject:(id)arg1;
- (bool)shouldForceCaching;
- (bool)shouldKeepStrongObjectImpl;
- (void)willDiscardComponent;
- (unsigned long long)writeVersion;

@end
