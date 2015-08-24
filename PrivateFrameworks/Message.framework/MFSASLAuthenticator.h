/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSASLAuthenticator : NSObject {
    MFAccount *_account;
    MFAuthScheme *_authScheme;
    int _authenticationState;
    MFConnection *_connection;
}

- (id)account;
- (id)authScheme;
- (int)authenticationState;
- (BOOL)base64EncodeResponseData;
- (BOOL)couldRetry;
- (void)dealloc;
- (id)initWithAuthScheme:(id)arg1 account:(id)arg2 connection:(id)arg3;
- (BOOL)isUsingSSL;
- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)arg1;
- (id)saslName;
- (id)securityLayer;
- (void)setAuthenticationState:(int)arg1;
- (void)setMissingPasswordError;
- (BOOL)supportsInitialClientResponse;

@end
