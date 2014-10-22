/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUISoftwareLibraryInterface : NSObject <SKUILibraryInterface> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(id)arg2;
- (id)exposedPlatformItemKinds;
- (bool)performActionForLibraryItem:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;

@end
