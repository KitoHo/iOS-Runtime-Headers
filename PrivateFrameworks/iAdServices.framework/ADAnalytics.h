/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@class ADAdSheetConnection, NSString;

@interface ADAnalytics : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate> {
    ADAdSheetConnection *_connection;
}

@property(retain) ADAdSheetConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (id)adSheetMachServiceName;
- (id)additionalAdSheetLaunchOptions;
- (void)configureConnection:(id)arg1;
- (id)connection;
- (id)init;
- (void)reportIngestionForPassWithTeamIdentifier:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 iAdReportingIdentifier:(id)arg4;
- (void)setConnection:(id)arg1;
- (bool)shouldLaunchAdSheet;

@end
