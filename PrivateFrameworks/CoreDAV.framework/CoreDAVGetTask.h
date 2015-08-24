/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVGetTask : CoreDAVTask {
    id _appSpecificDataItemResult;
    BOOL _forceNoCache;
}

@property (nonatomic, retain) id appSpecificDataItemResult;
@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic) BOOL forceNoCache;

- (id)appSpecificDataItemResult;
- (unsigned int)cachePolicy;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (BOOL)forceNoCache;
- (id)httpMethod;
- (id)requestBody;
- (void)setAppSpecificDataItemResult:(id)arg1;
- (void)setForceNoCache:(BOOL)arg1;

@end
