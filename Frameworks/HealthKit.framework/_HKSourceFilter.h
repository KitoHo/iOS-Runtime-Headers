/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSSet;

@interface _HKSourceFilter : _HKFilter {
    NSSet *_sources;
}

@property(readonly) NSSet * sources;

+ (id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3;
+ (id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithSources:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sourceIdentifiersWithHealthDaemon:(id)arg1;
- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)predicateWithHealthDaemon:(id)arg1;
- (id)sources;

@end
