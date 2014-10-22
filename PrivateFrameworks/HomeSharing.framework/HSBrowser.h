/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface HSBrowser : NSObject <NSNetServiceDelegate> {
    id _addLibraryHandler;
    NSArray *_availableLibraries;
    long long _browserType;
    struct _DNSServiceRef_t { } *_dnsService;
    NSObject<OS_dispatch_queue> *_dnsServiceQueue;
    NSString *_homeSharingGroupID;
    id _removeLibraryHandler;
    bool_isBrowsing;
}

@property(readonly) NSArray * availableLibraries;
@property long long browserType;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * homeSharingGroupID;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didFindService:(id)arg1 moreComing:(bool)arg2;
- (void)_didRemoveService:(id)arg1 moreComing:(bool)arg2;
- (void)_startWithCurrentRetryCount:(unsigned long long)arg1 maximumRetryCount:(unsigned long long)arg2 addLibraryHandler:(id)arg3 removeLibraryHandler:(id)arg4;
- (id)availableLibraries;
- (long long)browserType;
- (void)dealloc;
- (id)homeSharingGroupID;
- (id)init;
- (void)setBrowserType:(long long)arg1;
- (void)setHomeSharingGroupID:(id)arg1;
- (void)startWithAddLibraryHandler:(id)arg1 removeLibraryHandler:(id)arg2;
- (void)stop;

@end
