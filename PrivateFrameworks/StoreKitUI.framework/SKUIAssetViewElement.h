/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSURL;

@interface SKUIAssetViewElement : SKUIViewElement {
    double _initialPlaybackTime;
    long long _itemIdentifier;
    double _playbackDuration;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property double initialPlaybackTime;
@property(readonly) long long itemIdentifier;
@property(readonly) double playbackDuration;

- (void).cxx_destruct;
- (id)URL;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (double)initialPlaybackTime;
- (long long)itemIdentifier;
- (double)playbackDuration;
- (void)setInitialPlaybackTime:(double)arg1;

@end
