/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSArray, NSString;

@interface MBBackup : NSObject <NSCopying, NSCoding> {
    NSString *_backupUDID;
    NSString *_deviceClass;
    NSString *_hardwareModel;
    NSString *_marketingName;
    NSString *_productType;
    NSArray *_snapshots;
    bool_restoreSystemFiles;
}

@property(readonly) NSString * backupUDID;
@property(readonly) NSString * deviceClass;
@property(readonly) NSString * hardwareModel;
@property(readonly) NSString * marketingName;
@property(readonly) NSString * productType;
@property(getter=canRestoreSystemFiles,readonly) bool restoreSystemFiles;
@property(readonly) NSArray * snapshots;

- (id)backupUDID;
- (bool)canRestoreSystemFiles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareModel;
- (id)initWithBackupUDID:(id)arg1 deviceClass:(id)arg2 productType:(id)arg3 hardwareModel:(id)arg4 marketingName:(id)arg5 snapshots:(id)arg6 restoreSystemFiles:(bool)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)marketingName;
- (id)productType;
- (id)snapshots;

@end
