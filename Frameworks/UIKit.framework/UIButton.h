/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIButton : UIControl <ABText, NSCoding> {
    UIImageView *_backgroundView;
    struct { 
        unsigned int reversesTitleShadowWhenHighlighted : 1; 
        unsigned int adjustsImageWhenHighlighted : 1; 
        unsigned int adjustsImageWhenDisabled : 1; 
        unsigned int autosizeToFit : 1; 
        unsigned int disabledDimsImage : 1; 
        unsigned int showsTouchWhenHighlighted : 1; 
        unsigned int buttonType : 8; 
        unsigned int shouldHandleScrollerMouseEvent : 1; 
        unsigned int titleFrozen : 1; 
        unsigned int resendTraitToImageViews : 2; 
    } _buttonFlags;
    NSArray *_contentConstraints;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentEdgeInsets;
    struct __CFDictionary { } *_contentLookup;
    unsigned int _externalFlatEdge;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageEdgeInsets;
    UIImageView *_imageView;
    BOOL _initialized;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _internalTitlePaddingInsets;
    unsigned int _lastDrawingControlState;
    UIFont *_lazyTitleViewFont;
    _UIButtonMaskAnimationView *_maskAnimationView;
    UITapGestureRecognizer *_selectGestureRecognizer;
    UIView *_selectionView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _titleEdgeInsets;
    UILabel *_titleView;
}

@property (setter=_setContentConstraints:, nonatomic, copy) NSArray *_contentConstraints;
@property (nonatomic, readonly, retain) UIColor *_currentImageColor;
@property (setter=_setExternalFlatEdge:) unsigned int _externalFlatEdge;
@property (setter=_setInternalTitlePaddingInsets:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _internalTitlePaddingInsets;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) BOOL adjustsImageWhenDisabled;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic, readonly) int buttonType;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentEdgeInsets;
@property (nonatomic, readonly, retain) NSAttributedString *currentAttributedTitle;
@property (nonatomic, readonly, retain) UIImage *currentBackgroundImage;
@property (nonatomic, readonly, retain) UIImage *currentImage;
@property (nonatomic, readonly, retain) NSString *currentTitle;
@property (nonatomic, readonly, retain) UIColor *currentTitleColor;
@property (nonatomic, readonly, retain) UIColor *currentTitleShadowColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageEdgeInsets;
@property (nonatomic, readonly, retain) UIImageView *imageView;
@property (nonatomic) BOOL reversesTitleShadowWhenHighlighted;
@property (nonatomic) BOOL showsTouchWhenHighlighted;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } titleEdgeInsets;
@property (nonatomic, readonly, retain) UILabel *titleLabel;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_checkmarkImage;
+ (id)_defaultBackgroundImageForType:(int)arg1 andState:(unsigned int)arg2;
+ (id)_defaultImageColorForState:(unsigned int)arg1 button:(id)arg2;
+ (id)_defaultImageForType:(int)arg1 andState:(unsigned int)arg2;
+ (id)_defaultNormalTitleColor;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultTitleColorForState:(unsigned int)arg1 button:(id)arg2;
+ (id)_detailDisclosureImage;
+ (id)_exclamationMarkImage;
+ (id)_infoDarkImage;
+ (id)_infoLightImage;
+ (id)_minusImage;
+ (id)_plusImage;
+ (id)_questionMarkImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(float)arg4;
+ (id)_xImage;
+ (id)buttonWithType:(int)arg1;

- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_applyAppropriateChargeForButtonType;
- (id)_archivableContent:(id*)arg1;
- (id)_attributedTitleForState:(unsigned int)arg1;
- (id)_backgroundForState:(unsigned int)arg1 usesBackgroundForNormalState:(BOOL*)arg2;
- (id)_backgroundView;
- (void)_beginTitleAnimation;
- (id)_borderColorForState:(unsigned int)arg1;
- (float)_borderWidthForState:(unsigned int)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)_buttonType;
- (BOOL)_canHaveTitle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_clippedHighlightBounds;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_combinedContentPaddingInsets;
- (id)_contentConstraints;
- (id)_contentForState:(unsigned int)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_createPreparedImageViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_currentImageColor;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (float)_drawingStrokeForState:(unsigned int)arg1;
- (float)_drawingStrokeForStyle:(int)arg1;
- (int)_drawingStyleForState:(unsigned int)arg1;
- (int)_drawingStyleForStroke:(float)arg1;
- (id)_externalBorderColorForState:(unsigned int)arg1;
- (int)_externalDrawingStyleForState:(unsigned int)arg1;
- (unsigned int)_externalFlatEdge;
- (id)_externalFocusedTitleColor;
- (id)_externalImageColorForState:(unsigned int)arg1;
- (id)_externalTitleColorForState:(unsigned int)arg1;
- (id)_externalUnfocusedBorderColor;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_font;
- (BOOL)_hasDrawingStyle;
- (BOOL)_hasHighlightColor;
- (BOOL)_hasImageForProperty:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_highlightBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_highlightBoundsForDrawingStyle;
- (float)_highlightCornerRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_highlightRectForImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_highlightRectForTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_imageColorForState:(unsigned int)arg1;
- (id)_imageForState:(unsigned int)arg1 usesImageForNormalState:(BOOL*)arg2;
- (BOOL)_imageNeedsCompositingModeWhenSelected;
- (id)_imageView;
- (void)_installSelectGestureRecognizer;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_internalTitlePaddingInsets;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_invalidateContentConstraints;
- (BOOL)_isEffectivelyDisabledExternalRoundedRectButton;
- (BOOL)_isExternalRoundedRectButton;
- (BOOL)_isExternalRoundedRectButtonWithPressednessState;
- (BOOL)_isModernButton;
- (BOOL)_isTitleFrozen;
- (void)_layoutBackgroundImageView;
- (id)_layoutDebuggingTitle;
- (void)_layoutImageView;
- (void)_layoutTitleView;
- (id)_letterpressStyleForState:(unsigned int)arg1;
- (BOOL)_likelyToHaveTitle;
- (int)_lineBreakMode;
- (id)_newImageViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_newLabelWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_outsetInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_pathImageEdgeInsets;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_pathTitleEdgeInsets;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareMaskAnimationViewIfNecessary;
- (id)_scriptingInfo;
- (void)_selectGestureChanged:(id)arg1;
- (float)_selectedIndicatorAlpha;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setButtonType:(int)arg1;
- (void)_setContent:(id)arg1 forState:(unsigned int)arg2;
- (void)_setContentConstraints:(id)arg1;
- (void)_setContentHuggingPriorities:(struct CGSize { float x1; float x2; })arg1;
- (void)_setDrawingStroke:(float)arg1 forState:(unsigned int)arg2;
- (void)_setDrawingStyle:(int)arg1 forState:(unsigned int)arg2;
- (void)_setExternalFlatEdge:(unsigned int)arg1;
- (void)_setFont:(id)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 deferLayout:(BOOL)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned int)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setInternalTitlePaddingInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned int)arg2;
- (void)_setLineBreakMode:(int)arg1;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (void)_setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)_setTitleFrozen:(BOOL)arg1;
- (void)_setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (id)_setupBackgroundView;
- (void)_setupDrawingStyleForState:(unsigned int)arg1;
- (void)_setupImageView;
- (void)_setupPressednessForState:(unsigned int)arg1;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(BOOL)arg1;
- (id)_shadowColorForState:(unsigned int)arg1;
- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1;
- (BOOL)_shouldUpdatePressedness;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (BOOL)_textNeedsCompositingModeWhenSelected;
- (void)_titleAttributesChanged;
- (id)_titleColorForState:(unsigned int)arg1;
- (id)_titleForState:(unsigned int)arg1;
- (id)_titleOrImageViewForBaselineLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 calculatePositionForEmptyTitle:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_titleShadowOffset;
- (id)_titleView;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
- (void)_uninstallSelectGestureRecognizer;
- (void)_updateBackgroundImageView;
- (void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2;
- (void)_updateImageView;
- (void)_updateMaskState;
- (void)_updateSelectionViewForState:(unsigned int)arg1;
- (void)_updateTitleView;
- (void)_willMoveToWindow:(id)arg1;
- (BOOL)adjustsImageWhenDisabled;
- (BOOL)adjustsImageWhenHighlighted;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)attributedTitleForState:(unsigned int)arg1;
- (BOOL)autosizesToFit;
- (id)backgroundImageForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)buttonType;
- (BOOL)canBecomeFocused;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentEdgeInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned int)arg2;
- (id)currentAttributedTitle;
- (id)currentBackgroundImage;
- (id)currentImage;
- (id)currentTitle;
- (id)currentTitleColor;
- (id)currentTitleShadowColor;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (void)focusedViewDidChange;
- (id)font;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageEdgeInsets;
- (id)imageForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (int)lineBreakMode;
- (struct CGPoint { float x1; float x2; })pressFeedbackPosition;
- (BOOL)reversesTitleShadowWhenHighlighted;
- (void)setAdjustsImageWhenDisabled:(BOOL)arg1;
- (void)setAdjustsImageWhenHighlighted:(BOOL)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentHorizontalAlignment:(int)arg1;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned int)arg2;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setReversesTitleShadowWhenHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setShowsTouchWhenHighlighted:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned int)arg2;
- (void)setTitleShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)showsTouchWhenHighlighted;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)titleColorForState:(unsigned int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })titleEdgeInsets;
- (id)titleForState:(unsigned int)arg1;
- (id)titleLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)titleShadowColorForState:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })titleShadowOffset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForBaselineLayout;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

- (void)ab_addConferenceIcon;
- (id)ab_text;
- (id)ab_textAttributes;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_accessoryControlToExtendWithCallout;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)pu_setRTLAwareContentEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)pu_setTitle:(id)arg1 withFallback:(id /* block */)arg2 forState:(unsigned int)arg3;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

- (void)cam_updateContentInsetsToCenterImageWithinMinimumSize:(struct CGSize { float x1; float x2; })arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (void)mpu_configureButtonWithTextDrawingContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

+ (id)mediaControlsBuyButtonWithStyle:(int)arg1;

- (void)_mediaControlsBuyButtonTouchDown:(id)arg1;
- (void)_mediaControlsBuyButtonTouchUp:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)configureFromScriptButton:(id)arg1;

@end
