/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, NSDictionary;

@interface IMServiceAgent : NSObject {
    NSDictionary *_currentAVChatInfo;
}

@property(readonly) NSDictionary * currentAVChatInfo;
@property(retain) NSArray * myAvailableMessages;
@property(retain) NSArray * myAwayMessages;
@property(readonly) unsigned long long requestAudioReflectorStart;
@property(readonly) unsigned long long requestAudioReflectorStop;
@property(readonly) unsigned long long vcCapabilities;

+ (void)forgetStatusImageAppearance;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)notificationCenter;
+ (long long)serviceAgentCapabilities;
+ (void)setServiceAgentCapabilities:(long long)arg1;
+ (id)sharedAgent;

- (id)currentAVChatInfo;
- (void)launchIfNecessary;
- (id)myAvailableMessages;
- (id)myAwayMessages;
- (id)myPictureData;
- (id)notificationCenter;
- (unsigned long long)requestAudioReflectorStart;
- (unsigned long long)requestAudioReflectorStop;
- (unsigned long long)requestVideoStillForPerson:(id)arg1;
- (id)serviceWithName:(id)arg1;
- (id)serviceWithNameNonBlocking:(id)arg1;
- (void)setMyAvailableMessages:(id)arg1;
- (void)setMyAwayMessages:(id)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (unsigned long long)vcCapabilities;

@end
