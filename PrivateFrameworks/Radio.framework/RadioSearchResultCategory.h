/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSDictionary, NSString;

@interface RadioSearchResultCategory : NSObject <NSCopying, NSMutableCopying> {
    long long _categoryType;
    NSString *_name;
    NSDictionary *_responseDictionary;
    NSArray *_stationResults;
    bool_hasMoreResults;
}

@property(readonly) long long categoryType;
@property(readonly) bool hasMoreResults;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSDictionary * responseDictionary;
@property(copy,readonly) NSArray * stationResults;

- (void).cxx_destruct;
- (id)_initWithResponseDictionary:(id)arg1;
- (long long)categoryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasMoreResults;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)responseDictionary;
- (id)stationResults;

@end
