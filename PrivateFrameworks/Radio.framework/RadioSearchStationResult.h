/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSDictionary;

@interface RadioSearchStationResult : NSObject <NSCopying> {
    NSDictionary *_highlightRanges;
    NSDictionary *_stationDictionary;
}

@property(copy,readonly) NSDictionary * highlightRanges;
@property(copy,readonly) NSDictionary * stationDictionary;

- (void).cxx_destruct;
- (id)_initWithResponseDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)highlightRanges;
- (bool)isEqual:(id)arg1;
- (id)stationDictionary;

@end
