/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSDictionary, NSURL, UIColor;

@interface IKImageElement : IKViewElement {
    NSURL *_defaultURL;
    unsigned long long _imageType;
    double _srcHeight;
    double _srcWidth;
    NSDictionary *_srcset;
}

@property(readonly) UIColor * borderColor;
@property(retain) NSURL * defaultURL;
@property(readonly) long long fill;
@property(readonly) double height;
@property(readonly) unsigned long long imageType;
@property(retain,readonly) NSURL * placeholderURL;
@property(readonly) unsigned long long position;
@property(readonly) long long reflect;
@property(retain,readonly) NSDictionary * srcset;
@property(readonly) NSURL * url;
@property(readonly) double width;

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (unsigned long long)_imageTypeForTagName:(id)arg1;
- (long long)accessoryType;
- (id)artworkCatalog;
- (id)bestURL;
- (id)borderColor;
- (id)cachePath;
- (id)defaultURL;
- (long long)fill;
- (double)height;
- (unsigned long long)imageType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)placeholderURL;
- (unsigned long long)position;
- (long long)reflect;
- (id)resourceImage;
- (void)setDefaultURL:(id)arg1;
- (id)srcset;
- (id)url;
- (double)width;

@end
