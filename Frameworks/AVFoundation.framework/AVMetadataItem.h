/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <NSObject><NSCopying>, AVMetadataItemInternal, NSData, NSDate, NSDictionary, NSLocale, NSNumber, NSString;

@interface AVMetadataItem : NSObject <AVAsynchronousKeyValueLoading, NSCopying, NSMutableCopying> {
    AVMetadataItemInternal *_priv;
}

@property(copy,readonly) NSString * dataType;
@property(readonly) NSData * dataValue;
@property(readonly) NSDate * dateValue;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(copy,readonly) NSString * extendedLanguageTag;
@property(copy,readonly) NSDictionary * extraAttributes;
@property(copy,readonly) NSString * identifier;
@property(copy,readonly) NSLocale * locale;
@property(readonly) NSNumber * numberValue;
@property(readonly) NSString * stringValue;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property(copy,readonly) <NSObject><NSCopying> * value;

+ (bool)_clientExpectsISOUserDataKeysInQuickTimeUserDataKeySpace;
+ (id)_figMetadataPropertyFromMetadataItems:(id)arg1;
+ (id)_isoUserDataKeysRequiringKeySpaceConversion;
+ (id)_replaceQuickTimeUserDataKeySpaceWithISOUserDataKeySpaceIfRequired:(id)arg1;
+ (id)dataTypeForValue:(id)arg1;
+ (id)identifierForKey:(id)arg1 keySpace:(id)arg2;
+ (void)initialize;
+ (id)keyForIdentifier:(id)arg1;
+ (id)keySpaceForIdentifier:(id)arg1;
+ (id)metadataItemsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByIdentifier:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 filteredByMetadataItemFilter:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withKey:(id)arg2 keySpace:(id)arg3;
+ (id)metadataItemsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)metadataItemsFromArray:(id)arg1 withStringValue:(id)arg2;

- (bool)_areExtraAttributesOf:(id)arg1 comparableToExtraAttributesOf:(id)arg2;
- (id)_conformingDataTypes;
- (void*)_copyValueAsCFTypeWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 failureReason:(id*)arg2;
- (void)_extractPropertiesFromDictionary:(id)arg1;
- (id)_figMetadataDictionary;
- (id)_figMetadataFormat;
- (id)_figMetadataProperties;
- (id)_figMetadataSpecificationReturningError:(id*)arg1;
- (id)_initWithFigMetadataDictionary:(id)arg1;
- (id)_initWithReader:(struct OpaqueFigMetadataReader { }*)arg1 itemIndex:(long long)arg2;
- (id)_keyAsString;
- (void)_makePropertiesReady;
- (void)_makeValueReady;
- (id)_serializationDataType;
- (void)_updateCommonKey;
- (void)_updateExtendedLanguageTagFromLocale:(id)arg1;
- (void)_updateIdentifier;
- (void)_updateLocaleFromExtendedLanguageTag:(id)arg1;
- (void)cancelLoading;
- (id)commonKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (id)dataValue;
- (id)dateValue;
- (void)dealloc;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)extendedLanguageTag;
- (id)extraAttributes;
- (void)finalize;
- (unsigned long long)hash;
- (id)identifier;
- (struct CGImage { }*)imageValue;
- (id)init;
- (id)intrinsicAttributesOfExtraAttributes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)keySpace;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)numberValue;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)stringValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;

@end
