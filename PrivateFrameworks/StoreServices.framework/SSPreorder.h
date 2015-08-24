/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPreorder : NSObject <SSXPCCoding> {
    NSNumber *_accountID;
    NSString *_artistName;
    SSItemImageCollection *_imageCollection;
    unsigned long long _itemID;
    NSString *_itemKind;
    long long _pid;
    unsigned long long _preorderID;
    double _releaseDate;
    NSString *_releaseDateString;
    NSString *_title;
}

@property (nonatomic, readonly) NSString *artistName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SSItemImageCollection *imageCollection;
@property (nonatomic, readonly) NSString *itemKind;
@property (nonatomic, readonly) long long persistentIdentifier;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) NSString *releaseDateString;
@property (nonatomic, readonly) NSNumber *storeAccountIdentifier;
@property (nonatomic, readonly) unsigned long long storeItemIdentifier;
@property (nonatomic, readonly) unsigned long long storePreorderIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (id)_initWithPersistentIdentifier:(long long)arg1;
- (void)_setArtistName:(id)arg1;
- (void)_setImageCollection:(id)arg1;
- (void)_setItemKind:(id)arg1;
- (void)_setReleaseDate:(id)arg1;
- (void)_setReleaseDateString:(id)arg1;
- (void)_setStoreAccountIdentifier:(id)arg1;
- (void)_setStoreItemIdentifier:(long long)arg1;
- (void)_setStorePreorderIdentifier:(long long)arg1;
- (void)_setTitle:(id)arg1;
- (id)artistName;
- (id)copyReleaseDateStringWithStyle:(long)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)imageCollection;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemKind;
- (long long)persistentIdentifier;
- (id)releaseDate;
- (id)releaseDateString;
- (id)storeAccountIdentifier;
- (unsigned long long)storeItemIdentifier;
- (unsigned long long)storePreorderIdentifier;
- (id)title;

@end
