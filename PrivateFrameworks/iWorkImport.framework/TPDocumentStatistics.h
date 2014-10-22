/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPTextStatistics;

@interface TPDocumentStatistics : NSObject <NSCopying> {
    unsigned long long _pageCount;
    TSWPTextStatistics *_textStatistics;
    bool_isAccurate;
}

@property bool isAccurate;
@property unsigned long long pageCount;
@property(retain) TSWPTextStatistics * textStatistics;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTextStatistics:(id)arg1 pageCount:(unsigned long long)arg2;
- (bool)isAccurate;
- (bool)isEqual:(id)arg1;
- (unsigned long long)pageCount;
- (void)resetStatistics;
- (void)setIsAccurate:(bool)arg1;
- (void)setPageCount:(unsigned long long)arg1;
- (void)setTextStatistics:(id)arg1;
- (id)textStatistics;

@end
