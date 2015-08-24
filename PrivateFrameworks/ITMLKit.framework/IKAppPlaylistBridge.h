/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppPlaylistBridge : NSObject {
    <IKAppPlaylist> *_appPlaylist;
    IKJSPlaylist *_jsPlaylist;
}

@property (nonatomic, readonly) <IKAppPlaylist> *appPlaylist;
@property (nonatomic, readonly) IKAppMediaItemBridge *currentMediaItem;
@property (nonatomic, readonly) IKJSPlaylist *jsPlaylist;
@property (readonly) unsigned int length;
@property (nonatomic, readonly) IKAppMediaItemBridge *nextMediaItem;
@property (nonatomic, readonly) IKAppMediaItemBridge *previousMediaItem;

- (void).cxx_destruct;
- (id)appPlaylist;
- (id)currentMediaItem;
- (id)initWithJSPlaylist:(id)arg1;
- (id)item:(int)arg1;
- (id)jsPlaylist;
- (unsigned int)length;
- (id)nextMediaItem;
- (id)previousMediaItem;
- (id)replaceItemsAt:(int)arg1 count:(unsigned int)arg2 with:(id)arg3;

@end
