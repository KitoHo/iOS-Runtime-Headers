/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface EMNumberFormatter : NSObject {
    NSString *_baseICUFormatString;
    struct __CFNumberFormatter { } *_bigNumberFormatter;
    struct __CFNumberFormatter { } *_currencyFormatter;
    unsigned short _currencySymbol;
    struct __CFDateFormatter { } *_dateFormatter;
    struct __CFNumberFormatter { } *_doubleFormatter;
    NSString *_excelFormatString;
    int _formatType;
    struct __CFNumberFormatter { } *_genericFormatter;
    struct __CFNumberFormatter { } *_percentFormatter;
    struct __CFNumberFormatter { } *_smallNumberFormatter;
    bool_isNegativeRed;
}

+ (id)formatterForFormat:(id)arg1;

- (struct __CFNumberFormatter { }*)_bigNumberFormatter;
- (struct __CFNumberFormatter { }*)_currencyFormatter;
- (struct __CFDateFormatter { }*)_dateFormatter;
- (struct __CFNumberFormatter { }*)_doubleFormatter;
- (struct __CFNumberFormatter { }*)_genericFormatter;
- (id)_icuFormatStringForCurrencyFormat;
- (id)_icuFormatStringForDateFormat;
- (void)_parseExcelFormatString:(id)arg1;
- (struct __CFNumberFormatter { }*)_percentFormatter;
- (struct __CFNumberFormatter { }*)_smallNumberFormatter;
- (void)convertGenericNumberFormat:(id)arg1;
- (id)convertedGenericNumberFormatWithFormat:(id)arg1;
- (void)dealloc;
- (id)formatCurrency:(double)arg1;
- (id)formatDate:(id)arg1;
- (id)formatDefault:(double)arg1;
- (id)formatDoubleValue:(double)arg1;
- (id)formatFraction:(double)arg1;
- (id)formatPercent:(double)arg1;
- (id)formatPhoneNumber:(double)arg1;
- (int)formatType;
- (id)initWithDefaultFormatString;
- (id)initWithExcelFormatString:(id)arg1;
- (bool)isNegativeRed;

@end
