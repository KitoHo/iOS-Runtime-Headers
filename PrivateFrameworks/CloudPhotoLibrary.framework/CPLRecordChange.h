/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSData, NSDate, NSString;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _changeType;
    NSDate *_dateDeleted;
    NSString *_identifier;
    NSString *_realIdentifier;
    NSData *_recordChangeData;
    NSDate *_recordModificationDate;
    bool_inExpunged;
    bool_inTrash;
    bool_isSparseFullChange;
    bool_shouldFilterDefaultValuesForNewProperties;
}

@property unsigned long long changeType;
@property(copy) NSDate * dateDeleted;
@property(copy) NSString * identifier;
@property bool inExpunged;
@property bool inTrash;
@property(copy) NSString * realIdentifier;
@property(copy) NSData * recordChangeData;
@property(copy) NSDate * recordModificationDate;

+ (id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(bool)arg2;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (id)deleteChangeWithIdentifier:(id)arg1;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newChangeWithType:(unsigned long long)arg1;
+ (id)newRecord;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_addRealChangeToChangeBatch:(id)arg1 withStoredRecord:(id)arg2 andApplyToClientCache:(id)arg3 error:(id*)arg4;
- (bool)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id*)arg3;
- (bool)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 updatedProperty:(id*)arg4;
- (void)awakeFromStorage;
- (unsigned long long)changeType;
- (id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(bool)arg2 usingClientCache:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cplFullDescription;
- (id)dateDeleted;
- (bool)decodePropertiesFromObject:(id)arg1;
- (long long)dequeueOrder;
- (id)description;
- (bool)encodePropertiesInObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChangeType:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identifiersForMapping;
- (bool)inExpunged;
- (bool)inTrash;
- (id)initWithCoder:(id)arg1;
- (bool)isDelete;
- (bool)isEqual:(id)arg1;
- (bool)isFullRecord;
- (bool)isSparseFullChange;
- (void)markAsSparseFullChange;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)proposedCloudIdentifierWithError:(id*)arg1;
- (id)proposedLocalIdentifier;
- (id)realIdentifier;
- (id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id*)arg2 updatedProperties:(id*)arg3;
- (id)realRecordChangeFromRecordChange:(id)arg1 newRecord:(id*)arg2;
- (unsigned long long)realResourceSize;
- (id)recordChangeData;
- (id)recordModificationDate;
- (id)relatedIdentifier;
- (id)resourceForType:(unsigned long long)arg1;
- (id)resources;
- (id)resourcesDescription;
- (id)secondaryIdentifier;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setDateDeleted:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInExpunged:(bool)arg1;
- (void)setInTrash:(bool)arg1;
- (void)setRealIdentifier:(id)arg1;
- (void)setRecordChangeData:(id)arg1;
- (void)setRecordModificationDate:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setSecondaryIdentifier:(id)arg1;
- (void)setShouldFilterDefaultValuesForNewProperties:(bool)arg1;
- (bool)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (bool)shouldFilterDefaultValuesForNewProperties;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (bool)supportsResources;
- (unsigned long long)totalResourceSize;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;

@end
