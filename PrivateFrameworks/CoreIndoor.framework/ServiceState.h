/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface ServiceState : NSObject {
    NSString *_apiKey;
    IndoorProtocolProxy *_delegateProxy;
    NSString *_password;
    bool _pausedLocalization;
    NSSet *_selectedVenues;
    NSString *_server;
    bool _updateLocation;
    NSString *_username;
}

@property (nonatomic, retain) NSString *apiKey;
@property (nonatomic, retain) IndoorProtocolProxy *delegateProxy;
@property (nonatomic, retain) NSString *password;
@property (nonatomic) bool pausedLocalization;
@property (nonatomic, retain) NSSet *selectedVenues;
@property (nonatomic, retain) NSString *server;
@property (nonatomic) bool updateLocation;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)apiKey;
- (id)delegateProxy;
- (id)password;
- (bool)pausedLocalization;
- (id)selectedVenues;
- (id)server;
- (void)setApiKey:(id)arg1;
- (void)setDelegateProxy:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPausedLocalization:(bool)arg1;
- (void)setSelectedVenues:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setUpdateLocation:(bool)arg1;
- (void)setUsername:(id)arg1;
- (bool)updateLocation;
- (id)username;

@end
