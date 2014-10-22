/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface APSMessage : NSObject <NSCoding> {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSMutableDictionary *_plist;
    void *_xpcMessage;
}

@property unsigned long long identifier;
@property(retain) NSString * topic;
@property(retain) NSDictionary * userInfo;

- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTopic:(id)arg1 userInfo:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setTopic:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)topic;
- (id)userInfo;

@end
