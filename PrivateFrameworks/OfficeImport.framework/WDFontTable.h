/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OITSUNoCopyDictionary;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (void)clear;
- (unsigned long long)count;
- (id)createFontWithName:(id)arg1;
- (void)dealloc;
- (id)fontWithName:(id)arg1 create:(bool)arg2;
- (id)fontWithName:(id)arg1;
- (id)fonts;
- (id)init;

@end
