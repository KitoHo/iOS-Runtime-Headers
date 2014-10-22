/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVPlayerItemAccessLog, NSArray, NSData;

@interface MPMovieAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLog *_accessLog;
}

@property(readonly) NSArray * events;
@property(readonly) NSData * extendedLogData;
@property(readonly) unsigned long long extendedLogDataStringEncoding;

- (void).cxx_destruct;
- (id)_initWithAVItemAccessLog:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)events;
- (id)extendedLogData;
- (unsigned long long)extendedLogDataStringEncoding;

@end
