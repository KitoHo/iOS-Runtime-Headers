/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTypingChatItem : CKChatItem

@property (getter=isFromMe, nonatomic, readonly) BOOL fromMe;

- (Class)cellClass;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (BOOL)displayDuringSend;
- (BOOL)isFromMe;
- (struct CGSize { float x1; float x2; })loadSizeThatFits:(struct CGSize { float x1; float x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg2;
- (BOOL)transcriptOrientation;
- (BOOL)wantsDrawerLayout;

@end
