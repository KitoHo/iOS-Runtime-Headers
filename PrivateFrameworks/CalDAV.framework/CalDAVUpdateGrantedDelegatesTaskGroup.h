/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSSet *_addReadURLs;
    NSSet *_addWriteURLs;
    NSSet *_removeURLs;
    int _state;
    NSSet *_updatedReadURLs;
    NSSet *_updatedWriteURLs;
}

@property(retain) NSSet * addReadURLs;
@property(retain) NSSet * addWriteURLs;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSSet * removeURLs;
@property int state;
@property(readonly) Class superclass;
@property(retain) NSSet * updatedReadURLs;
@property(retain) NSSet * updatedWriteURLs;

- (void)_fetchExistingGrantedDelegates;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(bool)arg2;
- (void)_updateDelegatesWithAllowWrite:(bool)arg1;
- (id)addReadURLs;
- (id)addWriteURLs;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)removeURLs;
- (void)setAddReadURLs:(id)arg1;
- (void)setAddWriteURLs:(id)arg1;
- (void)setRemoveURLs:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUpdatedReadURLs:(id)arg1;
- (void)setUpdatedWriteURLs:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (id)updatedReadURLs;
- (id)updatedWriteURLs;

@end
