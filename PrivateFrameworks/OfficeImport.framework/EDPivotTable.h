/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDReference, EDResources, NSString;

@interface EDPivotTable : NSObject {
    boolmApplyAlignmentFormats;
    boolmApplyBorderFormats;
    boolmApplyFontFormats;
    boolmApplyNumberFormats;
    boolmApplyPatternFormats;
    boolmApplyWidthHeightFormats;
    boolmColGrandTotals;
    boolmCompact;
    boolmCompactData;
    boolmCustomListSort;
    boolmDataCaption;
    boolmDataOnRows;
    boolmDisableFieldList;
    boolmMergeItem;
    boolmMultipleFieldFilters;
    boolmOutline;
    boolmOutlineData;
    boolmPageOverThenDown;
    boolmRowGrandTotals;
    boolmShowCalcMbrs;
    boolmShowColumnHeaders;
    boolmShowColumnStripes;
    boolmShowDataDropDown;
    boolmShowDropZones;
    boolmShowEmptyCol;
    boolmShowEmptyRow;
    boolmShowHeaders;
    boolmShowLastColumn;
    boolmShowMemberPropertyTips;
    boolmShowMissing;
    boolmShowMultipleLabel;
    boolmShowRowHeaders;
    boolmShowRowStripes;
    boolmSubtotalHiddenItems;
    boolmUseAutoFormatting;
    unsigned long long mAutoFormatId;
    EDCollection *mColumnFields;
    NSString *mColumnHeaderCaption;
    EDCollection *mColumnItems;
    unsigned long long mColumnPageCount;
    EDCollection *mConditionalFields;
    EDCollection *mDataFields;
    unsigned long long mDataPosition;
    long long mFirstDataColumn;
    long long mFirstDataRow;
    long long mFirstHeaderRow;
    NSString *mName;
    EDCollection *mPageFields;
    NSString *mPageStyleName;
    unsigned long long mPageWrap;
    EDCollection *mPivotAreas;
    EDCollection *mPivotFields;
    EDReference *mPivotTableRange;
    EDResources *mResources;
    EDCollection *mRowFields;
    NSString *mRowHeaderCaption;
    EDCollection *mRowItems;
    unsigned long long mRowPageCount;
    unsigned long long mStyleIndex;
    NSString *mStyleName;
}

+ (id)pivotTableWithResources:(id)arg1;

- (bool)applyAlignmentFormats;
- (bool)applyBorderFormats;
- (bool)applyFontFormats;
- (bool)applyNumberFormats;
- (bool)applyPatternFormats;
- (bool)applyWidthHeightFormats;
- (unsigned long long)autoFormatId;
- (bool)colGrandTotals;
- (id)columnFields;
- (id)columnHeaderCaption;
- (id)columnItems;
- (unsigned long long)columnPageCount;
- (bool)compact;
- (bool)compactData;
- (id)conditionalFormats;
- (bool)customListSort;
- (bool)dataCaption;
- (id)dataFields;
- (bool)dataOnRows;
- (unsigned long long)dataPosition;
- (void)dealloc;
- (bool)disableFieldList;
- (long long)firstDataColumn;
- (long long)firstDataRow;
- (long long)firstHeaderRow;
- (id)initWithResources:(id)arg1;
- (bool)mergeItem;
- (bool)multipleFieldFilters;
- (id)name;
- (bool)outline;
- (bool)outlineData;
- (id)pageFields;
- (bool)pageOverThenDown;
- (id)pageStyleName;
- (unsigned long long)pageWrap;
- (id)pivotAreas;
- (id)pivotFields;
- (id)pivotTableRange;
- (id)rowFields;
- (bool)rowGrandTotals;
- (id)rowHeaderCaption;
- (id)rowItems;
- (unsigned long long)rowPageCount;
- (void)setApplyAlignmentFormats:(bool)arg1;
- (void)setApplyBorderFormats:(bool)arg1;
- (void)setApplyFontFormats:(bool)arg1;
- (void)setApplyNumberFormats:(bool)arg1;
- (void)setApplyPatternFormats:(bool)arg1;
- (void)setApplyWidthHeightFormats:(bool)arg1;
- (void)setAutoFormatId:(unsigned long long)arg1;
- (void)setColGrandTotals:(bool)arg1;
- (void)setColumnHeaderCaption:(id)arg1;
- (void)setColumnPageCount:(unsigned long long)arg1;
- (void)setCompact:(bool)arg1;
- (void)setCompactData:(bool)arg1;
- (void)setCustomListSort:(bool)arg1;
- (void)setDataCaption:(bool)arg1;
- (void)setDataOnRows:(bool)arg1;
- (void)setDataPosition:(unsigned long long)arg1;
- (void)setDisableFieldList:(bool)arg1;
- (void)setFirstDataColumn:(long long)arg1;
- (void)setFirstDataRow:(long long)arg1;
- (void)setFirstHeaderRow:(long long)arg1;
- (void)setMergeItem:(bool)arg1;
- (void)setMultipleFieldFilters:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setOutline:(bool)arg1;
- (void)setOutlineData:(bool)arg1;
- (void)setPageOverThenDown:(bool)arg1;
- (void)setPageStyleName:(id)arg1;
- (void)setPageWrap:(unsigned long long)arg1;
- (void)setPivotTableRange:(id)arg1;
- (void)setRowGrandTotals:(bool)arg1;
- (void)setRowHeaderCaption:(id)arg1;
- (void)setRowPageCount:(unsigned long long)arg1;
- (void)setShowCalcMbrs:(bool)arg1;
- (void)setShowColumnHeaders:(bool)arg1;
- (void)setShowColumnStripes:(bool)arg1;
- (void)setShowDataDropDown:(bool)arg1;
- (void)setShowDropZones:(bool)arg1;
- (void)setShowEmptyCol:(bool)arg1;
- (void)setShowEmptyRow:(bool)arg1;
- (void)setShowHeaders:(bool)arg1;
- (void)setShowLastColumn:(bool)arg1;
- (void)setShowMemberPropertyTips:(bool)arg1;
- (void)setShowMissing:(bool)arg1;
- (void)setShowMultipleLabel:(bool)arg1;
- (void)setShowRowHeaders:(bool)arg1;
- (void)setShowRowStripes:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setStyleName:(id)arg1;
- (void)setSubtotalHiddenItems:(bool)arg1;
- (void)setUseAutoFormatting:(bool)arg1;
- (bool)showCalcMbrs;
- (bool)showColumnHeaders;
- (bool)showColumnStripes;
- (bool)showDataDropDown;
- (bool)showDropZones;
- (bool)showEmptyCol;
- (bool)showEmptyRow;
- (bool)showHeaders;
- (bool)showLastColumn;
- (bool)showMemberPropertyTips;
- (bool)showMissing;
- (bool)showMultipleLabel;
- (bool)showRowHeaders;
- (bool)showRowStripes;
- (id)style;
- (unsigned long long)styleIndex;
- (id)styleName;
- (bool)subtotalHiddenItems;
- (bool)useAutoFormatting;

@end
