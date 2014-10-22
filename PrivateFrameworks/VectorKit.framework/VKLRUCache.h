/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKLRUCacheDelegate>;

@interface VKLRUCache : NSObject <NSFastEnumeration> {
    unsigned long long _count;
    <VKLRUCacheDelegate> *_delegate;
    id _head;
    unsigned long long _maximumCapacity;
    unsigned long long _reservedCapacity;
    void *_table;
    id _tail;
}

@property(readonly) unsigned long long count;
@property <VKLRUCacheDelegate> * delegate;
@property(readonly) unsigned long long maximumCapacity;
@property(readonly) unsigned long long reservedCapacity;

- (void)consistencyCheck;
- (id)contentsDescription;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)dropTail;
- (void)evictIfNecessary;
- (id)init;
- (id)initWithReservedCapacity:(unsigned long long)arg1 maximumCapacity:(unsigned long long)arg2;
- (void)insertNodeAtHead:(id)arg1;
- (unsigned long long)maximumCapacity;
- (id)objectForKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)objectWithoutPromotingForKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)purge;
- (void)removeAllObjects;
- (void)removeNode:(id)arg1;
- (void)removeObjectsMatchingPredicate:(id)arg1;
- (unsigned long long)reservedCapacity;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(const struct VKCacheKey { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg2;
- (void)setReservedCapacity:(unsigned long long)arg1 maximumCapacity:(unsigned long long)arg2;

@end
