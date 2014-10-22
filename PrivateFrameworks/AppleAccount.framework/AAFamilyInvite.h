/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSNumber, NSString;

@interface AAFamilyInvite : NSObject {
    NSString *_childFirstName;
    NSString *_childLastName;
    NSString *_code;
    NSNumber *_organizerDSID;
    NSString *_organizerEmail;
    NSString *_organizerFirstName;
    NSString *_organizerLastName;
    NSNumber *_recepientDSID;
    bool_isChildTransferInvite;
}

@property(copy) NSString * childFirstName;
@property(copy) NSString * childLastName;
@property(copy) NSString * code;
@property bool isChildTransferInvite;
@property(copy) NSNumber * organizerDSID;
@property(copy) NSString * organizerEmail;
@property(copy) NSString * organizerFirstName;
@property(copy) NSString * organizerLastName;
@property(copy) NSNumber * recepientDSID;

- (void).cxx_destruct;
- (id)childFirstName;
- (id)childLastName;
- (id)code;
- (unsigned long long)hash;
- (bool)isChildTransferInvite;
- (bool)isEqual:(id)arg1;
- (id)organizerDSID;
- (id)organizerEmail;
- (id)organizerFirstName;
- (id)organizerLastName;
- (id)recepientDSID;
- (void)setChildFirstName:(id)arg1;
- (void)setChildLastName:(id)arg1;
- (void)setCode:(id)arg1;
- (void)setIsChildTransferInvite:(bool)arg1;
- (void)setOrganizerDSID:(id)arg1;
- (void)setOrganizerEmail:(id)arg1;
- (void)setOrganizerFirstName:(id)arg1;
- (void)setOrganizerLastName:(id)arg1;
- (void)setRecepientDSID:(id)arg1;

@end
