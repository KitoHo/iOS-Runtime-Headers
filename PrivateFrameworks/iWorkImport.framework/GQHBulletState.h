/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHBulletState : NSObject {
    int mCurrentLevel;
    struct __CFArray { } *mLevels;
}

+ (struct __CFString { }*)createLabelStr:(int)arg1 number:(int)arg2;

- (struct __CFString { }*)bulletChar:(int)arg1;
- (int)bulletIndentForLevel:(int)arg1;
- (struct __CFString { }*)createTieredNumberStringForLevel:(int)arg1;
- (int)currentLevel;
- (void)dealloc;
- (bool)hasNumberAtLevel:(int)arg1;
- (id)init;
- (int)labelTypeAtLevel:(int)arg1;
- (id)listStyleAtLevel:(int)arg1;
- (int)numberAtLevel:(int)arg1;
- (void)setBulletChar:(struct __CFString { }*)arg1 level:(int)arg2;
- (void)setBulletIndent:(int)arg1 level:(int)arg2;
- (void)setCurrentLevel:(int)arg1;
- (void)setLabelType:(int)arg1 level:(int)arg2;
- (void)setListStyle:(id)arg1 atLevel:(int)arg2;
- (void)setNumber:(int)arg1 level:(int)arg2;
- (void)setTextIndent:(int)arg1 level:(int)arg2;
- (void)setType:(int)arg1 level:(int)arg2;
- (int)textIndentForLevel:(int)arg1;
- (int)typeAtlevel:(int)arg1;

@end
