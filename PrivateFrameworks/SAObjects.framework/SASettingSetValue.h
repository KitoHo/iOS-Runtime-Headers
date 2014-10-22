/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetValue : SASettingCommand {
}

@property bool dryRun;
@property bool failOnSiriDisconnectWarnings;

+ (id)setValue;
+ (id)setValueWithDictionary:(id)arg1 context:(id)arg2;

- (bool)dryRun;
- (id)encodedClassName;
- (bool)failOnSiriDisconnectWarnings;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDryRun:(bool)arg1;
- (void)setFailOnSiriDisconnectWarnings:(bool)arg1;

@end
