/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewsViewCheckInWriteCell : UITableViewCell {
    UILabel *_checkInLabel;
    <MKPlaceReviewsViewCheckInWriteCellDelegate> *_delegate;
    NSArray *_marginConstraints;
    NSMutableArray *_scaledConstraints;
    UILabel *_writeReviewLabel;
}

@property (nonatomic, retain) NSAttributedString *checkInTitle;
@property (nonatomic) <MKPlaceReviewsViewCheckInWriteCellDelegate> *delegate;
@property (nonatomic, retain) NSArray *marginConstraints;
@property (nonatomic, retain) NSMutableArray *scaledConstraints;
@property (nonatomic, retain) NSAttributedString *writeReviewTitle;

+ (float)intrinsicContentHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)cellTapped:(id)arg1;
- (id)checkInTitle;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (id)marginConstraints;
- (id)newLabel;
- (void)refreshMarginConstraints;
- (id)scaledConstraints;
- (void)setCheckInTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMarginConstraints:(id)arg1;
- (void)setScaledConstraints:(id)arg1;
- (void)setWriteReviewTitle:(id)arg1;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (id)updatedAttributedString:(id)arg1 onlyUpdateColor:(BOOL)arg2;
- (id)writeReviewTitle;

@end
