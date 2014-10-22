/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSManagedObject, NSString, RadioModel;

@interface RadioSkipHistory : NSObject <RadioManagedObjectWrapperProtocol> {
    NSManagedObject *_managedObject;
    RadioModel *_model;
    NSString *_skipIdentifier;
    NSArray *_skipTimestamps;
    NSString *_stationHash;
    long long _stationID;
    bool_databaseBacked;
}

@property(getter=isDatabaseBacked,readonly) bool databaseBacked;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSManagedObject * managedObject;
@property(readonly) RadioModel * model;
@property(copy) NSString * skipIdentifier;
@property(copy) NSArray * skipTimestamps;
@property(copy) NSString * stationHash;
@property long long stationID;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_radioModelWasDeletedNotification:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithModel:(id)arg1 managedObject:(id)arg2;
- (bool)isDatabaseBacked;
- (bool)isEqual:(id)arg1;
- (id)managedObject;
- (id)model;
- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (id)skipIdentifier;
- (id)skipTimestamps;
- (id)stationHash;
- (long long)stationID;

@end
