/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABAbstractPropertyGroup : NSObject {
    BOOL _hasChanges;
    NSArray *_people;
    ABUIPerson *_preinsertedPerson;
    <ABStyleProvider> *_styleProvider;
}

@property (nonatomic) BOOL hasChanges;
@property (nonatomic, retain) NSArray *people;
@property (nonatomic, retain) ABUIPerson *preinsertedPerson;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;

- (BOOL)canSave;
- (void)dealloc;
- (BOOL)hasChanges;
- (id)init;
- (id)people;
- (id)preinsertedPerson;
- (int)property;
- (void)reloadFromModel;
- (void)setHasChanges:(BOOL)arg1;
- (void)setPeople:(id)arg1;
- (void)setPreinsertedPerson:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)updateRecord;

@end
