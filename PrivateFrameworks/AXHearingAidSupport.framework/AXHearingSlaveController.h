/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHearingSlaveController : AXHARemoteController <AXHARemoteUpdateProtocol, NSNetServiceDelegate> {
    AXRemoteHearingAidDevice *_device;
    struct __CFSocket { } *_ipv4socket;
    struct __CFSocket { } *_ipv6socket;
    BOOL _isVisible;
    AXHATimer *_resolveTimer;
    id /* block */ _searchCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXRemoteHearingAidDevice *device;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) id /* block */ searchCompletion;
@property (readonly) Class superclass;

- (void)acceptConnection:(int)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)init;
- (BOOL)initialize;
- (BOOL)isSlave;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)openConnectionIfNecessary;
- (void)receivedData:(id)arg1;
- (void)resetConnection;
- (void)resolveMasterWithCompletion:(id /* block */)arg1;
- (id /* block */)searchCompletion;
- (void)setDevice:(id)arg1;
- (void)setSearchCompletion:(id /* block */)arg1;
- (BOOL)setVisible:(BOOL)arg1;
- (void)updateProperty:(int)arg1 forDeviceID:(id)arg2;
- (void)validatePairedAid;
- (void)writeValue:(id)arg1 forProperty:(int)arg2 forDeviceID:(id)arg3;

@end
