/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <WebDocumentRepresentation>, NSArray, NSData, NSMutableURLRequest, NSString, NSURL, NSURLRequest, NSURLResponse, WebArchive, WebFrame, WebResource;

@interface WebDataSource : NSObject {
    void *_private;
}

@property(copy,readonly) NSData * data;
@property(readonly) NSURLRequest * initialRequest;
@property(getter=isLoading,readonly) bool loading;
@property(readonly) WebResource * mainResource;
@property(copy,readonly) NSString * pageTitle;
@property(readonly) <WebDocumentRepresentation> * representation;
@property(readonly) NSMutableURLRequest * request;
@property(readonly) NSURLResponse * response;
@property(copy,readonly) NSArray * subresources;
@property(copy,readonly) NSString * textEncodingName;
@property(readonly) NSURL * unreachableURL;
@property(readonly) WebArchive * webArchive;
@property(readonly) WebFrame * webFrame;

+ (id)_repTypesAllowImageTypeOmission:(bool)arg1;
+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(bool)arg2;
+ (void)initialize;

- (struct DocumentLoader { int (**x1)(); unsigned int x2; boolx3; struct Frame {} *x4; struct Ref<WebCore::CachedResourceLoader> { struct CachedResourceLoader {} *x_5_1_1; } x5; struct CachedResourceHandle<WebCore::CachedRawResource> { struct CachedResource {} *x_6_1_1; } x6; struct HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { struct KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_7_1_1; } x7; struct HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { struct KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader>, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { struct KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_9_1_1; } x9; struct DocumentWriter { struct Frame {} *x_10_1_1; boolx_10_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_10_1_3; boolx_10_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_10_1_5; struct RefPtr<WebCore::TextResourceDecoder> { struct TextResourceDecoder {} *x_6_2_1; } x_10_1_6; struct RefPtr<WebCore::DocumentParser> { struct DocumentParser {} *x_7_2_1; } x_10_1_7; int x_10_1_8; } x10; struct ResourceRequest { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_11_1_1; double x_11_1_2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; unsigned int x_3_2_2 : 1; unsigned int x_3_2_3 : 1; int x_3_2_4; int x_3_2_5; int x_3_2_6; int x_3_2_7; int x_3_2_8; int x_3_2_9; int x_3_2_10; int x_3_2_11; int x_3_2_12; int x_3_2_13; } x_11_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_11_1_4; struct HTTPHeaderMap { struct HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; int x_1_4_2; int x_1_4_3; int x_1_4_4; int x_1_4_5; } x_1_3_1; } x_5_2_1; } x_11_1_5; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_11_1_6; struct RefPtr<WebCore::FormData> { struct FormData {} *x_7_2_1; } x_11_1_7; unsigned int x_11_1_8 : 3; unsigned int x_11_1_9 : 1; unsigned int x_11_1_10 : 1; unsigned int x_11_1_11 : 1; unsigned int x_11_1_12 : 1; unsigned int x_11_1_13 : 1; unsigned int x_11_1_14 : 1; unsigned int x_11_1_15 : 1; unsigned int x_11_1_16 : 1; unsigned int x_11_1_17 : 1; unsigned int x_11_1_18 : 4; boolx_11_1_19; struct RetainPtr<const _CFURLRequest *> { void *x_20_2_1; } x_11_1_20; struct RetainPtr<NSURLRequest> { void *x_21_2_1; } x_11_1_21; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_22_2_1; } x_11_1_22; } x11; struct SubstituteData { struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_1_2_1; } x_12_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_12_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_12_1_3; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_12_1_4; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_5_2_1; unsigned int x_5_2_2 : 1; unsigned int x_5_2_3 : 1; int x_5_2_4; int x_5_2_5; int x_5_2_6; int x_5_2_7; int x_5_2_8; int x_5_2_9; int x_5_2_10; int x_5_2_11; int x_5_2_12; int x_5_2_13; } x_12_1_5; boolx_12_1_6; } x12; struct ResourceRequest { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_13_1_1; double x_13_1_2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; unsigned int x_3_2_2 : 1; unsigned int x_3_2_3 : 1; int x_3_2_4; int x_3_2_5; int x_3_2_6; int x_3_2_7; int x_3_2_8; int x_3_2_9; int x_3_2_10; int x_3_2_11; int x_3_2_12; int x_3_2_13; } x_13_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_13_1_4; struct HTTPHeaderMap { struct HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; int x_1_4_2; int x_1_4_3; int x_1_4_4; int x_1_4_5; } x_1_3_1; } x_5_2_1; } x_13_1_5; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_13_1_6; struct RefPtr<WebCore::FormData> { struct FormData {} *x_7_2_1; } x_13_1_7; unsigned int x_13_1_8 : 3; unsigned int x_13_1_9 : 1; unsigned int x_13_1_10 : 1; unsigned int x_13_1_11 : 1; unsigned int x_13_1_12 : 1; unsigned int x_13_1_13 : 1; unsigned int x_13_1_14 : 1; unsigned int x_13_1_15 : 1; unsigned int x_13_1_16 : 1; unsigned int x_13_1_17 : 1; unsigned int x_13_1_18 : 4; boolx_13_1_19; struct RetainPtr<const _CFURLRequest *> { void *x_20_2_1; } x_13_1_20; struct RetainPtr<NSURLRequest> { void *x_21_2_1; } x_13_1_21; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_22_2_1; } x_13_1_22; } x13; struct ResourceRequest { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_14_1_1; double x_14_1_2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; unsigned int x_3_2_2 : 1; unsigned int x_3_2_3 : 1; int x_3_2_4; int x_3_2_5; int x_3_2_6; int x_3_2_7; int x_3_2_8; int x_3_2_9; int x_3_2_10; int x_3_2_11; int x_3_2_12; int x_3_2_13; } x_14_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_14_1_4; struct HTTPHeaderMap { struct HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; int x_1_4_2; int x_1_4_3; int x_1_4_4; int x_1_4_5; } x_1_3_1; } x_5_2_1; } x_14_1_5; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_14_1_6; struct RefPtr<WebCore::FormData> { struct FormData {} *x_7_2_1; } x_14_1_7; unsigned int x_14_1_8 : 3; unsigned int x_14_1_9 : 1; unsigned int x_14_1_10 : 1; unsigned int x_14_1_11 : 1; unsigned int x_14_1_12 : 1; unsigned int x_14_1_13 : 1; unsigned int x_14_1_14 : 1; unsigned int x_14_1_15 : 1; unsigned int x_14_1_16 : 1; unsigned int x_14_1_17 : 1; unsigned int x_14_1_18 : 4; boolx_14_1_19; struct RetainPtr<const _CFURLRequest *> { void *x_20_2_1; } x_14_1_20; struct RetainPtr<NSURLRequest> { void *x_21_2_1; } x_14_1_21; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_22_2_1; } x_14_1_22; } x14; struct ResourceResponse { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_15_1_1; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; } x_15_1_2; long long x_15_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_15_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_15_1_5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_6_2_1; } x_15_1_6; struct HTTPHeaderMap { struct HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; int x_1_4_2; int x_1_4_3; int x_1_4_4; int x_1_4_5; } x_1_3_1; } x_7_2_1; } x_15_1_7; struct ResourceLoadTiming { int x_8_2_1; int x_8_2_2; int x_8_2_3; int x_8_2_4; int x_8_2_5; int x_8_2_6; int x_8_2_7; } x_15_1_8; int x_15_1_9; unsigned int x_15_1_10; double x_15_1_11; double x_15_1_12; double x_15_1_13; double x_15_1_14; double x_15_1_15; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; unsigned int x_15_1_19 : 1; unsigned int x_15_1_20 : 1; unsigned int x_15_1_21 : 1; unsigned int x_15_1_22 : 1; unsigned int x_15_1_23 : 1; unsigned int x_15_1_24 : 1; unsigned int x_15_1_25 : 1; unsigned int x_15_1_26 : 1; unsigned int x_15_1_27 : 3; unsigned int x_15_1_28 : 1; struct RetainPtr<_CFURLResponse *> { void *x_29_2_1; } x_15_1_29; struct RetainPtr<NSURLResponse> { void *x_30_2_1; } x_15_1_30; struct RetainPtr<const __CFArray *> { void *x_31_2_1; } x_15_1_31; } x15; struct ResourceError { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_16_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_16_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_16_1_3; int x_16_1_4; unsigned int x_16_1_5 : 1; unsigned int x_16_1_6 : 1; unsigned int x_16_1_7 : 1; boolx_16_1_8; struct RetainPtr<__CFError *> { void *x_9_2_1; } x_16_1_9; struct RetainPtr<NSError> { void *x_10_2_1; } x_16_1_10; } x16; boolx17; boolx18; boolx19; boolx20; boolx21; boolx22; boolx23; struct StringWithDirection { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_24_1_1; int x_24_1_2; } x24; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_25_1_1; } x25; struct NavigationAction { struct ResourceRequest { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_1_3_1; unsigned int x_1_3_2 : 1; unsigned int x_1_3_3 : 1; int x_1_3_4; int x_1_3_5; int x_1_3_6; int x_1_3_7; int x_1_3_8; int x_1_3_9; int x_1_3_10; int x_1_3_11; int x_1_3_12; int x_1_3_13; } x_1_2_1; double x_1_2_2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_5_1; } x_1_4_1; } x_3_3_1; unsigned int x_3_3_2 : 1; unsigned int x_3_3_3 : 1; int x_3_3_4; int x_3_3_5; int x_3_3_6; int x_3_3_7; int x_3_3_8; int x_3_3_9; int x_3_3_10; int x_3_3_11; int x_3_3_12; int x_3_3_13; } x_1_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_1_2_4; struct HTTPHeaderMap { struct HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_5_1; int x_1_5_2; int x_1_5_3; int x_1_5_4; int x_1_5_5; } x_1_4_1; } x_5_3_1; } x_1_2_5; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_6_3_1; unsigned int x_6_3_2; unsigned int x_6_3_3; } x_1_2_6; struct RefPtr<WebCore::FormData> { struct FormData {} *x_7_3_1; } x_1_2_7; unsigned int x_1_2_8 : 3; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 4; boolx_1_2_19; struct RetainPtr<const _CFURLRequest *> { void *x_20_3_1; } x_1_2_20; struct RetainPtr<NSURLRequest> { void *x_21_3_1; } x_1_2_21; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_22_3_1; } x_1_2_22; } x_26_1_1; int x_26_1_2; struct RefPtr<WebCore::Event> { struct Event {} *x_3_2_1; } x_26_1_3; boolx_26_1_4; } x26; struct ResourceRequest { struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_27_1_1; double x_27_1_2; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; unsigned int x_3_2_2 : 1; unsigned int x_3_2_3 : 1; int x_3_2_4; int x_3_2_5; int x_3_2_6; int x_3_2_7; int x_3_2_8; int x_3_2_9; int x_3_2_10; int x_3_2_11; int x_3_2_12; int x_3_2_13; } x_27_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_27_1_4; struct HTTPHeaderMap { struct HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::CaseFoldingHash, WTF::HashMap<WTF::String, WTF::String, WTF::CaseFoldingHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::String> {} *x_1_4_1; int x_1_4_2; int x_1_4_3; int x_1_4_4; int x_1_4_5; } x_1_3_1; } x_5_2_1; } x_27_1_5; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_27_1_6; struct RefPtr<WebCore::FormData> { struct FormData {} *x_7_2_1; } x_27_1_7; unsigned int x_27_1_8 : 3; unsigned int x_27_1_9 : 1; unsigned int x_27_1_10 : 1; unsigned int x_27_1_11 : 1; unsigned int x_27_1_12 : 1; unsigned int x_27_1_13 : 1; unsigned int x_27_1_14 : 1; unsigned int x_27_1_15 : 1; unsigned int x_27_1_16 : 1; unsigned int x_27_1_17 : 1; unsigned int x_27_1_18 : 4; boolx_27_1_19; struct RetainPtr<const _CFURLRequest *> { void *x_20_2_1; } x_27_1_20; struct RetainPtr<NSURLRequest> { void *x_21_2_1; } x_27_1_21; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_22_2_1; } x_27_1_22; } x27; struct Vector<WebCore::ResourceResponse, 0, WTF::CrashOnOverflow> { struct ResourceResponse {} *x_28_1_1; unsigned int x_28_1_2; unsigned int x_28_1_3; } x28; boolx29; struct HashMap<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource>, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>, WTF::KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> > >, WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::KeyValuePairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > >, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct KeyValuePair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_30_1_1; } x30; struct Timer<WebCore::DocumentLoader> { int (**x_31_1_1)(); double x_31_1_2; double x_31_1_3; double x_31_1_4; int x_31_1_5; unsigned int x_31_1_6; struct Vector<WebCore::TimerBase *, 0, WTF::CrashOnOverflow> {} *x_31_1_7; struct function<void ()>={type=[24C] {} x_31_1_8; struct __base<void ()> {} *x_31_1_9; } x31; }*)_documentLoader;
- (id)_URL;
- (void)_addSubframeArchives:(id)arg1;
- (id)_documentFragmentWithArchive:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (void)_finishedLoading;
- (id)_imageElementWithImageResource:(id)arg1;
- (id)_initWithDocumentLoader:(struct PassRefPtr<WebDocumentLoaderMac> { struct WebDocumentLoaderMac {} *x1; })arg1;
- (bool)_isDocumentHTML;
- (id)_mainDocumentError;
- (void)_makeRepresentation;
- (void)_receivedData:(id)arg1;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(bool)arg2;
- (id)_responseMIMEType;
- (void)_revertToProvisionalState;
- (void)_setAllowToBeMemoryMapped;
- (void)_setDeferMainResourceDataLoad:(bool)arg1;
- (void)_setMainDocumentError:(id)arg1;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setRepresentation:(id)arg1;
- (bool)_transferApplicationCache:(id)arg1;
- (id)_webView;
- (void)addSubresource:(id)arg1;
- (id)data;
- (id)dataSourceDelegate;
- (void)dealloc;
- (void)finalize;
- (id)initWithRequest:(id)arg1;
- (id)initialRequest;
- (bool)isLoading;
- (id)mainResource;
- (id)pageTitle;
- (id)representation;
- (id)request;
- (id)response;
- (void)setDataSourceDelegate:(id)arg1;
- (id)subresourceForURL:(id)arg1;
- (id)subresources;
- (id)textEncodingName;
- (id)unreachableURL;
- (id)webArchive;
- (id)webFrame;

@end
