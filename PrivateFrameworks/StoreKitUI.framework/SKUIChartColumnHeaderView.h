/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray;

@interface SKUIChartColumnHeaderView : UIControl {
    NSArray *_buttons;
    long long _selectedTitleIndex;
}

@property long long selectedTitleIndex;
@property(copy) NSArray * titles;

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)_reloadSelectedButton;
- (void)dealloc;
- (void)layoutSubviews;
- (long long)selectedTitleIndex;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelectedTitleIndex:(long long)arg1;
- (void)setTitles:(id)arg1;
- (void)sizeToFit;
- (id)titles;

@end
