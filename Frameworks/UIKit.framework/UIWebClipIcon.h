/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL;

@interface UIWebClipIcon : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    } _bestSize;
    NSURL *_url;
    bool_precomposed;
    bool_siteWide;
}

@property struct CGSize { double x1; double x2; } bestSize;
@property(getter=isPrecomposed) bool precomposed;
@property(getter=isSiteWide) bool siteWide;
@property(retain) NSURL * url;

- (struct CGSize { double x1; double x2; })bestSize;
- (long long)compare:(id)arg1 preferringDeviceIconSizes:(bool)arg2;
- (void)dealloc;
- (bool)isPrecomposed;
- (bool)isSiteWide;
- (void)setBestSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrecomposed:(bool)arg1;
- (void)setSiteWide:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
