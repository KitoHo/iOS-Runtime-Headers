/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle, WDTableCellProperties, WDTableRowProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {
    unsigned int mParagraphPropertiesOverridden : 1;
    unsigned int mCharacterPropertiesOverridden : 1;
    unsigned int mTableRowPropertiesOverridden : 1;
    unsigned int mTableCellStylePropertiesOverridden : 1;
    WDCharacterProperties *mCharacterProperties;
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    int mPart;
    WDStyle *mStyle;
    WDTableCellProperties *mTableCellStyleProperties;
    WDTableRowProperties *mTableRowProperties;
}

- (id)characterProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (bool)isCharacterPropertiesOverridden;
- (bool)isParagraphPropertiesOverridden;
- (bool)isTableCellStylePropertiesOverridden;
- (bool)isTablePropertiesOverridden;
- (bool)isTableRowPropertiesOverridden;
- (id)mutableCharacterProperties;
- (id)mutableParagraphProperties;
- (id)mutableTableCellStyleProperties;
- (id)mutableTableRowProperties;
- (id)paragraphProperties;
- (int)part;
- (void)setCharacterPropertiesOverridden:(bool)arg1;
- (void)setParagraphPropertiesOverridden:(bool)arg1;
- (void)setPart:(int)arg1;
- (void)setStyle:(id)arg1;
- (void)setTableCellStylePropertiesOverridden:(bool)arg1;
- (void)setTableRowPropertiesOverridden:(bool)arg1;
- (id)style;
- (id)tableCellStyleProperties;
- (id)tableProperties;
- (id)tableRowProperties;

@end
