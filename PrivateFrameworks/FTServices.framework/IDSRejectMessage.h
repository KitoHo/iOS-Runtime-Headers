/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSNumber, NSString;

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying> {
    NSString *_peerID;
    NSData *_peerPushToken;
    NSNumber *_reason;
    NSData *_selfPushToken;
}

@property(copy) NSString * peerID;
@property(copy) NSData * peerPushToken;
@property(copy) NSNumber * reason;
@property(copy) NSData * selfPushToken;

- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)messageBody;
- (id)peerID;
- (id)peerPushToken;
- (id)reason;
- (id)requiredKeys;
- (id)selfPushToken;
- (void)setPeerID:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setSelfPushToken:(id)arg1;

@end
