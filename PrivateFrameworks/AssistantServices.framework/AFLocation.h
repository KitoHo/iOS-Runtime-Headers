/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSData, NSString, NSURL;

@interface AFLocation : NSObject <AFTranscriptionType> {
    NSURL *_addressBookID;
    NSString *_addressLabel;
    NSString *_contactName;
    NSData *_geoResult;
    long long _resultType;
}

@property(copy) NSURL * addressBookID;
@property(copy) NSString * addressLabel;
@property(copy) NSString * contactName;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSData * geoResult;
@property(readonly) unsigned long long hash;
@property long long resultType;
@property(readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addressBookID;
- (id)addressLabel;
- (id)contactName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoResult;
- (id)initWithCoder:(id)arg1;
- (long long)resultType;
- (void)setAddressBookID:(id)arg1;
- (void)setAddressLabel:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setGeoResult:(id)arg1;
- (void)setResultType:(long long)arg1;

@end
