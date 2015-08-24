/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCImporter : OCMapper {
    NSString *_docPassphrase;
    NSData *mData;
    OITSUProgressContext *mProgressContext;
    OCDReader *mReader;
    TCImportTracing *mTracing;
    BOOL mTryAlternateReader;
    NSURL *mURL;
}

@property (nonatomic, retain) NSString *docPassphrase;
@property (retain) OITSUProgressContext *progressContext;
@property (nonatomic, readonly) TCImportTracing *tracing;

+ (void)initialize;

- (void)dealloc;
- (id)displayName;
- (id)docPassphrase;
- (id)filename;
- (void)finalizeBackgroundTasksWithDocumentState:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL*)arg1 errorMessage:(id*)arg2;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL*)arg1 errorMessage:(id*)arg2 readError:(BOOL*)arg3;
- (BOOL)isXML;
- (id)progressContext;
- (void)setDocPassphrase:(id)arg1;
- (BOOL)setPassphrase:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setURL:(id)arg1;
- (BOOL)start;
- (id)tracing;
- (BOOL)tryAlternateReader;

@end
