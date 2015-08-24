/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboard : NSObject {
    GKLeaderboardInternal *_internal;
    int _loadingCount;
    GKScore *_localPlayerScore;
    int _lock;
    int _playerScope;
    NSArray *_players;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSArray *_scores;
    int _timeScope;
    <GKLeaderboardDelegate> *_weakDelegate;
}

@property (nonatomic, copy) NSString *category;
@property (nonatomic) <GKLeaderboardDelegate> *delegate;
@property (nonatomic, readonly) int friendRank;
@property (nonatomic, readonly) int friendRankCount;
@property (nonatomic, readonly, retain) NSString *groupIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (retain) GKLeaderboardInternal *internal;
@property (getter=isLoading, readonly) BOOL loading;
@property (nonatomic) int loadingCount;
@property (nonatomic, retain) GKScore *localPlayerScore;
@property (nonatomic, readonly, retain) NSString *localizedTitle;
@property (nonatomic) int lock;
@property (nonatomic, readonly) unsigned int maxRange;
@property (nonatomic, readonly) int overallRank;
@property (nonatomic, readonly) int overallRankCount;
@property (nonatomic) int playerScope;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic) int timeScope;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadCategoriesWithCompletionHandler:(id /* block */)arg1;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadLeaderboardsWithCompletionHandler:(id /* block */)arg1;
+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (void)dealloc;
- (void)decrementLoadingCountAtomically;
- (id)delegate;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (void)incrementLoadingCountAtomically;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithPlayerIDs:(id)arg1;
- (id)initWithPlayers:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLoading;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)loadScoresForRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)loadScoresWithCompletionHandler:(id /* block */)arg1;
- (int)loadingCount;
- (id)localPlayerScore;
- (int)lock;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)playerScope;
- (id)players;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)scoreRequestForGame:(id)arg1;
- (id)scores;
- (void)setDelegate:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setLoadingCount:(int)arg1;
- (void)setLocalPlayerScore:(id)arg1;
- (void)setLock:(int)arg1;
- (void)setPlayerScope:(int)arg1;
- (void)setPlayers:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setScores:(id)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (int)timeScope;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)localizedStringForTimeScope:(int)arg1;

- (id)imageURL;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (id)miniImageURL;

@end
