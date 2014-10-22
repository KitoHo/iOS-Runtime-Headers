/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationInfoData, PDMediaNode;

@interface PDAnimationInfo : NSObject {
    PDAnimationInfoData *mEntrance;
    PDAnimationInfoData *mExit;
    PDAnimationInfoData *mMedia;
    PDMediaNode *mediaNode;
}

@property(retain) PDAnimationInfoData * mediaData;
@property(retain) PDMediaNode * mediaNode;

- (void)dealloc;
- (id)entranceData;
- (id)exitData;
- (id)mediaData;
- (id)mediaNode;
- (void)setEntranceData:(id)arg1;
- (void)setExitData:(id)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaNode:(id)arg1;

@end
