/* Generated by RuntimeBrowser.
 */

@protocol PUSearchViewControllerDelegate <NSObject>

@required

- (void)searchViewController:(PUSearchViewController *)arg1 adaptToTraitCollection:(UITraitCollection *)arg2;
- (void)searchViewController:(void *)arg1 displaySearchResults:(void *)arg2 orAlbum:(void *)arg3 withTitle:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: PUSearchViewController *, PUSearchResultDataSource *, struct NSObject { Class x1; }*, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)searchViewController:(PUSearchViewController *)arg1 presentFromResultsViewController:(PUPhotosGridViewController *)arg2 animated:(BOOL)arg3;
- (void)searchViewControllerDidCancel:(PUSearchViewController *)arg1;

@end
