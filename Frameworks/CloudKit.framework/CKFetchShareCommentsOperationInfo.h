/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKCommentCursor, CKCommentQuery;

@interface CKFetchShareCommentsOperationInfo : CKOperationInfo {
    CKCommentCursor *_cursor;
    CKCommentQuery *_query;
    unsigned long long _resultsLimit;
}

@property(retain) CKCommentCursor * cursor;
@property(retain) CKCommentQuery * query;
@property unsigned long long resultsLimit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cursor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)query;
- (unsigned long long)resultsLimit;
- (void)setCursor:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
