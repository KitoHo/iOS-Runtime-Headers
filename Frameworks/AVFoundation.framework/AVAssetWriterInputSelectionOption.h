/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
    BOOL _displaysNonForcedSubtitles;
    BOOL _enabled;
    NSString *_extendedLanguageTag;
    AVAssetWriterInput *_input;
    NSString *_languageCode;
    NSString *_mediaType;
    NSArray *_metadata;
    NSDictionary *_outputSettings;
    struct opaqueCMFormatDescription { } *_sourceFormatHint;
    NSDictionary *_trackReferences;
}

@property (nonatomic, readonly) BOOL displaysNonForcedSubtitles;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) AVAssetWriterInput *input;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSArray *metadata;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*sourceFormatHint;
@property (nonatomic, readonly) NSDictionary *trackReferences;

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;

- (id)_ancillaryDescription;
- (BOOL)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;
- (BOOL)_isAuxiliaryContent;
- (BOOL)_isDesignatedDefault;
- (BOOL)_isMainProgramContent;
- (id)_taggedCharacteristics;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (BOOL)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (void)finalize;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (unsigned int)hash;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2;
- (id)input;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlayable;
- (id)languageCode;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (id)outputSettings;
- (id)propertyList;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)trackReferences;

@end
