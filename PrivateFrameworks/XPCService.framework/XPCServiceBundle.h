/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCService.framework/XPCService
 */

@class NSBundle, NSDictionary, NSObject<OS_xpc_object>, NSString;

@interface XPCServiceBundle : NSObject <XPCServiceArchiver> {
    NSBundle *_bundle;
    NSString *_executablePath;
    long long _executablePathPredicate;
    NSDictionary *_launchdJobDictionary;
    long long _launchdJobDictionaryPredicate;
    NSString *_realExecutablePath;
    long long _realExecutablePathPredicate;
    NSDictionary *_serviceDictionary;
    long long _serviceDictionaryPredicate;
    NSString *_serviceIdentifier;
    long long _serviceIdentifierPredicate;
    long long _serviceType;
    long long _serviceTypePredicate;
    NSObject<OS_xpc_object> *_xpcJobData;
    long long _xpcJobDataPredicate;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)XPCServiceBundleAtPath:(id)arg1;
+ (id)XPCServiceBundleForMainExecutable;
+ (id)XPCServiceBundleFromExecutableAtPath:(id)arg1;
+ (struct _launch_data { }*)createLaunchDataFromArray:(id)arg1;
+ (id)createXPCJobsArrayFromArray:(id)arg1;
+ (bool)useRestrictiveRoleAccountSecurityPolicy;

- (id)archiveForCache;
- (id)arrayForServiceDictionaryKey:(id)arg1;
- (bool)boolForServiceDictionaryKey:(id)arg1;
- (id)bundle;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)dictionaryForServiceDictionaryKey:(id)arg1;
- (id)executablePath;
- (id)identifier;
- (id)initWithArchive:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (bool)isSystemService;
- (id)launchdJobDictionary;
- (struct _launch_data { }*)launchdJobLaunchData;
- (id)launchdJobPropertyListData;
- (id)launchdJobPropertyListString;
- (id)objectForServiceDictionaryKey:(id)arg1;
- (id)realExecutablePath;
- (id)serviceDictionary;
- (long long)serviceType;
- (id)stringForServiceDictionaryKey:(id)arg1;
- (id)xpcJobData;

@end
