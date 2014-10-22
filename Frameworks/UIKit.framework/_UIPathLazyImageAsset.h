/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {
    NSArray *_imagePaths;
    bool_haveCGCacheImages;
    bool_imagesHaveBeenLoaded;
}

@property bool haveCGCacheImages;
@property(copy) NSArray * imagePaths;

- (void)_clearResolvedImageResources;
- (void)dealloc;
- (bool)haveCGCacheImages;
- (id)imagePaths;
- (id)imageWithTraitCollection:(id)arg1;
- (void)setHaveCGCacheImages:(bool)arg1;
- (void)setImagePaths:(id)arg1;

@end
