/* Generated by RuntimeBrowser.
 */

@protocol TSCHDataFormatter <NSObject>

@required

- (NSString *)chartFormattedInspectorStringForValue:(id <TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
- (NSString *)chartFormattedStringForValue:(id <TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
- (<TSCHDataFormatterPersistableStyleObject> *)convertToPersistableStyleObject;
- (<TSCHDataFormatterSupportedClientFormatObject> *)convertToSupportedClientFormatObjectWithLocale:(TSULocale *)arg1;
- (BOOL)isCompatibleWithDataFormatter:(id <TSCHDataFormatter>)arg1;
- (int)numberOfDecimalPlaces;

@end
