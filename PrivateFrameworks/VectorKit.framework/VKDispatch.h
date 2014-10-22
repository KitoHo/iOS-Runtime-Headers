/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSObject<OS_dispatch_queue>;

@interface VKDispatch : NSObject {
    NSObject<OS_dispatch_queue> *_homeQueue;
    NSObject<OS_dispatch_queue> *_layoutQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
}

@property(readonly) NSObject<OS_dispatch_queue> * homeQueue;
@property(readonly) NSObject<OS_dispatch_queue> * layoutQueue;
@property(readonly) NSObject<OS_dispatch_queue> * renderQueue;

+ (id)defaultDispatch;
+ (id)iconRenderQueue;
+ (id)preemptiveLoadQueue;
+ (id)stylesheetLoadQueue;
+ (id)textureManagerRootQueue;
+ (id)tileDecodeQueue;
+ (id)tileDecodeStylingQueue;

- (id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3;
- (id)_newLayoutQueue:(const char *)arg1;
- (id)_newRenderQueue:(const char *)arg1;
- (void)dealloc;
- (id)description;
- (id)homeQueue;
- (id)initWithHomeQueue:(id)arg1;
- (id)layoutQueue;
- (id)renderQueue;

@end
