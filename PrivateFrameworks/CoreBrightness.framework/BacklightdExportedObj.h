/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@class BrightnessSystemInternal, NSString, NSXPCConnection;

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {
    unsigned long long _clientID;
    NSXPCConnection *_connection;
    BrightnessSystemInternal *_server;
    bool_clientIDSet;
}

@property(retain) NSXPCConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property BrightnessSystemInternal * server;
@property(readonly) Class superclass;

- (void)clientCopyPropertyWithKey:(id)arg1 reply:(id)arg2;
- (void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2;
- (id)connection;
- (id)copyClientID;
- (void)dealloc;
- (void)reconnect;
- (void)registerNotificationForProperties:(id)arg1;
- (id)server;
- (void)setConnection:(id)arg1;
- (void)setServer:(id)arg1;

@end
