/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject {
    NSMutableDictionary *_internalCache;
    void *_layoutsLibraryHandle;
}

@property(retain) NSMutableDictionary * internalCache;
@property(readonly) void* layoutsLibraryHandle;

+ (id)layoutsFileName;
+ (id)sharedKeyboardFactory;

- (void)dealloc;
- (id)init;
- (id)internalCache;
- (id)keyboardPrefixForWidth:(double)arg1;
- (id)keyboardWithName:(id)arg1 inCache:(id)arg2;
- (void*)layoutsLibraryHandle;
- (void)setInternalCache:(id)arg1;

@end
