/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSLock, SCRCTargetSelectorTimer, SCROConnection;

@interface SCROScriptClient : NSObject {
    SCROConnection *_connection;
    NSLock *_lock;
    SCRCTargetSelectorTimer *_timer;
    bool_isReady;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedClient;

- (bool)_isReady;
- (void)_killConnection;
- (id)_lazyConnection;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleCallback:(id)arg1;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)runScriptFile:(id)arg1;

@end
