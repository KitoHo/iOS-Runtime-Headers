/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFWirelessSettingsController : NSObject {
    BOOL _bluetoothEnabled;
    id _delegate;
    BOOL _deviceSupportsWAPI;
    NSObject<OS_dispatch_semaphore> *_firstCallBackSemaphore;
    BOOL _firstCallbackCompleted;
    struct __SFOperation { } *_information;
    BOOL _wifiEnabled;
    BOOL _wirelessAccessPointEnabled;
}

@property (getter=isBluetoothEnabled) BOOL bluetoothEnabled;
@property <SFWirelessSettingsControllerDelegate> *delegate;
@property (readonly) BOOL deviceSupportsWAPI;
@property (getter=isWifiEnabled) BOOL wifiEnabled;
@property (getter=isWirelessAccessPointEnabled, readonly) BOOL wirelessAccessPointEnabled;

- (void)dealloc;
- (id)delegate;
- (BOOL)deviceSupportsWAPI;
- (void)handleOperationCallback:(struct __SFOperation { }*)arg1 event:(long)arg2 withResults:(id)arg3;
- (id)init;
- (BOOL)isBluetoothEnabled;
- (BOOL)isWifiEnabled;
- (BOOL)isWirelessAccessPointEnabled;
- (void)repairAppleID;
- (void)setBluetoothEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWifiEnabled:(BOOL)arg1;

@end
