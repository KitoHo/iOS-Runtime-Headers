/* Generated by RuntimeBrowser.
 */

@protocol VKStyleManagerObserver <NSObject>

@required

+ (BOOL)reloadOnStylesheetChange;

- (VKStyleManager *)styleManager;

@optional

- (void)prepareForStylesheetTransitionToMapDisplayStyle:(void *)arg1 withReadinessBlock:(void *)arg2; // needs 2 arg types, found 7: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <VKStyleManagerObserver> *, void*
- (void)stylesheetDidChange;
- (void)stylesheetDidReload;
- (void)stylesheetDoneChanging;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetWillChange;
- (void)stylesheetWillTransition:(unsigned int)arg1;

@end
