/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetResourceLoadingContentInformationRequestInternal, NSDate, NSString;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {
    AVAssetResourceLoadingContentInformationRequestInternal *_contentInformationRequest;
}

@property(getter=isByteRangeAccessSupported) bool byteRangeAccessSupported;
@property long long contentLength;
@property(copy) NSString * contentType;
@property(copy) NSDate * renewalDate;

- (long long)contentLength;
- (id)contentType;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithLoadingRequest:(id)arg1;
- (bool)isByteRangeAccessSupported;
- (bool)isDiskCachingPermitted;
- (id)propertyList;
- (id)renewalDate;
- (void)setByteRangeAccessSupported:(bool)arg1;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setDiskCachingPermitted:(bool)arg1;
- (void)setRenewalDate:(id)arg1;

@end
