/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKRecordID, NSDictionary;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {
    long long _queryNotificationReason;
    NSDictionary *_recordFields;
    CKRecordID *_recordID;
    bool_isPublicDatabase;
}

@property bool isPublicDatabase;
@property long long queryNotificationReason;
@property(copy) NSDictionary * recordFields;
@property(copy) CKRecordID * recordID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (bool)isPublicDatabase;
- (long long)queryNotificationReason;
- (id)recordFields;
- (id)recordID;
- (void)setIsPublicDatabase:(bool)arg1;
- (void)setQueryNotificationReason:(long long)arg1;
- (void)setRecordFields:(id)arg1;
- (void)setRecordID:(id)arg1;

@end
