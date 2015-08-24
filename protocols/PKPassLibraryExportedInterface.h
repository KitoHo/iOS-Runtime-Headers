/* Generated by RuntimeBrowser.
 */

@protocol PKPassLibraryExportedInterface

@required

- (void)catalogChanged:(PKCatalog *)arg1 withNewPasses:(NSSet *)arg2;
- (void)passAdded:(PKPass *)arg1;
- (void)passRemoved:(PKPass *)arg1;
- (void)passUpdated:(PKPass *)arg1;
- (void)removingPassesOfType:(unsigned int)arg1 didFinishWithSuccess:(BOOL)arg2;
- (void)removingPassesOfType:(unsigned int)arg1 didUpdateWithProgress:(double)arg2;

@end
