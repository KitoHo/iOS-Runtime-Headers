/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMChartMapper : CMMapper {
    CHDAxis *mBaseAxis;
    CHDChart *mChart;
    BOOL mHasDateCategory;
    BOOL mHasPrimaryDateAxis;
    BOOL mHasSecondaryDateAxis;
    BOOL mIsHorizontal;
    BOOL mIsPercentStacked;
    BOOL mIsStacked;
    CHDSeries *mMainSeries;
    CHDChartType *mMainType;
    unsigned int mPieIndex;
    struct { 
        BOOL primaryCategoryHasDates; 
        BOOL secondaryCategoryHasDates; 
        BOOL primaryAxisHasDates; 
        BOOL secondaryAxisHasDates; 
    } mPlotInfos;
    CHDAxis *mPrimaryAxis;
    EDResources *mResources;
    CHDAxis *mSecondaryAxis;
    CMState *mState;
}

+ (struct CGColor { }*)newColorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (id).cxx_construct;
- (void)_addCategoryAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)_addGraphicProperties:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addStandardSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)_addUnitAxis:(id)arg1 series:(id)arg2 state:(id)arg3 toDescription:(id)arg4;
- (void)addBackgroundToDescription:(id)arg1 withState:(id)arg2;
- (void)addLegendToDescription:(id)arg1 chartSize:(struct CGSize { float x1; float x2; })arg2 withState:(id)arg3;
- (void)addSeries:(id)arg1 toDescription:(id)arg2 withState:(id)arg3;
- (void)addTitleToDescription:(id)arg1 withState:(id)arg2;
- (id)copyPdfWithState:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (id)dateFromXlDateTimeNumber:(double)arg1;
- (id)initWithChart:(id)arg1 parent:(id)arg2;

@end
