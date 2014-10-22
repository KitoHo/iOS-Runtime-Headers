/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOMapAccessRestrictions>, NSObject<OS_dispatch_queue>;

@interface GEOZilchDecoder : GEOMapRequestManager {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    NSObject<OS_dispatch_queue> *_decoderQueue;
    } _lock;
    <GEOMapAccessRestrictions> *_mapAccessRestrictions;
    NSObject<OS_dispatch_queue> *_requestQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> * decoderQueue;
@property <GEOMapAccessRestrictions> * mapAccessRestrictions;

+ (bool)decodingSupported;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)decodeZilchMessage:(struct shared_ptr<zilch::Message> { struct Message {} *x1; struct __shared_weak_count {} *x2; })arg1 pathHandler:(id)arg2 errorHandler:(id)arg3;
- (id)decoderQueue;
- (id)init;
- (id)mapAccessRestrictions;
- (void)requestComplete:(id)arg1;
- (id)requestQueue;
- (void)setMapAccessRestrictions:(id)arg1;
- (void)setRequestQueue:(id)arg1;
- (void)trackRequest:(id)arg1;

@end
