/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODBReader : NSObject {
    BOOL _closed;
    struct sqlite3 { } *_db;
    BOOL _defunct;
    int _editionUpdating;
    unsigned int _expirationRecordCount;
    struct { unsigned int x1; double x2; } *_expirationRecords;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_readQueue;
    struct sqlite3_stmt { } *_tileQuery;
    struct sqlite3_stmt { } *_versionQuery;
}

@property BOOL closed;

- (void)_closeDB;
- (id)_dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3;
- (void)_databaseReset:(id)arg1;
- (void)_deviceLocking;
- (void)_editionUpdateBegin:(id)arg1;
- (void)_editionUpdateEnd:(id)arg1;
- (void)_openDB;
- (BOOL)closed;
- (void)dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id /* block */)arg2;
- (id)dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3;
- (void)dataForKeys:(struct GEOTileKeyList { }*)arg1 asyncHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)setClosed:(BOOL)arg1;
- (void)setExpirationRecords:(struct { unsigned int x1; double x2; }*)arg1 count:(unsigned int)arg2;

@end
