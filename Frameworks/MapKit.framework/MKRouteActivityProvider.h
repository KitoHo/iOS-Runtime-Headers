/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider {
    MKMapItem *_sourceMapItem;
}

@property(retain) MKMapItem * destinationMapItem;
@property(retain) MKMapItem * sourceMapItem;

- (void).cxx_destruct;
- (id)activitySourceTitle;
- (id)activityURL;
- (id)destinationMapItem;
- (id)initWithSource:(id)arg1 destination:(id)arg2;
- (void)setDestinationMapItem:(id)arg1;
- (void)setSourceMapItem:(id)arg1;
- (id)sourceMapItem;

@end
