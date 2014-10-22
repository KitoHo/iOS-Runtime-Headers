/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString;

@interface _PUSliderPlayheadBaseView : UIView <PUPhotoEditLayoutStaticAdaptable> {
    long long _layoutOrientation;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) long long layoutOrientation;
@property(readonly) Class superclass;

+ (Class)layerClass;

- (void)_updateBaseShape;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutOrientation;
- (void)setupWithLayoutOrientation:(long long)arg1;

@end
