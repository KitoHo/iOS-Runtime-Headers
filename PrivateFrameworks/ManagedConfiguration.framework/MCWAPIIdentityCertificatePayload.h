/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {
    NSData *_pemData;
}

@property(retain,readonly) NSData * pemData;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isIdentity;
- (id)pemData;

@end
