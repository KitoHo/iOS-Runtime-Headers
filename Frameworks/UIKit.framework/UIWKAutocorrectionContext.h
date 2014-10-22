/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIWKAutocorrectionContext : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    NSString *_contextAfterSelection;
    NSString *_contextBeforeSelection;
    NSString *_markedText;
    } _rangeInMarkedText;
    NSString *_selectedText;
}

@property(copy) NSString * contextAfterSelection;
@property(copy) NSString * contextBeforeSelection;
@property(copy) NSString * markedText;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInMarkedText;
@property(copy) NSString * selectedText;

- (id)contextAfterSelection;
- (id)contextBeforeSelection;
- (void)dealloc;
- (id)markedText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInMarkedText;
- (id)selectedText;
- (void)setContextAfterSelection:(id)arg1;
- (void)setContextBeforeSelection:(id)arg1;
- (void)setMarkedText:(id)arg1;
- (void)setRangeInMarkedText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectedText:(id)arg1;

@end
