/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedTask : NSObject {
    PASampleAggregator *_aggregator;
    NSMutableDictionary *_binaryImages;
}

@property (readonly) PASampleTimeSeriesDataStore *sampleStore;

- (void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned int)arg2;
- (id)aggregator;
- (int)compare:(id)arg1;
- (id)copyDescriptionForDisplayAddress:(unsigned long long)arg1 withSymbolicationAddress:(unsigned long long)arg2 inSymbolHandle:(id)arg3 displayFrameAddress:(BOOL)arg4;
- (void)dealloc;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1;
- (unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 andUpdateIfLower:(BOOL)arg2;
- (id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned int)arg3;
- (void)printBinaryImagesToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)printToStream:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (id)sampleStore;
- (void)updateBinaryLocationIfLower:(id)arg1;

@end
