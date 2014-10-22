/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSDictionary, NSHTTPURLResponseInternal;

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal *_httpInternal;
}

@property(copy,readonly) NSDictionary * allHeaderFields;
@property(readonly) long long statusCode;

+ (bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (id)sl_twitterResponseObjectErrorCode:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_clientCertificateChain;
- (id)_clientCertificateState;
- (id)_dateFromExpires;
- (bool)_getCacheControlMaxAge:(double*)arg1;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (double)_maxAge;
- (id)_peerCertificateChain;
- (struct __SecTrust { }*)_peerTrust;
- (void)_setPeerTrust:(struct __SecTrust { }*)arg1;
- (id)allHeaderFields;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (double)expirationInterval;
- (id)getSAPSignature;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (long long)maxExpectedContentLength;
- (void)radio_mescalVerifyData:(id)arg1 withCompletionHandler:(id)arg2;
- (int)sl_twitterResponseType:(id)arg1;
- (long long)statusCode;

@end
