/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class CADisplay, CADisplayLink;

@interface GGLDisplayLink : NSObject {
    CADisplay *_display;
    CADisplayLink *_displayLink;
    long long _frameInterval;
    SEL _selector;
    long long _skippedFrames;
    id _target;
    bool_paused;
}

@property(retain) CADisplay * display;
@property long long frameInterval;
@property(getter=isPaused) bool paused;
@property(readonly) double timestamp;

- (void)_displayLinkFired:(id)arg1;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)dealloc;
- (id)display;
- (long long)frameInterval;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (bool)isPaused;
- (void)setDisplay:(id)arg1;
- (void)setFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1;
- (id)target;
- (double)timestamp;

@end
