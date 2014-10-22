/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class <ADSSession_RPC>, ADAdSheetConnection, NSMutableArray, NSString;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate> {
    NSMutableArray *_adSpaces;
    int _classicUnavailableToken;
    ADAdSheetConnection *_connection;
    bool_applicationCanReceiveBackgroundAds;
}

@property(retain) NSMutableArray * adSpaces;
@property bool applicationCanReceiveBackgroundAds;
@property int classicUnavailableToken;
@property(retain) ADAdSheetConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) <ADSSession_RPC> * rpcProxy;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)_appDidBecomeActive;
- (void)_appWillResignActive;
- (id)_linkedOnVersion;
- (void)_orientationChanged;
- (void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3;
- (void)_remote_policyEngineTestStationDescriptionsComputed:(id)arg1;
- (void)adSheetConnectionEstablished;
- (void)adSheetConnectionLost;
- (id)adSheetMachServiceName;
- (id)adSpaces;
- (void)addClientToSegments:(id)arg1 replaceExisting:(bool)arg2;
- (id)additionalAdSheetLaunchOptions;
- (bool)applicationCanReceiveBackgroundAds;
- (int)classicUnavailableToken;
- (void)configureConnection:(id)arg1;
- (id)connection;
- (void)determineAppInstallAttributionWithCompletionHandler:(id)arg1;
- (id)init;
- (void)lookupAdConversionDetails:(id)arg1;
- (void)performWhenConnected:(id)arg1;
- (void)registerAdSpace:(id)arg1;
- (id)rpcProxy;
- (id)rpcProxyWithErrorHandler:(id)arg1;
- (void)setAdSpaces:(id)arg1;
- (void)setApplicationCanReceiveBackgroundAds:(bool)arg1;
- (void)setClassicUnavailableToken:(int)arg1;
- (void)setConnection:(id)arg1;
- (bool)shouldConnectToAdSheet;
- (bool)shouldLaunchAdSheet;
- (void)unregisterAdSpace:(id)arg1;

@end
