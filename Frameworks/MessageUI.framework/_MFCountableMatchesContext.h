/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFCountableMatchesContext : NSObject {
    int _maxCount;
    struct __CFDictionary { } *_peopleCount;
    NSMutableSet *_popularPeople;
}

@property (nonatomic) int maxCount;

- (void)countInstances:(id)arg1 usingPredicate:(id /* block */)arg2;
- (void)dealloc;
- (id)highestMatches;
- (id)init;
- (int)maxCount;
- (void)setMaxCount:(int)arg1;

@end
