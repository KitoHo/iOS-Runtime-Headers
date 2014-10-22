/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSDictionary, NSMutableArray, NSString, NSURLRequest, SKUIIPadSearchViewController, SKUIIPhoneSearchViewController, SKUIMetricsController, SKUIProductPageOverlayController, SKUISearchFieldController, SKUISearchPage, SSMetricsPageEvent, SSMetricsSearchEvent, SSVLoadURLOperation;

@interface SKUISearchViewController : SKUIViewController <SKUISearchChildViewControllerDelegate, SKUIProductPageOverlayDelegate, SKUIMetricsViewController, SKUIViewControllerTesting> {
    NSDictionary *_facetSelections;
    SKUIIPadSearchViewController *_iPadViewController;
    SKUIIPhoneSearchViewController *_iPhoneViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SSVLoadURLOperation *_loadOperation;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    SKUISearchPage *_page;
    NSString *_performanceTestName;
    NSMutableArray *_previousRelatedQueries;
    SSMetricsSearchEvent *_searchEvent;
    NSArray *_searchFacets;
    SKUISearchFieldController *_searchFieldController;
    NSString *_searchTerm;
    NSURLRequest *_urlRequest;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) SKUISearchFieldController * searchFieldController;
@property(readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_reloadChildViewController;
- (void)_reloadOrientation:(long long)arg1;
- (void)_reloadView;
- (void)_searchWithSearchTerm:(id)arg1 persistRelated:(bool)arg2 metricsEvent:(id)arg3 baseRequest:(id)arg4;
- (void)_searchWithURLRequest:(id)arg1 persistRelated:(bool)arg2 metricsEvent:(id)arg3;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (id)activeMetricsController;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)reloadData;
- (void)scrollToTop;
- (void)searchChildViewController:(id)arg1 didSelectEditorial:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectRelatedQuery:(id)arg2 withMetricsEvent:(id)arg3;
- (void)searchChildViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (void)searchChildViewControllerDidChangeFacetSelections:(id)arg1 withMetricsEvent:(id)arg2;
- (void)searchChildViewControllerDidSelectRelatedBackButton:(id)arg1 withMetricsEvent:(id)arg2;
- (id)searchFieldController;
- (void)searchWithExternalURL:(id)arg1;
- (void)searchWithSearchTerm:(id)arg1 metricsEvent:(id)arg2;
- (void)searchWithSearchTerm:(id)arg1;
- (void)searchWithURL:(id)arg1 metricsEvent:(id)arg2;
- (void)searchWithURL:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setSearchFieldController:(id)arg1;
- (void)showError:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
