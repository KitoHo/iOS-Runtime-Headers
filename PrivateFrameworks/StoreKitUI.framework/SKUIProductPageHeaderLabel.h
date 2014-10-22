/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSString, UIColor, UIImage;

@interface SKUIProductPageHeaderLabel : UIView {
    NSString *_contentRating;
    UIImage *_contentRatingImage;
    UIColor *_ratingColor;
    NSArray *_secondaryContentRatingImages;
    NSString *_text;
    UIColor *_textColor;
    bool_isPad;
}

@property(retain) NSString * contentRating;
@property bool isPad;
@property(retain) UIColor * ratingColor;
@property(retain) NSArray * secondaryContentRatingImages;
@property(copy) NSString * text;
@property(retain) UIColor * textColor;

- (void).cxx_destruct;
- (id)_imageForContentRating:(id)arg1;
- (struct __CTFramesetter { }*)_newTextFramesetter;
- (id)_textAttributes;
- (id)contentRating;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPad;
- (void)layoutSubviews;
- (id)ratingColor;
- (id)secondaryContentRatingImages;
- (double)secondaryImageWidth;
- (void)setContentRating:(id)arg1;
- (void)setIsPad:(bool)arg1;
- (void)setRatingColor:(id)arg1;
- (void)setSecondaryContentRatingImages:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textColor;

@end
