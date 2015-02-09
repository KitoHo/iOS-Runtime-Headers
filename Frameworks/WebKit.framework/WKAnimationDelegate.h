/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WKAnimationDelegate : NSObject {
    unsigned long long _layerID;
    struct RemoteLayerTreeHost { int (**x1)(); struct RemoteLayerTreeDrawingAreaProxy {} *x2; struct UIView { } *x3; struct HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; boolx6; } *_layerTreeHost;
}

- (void)animationDidStart:(id)arg1;
- (id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(struct RemoteLayerTreeHost { int (**x1)(); struct RemoteLayerTreeDrawingAreaProxy {} *x2; struct UIView { } *x3; struct HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<UIView>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<UIView> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<UIView> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_4_1_1; } x4; struct HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKAnimationDelegate>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKAnimationDelegate> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKAnimationDelegate> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_5_1_1; } x5; boolx6; }*)arg2;
- (void)invalidate;

@end
