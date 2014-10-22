/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TIDocumentState, TITextInputTraits;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {
    TIDocumentState *_documentState;
    TITextInputTraits *_textInputTraits;
}

@property(retain) TIDocumentState * documentState;
@property(retain) TITextInputTraits * textInputTraits;

+ (id)stateForKeyboardState:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createDocumentStateIfNecessary;
- (void)dealloc;
- (id)description;
- (id)documentState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (id)textInputTraits;

@end
