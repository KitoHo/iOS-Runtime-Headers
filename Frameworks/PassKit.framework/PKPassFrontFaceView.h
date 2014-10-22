/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UILabel, WLEasyToHitCustomButton;

@interface PKPassFrontFaceView : PKPassFaceView {
    WLEasyToHitCustomButton *_flipButton;
    UILabel *_logoLabel;
    WLEasyToHitCustomButton *_shareButton;
    bool_showsInfo;
    bool_showsShare;
}

@property bool showsInfo;
@property bool showsShare;

- (void)_flipButtonPressed;
- (id)_relevantBuckets;
- (void)_shareButtonPressed;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (id)init;
- (bool)isFrontFace;
- (void)layoutSubviews;
- (id)passFaceTemplate;
- (void)prepareForFlip;
- (void)setClipsContent:(bool)arg1;
- (void)setShowsInfo:(bool)arg1;
- (void)setShowsShare:(bool)arg1;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (bool)showsInfo;
- (bool)showsShare;
- (id)tallFaceTemplate;
- (void)updateValidity;

@end
