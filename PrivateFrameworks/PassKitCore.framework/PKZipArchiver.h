/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKZipArchiver : NSObject {
}

+ (void)associateBOMCopier:(struct _BOMCopier { }*)arg1 withCompletionHandler:(id)arg2;
+ (void)disassociateBOMCopier:(struct _BOMCopier { }*)arg1;
+ (void)noteBOMCopier:(struct _BOMCopier { }*)arg1 succeeded:(bool)arg2;

- (void)unzipStream:(id)arg1 toPath:(id)arg2 completionHandler:(id)arg3;
- (id)zippedDataForURL:(id)arg1;

@end
