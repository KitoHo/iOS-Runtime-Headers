/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, NSLayoutConstraint, UIActivityIndicatorView, UIImageView, UILabel;

@interface EKUIInviteesViewNotRespondedInviteesCell : UITableViewCell {
    UIImageView *_availabilityTypeImageView;
    UILabel *_commentLabel;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_nameBaselineToTopConstraint;
    UILabel *_nameLabel;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
    UIActivityIndicatorView *_spinner;
    bool_showSpinner;
}

@property(retain) UIImageView * availabilityTypeImageView;
@property(retain) UILabel * commentLabel;
@property(retain) NSLayoutConstraint * minimumHeightConstraint;
@property(retain) NSLayoutConstraint * nameBaselineToTopConstraint;
@property(retain) UILabel * nameLabel;
@property(retain) NSArray * persistentConstraints;
@property(retain) NSArray * removableConstraints;
@property bool showSpinner;
@property(retain) UIActivityIndicatorView * spinner;

+ (id)_commentLabelFont;
+ (double)_leftTextInset;
+ (id)_nameLabelFont;

- (void).cxx_destruct;
- (id)availabilityTypeImageView;
- (id)commentLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)minimumHeightConstraint;
- (id)nameBaselineToTopConstraint;
- (id)nameLabel;
- (id)persistentConstraints;
- (id)removableConstraints;
- (void)setAvailabilityTypeImageView:(id)arg1;
- (void)setCommentLabel:(id)arg1;
- (void)setMinimumHeightConstraint:(id)arg1;
- (void)setNameBaselineToTopConstraint:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setRemovableConstraints:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (bool)showSpinner;
- (id)spinner;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)arg1 availabilityType:(long long)arg2 showSpinner:(bool)arg3 animated:(bool)arg4;

@end
