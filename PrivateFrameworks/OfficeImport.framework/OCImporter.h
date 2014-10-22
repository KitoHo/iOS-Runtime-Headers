/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData, NSString, NSURL, OCDReader, OITSUProgressContext, TCImportTracing;

@interface OCImporter : OCMapper {
    NSString *_docPassphrase;
    boolmTryAlternateReader;
    NSData *mData;
    OITSUProgressContext *mProgressContext;
    OCDReader *mReader;
    TCImportTracing *mTracing;
    NSURL *mURL;
}

@property(retain) NSString * docPassphrase;
@property(retain) OITSUProgressContext * progressContext;
@property(readonly) TCImportTracing * tracing;

+ (void)initialize;

- (void)dealloc;
- (id)displayName;
- (id)docPassphrase;
- (id)filename;
- (void)finalizeBackgroundTasksWithDocumentState:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isDocumentEncryptedUnsupportedVersion:(bool*)arg1 errorMessage:(id*)arg2;
- (bool)isDocumentEncryptedUnsupportedVersionHelper:(bool*)arg1 errorMessage:(id*)arg2 readError:(bool*)arg3;
- (bool)isXML;
- (id)progressContext;
- (void)setDocPassphrase:(id)arg1;
- (bool)setPassphrase:(id)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setURL:(id)arg1;
- (bool)start;
- (id)tracing;
- (bool)tryAlternateReader;

@end
