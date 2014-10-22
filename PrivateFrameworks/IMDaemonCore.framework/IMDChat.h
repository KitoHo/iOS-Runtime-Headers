/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class IMDAccount, IMDService, IMDServiceSession, IMMessageItem, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject {
    NSString *_accountID;
    NSString *_chatIdentifier;
    NSMutableDictionary *_chatInfo;
    NSString *_displayName;
    NSString *_groupID;
    NSString *_guid;
    NSString *_lastAddressedLocalHandle;
    IMMessageItem *_lastMessage;
    NSRecursiveLock *_lock;
    NSArray *_participants;
    NSDictionary *_properties;
    NSString *_roomName;
    long long _rowID;
    NSString *_serviceName;
    long long _state;
    unsigned char _style;
    unsigned long long _unreadCount;
    bool_isArchived;
}

@property(retain,readonly) IMDAccount * account;
@property(copy) NSString * accountID;
@property(copy) NSString * chatIdentifier;
@property(retain,readonly) NSDictionary * chatProperties;
@property(retain,readonly) NSDictionary * dictionaryRepresentation;
@property(copy) NSString * displayName;
@property(copy) NSString * groupID;
@property(copy) NSString * guid;
@property(readonly) bool isArchived;
@property(copy) NSString * lastAddressedLocalHandle;
@property(retain) IMMessageItem * lastMessage;
@property(copy) NSArray * participants;
@property(retain) NSDictionary * properties;
@property(copy) NSString * roomName;
@property long long rowID;
@property(retain,readonly) IMDService * service;
@property(copy) NSString * serviceName;
@property(retain,readonly) IMDServiceSession * serviceSession;
@property long long state;
@property unsigned char style;
@property unsigned long long unreadCount;

- (void)_setRowID:(long long)arg1;
- (void)_setUnreadCount:(unsigned long long)arg1;
- (void)_updateCachedParticipants;
- (void)_updateLastMessage:(id)arg1;
- (id)account;
- (id)accountID;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (id)chatIdentifier;
- (id)chatProperties;
- (id)copyDictionaryRepresentation:(bool)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)groupID;
- (id)guid;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 properties:(id)arg10 state:(long long)arg11 style:(unsigned char)arg12;
- (bool)isArchived;
- (id)lastAddressedLocalHandle;
- (id)lastMessage;
- (id)participants;
- (id)properties;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (id)roomName;
- (long long)rowID;
- (id)service;
- (id)serviceName;
- (id)serviceSession;
- (void)setAccountID:(id)arg1;
- (void)setChatIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setLastAddressedLocalHandle:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStyle:(unsigned char)arg1;
- (long long)state;
- (void)storeAndBroadcastChatChanges;
- (unsigned char)style;
- (unsigned long long)unreadCount;
- (void)updateDisplayName:(id)arg1;
- (void)updateGroupID:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)updateProperties:(id)arg1;

@end
