/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangeRepeatModeCommandEvent : MPRemoteCommandEvent {
    unsigned long long _repeatType;
}

@property(readonly) unsigned long long repeatType;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (unsigned long long)repeatType;

@end
