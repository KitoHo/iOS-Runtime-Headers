/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {
    int m_format;
    unsigned int m_initNumber;
    void **m_numberFormatter;
    NSMutableArray *m_tokens;
}

- (void)dealloc;
- (id)initWithText:(id)arg1 format:(int)arg2 initNumber:(int)arg3 language:(int)arg4;
- (id)initWithText:(id)arg1 format:(int)arg2 language:(int)arg3;
- (id)initWithText:(id)arg1;
- (id)listLevelTextforOutline:(id)arg1;
- (id)token:(unsigned int)arg1;
- (unsigned long long)tokenCount;

@end
