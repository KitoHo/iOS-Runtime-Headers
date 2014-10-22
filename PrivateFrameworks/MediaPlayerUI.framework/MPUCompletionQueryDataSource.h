/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUCompletionQueryDataSourceDelegate>, NSMutableDictionary, NSMutableSet;

@interface MPUCompletionQueryDataSource : MPUQueryDataSource {
    <MPUCompletionQueryDataSourceDelegate> *_completionDelegate;
    NSMutableDictionary *_completions;
    NSMutableSet *_overlayedSectionEntityPIDs;
    NSMutableDictionary *_statuses;
    NSMutableDictionary *_tokens;
    NSMutableDictionary *_variants;
    bool_shouldAutomaticallyLoadCompletions;
    bool_shouldShowCompletions;
}

@property <MPUCompletionQueryDataSourceDelegate> * completionDelegate;
@property bool shouldAutomaticallyLoadCompletions;
@property(readonly) bool shouldLoadCompletionArtwork;
@property bool shouldShowCompletions;

- (void).cxx_destruct;
- (long long)_pidForSectionAtIndex:(long long)arg1;
- (void)_setCompletion:(id)arg1 forSectionAtIndex:(long long)arg2;
- (void)_setToken:(unsigned long long)arg1 forSectionAtIndex:(long long)arg2;
- (long long)_tokenForSectionAtIndex:(long long)arg1;
- (void)cancelCompletionOfferingWithToken:(unsigned long long)arg1;
- (id)completionDelegate;
- (long long)completionOfferStatusForSectionAtIndex:(long long)arg1;
- (id)completionOfferingForSectionAtIndex:(unsigned long long)arg1;
- (bool)hasCompletionOfferForSectionAtIndex:(unsigned long long)arg1;
- (bool)hasVariantsForSectionAtIndex:(long long)arg1;
- (unsigned long long)indexOfSectionForCompletionOffering:(id)arg1;
- (void)invalidate;
- (bool)isShowingCompletionOverlayForSectionAtIndex:(unsigned long long)arg1;
- (void)loadCompletionOfferingForSectionAtIndex:(unsigned long long)arg1;
- (void)loadCompletionOfferings;
- (void)overlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (void)removeAllCompletionOverlays;
- (void)removeOverlayCompletionForSectionAtIndex:(unsigned long long)arg1;
- (id)sectionEntityAtIndex:(unsigned long long)arg1;
- (id)sectionEntityWithoutOverlayAtIndex:(unsigned long long)arg1;
- (void)setCompletionDelegate:(id)arg1;
- (void)setCompletionOfferStatus:(long long)arg1 forSectionAtIndex:(long long)arg2;
- (void)setShouldAutomaticallyLoadCompletions:(bool)arg1;
- (void)setShouldShowCompletions:(bool)arg1;
- (void)setVariant:(long long)arg1 forSectionAtIndex:(long long)arg2;
- (bool)shouldAutomaticallyLoadCompletions;
- (bool)shouldLoadCompletionArtwork;
- (bool)shouldShowCompletions;
- (long long)variantForSectionAtIndex:(long long)arg1;

@end
