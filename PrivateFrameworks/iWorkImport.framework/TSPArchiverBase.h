/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSHashTable, TSPObject;

@interface TSPArchiverBase : NSObject {
    struct auto_ptr<google::protobuf::Message> { 
        struct Message {} *__ptr_; 
    NSHashTable *_commandToModelReferences;
    struct FieldPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedField<unsigned int> { unsigned int *x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; int x4; int x5; unsigned int x6[1]; } *_currentFieldPath;
    NSHashTable *_dataReferences;
    struct hash_map<const TSP::FieldPath, TSP::FieldInfo_Rule, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > { struct __hash_table<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, TSP::FieldPathHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, TSP::FieldPathEqualTo, true>, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > > { struct __hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> *> { struct __hash_node<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, TSP::FieldPathHash, true> > { unsigned long long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const TSP::FieldPath, TSP::FieldInfo_Rule>, TSP::FieldPathEqualTo, true> > { float x_4_2_1; } x_1_1_4; } x1; } *_fieldRules;
    NSHashTable *_lazyReferences;
    } _message;
    unsigned long long _messageVersion;
    TSPObject *_object;
    NSHashTable *_strongReferences;
    NSHashTable *_weakReferences;
}

@property(readonly) NSHashTable * commandToModelReferences;
@property(readonly) NSHashTable * dataReferences;
@property(readonly) bool forPasteboard;
@property(readonly) NSHashTable * lazyReferences;
@property unsigned long long messageVersion;
@property(readonly) TSPObject * object;
@property(readonly) NSHashTable * strongReferences;
@property(readonly) NSHashTable * weakReferences;

- (struct Message { int (**x1)(); }*)message;
- (struct Message { int (**x1)(); }*)messageWithNewFunction:(int (*)())arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanup;
- (id)commandToModelReferences;
- (id)dataReferences;
- (void)dealloc;
- (void)enumerateRulesUsingBlock:(id)arg1;
- (bool)forPasteboard;
- (id)init;
- (id)initWithObject:(id)arg1;
- (id)lazyReferences;
- (unsigned long long)messageVersion;
- (id)object;
- (void)releaseMessage;
- (void)scopedRulesForField:(int)arg1 usingBlock:(id)arg2;
- (void)setDataReference:(id)arg1 message:(struct DataReference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; unsigned int x5[1]; }*)arg2;
- (void)setDataReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::DataReference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setIgnoreAndDropRuleForField:(int)arg1;
- (void)setIgnoreAndDropRuleForFieldPath:(int*)arg1;
- (void)setIgnoreAndPreserveRuleForField:(int)arg1;
- (void)setIgnoreAndPreserveRuleForFieldPath:(int*)arg1;
- (void)setMessageVersion:(unsigned long long)arg1;
- (void)setMustUnderstandRuleForField:(int)arg1;
- (void)setMustUnderstandRuleForFieldPath:(int*)arg1;
- (void)setRule:(int)arg1 forFieldPath:(int*)arg2;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg2;
- (void)setStrongLazyReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg2;
- (void)setStrongReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (void)setWeakLazyReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg2;
- (void)setWeakReference:(id)arg1 message:(struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg2;
- (void)setWeakReferenceArray:(id)arg1 message:(struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2;
- (id)strongReferences;
- (id)weakReferences;

@end
