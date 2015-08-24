/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoBakedThumbnails : NSObject {
    unsigned int _count;
    BOOL _dataIsMutable;
    int _format;
    BOOL _missingHeader;
    NSMutableDictionary *_options;
    BOOL _optionsAccessed;
    NSData *_optionsData;
    int _singleThumbnailImageLength;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
}

@property (nonatomic, readonly) unsigned int bitmapInfo;
@property (nonatomic, readonly) int bitsPerComponent;
@property (nonatomic, readonly) int bytesPerPixel;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageRect;
@property (nonatomic, readonly, retain) NSMutableDictionary *options;
@property (nonatomic, readonly, retain) NSData *optionsData;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;

+ (BOOL)saveBakedThumbnailsOfImages:(id)arg1 toFile:(id)arg2 format:(int)arg3 orientation:(int*)arg4 options:(id)arg5 delegate:(id)arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(int)arg2;

- (id)_thumbnailData;
- (unsigned int)bitmapInfo;
- (int)bitsPerComponent;
- (int)bytesPerPixel;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (int)format;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2;
- (id)initWithContentsOfFile:(id)arg1 format:(int)arg2 readOnly:(BOOL)arg3;
- (id)initWithData:(id)arg1 format:(int)arg2;
- (id)initWithData:(id)arg1 format:(int)arg2 readOnly:(BOOL)arg3;
- (id)initWithImages:(id)arg1 format:(int)arg2 orientation:(int*)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)options;
- (id)optionsData;
- (BOOL)saveToFile:(id)arg1;
- (id)serializedData;
- (struct CGSize { float x1; float x2; })size;
- (char *)thumbnailBytesAtIndex:(int)arg1;
- (id)thumbnailDataAtIndex:(int)arg1;
- (struct CGImage { }*)thumbnailImageAtIndex:(int)arg1;
- (unsigned long)thumbnailLength;
- (BOOL)writeBorderedThumbnailOfImage:(struct CGImage { }*)arg1 toBuffer:(void*)arg2 orientation:(int*)arg3 format:(int)arg4 formatInfo:(const struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; unsigned int x5; int x6; int x7; float x8[4]; float x9[4]; unsigned int x10; }*)arg5 delegate:(id)arg6;

@end
