/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWrapper : NSObject <NSCoding> {
    id _contents;
    NSDictionary *_fileAttributes;
    NSString *_fileName;
    id _icon;
    id _moreVars;
    NSString *_preferredFileName;
}

@property (getter=isDirectory, readonly) BOOL directory;
@property (copy) NSDictionary *fileAttributes;
@property (readonly, copy) NSDictionary *fileWrappers;
@property (copy) NSString *filename;
@property (copy) NSString *preferredFilename;
@property (getter=isRegularFile, readonly) BOOL regularFile;
@property (readonly, copy) NSData *regularFileContents;
@property (readonly, copy) NSData *serializedRepresentation;
@property (getter=isSymbolicLink, readonly) BOOL symbolicLink;
@property (readonly, copy) NSURL *symbolicLinkDestinationURL;

+ (BOOL)_canSafelyMapFilesAtPath:(id)arg1;
+ (BOOL)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4;
+ (BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6;
+ (BOOL)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3;
+ (id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned int)arg5 error:(id*)arg6;
+ (id)_pathForURL:(id)arg1 reading:(BOOL)arg2 error:(id*)arg3;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2;
+ (void)_writeAttributes:(id)arg1 toURL:(id)arg2;
+ (void)initialize;

- (id)_addChild:(id)arg1 forUniqueFileName:(id)arg2;
- (void)_addParent:(id)arg1;
- (id)_attributesToWrite;
- (void)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2;
- (id)_fullDescription:(BOOL)arg1;
- (id)_init;
- (void)_initDirectoryContents;
- (id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5;
- (BOOL)_matchesItemKind:(id)arg1 modificationDate:(id)arg2;
- (id)_newImpl;
- (void)_observePreferredFileNameOfChild:(id)arg1;
- (BOOL)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned int)arg4 error:(id*)arg5;
- (void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2;
- (void)_removeParent:(id)arg1;
- (void)_resetFileModificationDate;
- (id)_uniqueFileNameOfChild:(id)arg1;
- (void)_updateDescendantFileNames;
- (BOOL)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(BOOL)arg4 didHardLinking:(BOOL*)arg5 error:(id*)arg6;
- (id)addFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileAttributes;
- (id)fileWrappers;
- (id)filename;
- (id)init;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)keyForFileWrapper:(id)arg1;
- (BOOL)matchesContentsOfURL:(id)arg1;
- (id)preferredFilename;
- (BOOL)readFromURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)regularFileContents;
- (void)removeFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (void)setFileAttributes:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (id)symbolicLinkDestinationURL;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;

@end
