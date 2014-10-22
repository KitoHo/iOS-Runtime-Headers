/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackContext : NSObject {
    unsigned long long _repeatType;
    unsigned long long _shuffleType;
    bool_keepPlayingCurrentItemIfPossible;
}

@property bool keepPlayingCurrentItemIfPossible;
@property unsigned long long repeatType;
@property unsigned long long shuffleType;

+ (Class)queueFeederClass;

- (id)init;
- (bool)keepPlayingCurrentItemIfPossible;
- (unsigned long long)repeatType;
- (void)setKeepPlayingCurrentItemIfPossible:(bool)arg1;
- (void)setRepeatType:(unsigned long long)arg1;
- (void)setShuffleType:(unsigned long long)arg1;
- (unsigned long long)shuffleType;

@end
