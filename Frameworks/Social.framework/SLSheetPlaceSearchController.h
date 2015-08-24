/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetPlaceSearchController : NSObject <SLPlaceDataSourceDelegate, UITableViewDataSource> {
    NSTimer *_delayTimer;
    BOOL _isSearching;
    NSObject<SLPlaceDataSource> *_placeDataSource;
    int _retryCount;
    NSLock *_retryLock;
    UISearchDisplayController *_searchDisplayController;
    NSArray *_searchResults;
    NSString *_searchString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NSObject<SLPlaceDataSource> *placeDataSource;
@property (retain) UISearchDisplayController *searchDisplayController;
@property (retain) NSArray *searchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelSearch;
- (id)initWithPlaceDataSource:(id)arg1 searchDisplayController:(id)arg2;
- (void)performDelayedFetch:(id)arg1;
- (id)placeDataSource;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (id)searchDisplayController;
- (id)searchResults;
- (void)searchWithSearchString:(id)arg1;
- (void)setPlaceDataSource:(id)arg1;
- (void)setSearchDisplayController:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
