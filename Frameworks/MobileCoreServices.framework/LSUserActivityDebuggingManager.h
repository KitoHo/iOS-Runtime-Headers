/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSUserActivityDebuggingManager : NSObject {
    int _additionalLogFile;
    struct __asl_object_s { } *_client;
    unsigned long long _lastLogRotationTime;
    NSString *_logFileDirectoryPath;
    NSString *_logFilePath;
    NSObject<OS_dispatch_source> *_logRotationTimerSource;
    NSUserDefaults *_userDefaults;
}

@property int additionalLogFile;
@property struct __asl_object_s { }*client;
@property unsigned long long lastLogRotationTime;
@property (copy) NSString *logFileDirectoryPath;
@property (readonly) BOOL logFileEnabled;
@property (copy) NSString *logFilePath;
@property NSObject<OS_dispatch_source> *logRotationTimerSource;
@property (readonly) BOOL loggingEnabled;
@property (retain) NSUserDefaults *userDefaults;

+ (id)hexDataDump:(id)arg1;
+ (void)log:(int)arg1 format:(id)arg2;
+ (id)sharedDebugManager;

- (int)additionalLogFile;
- (struct __asl_object_s { }*)client;
- (void)deleteExtraLogFiles;
- (void)doRotateLogFiles;
- (id)init;
- (unsigned long long)lastLogRotationTime;
- (void)log:(int)arg1 common:(BOOL)arg2 format:(id)arg3 args:(void*)arg4 file:(const char *)arg5 line:(long)arg6;
- (void)log:(int)arg1 file:(const char *)arg2 line:(long)arg3 format:(id)arg4;
- (void)log:(int)arg1 format:(id)arg2;
- (void)log:(int)arg1 format:(id)arg2 args:(void*)arg3;
- (void)log:(int)arg1 format:(id)arg2 args:(void*)arg3 file:(const char *)arg4 line:(long)arg5;
- (void)logCommon:(unsigned int)arg1 format:(id)arg2 args:(void*)arg3;
- (id)logFileDirectoryPath;
- (BOOL)logFileEnabled;
- (id)logFilePath;
- (int)logRotationMaximumFiles;
- (double)logRotationTimeInSeconds;
- (id)logRotationTimerSource;
- (BOOL)loggingEnabled;
- (void)resume;
- (void)rotateLogFiles;
- (void)setAdditionalLogFile:(int)arg1;
- (void)setClient:(struct __asl_object_s { }*)arg1;
- (void)setLastLogRotationTime:(unsigned long long)arg1;
- (void)setLogFileDirectoryPath:(id)arg1;
- (void)setLogFilePath:(id)arg1;
- (void)setLogRotationTimerSource:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (BOOL)shouldLog:(int)arg1;
- (BOOL)shouldLogCommon:(unsigned int)arg1;
- (void)suspend;
- (id)userDefaults;

@end
