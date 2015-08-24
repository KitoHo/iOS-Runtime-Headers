/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDPluginConnection : NSObject {
    unsigned long long _clientId;
    CDDXPCConnection *_connection;
    CDDebug *_debug;
}

@property (readonly) unsigned long long clientId;
@property (readonly) CDDXPCConnection *connection;
@property (readonly) CDDebug *debug;

- (void).cxx_destruct;
- (BOOL)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (unsigned long long)clientId;
- (id)connection;
- (BOOL)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (id)debug;
- (id)init;
- (id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2;
- (id)messageWithError:(id*)arg1;
- (BOOL)registerForSignoffWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (BOOL)requestSystemDataWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (BOOL)sendMessageWithType:(int)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(id /* block */)arg5;
- (BOOL)sendMessageWithType:(int)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (BOOL)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (BOOL)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (BOOL)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;

@end
