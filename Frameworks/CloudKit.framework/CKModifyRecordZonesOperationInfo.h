/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray *_recordZoneIDsToDelete;
    NSArray *_recordZonesToSave;
    bool_allowDefaultZoneSave;
}

@property bool allowDefaultZoneSave;
@property(retain) NSArray * recordZoneIDsToDelete;
@property(retain) NSArray * recordZonesToSave;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowDefaultZoneSave;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordZoneIDsToDelete;
- (id)recordZonesToSave;
- (void)setAllowDefaultZoneSave:(bool)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;

@end
