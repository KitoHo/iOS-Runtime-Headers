/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFSearchProcessResultsOperation : NSOperation {
    id /* block */ _completionBlock;
    <_MFSearchResultsConsumer> *_consumer;
    unsigned int _type;
}

+ (id)operationWithResultsOfType:(unsigned int)arg1 completion:(id /* block */)arg2 consumer:(id)arg3;

- (void)dealloc;
- (void)main;

@end
