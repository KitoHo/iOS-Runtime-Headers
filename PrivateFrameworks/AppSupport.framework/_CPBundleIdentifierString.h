/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface _CPBundleIdentifierString : NSString {
    NSString *_bundleIdentifierOrProcessName;
    NSString *_executablePath;
    BOOL _isProcessName;
}

- (id)_initWithExecutablePath:(id)arg1;
- (BOOL)_isProcessName;
- (void)_loadBundleIdentifierOrProcessName;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)length;

@end
