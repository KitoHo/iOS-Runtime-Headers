/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAccountStore : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSKeyValueStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableArray *_notifyTokens;
}

@property (readonly, copy) NSArray *accounts;
@property (readonly) SSAccount *activeAccount;
@property (readonly) SSAccount *activeLockerAccount;
@property (getter=isAuthenticationActive, readonly) BOOL authenticationActive;
@property (getter=isExpired, readonly) BOOL expired;

+ (id)defaultStore;
+ (id)existingDefaultStore;
+ (BOOL)isExpired;
+ (BOOL)isExpiredForTokenType:(int)arg1;
+ (void)resetExpiration;
+ (void)resetExpirationForTokenType:(int)arg1;
+ (void)setDefaultStore:(id)arg1;
+ (double)tokenExpirationInterval;

- (void)_dispatchAsync:(id /* block */)arg1;
- (void)_dispatchSync:(id /* block */)arg1;
- (id)_keyValueStore;
- (void)_postAccountStoreChangeNotification;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 scope:(int)arg2;
- (id)accounts;
- (id)activeAccount;
- (id)activeLockerAccount;
- (id)addAccount:(id)arg1;
- (void)dealloc;
- (void)getDefaultAccountNameUsingBlock:(id /* block */)arg1;
- (id)init;
- (BOOL)isAuthenticationActive;
- (BOOL)isExpired;
- (BOOL)isExpiredForTokenType:(int)arg1;
- (void)reloadAccounts;
- (void)resetExpiration;
- (void)resetExpirationForTokenType:(int)arg1;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)setActiveAccount:(id)arg1;
- (id)setActiveLockerAccount:(id)arg1;
- (void)setDefaultAccountName:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)signOutAccount:(id)arg1;
- (void)signOutAllAccounts;

@end
