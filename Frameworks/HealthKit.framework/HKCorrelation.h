/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCorrelation : HKSample <HDCoding, NSSecureCoding> {
    NSMutableDictionary *_objects;
}

@property (getter=_UUID, readonly) NSUUID *UUID;
@property (readonly) HKCorrelationType *correlationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly, copy) NSSet *objects;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)_allowEmptyCorrelations;
+ (BOOL)_isConcreteObjectClass;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_UUID;
- (void)_addCorrelatedObject:(id)arg1;
- (void)_addCorrelatedObjects:(id)arg1;
- (id)_allTypes;
- (BOOL)_containsObjects;
- (BOOL)_correlatedObjectsMatchFilterDictionary:(id)arg1;
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1;
- (id)_init;
- (void)_removeAllCorrelatedObjects;
- (id)_validateConfiguration;
- (id)correlationType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objects;
- (id)objectsForType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;
- (void)hd_cleanupBeforeJournalInsertion;
- (BOOL)hd_insertRelatedDataWithHealthDaemon:(id)arg1 database:(id)arg2 entity:(id)arg3 error:(id*)arg4;
- (id)hd_relatedJournalEntries;

@end
