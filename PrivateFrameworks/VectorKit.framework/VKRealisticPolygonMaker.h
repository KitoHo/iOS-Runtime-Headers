/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKRealisticPolygonMaker : NSObject {
    struct unordered_map<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery>, std::__1::hash<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::equal_to<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, std::__1::allocator<std::__1::pair<const geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> > > > { 
        struct __hash_table<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, std::__1::__unordered_map_hasher<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, std::__1::hash<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::__unordered_map_equal<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, std::__1::equal_to<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true>, std::__1::allocator<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> > > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, std::__1::hash<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::__hash_value_type<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::shared_ptr<md::StyleQuery> >, std::__1::equal_to<geo::_retain_ptr<NSData *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> >, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    NSMutableArray *_polygons;
    } _styleQueryForPolygon;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPolygonForPoints:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 pointCount:(unsigned long long)arg2 withStyleQuery:(struct shared_ptr<md::StyleQuery> { struct StyleQuery {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (void)dealloc;
- (void)generateIndexedTrianglesWithHandler:(id)arg1;

@end
