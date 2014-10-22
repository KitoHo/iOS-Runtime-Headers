/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBUIPasscodeEntryFieldDelegate>, NSMutableCharacterSet, NSString, UIColor, UITextField;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate> {
    UIColor *_customBackgroundColor;
    <SBUIPasscodeEntryFieldDelegate> *_delegate;
    NSMutableCharacterSet *_numericTrimmingSet;
    UITextField *_textField;
    bool_ignoreCallbacks;
    bool_resigningFirstResponder;
}

@property(retain) UIColor * customBackgroundColor;
@property(copy,readonly) NSString * debugDescription;
@property <SBUIPasscodeEntryFieldDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * stringValue;
@property(readonly) Class superclass;
@property(getter=_textField,readonly) UITextField * textField;

- (void)_appendString:(id)arg1;
- (void)_autofillForMesaWithCompletion:(id)arg1;
- (bool)_baseBecomeFirstResponder;
- (bool)_baseResignFirstResponder;
- (void)_deleteLastCharacter;
- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;
- (bool)_hasAnyCharacters;
- (void)_resetForFailedPasscode:(bool)arg1 playUnlockFailedSound:(bool)arg2;
- (void)_setLuminosityBoost:(double)arg1;
- (id)_textField;
- (struct CGSize { double x1; double x2; })_viewSize;
- (void)appendString:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)customBackgroundColor;
- (void)dealloc;
- (id)delegate;
- (void)deleteLastCharacter;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (bool)isFirstResponder;
- (void)notePasscodeFieldDidAcceptEntry;
- (void)notePasscodeFieldTextDidChange;
- (void)reset;
- (void)resetForFailedPasscode;
- (bool)resignFirstResponder;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStringValue:(id)arg1;
- (bool)shouldInsertPasscodeText:(id)arg1;
- (id)stringValue;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;

@end
