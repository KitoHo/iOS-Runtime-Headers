/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DChartSceneAreaLayoutItem, TSCH3DScene;

@interface TSCH3DChartLayout : TSCH2DChartLayout {
}

@property(readonly) TSCH3DChartSceneAreaLayoutItem * areaItem;
@property(readonly) bool hasProjectedBounds;
@property(readonly) const struct ChartProjectedBoundsSpaces { struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_1_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_2_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_2_1_2; } x2; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_3_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_3_1_2; } x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_4_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_4_1_2; } x4; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_5_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_5_1_2; } x5; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_6_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_6_1_2; } x6; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_7_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_7_1_2; } x7; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_8_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_8_1_2; } x8; }* projectedBounds;
@property(readonly) TSCH3DScene * scene;

+ (id)p_allScaleProperties;
+ (id)p_propertiesThatInvalidateShadows;
+ (id)p_propertiesThatResetSceneProperties;
+ (id)p_propertiesThatResetSeriesStorage;
+ (id)propertiesThatInvalidateLayout;
+ (void)upgradeSceneDepthSettingsForChartInfo:(id)arg1 hasConstantDepth:(bool)arg2 willModifyBlock:(id)arg3;

- (id)areaItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForResize;
- (id)containingViewportVector;
- (void)dealloc;
- (bool)hasProjectedBounds;
- (id)infoChartScale;
- (id)initWithChartInfo:(id)arg1;
- (void)layoutForResizingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)modelInvalidated:(id)arg1;
- (void)p_ensureValidForInwardLayout;
- (void)p_resetSceneProperties;
- (void)p_resetSeriesStorage;
- (bool)p_shouldClearSceneForLayoutSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })arg1;
- (void)processChanges:(id)arg1;
- (const struct ChartProjectedBoundsSpaces { struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_1_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_2_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_2_1_2; } x2; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_3_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_3_1_2; } x3; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_4_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_4_1_2; } x4; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_5_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_5_1_2; } x5; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_6_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_6_1_2; } x6; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_7_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_7_1_2; } x7; struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; } x_8_1_1; struct tvec2<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; } x_8_1_2; } x8; }*)projectedBounds;
- (id)scene;
- (void)setLayoutSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;

@end
