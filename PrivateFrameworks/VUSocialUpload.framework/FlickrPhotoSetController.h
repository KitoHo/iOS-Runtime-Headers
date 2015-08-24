/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@interface FlickrPhotoSetController : UITableViewController <FlickrPhotoSetTableDelegate> {
    <FlickrComposeOptionViewDelegate> *_delegate;
    FlickrPhotoSetManager *_manager;
    long long _photoSetID;
    NSString *_photoSetTitle;
    int _selectedIndexRow;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FlickrComposeOptionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) FlickrPhotoSetManager *manager;
@property (nonatomic, readonly) long long photoSetID;
@property (nonatomic, readonly) NSString *photoSetTitle;
@property (nonatomic) int selectedIndexRow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPhotoSetManager:(id)arg1;
- (id)manager;
- (long long)photoSetID;
- (id)photoSetTitle;
- (void)reloadData;
- (int)selectedIndexRow;
- (void)setDelegate:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setSelectedIndexRow:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
