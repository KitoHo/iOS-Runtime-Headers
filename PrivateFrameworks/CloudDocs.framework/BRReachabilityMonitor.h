/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface BRReachabilityMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    bool_isNetworkReachable;
}

@property bool isNetworkReachable;

+ (id)sharedReachabilityMonitor;

- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)isNetworkReachable;
- (void)removeObserver:(id)arg1;
- (void)setIsNetworkReachable:(bool)arg1;

@end
