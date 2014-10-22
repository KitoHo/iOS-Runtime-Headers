/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString;

@interface PUCropAspect : NSObject {
    unsigned long long _height;
    NSString *_localizedName;
    unsigned long long _width;
}

@property(readonly) unsigned long long height;
@property(readonly) NSString * localizedName;
@property(readonly) double ratio;
@property(readonly) unsigned long long width;

+ (id)allAspectsWithOriginalSize:(struct CGSize { double x1; double x2; })arg1 currentSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 localizedName:(id)arg3;
- (unsigned long long)height;
- (double)heightForWidth:(double)arg1;
- (id)init;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCropAspect:(id)arg1;
- (id)localizedName;
- (double)ratio;
- (unsigned long long)width;
- (double)widthForHeight:(double)arg1;

@end
