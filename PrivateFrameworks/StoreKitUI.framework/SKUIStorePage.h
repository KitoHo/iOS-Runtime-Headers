/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSData, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL, SKUIArtwork, SKUIProductPage, SKUIUber, SSMetricsConfiguration;

@interface SKUIStorePage : NSObject <NSCopying> {
    SKUIArtwork *_backgroundArtwork;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSArray *_pageComponents;
    NSString *_pageType;
    NSURL *_pageURL;
    SKUIProductPage *_productPage;
    NSString *_title;
    SKUIUber *_uber;
    NSMutableDictionary *_values;
}

@property(retain) NSData * ITMLData;
@property(retain) NSHTTPURLResponse * ITMLResponse;
@property(retain) SKUIArtwork * backgroundArtwork;
@property(retain) SSMetricsConfiguration * metricsConfiguration;
@property(copy) NSString * metricsPageDescription;
@property(copy) NSArray * pageComponents;
@property(copy) NSString * pageType;
@property(copy) NSURL * pageURL;
@property(copy) SKUIProductPage * productPage;
@property(copy) NSString * title;
@property(retain) SKUIUber * uber;

- (void).cxx_destruct;
- (id)ITMLData;
- (id)ITMLResponse;
- (id)backgroundArtwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)metricsConfiguration;
- (id)metricsPageDescription;
- (id)pageComponents;
- (id)pageType;
- (id)pageURL;
- (id)productPage;
- (void)setBackgroundArtwork:(id)arg1;
- (void)setITMLData:(id)arg1;
- (void)setITMLResponse:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setPageComponents:(id)arg1;
- (void)setPageType:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setProductPage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUber:(id)arg1;
- (void)setValue:(id)arg1 forPageKey:(id)arg2;
- (id)title;
- (id)uber;
- (id)valueForPageKey:(id)arg1;

@end
