/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEConfiguration, NEConfigurationManager, NEContentFilterPlugin, NSArray, NSString;

@interface NEFilterManager : NSObject {
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
    NSArray *_entitlements;
    bool_hasLoaded;
}

@property(retain) NEConfiguration * configuration;
@property(readonly) NEConfigurationManager * configurationManager;
@property(getter=isEnabled) bool enabled;
@property(retain) NSArray * entitlements;
@property bool hasLoaded;
@property(copy) NSString * localizedDescription;
@property(retain) NEContentFilterPlugin * pluginConfiguration;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationManager;
- (void)createEmptyConfiguration;
- (id)entitlements;
- (bool)hasLoaded;
- (id)init;
- (id)initFilterManager;
- (bool)isEnabled;
- (void)loadFromPreferencesWithCompletionHandler:(id)arg1;
- (id)localizedDescription;
- (id)pluginConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPluginConfiguration:(id)arg1;

@end
