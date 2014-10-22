/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class NSDictionary, NSString;

@interface RUMetricsDictionaryEventFieldProvider : NSObject <SSMetricsEventFieldProvider> {
    NSDictionary *_dictionary;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSDictionary * dictionary;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)valueForMetricsField:(id)arg1;

@end
