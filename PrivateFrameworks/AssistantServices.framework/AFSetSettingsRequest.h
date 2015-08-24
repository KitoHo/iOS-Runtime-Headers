/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSetSettingsRequest : AFSiriRequest {
    BOOL _applyChanges;
    NSArray *_settings;
}

@property (nonatomic) BOOL applyChanges;
@property (nonatomic, copy) NSArray *settings;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setApplyChanges:(BOOL)arg1;
- (void)_setSettings:(id)arg1;
- (BOOL)applyChanges;
- (id)createResponse;
- (id)createResponseWithSettingChanges:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)settings;

@end
