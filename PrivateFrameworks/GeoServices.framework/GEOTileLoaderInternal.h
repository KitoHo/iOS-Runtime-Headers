/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <GEOTileLoaderInternalDelegate>, GEOTileLoaderConfiguration, GEOTilePool, GEOTileServerProxy, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver> {
    struct list<LoadItem, std::__1::allocator<LoadItem> > { 
        struct __list_node_base<LoadItem, void *> { 
            struct __list_node<LoadItem, void *> {} *__prev_; 
            struct __list_node<LoadItem, void *> {} *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<LoadItem, void *> > > { 
            unsigned long long __first_; 
        } __size_alloc_; 
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > { 
        struct __compressed_pair<geo::DispatchTimer *, std::__1::default_delete<geo::DispatchTimer> > { 
            struct DispatchTimer {} *__first_; 
        } __ptr_; 
    struct { 
        double x; 
        double y; 
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    struct unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData> > > { 
        struct __hash_table<std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::hash<GEOTileKey>, true>, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::equal_to<GEOTileKey>, true>, std::__1::allocator<std::__1::__hash_value_type<_GEOTileKey, UsageData> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > > { 
                    struct __hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> *> { 
                    struct __hash_node<std::__1::__hash_value_type<_GEOTileKey, UsageData>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::hash<GEOTileKey>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<_GEOTileKey, std::__1::__hash_value_type<_GEOTileKey, UsageData>, std::__1::equal_to<GEOTileKey>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer> > { 
        struct __compressed_pair<geo::DispatchTimer *, std::__1::default_delete<geo::DispatchTimer> > { 
            struct DispatchTimer {} *__first_; 
        } __ptr_; 
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo> > { 
        struct __split_buffer<ErrorInfo *, std::__1::allocator<ErrorInfo *> > { 
            struct ErrorInfo {} **__first_; 
            struct ErrorInfo {} **__begin_; 
            struct ErrorInfo {} **__end_; 
            struct __compressed_pair<ErrorInfo **, std::__1::allocator<ErrorInfo *> > { 
                struct ErrorInfo {} **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<ErrorInfo> > { 
            unsigned long long __first_; 
        } __size_; 
    GEOTilePool *_cache;
    GEOTileLoaderConfiguration *_config;
    int _diskHits;
    GEOTilePool *_expiringCache;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> {} _freeableSizeRequesters;
    <GEOTileLoaderInternalDelegate> *_internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    } _loadItems;
    NSObject<OS_dispatch_queue> *_loadQ;
    } _lock;
    int _memoryHits;
    int _networkHits;
    NSMutableSet *_openers;
    GEOTileServerProxy *_proxy;
    } _recentErrors;
    int _rollingBatchId;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)> > >="__end_"{__list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *>="__prev_"^{__list_node<_CacheRequester<void (^)(unsigned long long)>, void *> {} _shrinkCacheRequesters;
    } _sortPoint;
    NSMutableArray *_tileDecoders;
    } _timer;
    } _usageData;
    } _usageLock;
    } _usageTimer;
    bool_isUsageTimerScheduled;
    bool_networkActive;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_activeTileGroupChanged:(id)arg1;
- (void)_cancel:(struct __list_iterator<LoadItem, void *> { struct __list_node<LoadItem, void *> {} *x1; }*)arg1 err:(id)arg2;
- (bool)_cancelIfNeeded:(struct __list_iterator<LoadItem, void *> { struct __list_node<LoadItem, void *> {} *x1; }*)arg1;
- (id)_findInCache:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 fromOfflinePack:(id)arg3;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 info:(id)arg3;
- (void)_localeChanged:(id)arg1;
- (void)_requestOnlineTiles;
- (void)_tileEditionChanged:(id)arg1;
- (void)_timerFired;
- (void)_updateNetworkActive;
- (void)_usageTimerFired;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(bool)arg3;
- (id)cachedTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(id)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2;
- (void)clearAllCaches;
- (void)closeForClient:(id)arg1;
- (void)dealloc;
- (id)description;
- (int)diskHits;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)expireTilesWithPredicate:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)internalDelegate;
- (id)internalDelegateQ;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(id)arg6 callback:(id)arg7;
- (void)loadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned long long)arg5 callbackQ:(id)arg6 beginNetwork:(id)arg7 callback:(id)arg8;
- (int)memoryHits;
- (int)networkHits;
- (void)openForClient:(id)arg1;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3 info:(id)arg4;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (id)proxy;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)reprioritizeKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setInternalDelegate:(id)arg1;
- (void)setInternalDelegateQ:(id)arg1;
- (void)setSortPoint:(const struct { double x1; double x2; }*)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(id)arg3;

@end
