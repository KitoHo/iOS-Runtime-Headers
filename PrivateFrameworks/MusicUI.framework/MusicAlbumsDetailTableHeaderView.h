/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPUItemOfferButton, MPUSlantedTextPlaceholderArtworkView, NSString, UIButton, UIImage, UILabel, UIView;

@interface MusicAlbumsDetailTableHeaderView : UITableViewHeaderFooterView {
    MPUSlantedTextPlaceholderArtworkView *_artworkView;
    double _cloudRightInset;
    UILabel *_copyrightLabel;
    UILabel *_detailTextLabel;
    id _downloadActionBlock;
    UIView *_hairlineView;
    MPUItemOfferButton *_itemOfferButton;
    id _shuffleActionBlock;
    UIButton *_shuffleButton;
    long long _songCount;
    UILabel *_titleLabel;
    UIView *_topCellSeparatorView;
    double _totalDuration;
    UILabel *_yearLabel;
}

@property(retain) UIImage * artworkImage;
@property double cloudRightInset;
@property(copy) NSString * copyrightText;
@property(copy) id downloadActionBlock;
@property(getter=isDownloadable) bool downloadable;
@property(copy) NSString * placeholderSubtitleText;
@property(copy) NSString * placeholderTitleText;
@property(getter=isShufflable) bool shufflable;
@property(copy) id shuffleActionBlock;
@property(readonly) long long songCount;
@property(copy) NSString * title;
@property(readonly) double totalDuration;
@property(copy) NSString * yearText;

+ (struct CGSize { double x1; double x2; })artworkSize;
+ (double)defaultHeight;
+ (id)newAlbumsDetailTableHeaderViewForSizing;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_shuffleButtonAction:(id)arg1;
- (id)artworkImage;
- (double)backgroundTransitionProgress;
- (double)cloudRightInset;
- (id)copyrightText;
- (void)dealloc;
- (id)downloadActionBlock;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isDownloadable;
- (bool)isShufflable;
- (void)layoutSubviews;
- (id)placeholderSubtitleText;
- (id)placeholderTitleText;
- (void)setArtworkImage:(id)arg1;
- (void)setBackgroundTransitionProgress:(double)arg1;
- (void)setCloudRightInset:(double)arg1;
- (void)setCopyrightText:(id)arg1;
- (void)setDownloadActionBlock:(id)arg1;
- (void)setDownloadable:(bool)arg1;
- (void)setPlaceholderSubtitleText:(id)arg1;
- (void)setPlaceholderTitleText:(id)arg1;
- (void)setShufflable:(bool)arg1;
- (void)setShuffleActionBlock:(id)arg1;
- (void)setSongCount:(long long)arg1 totalDuration:(double)arg2;
- (void)setTableViewStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setYearText:(id)arg1;
- (id)shuffleActionBlock;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)songCount;
- (id)title;
- (double)totalDuration;
- (id)yearText;

@end
