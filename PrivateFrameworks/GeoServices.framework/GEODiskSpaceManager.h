/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GEODiskSpaceManager : NSObject {
    NSMutableDictionary *_freeableClaims;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;

- (void)dealloc;
- (unsigned long long)freeDiskSpaceBy:(unsigned long long)arg1;
- (unsigned long long)getFreeableSpace;
- (id)init;

@end
