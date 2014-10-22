/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString;

@interface SBSAcquireAssertionAction : BSAction {
}

@property(readonly) NSString * assertionName;
@property(readonly) unsigned int port;
@property(readonly) NSString * reason;

+ (id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(id)arg3;

- (id)assertionName;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned int)port;
- (id)reason;

@end
