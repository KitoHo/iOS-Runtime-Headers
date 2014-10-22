/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIDocument;

@interface UIDocumentErrorRecoveryAttempter : NSObject {
    struct { 
        unsigned int attemptedRecovery : 1; 
    id _appModalRecoveryAttempter;
    id _continuerOrNil;
    UIDocument *_document;
    } _errorRecoveryAttempterFlags;
    id _recoveryCancelerOrNil;
    long long _silentRecoveryOptionIndex;
    id _wrappedRecoveryAttempter;
}

- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (bool)attemptSilentRecoveryFromError:(id)arg1 error:(id*)arg2;
- (void)cancelRecovery;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 silentRecoveryOptionIndex:(unsigned long long)arg2 appModalRecoveryAttempter:(id)arg3 recoveryCanceler:(id)arg4;
- (id)initWithDocument:(id)arg1 wrappedRecoveryAttempter:(id)arg2;

@end
