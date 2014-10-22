/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDate, NSString, NSURL, SKUIArtworkList, UIColor;

@interface SKUICountdown : NSObject {
    NSURL *_URL;
    SKUIArtworkList *_artworkList;
    unsigned long long _dateFormat;
    SKUIArtworkList *_endArtworkList;
    NSDate *_endDate;
    long long _finalValue;
    UIColor *_flapBottomColor;
    UIColor *_flapTopColor;
    UIColor *_fontColor;
    long long _initialValue;
    NSString *_numberFormat;
    long long _rate;
    NSDate *_startDate;
    long long _type;
    bool_flapped;
    bool_isLoaded;
}

@property(copy) NSURL * URL;
@property(retain) SKUIArtworkList * artworkList;
@property unsigned long long dateFormat;
@property(retain) SKUIArtworkList * endArtworkList;
@property(copy) NSDate * endDate;
@property long long finalValue;
@property(copy) UIColor * flapBottomColor;
@property(copy) UIColor * flapTopColor;
@property(getter=isFlapped) bool flapped;
@property(copy) UIColor * fontColor;
@property long long initialValue;
@property(copy) NSString * numberFormat;
@property long long rate;
@property(copy) NSDate * startDate;
@property long long type;

- (void).cxx_destruct;
- (id)URL;
- (id)artworkList;
- (unsigned long long)dateFormat;
- (id)endArtworkList;
- (id)endDate;
- (long long)finalValue;
- (id)flapBottomColor;
- (id)flapTopColor;
- (id)fontColor;
- (id)initWithCountdownDictionary:(id)arg1;
- (long long)initialValue;
- (bool)isFlapped;
- (bool)isLoaded;
- (id)numberFormat;
- (long long)rate;
- (void)setArtworkList:(id)arg1;
- (void)setDateFormat:(unsigned long long)arg1;
- (void)setEndArtworkList:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFinalValue:(long long)arg1;
- (void)setFlapBottomColor:(id)arg1;
- (void)setFlapTopColor:(id)arg1;
- (void)setFlapped:(bool)arg1;
- (void)setFontColor:(id)arg1;
- (void)setInitialValue:(long long)arg1;
- (void)setNumberFormat:(id)arg1;
- (void)setRate:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (long long)type;
- (void)updateWithDictionary:(id)arg1;

@end
