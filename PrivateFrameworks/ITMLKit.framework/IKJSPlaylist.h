/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSPlaylist : IKJSObject <IKJSPlaylist> {
    IKAppPlaylistBridge *_bridge;
}

@property (nonatomic, readonly) IKAppPlaylistBridge *bridge;
@property (nonatomic, readonly) IKJSMediaItem *currentMediaItem;
@property (nonatomic, readonly) unsigned int length;
@property (nonatomic, readonly) IKJSMediaItem *nextMediaItem;
@property (nonatomic, readonly) IKJSMediaItem *previousMediaItem;

- (void).cxx_destruct;
- (id)bridge;
- (id)currentMediaItem;
- (id)init;
- (id)item:(int)arg1;
- (unsigned int)length;
- (id)nextMediaItem;
- (id)pop;
- (id)previousMediaItem;
- (unsigned int)push:(id)arg1;
- (id)splice:(id)arg1 :(id)arg2 :(id)arg3;

@end
