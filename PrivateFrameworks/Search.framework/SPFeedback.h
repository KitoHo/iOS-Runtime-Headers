/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSArray, NSString;

@interface SPFeedback : NSObject <NSSecureCoding> {
    unsigned int _domain;
    NSString *_fbq;
    NSString *_identifier;
    NSString *_input;
    NSArray *_results;
    double _timestamp;
}

@property unsigned int domain;
@property(copy) NSString * fbq;
@property(retain) NSString * identifier;
@property(retain) NSString * input;
@property(retain) NSArray * results;
@property(readonly) double timestamp;

+ (id)feedback;
+ (id)feedbackForSearchResult:(id)arg1 section:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (unsigned int)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)fbq;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2;
- (id)parsecFeedbackFromSession:(id)arg1;
- (id)results;
- (void)setDomain:(unsigned int)arg1;
- (void)setFbq:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInput:(id)arg1;
- (void)setResults:(id)arg1;
- (double)timestamp;

@end
