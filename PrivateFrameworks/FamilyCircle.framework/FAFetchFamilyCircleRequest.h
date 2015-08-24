/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {
    BOOL _doNotFetchFromServer;
    NSArray *_expectedDSIDs;
    BOOL _forceServerFetch;
    BOOL _promptUserToResolveAuthenticatonFailure;
    NSDictionary *_serverResponse;
    BOOL _signedInAccountShouldBeApprover;
}

@property BOOL doNotFetchFromServer;
@property (copy) NSArray *expectedDSIDs;
@property BOOL forceServerFetch;
@property BOOL promptUserToResolveAuthenticatonFailure;
@property (readonly, retain) NSDictionary *serverResponse;
@property BOOL signedInAccountShouldBeApprover;

- (void).cxx_destruct;
- (BOOL)doNotFetchFromServer;
- (id)expectedDSIDs;
- (BOOL)forceServerFetch;
- (BOOL)promptUserToResolveAuthenticatonFailure;
- (id)requestOptions;
- (id)serverResponse;
- (void)setDoNotFetchFromServer:(BOOL)arg1;
- (void)setExpectedDSIDs:(id)arg1;
- (void)setForceServerFetch:(BOOL)arg1;
- (void)setPromptUserToResolveAuthenticatonFailure:(BOOL)arg1;
- (void)setSignedInAccountShouldBeApprover:(BOOL)arg1;
- (BOOL)signedInAccountShouldBeApprover;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
