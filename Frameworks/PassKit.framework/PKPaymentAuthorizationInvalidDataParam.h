/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSError;

@interface PKPaymentAuthorizationInvalidDataParam : NSObject {
    long long _dataType;
    NSError *_error;
    bool_animated;
}

@property bool animated;
@property long long dataType;
@property(retain) NSError * error;

+ (id)param;

- (bool)animated;
- (long long)dataType;
- (id)error;
- (void)setAnimated:(bool)arg1;
- (void)setDataType:(long long)arg1;
- (void)setError:(id)arg1;

@end
