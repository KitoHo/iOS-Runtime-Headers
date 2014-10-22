/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class <FMFNoLocationViewDelegate>, NSLayoutConstraint, UIImage, UIImageView, UILabel, UIView;

@interface FMFNoLocationView : UIView {
    UIView *_blur;
    NSLayoutConstraint *_bottomInsetConstraint;
    <FMFNoLocationViewDelegate> *_delegate;
    UILabel *_detailsLabel;
    UIView *_insetView;
    UIImage *_offlineProfileImage;
    UIImageView *_offlineProfileImageView;
    UIImageView *_personImageView;
    NSLayoutConstraint *_topInsetConstraint;
    bool_blockLabelUpdates;
}

@property bool blockLabelUpdates;
@property(retain) UIView * blur;
@property(retain) NSLayoutConstraint * bottomInsetConstraint;
@property <FMFNoLocationViewDelegate> * delegate;
@property(retain) UILabel * detailsLabel;
@property(retain) UIView * insetView;
@property(retain) UIImage * offlineProfileImage;
@property(retain) UIImageView * offlineProfileImageView;
@property(retain) UIImageView * personImageView;
@property(retain) NSLayoutConstraint * topInsetConstraint;

- (void).cxx_destruct;
- (void)addLayoutConstraints;
- (bool)blockLabelUpdates;
- (id)blur;
- (id)bottomInsetConstraint;
- (void)dealloc;
- (id)delegate;
- (id)detailsLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)insetView;
- (id)offlineProfileImage;
- (id)offlineProfileImageView;
- (id)personImageView;
- (void)setAlpha:(double)arg1;
- (void)setBlockLabelUpdates:(bool)arg1;
- (void)setBlur:(id)arg1;
- (void)setBottomInsetConstraint:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailsLabel:(id)arg1;
- (void)setInsetView:(id)arg1;
- (void)setOfflineProfileImage:(id)arg1;
- (void)setOfflineProfileImageView:(id)arg1;
- (void)setPersonImageView:(id)arg1;
- (void)setTopInsetConstraint:(id)arg1;
- (id)topInsetConstraint;
- (void)updateConstriantsForInsets;
- (void)updateLabel;
- (void)updateLabelNotification:(id)arg1;
- (void)updatePersonImageViewImage;

@end
