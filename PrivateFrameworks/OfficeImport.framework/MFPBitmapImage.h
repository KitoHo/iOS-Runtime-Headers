/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData, OITSUImage;

@interface MFPBitmapImage : MFPImage {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    } mPixelSize;
    } mPointSize;
}

- (id).cxx_construct;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 unit:(int)arg3 effect:(id)arg4;
- (id)initWithBitmapData:(id)arg1;
- (id)phoneImage;
- (struct CGSize { double x1; double x2; })pixelSize;
- (struct CGSize { double x1; double x2; })pointSize;

@end
