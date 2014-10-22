/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKSession, GKVoiceChatSession, NSArray, NSString;

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate> {
    GKSession *_gkSession;
    GKVoiceChatSession *_gkVoiceChatSession;
    id _playerStateUpdateHandler;
    id _playerVoiceChatStateDidChangeHandler;
    NSArray *_players;
}

@property(getter=isActive) bool active;
@property(retain) GKSession * gkSession;
@property(retain) GKVoiceChatSession * gkVoiceChatSession;
@property(copy,readonly) NSString * name;
@property(copy) id playerStateUpdateHandler;
@property(copy) id playerVoiceChatStateDidChangeHandler;
@property(retain) NSArray * players;
@property float volume;

+ (bool)isVoIPAllowed;

- (void)dealloc;
- (id)gkSession;
- (void)gkVoiceChatSession:(id)arg1 stateUpdate:(unsigned long long)arg2 forPeer:(id)arg3;
- (id)gkVoiceChatSession;
- (id)initChat:(id)arg1 withSession:(id)arg2 players:(id)arg3;
- (bool)isActive;
- (id)name;
- (id)playerIDs;
- (id)playerStateUpdateHandler;
- (id)playerVoiceChatStateDidChangeHandler;
- (id)players;
- (void)setActive:(bool)arg1;
- (void)setGkSession:(id)arg1;
- (void)setGkVoiceChatSession:(id)arg1;
- (void)setLegacyMute:(bool)arg1 forPlayer:(id)arg2;
- (void)setPlayer:(id)arg1 muted:(bool)arg2;
- (void)setPlayerStateUpdateHandler:(id)arg1;
- (void)setPlayerVoiceChatStateDidChangeHandler:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)start;
- (void)stop;
- (float)volume;

@end
