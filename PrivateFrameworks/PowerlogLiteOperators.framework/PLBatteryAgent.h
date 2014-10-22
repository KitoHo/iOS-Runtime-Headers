/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSArray, PLEntryNotificationOperatorComposition, PLIOKitOperatorComposition, PLNSTimerOperatorComposition, PLSemaphore, PLXPCResponderOperatorComposition;

@interface PLBatteryAgent : PLAgent {
    struct __IOHIDEventSystemClient { } *_accessoryCurrentHIDRef;
    NSArray *_accessoryCurrentMatchingSensors;
    struct __IOHIDEventSystemClient { } *_accessoryVoltageHIDRef;
    NSArray *_accessoryVoltageMatchingSensors;
    PLXPCResponderOperatorComposition *_batteryInfoResponder;
    double _batteryLevelPercent;
    PLEntryNotificationOperatorComposition *_canSleepEntryNotifications;
    PLSemaphore *_canSleepSemaphore;
    struct ggcontext { } *_gasGagueConnection;
    int _gasGaugeConsecutiveEmptyEntriesCount;
    PLNSTimerOperatorComposition *_gasGaugeTimer;
    PLIOKitOperatorComposition *_iokit;
    double _rawBatteryVoltageVolt;
    PLEntryNotificationOperatorComposition *_wakeEntryNotifications;
    bool_allowGasGaugeRead;
    bool_deviceIsPluggedIn;
}

@property struct __IOHIDEventSystemClient { }* accessoryCurrentHIDRef;
@property(retain) NSArray * accessoryCurrentMatchingSensors;
@property struct __IOHIDEventSystemClient { }* accessoryVoltageHIDRef;
@property(retain) NSArray * accessoryVoltageMatchingSensors;
@property bool allowGasGaugeRead;
@property(retain) PLXPCResponderOperatorComposition * batteryInfoResponder;
@property double batteryLevelPercent;
@property(readonly) PLEntryNotificationOperatorComposition * canSleepEntryNotifications;
@property(retain) PLSemaphore * canSleepSemaphore;
@property bool deviceIsPluggedIn;
@property struct ggcontext { }* gasGagueConnection;
@property int gasGaugeConsecutiveEmptyEntriesCount;
@property(retain) PLNSTimerOperatorComposition * gasGaugeTimer;
@property(readonly) PLIOKitOperatorComposition * iokit;
@property double rawBatteryVoltageVolt;
@property(readonly) PLEntryNotificationOperatorComposition * wakeEntryNotifications;

+ (id)defaults;
+ (id)entryEventBackwardDefinitionBattery;
+ (id)entryEventBackwardDefinitionBatteryUI;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionGasGauge;
+ (id)entryEventIntervalDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (struct __IOHIDEventSystemClient { }*)accessoryCurrentHIDRef;
- (id)accessoryCurrentMatchingSensors;
- (double)accessorySensorReadingForType:(short)arg1;
- (struct __IOHIDEventSystemClient { }*)accessoryVoltageHIDRef;
- (id)accessoryVoltageMatchingSensors;
- (bool)allowGasGaugeRead;
- (id)batteryInfoResponder;
- (double)batteryLevelPercent;
- (id)canSleepEntryNotifications;
- (id)canSleepSemaphore;
- (void)dealloc;
- (bool)deviceIsPluggedIn;
- (struct ggcontext { }*)gasGagueConnection;
- (int)gasGaugeConsecutiveEmptyEntriesCount;
- (bool)gasGaugeOpenAndStartLogging;
- (void)gasGaugeRead;
- (bool)gasGaugeStopLoggingAndClose;
- (id)gasGaugeTimer;
- (bool)givePluggedInFreePass;
- (id)init;
- (void)initOperatorDependancies;
- (void)initializeAccessoryIOHIDForType:(short)arg1;
- (id)iokit;
- (void)log;
- (void)logEventBackwardBattery;
- (void)logEventIntervalGasGauge;
- (id)railGasGuage;
- (double)rawBatteryVoltageVolt;
- (void)setAccessoryCurrentHIDRef:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setAccessoryCurrentMatchingSensors:(id)arg1;
- (void)setAccessoryVoltageHIDRef:(struct __IOHIDEventSystemClient { }*)arg1;
- (void)setAccessoryVoltageMatchingSensors:(id)arg1;
- (void)setAllowGasGaugeRead:(bool)arg1;
- (void)setBatteryInfoResponder:(id)arg1;
- (void)setBatteryLevelPercent:(double)arg1;
- (void)setCanSleepSemaphore:(id)arg1;
- (void)setDeviceIsPluggedIn:(bool)arg1;
- (void)setGasGagueConnection:(struct ggcontext { }*)arg1;
- (void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg1;
- (void)setGasGaugeTimer:(id)arg1;
- (void)setRawBatteryVoltageVolt:(double)arg1;
- (id)trimmingConditionsForRolloverAtDate:(id)arg1;
- (id)wakeEntryNotifications;

@end
