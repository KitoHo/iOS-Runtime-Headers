/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSDictionary, NSMutableDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_imagesForContentSize;
}

@property(copy) NSDictionary * imagesForContentSize;

+ (bool)supportsSecureCoding;

- (void)addImage:(id)arg1 forContentSizeCategory:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)imageForContentSizeCategory:(id)arg1;
- (id)imagesForContentSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setImagesForContentSize:(id)arg1;

@end
