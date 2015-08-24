/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate> {
    NSString *_bundleID;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    BOOL _connected;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BBDataProviderConnectionResolver *_connectionResolver;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
    NSObject<OS_dispatch_queue> *_queue;
    <BBDataProviderConnectionServerProxy> *_serverProxy;
    NSString *_serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_invalidate;
- (id)addDataProvider:(id)arg1;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3;
- (void)addParentSectionInfo:(id)arg1 displayName:(id)arg2 icon:(id)arg3 unversalSectionID:(id)arg4;
- (id)bundleID;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void)invalidate;
- (void)ping:(id /* block */)arg1;
- (void)removeDataProviderWithSectionID:(id)arg1;
- (id)serviceName;
- (void)setServerProxy:(id)arg1;

@end
