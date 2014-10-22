/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDownloadMetadata : NSObject <NSSecureCoding, NSCopying> {
    int _activeDownloadPolicyType;
    int _downloadFeeAgreementStatus;
    int _termsAndConditionsAgreementStatus;
    bool_autoDownload;
    bool_enabledFor2G;
    bool_enabledFor3G;
    bool_enabledFor4G;
    bool_enabledForCellularRoaming;
    bool_enabledForWifi;
    bool_enabledOnBatteryPower;
    bool_enforceWifiOnlyOverride;
}

@property int activeDownloadPolicyType;
@property(getter=isAutoDownload) bool autoDownload;
@property int downloadFeeAgreementStatus;
@property(getter=isEnabledFor2G) bool enabledFor2G;
@property(getter=isEnabledFor3G) bool enabledFor3G;
@property(getter=isEnabledFor4G) bool enabledFor4G;
@property(getter=isEnabledForCellularRoaming) bool enabledForCellularRoaming;
@property(getter=isEnabledForWifi) bool enabledForWifi;
@property(getter=isEnabledOnBatteryPower) bool enabledOnBatteryPower;
@property bool enforceWifiOnlyOverride;
@property int termsAndConditionsAgreementStatus;

+ (bool)supportsSecureCoding;

- (id)_stringForBool:(bool)arg1;
- (id)activeDownloadPolicy:(id)arg1;
- (int)activeDownloadPolicyType;
- (void)applyDownloadPolicy:(id)arg1;
- (id)availableDownloadPolicyIfDifferentFromActive:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)downloadFeeAgreementStatus;
- (void)encodeWithCoder:(id)arg1;
- (bool)enforceWifiOnlyOverride;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoDownload;
- (bool)isEnabledFor2G;
- (bool)isEnabledFor3G;
- (bool)isEnabledFor4G;
- (bool)isEnabledForCellularRoaming;
- (bool)isEnabledForNetworkType:(int)arg1;
- (bool)isEnabledForWifi;
- (bool)isEnabledOnBatteryPower;
- (bool)isEqual:(id)arg1;
- (bool)matchesDownloadPolicy:(id)arg1;
- (void)setActiveDownloadPolicyType:(int)arg1;
- (void)setAutoDownload:(bool)arg1;
- (void)setDownloadFeeAgreementStatus:(int)arg1;
- (void)setEnabledFor2G:(bool)arg1;
- (void)setEnabledFor3G:(bool)arg1;
- (void)setEnabledFor4G:(bool)arg1;
- (void)setEnabledForCellularRoaming:(bool)arg1;
- (void)setEnabledForWifi:(bool)arg1;
- (void)setEnabledOnBatteryPower:(bool)arg1;
- (void)setEnforceWifiOnlyOverride:(bool)arg1;
- (void)setTermsAndConditionsAgreementStatus:(int)arg1;
- (int)termsAndConditionsAgreementStatus;

@end
