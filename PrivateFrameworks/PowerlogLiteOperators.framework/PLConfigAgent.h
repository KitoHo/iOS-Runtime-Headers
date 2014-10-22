/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class PLNSTimerOperatorComposition;

@interface PLConfigAgent : PLAgent {
    PLNSTimerOperatorComposition *_timedTrigger;
}

@property(retain) PLNSTimerOperatorComposition * timedTrigger;

+ (id)accountingGroupDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)railDefinitions;

- (void).cxx_destruct;
- (long long)autolockTime;
- (id)baseband;
- (id)basebandFirmware;
- (id)bootArgs;
- (id)buildVersion;
- (id)crashReporterKey;
- (id)deviceName;
- (bool)disableCABlanking;
- (id)hardwareModel;
- (id)init;
- (void)initOperatorDependancies;
- (void)log;
- (id)logAutomatedDeviceGroup;
- (void)logEventNoneConfig;
- (bool)noWatchdogs;
- (void)setTimedTrigger:(id)arg1;
- (id)timedTrigger;
- (id)trimmingConditionsForRolloverAtDate:(id)arg1;

@end
