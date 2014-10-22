/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFComposeRecipientAtomDelegate>, MFComposeRecipient, UITextInputTraits;

@interface MFModernComposeRecipientAtom : MFModernAtomView {
    unsigned int _wasSelectedWhenTouchesBegan : 1;
    unsigned int _touchesWereCancelled : 1;
    <MFComposeRecipientAtomDelegate> *_delegate;
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
}

@property <MFComposeRecipientAtomDelegate> * delegate;
@property(readonly) MFComposeRecipient * recipient;

- (void)dealloc;
- (id)delegate;
- (void)handleTouchAndHold;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (id)keyCommands;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (id)recipient;
- (void)setDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
