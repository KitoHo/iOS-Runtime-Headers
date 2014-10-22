/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class WebScriptWorld;

@interface WBUFormMetadataController : WBSFormMetadataController {
    WebScriptWorld *_scriptWorld;
}

@property(readonly) WebScriptWorld * scriptWorld;

+ (id)sharedFormMetadataController;

- (void).cxx_destruct;
- (void)clearScriptWorld;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)scriptWorld;

@end
