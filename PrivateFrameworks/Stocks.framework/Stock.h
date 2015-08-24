/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface Stock : NSObject {
    NSString *_averageVolume;
    NSString *_change;
    StockChartData *_chartDataArray;
    NSString *_companyName;
    StockDataSource *_dataSource;
    NSString *_dividendYield;
    Exchange *_exchange;
    NSString *_high;
    NSURL *_infoURL;
    NSString *_low;
    NSString *_marketcap;
    NSString *_open;
    NSString *_peRatio;
    NSString *_price;
    unsigned int _pricePrecision;
    NSString *_shortCompanyName;
    NSString *_symbol;
    NSString *_symbolType;
    double _timeMetadataLastUpdated;
    double _timeQuoteLastUpdated;
    NSString *_volume;
    NSString *_yearHigh;
    NSString *_yearLow;
}

@property (nonatomic, retain) NSString *averageVolume;
@property (nonatomic, retain) NSString *change;
@property (nonatomic, retain) NSString *companyName;
@property (nonatomic, retain) StockDataSource *dataSource;
@property (nonatomic, retain) NSString *dividendYield;
@property (nonatomic, retain) Exchange *exchange;
@property (nonatomic, retain) NSString *high;
@property (nonatomic, retain) NSURL *infoURL;
@property (nonatomic, retain) NSString *low;
@property (nonatomic, retain) NSString *marketcap;
@property (nonatomic, retain) NSString *open;
@property (nonatomic, retain) NSString *peRatio;
@property (nonatomic, retain) NSString *price;
@property (nonatomic, readonly) unsigned int pricePrecision;
@property (nonatomic, retain) NSString *shortCompanyName;
@property (nonatomic, retain) NSString *symbol;
@property (nonatomic, retain) NSString *symbolType;
@property (nonatomic) double timeMetadataLastUpdated;
@property (nonatomic) double timeQuoteLastUpdated;
@property (nonatomic, retain) NSString *volume;
@property (nonatomic, retain) NSString *yearHigh;
@property (nonatomic, retain) NSString *yearLow;

+ (id)BlankValueString;
+ (id)PercentFormatter;
+ (id)_formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)_potentiallyAbsentKeys;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4;
+ (id)formattedStringForNumber:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 groupingSeparators:(BOOL)arg4 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg5;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3;
+ (id)formattedStringForString:(id)arg1 fractionDigits:(unsigned int)arg2 percentStyle:(BOOL)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned int)arg4;
+ (BOOL)localeUsesASCIIDigits;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1;
+ (id)localizedMagnitudeAbbreviatedStringWithString:(id)arg1 fractionDigits:(unsigned int)arg2;
+ (id)percentSymbol;
+ (id)postfixCharacterForMagnitude:(unsigned int)arg1 unitMagnitude:(unsigned int*)arg2;
+ (void)resetLocale;
+ (id)urlForStock:(id)arg1;
+ (id)urlForStockSymbol:(id)arg1;

- (void).cxx_destruct;
- (double)_updateInterval;
- (void)_updatePricePrecision;
- (id)archiveDictionary;
- (id)averageVolume;
- (id)change;
- (BOOL)changeIsNegative;
- (BOOL)changeIsZero;
- (id)chartDataForInterval:(int)arg1;
- (id)companyName;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)dividendYield;
- (BOOL)doesMetadataNeedUpdate;
- (BOOL)doesQuoteNeedUpdate;
- (id)exchange;
- (id)formattedChangePercent:(BOOL)arg1;
- (id)formattedChangePercent:(BOOL)arg1 includePercentSign:(BOOL)arg2;
- (id)formattedPrice;
- (unsigned int)hash;
- (id)high;
- (id)infoURL;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isIndex;
- (BOOL)isMetadataStale;
- (BOOL)isQuoteStale;
- (id)listName;
- (id)listNameWithMaxIndexNameLength:(unsigned int)arg1;
- (id)low;
- (BOOL)marketIsOpen;
- (id)marketcap;
- (id)open;
- (id)peRatio;
- (void)populateFromDictionary:(id)arg1;
- (id)price;
- (unsigned int)pricePrecision;
- (void)resetLocale;
- (void)setAverageVolume:(id)arg1;
- (void)setChange:(id)arg1;
- (void)setChartData:(id)arg1 forInterval:(int)arg2;
- (void)setCompanyName:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDividendYield:(id)arg1;
- (void)setExchange:(id)arg1;
- (void)setHigh:(id)arg1;
- (void)setInfoURL:(id)arg1;
- (void)setLow:(id)arg1;
- (void)setMarketcap:(id)arg1;
- (void)setOpen:(id)arg1;
- (void)setPeRatio:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setShortCompanyName:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setSymbolType:(id)arg1;
- (void)setTimeMetadataLastUpdated:(double)arg1;
- (void)setTimeQuoteLastUpdated:(double)arg1;
- (void)setVolume:(id)arg1;
- (void)setYearHigh:(id)arg1;
- (void)setYearLow:(id)arg1;
- (id)shortCompanyName;
- (id)symbol;
- (id)symbolType;
- (double)timeMetadataLastUpdated;
- (double)timeQuoteLastUpdated;
- (void)updateMetadataWithDictionary:(id)arg1 forTime:(double)arg2;
- (void)updateQuoteWithDictionary:(id)arg1 forTime:(double)arg2;
- (id)volume;
- (id)yearHigh;
- (id)yearLow;

@end
