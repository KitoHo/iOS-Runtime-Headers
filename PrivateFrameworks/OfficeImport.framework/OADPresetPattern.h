/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetPattern : OADPattern {
    BOOL mIsTypeOverridden;
    int mType;
}

+ (id)defaultProperties;
+ (id)nameForPresetPatternType:(int)arg1;
+ (id)namedBitmapDataForPresetPatternType:(int)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)initWithDefaults;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;

@end
