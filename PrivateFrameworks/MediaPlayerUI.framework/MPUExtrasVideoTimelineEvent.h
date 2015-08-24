/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasVideoTimelineEvent : NSObject {
    double _duration;
    UIImage *_image;
    BOOL _isFirstEvent;
    IKLockupElement *_lockup;
    MPUExtrasVideoTimelineEvent *_next;
    double _offset;
    MPUExtrasVideoTimelineEvent *_previous;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic) BOOL isFirstEvent;
@property (nonatomic) MPUExtrasVideoTimelineEvent *next;
@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) MPUExtrasVideoTimelineEvent *previous;
@property (nonatomic, readonly) NSString *subHeader;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)initWithElement:(id)arg1 prev:(id)arg2;
- (BOOL)isFirstEvent;
- (void)loadImage:(id /* block */)arg1;
- (id)next;
- (double)offset;
- (id)previous;
- (void)setIsFirstEvent:(BOOL)arg1;
- (void)setNext:(id)arg1;
- (id)subHeader;
- (id)title;

@end
