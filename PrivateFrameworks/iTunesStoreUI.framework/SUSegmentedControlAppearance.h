/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSegmentedControlAppearance : NSObject <NSCopying> {
    SUControlAppearance *_backgroundImages;
    NSMutableDictionary *_dividerImages;
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_titleTextAttributes;
}

@property (nonatomic, retain) UIImage *optionsBackgroundImage;

+ (id)defaultBarAppearance;
+ (id)defaultOptionsAppearanceForTintStyle:(int)arg1;

- (id)_newDividerImageKeyWithLeftState:(unsigned int)arg1 rightState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (id)optionsBackgroundImage;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (void)setOptionsBackgroundImage:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)styleSegmentedControl:(id)arg1;
- (id)titleTextAttributesForState:(unsigned int)arg1;

@end
