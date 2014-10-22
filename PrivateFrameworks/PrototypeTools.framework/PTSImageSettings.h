/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSData, NSString, UIImage;

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver> {
    UIImage *_image;
    long long _imageOrientation;
    double _imageScale;
    NSData *_pngData;
    bool_unarchiving;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) UIImage * image;
@property long long imageOrientation;
@property double imageScale;
@property(retain) NSData * pngData;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateImageData;
- (void)_updateImageProperties;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (void)dealloc;
- (id)image;
- (long long)imageOrientation;
- (double)imageScale;
- (id)init;
- (id)pngData;
- (void)setImage:(id)arg1;
- (void)setImageOrientation:(long long)arg1;
- (void)setImageScale:(double)arg1;
- (void)setPngData:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
