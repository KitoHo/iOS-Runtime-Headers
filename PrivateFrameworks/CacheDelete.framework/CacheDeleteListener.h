/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@class NSArray, NSString, Protocol;

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate> {
    Protocol *_protocol;
    NSArray *_requiredEntitlements;
    id _xObj;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) Protocol * protocol;
@property(retain) NSArray * requiredEntitlements;
@property(readonly) Class superclass;
@property(retain) id xObj;

+ (id)daemonListenerWithExportedObject:(id)arg1 requiredEntitlements:(id)arg2;
+ (id)serviceListenerWithName:(id)arg1 listener:(id)arg2 exportedObject:(id)arg3 requiredEntitlements:(id)arg4;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 requiredEntitlements:(id)arg5;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)protocol;
- (id)requiredEntitlements;
- (void)setProtocol:(id)arg1;
- (void)setRequiredEntitlements:(id)arg1;
- (void)setXObj:(id)arg1;
- (id)xObj;

@end
