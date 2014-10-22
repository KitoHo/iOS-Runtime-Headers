/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSWeakCallback;

@interface NSConcreteHashTable : NSHashTable {
    struct NSSlice { 
        void **items; 
        boolwantsStrong; 
        boolwantsWeak; 
        boolwantsARC; 
        boolshouldCopyIn; 
        boolusesStrong; 
        boolusesWeak; 
        boolusesARC; 
        boolusesSentinel; 
        boolpointerPersonality; 
        boolintegerPersonality; 
        boolsimpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    unsigned long long capacity;
    unsigned long long count;
    unsigned long long mutations;
    unsigned long long options;
    } slice;
}

- (void)_initBlock;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (void)assign:(unsigned long long)arg1 key:(const void*)arg2;
- (Class)classForCoder;
- (id)copy;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void*)getItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned long long*)arg2;
- (unsigned long long)hash;
- (void)hashGrow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectEnumerator;
- (id)pointerFunctions;
- (void)raiseCountUnderflowException;
- (void)rehash;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;

@end
