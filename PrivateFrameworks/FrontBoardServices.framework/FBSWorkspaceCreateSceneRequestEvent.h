/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSSceneClientSettingsDiff;

@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent {
    FBSSceneClientSettingsDiff *_clientSettings;
}

@property(retain) FBSSceneClientSettingsDiff * clientSettingsDiff;

- (id)clientSettingsDiff;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;

@end
