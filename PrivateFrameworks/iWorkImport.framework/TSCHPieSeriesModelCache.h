/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCHChartInfo, TSCHChartModel, TSCHChartSeries, TSDFill, TSDShadow, TSDStroke, TSWPParagraphStyle;

@interface TSCHPieSeriesModelCache : NSObject {
    boolmCurrentSeriesNullData;
    boolmGroupedShadow;
    boolmIsSingleCircleSpecialCase;
    TSCHChartInfo *mChartInfo;
    TSCHChartModel *mChartModel;
    TSCHChartSeries *mCurrentSeries;
    double mCurrentSeriesAngleSweep;
    double mCurrentSeriesAxisValue;
    unsigned long long mCurrentSeriesIndex;
    double mCurrentSeriesPercentage;
    double mCurrentSeriesStartAngle;
    float mEffectiveLabelExplosion;
    float mEffectiveWedgeExplosion;
    double mEndAngle;
    float mLabelExplosion;
    NSString *mLabelString;
    double mMidAngle;
    unsigned long long mNumberOfSeries;
    TSWPParagraphStyle *mParagraphStyle;
    TSDFill *mSeriesFill;
    double mSeriesOpacity;
    TSDShadow *mSeriesShadow;
    TSDStroke *mSeriesStroke;
    TSCHChartSeries *mSingleCircleSeriesElement;
    double mTotalValue;
    float mWedgeExplosion;
}

@property(readonly) float effectiveLabelExplosion;
@property(readonly) float effectiveWedgeExplosion;
@property(readonly) double endAngle;
@property(readonly) bool groupedShadow;
@property(readonly) float labelExplosion;
@property(readonly) NSString * labelString;
@property(readonly) double midAngle;
@property(readonly) bool nullData;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) double percentage;
@property(readonly) TSCHChartSeries * series;
@property(readonly) double seriesAxisValue;
@property(readonly) TSDFill * seriesFill;
@property(readonly) unsigned long long seriesIndex;
@property(readonly) double seriesOpacity;
@property(readonly) TSDShadow * seriesShadow;
@property(readonly) TSDStroke * seriesStroke;
@property(readonly) bool shouldRenderLabel;
@property(readonly) double startAngle;
@property(readonly) double totalValue;
@property(readonly) float wedgeExplosion;

- (void)dealloc;
- (float)effectiveLabelExplosion;
- (float)effectiveWedgeExplosion;
- (double)endAngle;
- (bool)groupedShadow;
- (id)init;
- (id)initWithPrior:(id)arg1 orChartModel:(id)arg2 forSeries:(unsigned long long)arg3;
- (float)labelExplosion;
- (id)labelString;
- (double)midAngle;
- (bool)nullData;
- (id)paragraphStyle;
- (double)percentage;
- (id)series;
- (double)seriesAxisValue;
- (id)seriesFill;
- (unsigned long long)seriesIndex;
- (double)seriesOpacity;
- (id)seriesShadow;
- (id)seriesStroke;
- (bool)shouldRenderLabel;
- (double)startAngle;
- (double)totalValue;
- (float)wedgeExplosion;

@end
