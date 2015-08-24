/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMFReader : NSObject <MFReader> {
    unsigned int m_cursor;
    unsigned int m_length;
    const char *m_pBuffer;
    WMFPlayer *m_player;
    int m_recordsRead;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)checkBytesAvailable:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithWMFPlayer:(id)arg1;
- (int)moveDataCursor:(unsigned int)arg1;
- (int)play:(id)arg1;
- (int)playHeaders;
- (int)playRecord;
- (oneway void)release;

@end
