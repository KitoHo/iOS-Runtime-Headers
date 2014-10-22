/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class DOMRange, MFLibraryMessage, MFMessageReformattingContext, NSMutableDictionary, NSObject<MFMessageWebLayerDelegate>, NSString, NSTimer;

@interface MFMessageWebLayer : UIWebBrowserView {
    unsigned int _shouldReformat : 1;
    unsigned int _unitTests : 1;
    unsigned int _isFromEntourage : 1;
    unsigned long long _bottomReplyLastQuoteLevel;
    DOMRange *_bottomReplyRange;
    NSString *_currentUUID;
    NSMutableDictionary *_displayInfoCache;
    MFLibraryMessage *_displayInfoCacheLibraryMessage;
    int _displayStyle;
    NSTimer *_ignorePendingStylesheetsTimer;
    NSString *_mainFrameURL;
    NSObject<MFMessageWebLayerDelegate> *_mwlDelegate;
    NSString *_originalHTMLString;
    id _postDisplayCancellationBlock;
    id _postDisplayOperationBlock;
    MFMessageReformattingContext *_reformattingContext;
    bool_didReformatMessage;
    bool_hasUnloadedRemoteImages;
    bool_isReformatting;
    bool_prePrintDataDetectionPending;
    bool_showRemoteImages;
    bool_stoppedLoading;
}

@property unsigned long long bottomReplyLastQuoteLevel;
@property(retain) DOMRange * bottomReplyRange;
@property bool hasUnloadedRemoteImages;
@property(copy) NSString * originalHTMLString;
@property bool prePrintDataDetectionPending;
@property(retain) MFMessageReformattingContext * reformattingContext;
@property bool showRemoteImages;

+ (void)beginBlockingRemoteImagesExceptForMessageWebLayer:(id)arg1;
+ (void)clearMessageContentCache;
+ (void)clearUnblockedRemoteImagesCache;
+ (void)endBlockingRemoteImages;
+ (void)initialize;

- (void)_cancelPendingIgnoreStylesheets;
- (id)_createInlinePluginElementWithHTMLRepresentation:(id)arg1 inDocument:(id)arg2;
- (void)_didFinishReformattingMessage;
- (bool)_elementHasDefinedWidth:(id)arg1;
- (void)_frameDidFinishPrePrintURLification:(id)arg1;
- (void)_ignorePendingStylesheets:(id)arg1;
- (void)_preferredContentSizeDidChangeNotification:(id)arg1;
- (id)_rangeOfFirstText;
- (id)_reformatOneElementUsingMethod:(id)arg1 shouldCancel:(bool*)arg2;
- (void)_reformattingDidFail;
- (void)_replaceElement:(id)arg1 with:(id)arg2;
- (bool)_rescaleTopLevelElements;
- (void)_schedulePendingIgnoreStylesheets;
- (void)_sendDelegateSizeDidChange;
- (bool)_shouldContinueResizingMessage;
- (bool)_shouldRescaleMessage;
- (bool)_shouldResizeMessage;
- (void)_webthread_webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)_webthread_webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (void)_willBeginReformattingMessage;
- (void)addMessageContentURL:(id)arg1;
- (void)addUnblockedRemoteImageURL:(id)arg1;
- (void)adjustSizeBasedOnMainFrame:(id)arg1;
- (void)appendMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)attachmentDownloadProgressObserversByUniqueIdentifiers;
- (void)attemptEarlyMessageReformat;
- (bool)boolForDisplayInfoCacheKey:(id)arg1;
- (unsigned long long)bottomReplyLastQuoteLevel;
- (id)bottomReplyRange;
- (bool)canReformatMessageWithoutSubresources:(id)arg1 resultCanBeCached:(bool*)arg2;
- (void)cancelPostDisplayOperation;
- (void)clearMessageReformattingCache;
- (void)copy:(id)arg1;
- (void)dealloc;
- (double)defaultWidth;
- (void)displayDidEnd;
- (int)displayStyle;
- (bool)hasPluginWithUninitializedSize;
- (bool)hasUnloadedRemoteImages;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleSize:(struct CGSize { double x1; double x2; })arg2 viewportWidth:(double)arg3 displayStyle:(int)arg4;
- (void)invalidateDisplayInfoCache;
- (bool)isCancelled;
- (void)loadFragments:(id)arg1 forLibraryMessage:(id)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (double)maximumDoubleTapScale;
- (id)messageWebLayerDelegate;
- (id)newQuoteSubparser;
- (id)objectForDisplayInfoCacheKey:(id)arg1;
- (id)originalHTMLString;
- (void)parseDocument:(id)arg1;
- (void)performBatchUpdates:(id)arg1;
- (bool)prePrintDataDetectionPending;
- (void)prepareDisplayInfoCacheWithLibraryMessage:(id)arg1;
- (void)reformatAttachments:(id)arg1;
- (void)reformatMessage:(id)arg1;
- (bool)reformatMessageOnce;
- (id)reformattingContext;
- (void)reload;
- (void)saveDisplayInfoCache;
- (void)setBool:(bool)arg1 forDisplayInfoCacheKey:(id)arg2;
- (void)setBottomReplyLastQuoteLevel:(unsigned long long)arg1;
- (void)setBottomReplyRange:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasUnloadedRemoteImages:(bool)arg1;
- (void)setMessageIsFromEntourage:(bool)arg1;
- (void)setMessageWebLayerDelegate:(id)arg1;
- (void)setObject:(id)arg1 forDisplayInfoCacheKey:(id)arg2;
- (void)setOriginalHTMLString:(id)arg1;
- (void)setPostDisplayOperationBlock:(id)arg1 cancellationBlock:(id)arg2;
- (void)setPrePrintDataDetectionPending:(bool)arg1;
- (void)setReformattingContext:(id)arg1;
- (void)setShowRemoteImages:(bool)arg1;
- (bool)showRemoteImages;
- (void)stopLoading:(id)arg1;
- (void)stopLoadingAndClear;
- (void)updateImageURL:(id)arg1 withURL:(id)arg2 completionBlock:(id)arg3;
- (void)updateImageWithSource:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(id)arg3;
- (void)updateInlinePluginWithContentID:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(id)arg3;
- (bool)usePadDisplayStyle;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (bool)webView:(id)arg1 shouldPaintBrokenImageForURL:(id)arg2;

@end
