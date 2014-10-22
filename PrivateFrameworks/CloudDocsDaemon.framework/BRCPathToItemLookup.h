/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCItemID, BRCLocalItem, BRCPackageItem, BRCRelativePath, BRCServerItem;

@interface BRCPathToItemLookup : NSObject {
    struct { 
        unsigned int byFileID : 1; 
        unsigned int byDocumentID : 1; 
        unsigned int byPath : 1; 
        unsigned int parentID : 1; 
        unsigned int serverItem : 1; 
        unsigned int serverByPath : 1; 
        unsigned int packageItem : 1; 
    } _fetched;
    BRCLocalItem *_matchByDocumentID;
    BRCLocalItem *_matchByFileID;
    BRCLocalItem *_matchByPath;
    BRCPackageItem *_packageItem;
    BRCItemID *_parentID;
    BRCRelativePath *_pathInPackage;
    BRCRelativePath *_pathOfItem;
    BRCServerItem *_serverByPath;
    BRCServerItem *_serverItem;
}

@property(retain) BRCLocalItem * byDocumentID;
@property(retain) BRCLocalItem * byFileID;
@property(readonly) BRCLocalItem * byPath;
@property(readonly) BRCPackageItem * packageItem;
@property(readonly) BRCItemID * parentID;
@property(readonly) BRCRelativePath * relpathInPackage;
@property(readonly) BRCRelativePath * relpathOfFSEvent;
@property(readonly) BRCRelativePath * relpathOfItem;
@property(readonly) BRCServerItem * serverByPath;

+ (id)lookupForRelativePath:(id)arg1;

- (void).cxx_destruct;
- (bool)_fetchByDocumentID;
- (bool)_fetchByFileID;
- (bool)_fetchByPath;
- (id)byDocumentID;
- (id)byFileID;
- (id)byPath;
- (id)description;
- (id)initWithRelativePath:(id)arg1;
- (id)packageItem;
- (id)parentID;
- (id)relpathInPackage;
- (id)relpathOfFSEvent;
- (id)relpathOfItem;
- (id)serverByPath;
- (id)serverItemFor:(id)arg1;
- (void)setByDocumentID:(id)arg1;
- (void)setByFileID:(id)arg1;

@end
