/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSLocalizableString : NSString {
    NSString *_developmentLanguageString;
    NSString *_stringsFileKey;
}

@property(copy,readonly) NSString * developmentLanguageString;
@property(copy,readonly) NSString * stringsFileKey;

+ (id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;

- (id)awakeAfterUsingCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)developmentLanguageString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;
- (unsigned long long)length;
- (void)setDevelopmentLanguageString:(id)arg1;
- (void)setStringsFileKey:(id)arg1;
- (id)stringsFileKey;

@end
