/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary;

@interface TSWPPhonetics : NSObject {
    NSDictionary *_transcribers;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDictionary;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)transcriberWithIdentifier:(id)arg1;

@end
