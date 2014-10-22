/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergePolicy : NSObject {
    void *_reserved2;
    void *_reserved3;
    unsigned long long _type;
}

@property(readonly) unsigned long long mergeType;

+ (bool)accessInstanceVariablesDirectly;
+ (void)load;

- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)arg1 withRecord:(id)arg2;
- (void)_mergeDeletionWithStoreChangesForObject:(id)arg1 withRecord:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMergeType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (void)mergeToManyRelationshipForSourceObject:(id)arg1 withOldSnapshot:(id)arg2 newSnapshot:(id)arg3 andAncestor:(id)arg4 andLegacyPath:(bool)arg5;
- (unsigned long long)mergeType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)resolveConflict:(id)arg1;
- (bool)resolveConflicts:(id)arg1 error:(id*)arg2;
- (unsigned long long)type;

@end
