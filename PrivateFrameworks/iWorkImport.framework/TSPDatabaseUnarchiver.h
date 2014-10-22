/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseUnarchiver : TSPUnarchiver {
    unsigned long long _databaseVersion;
}

@property(readonly) unsigned long long preUFFVersion;

- (bool)canValidateReferences;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)arg1;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 databaseVersion:(unsigned long long)arg5 objectDelegate:(id)arg6 lazyReferenceDelegate:(id)arg7 delegate:(id)arg8 error:(id*)arg9;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 fieldInfos:(struct auto_ptr<TSP::FieldInfoTree> { struct FieldInfoTree {} *x1; })arg5 version:(unsigned long long)arg6 unknownMessages:(id)arg7 ignoreVersionChecking:(bool)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11 error:(id*)arg12;
- (unsigned long long)preUFFVersion;

@end
