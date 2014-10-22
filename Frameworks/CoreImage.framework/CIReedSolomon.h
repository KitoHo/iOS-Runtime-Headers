/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIReedSolomon : NSObject {
    int _cachedGeneratorNum;
    struct { int *x1; int x2; } *_cachedGenerators;
    int _expTable[256];
    int _logTable[256];
    int _memoryCapacity;
}

- (int)Degree:(struct { int *x1; int x2; })arg1;
- (int)Exp:(int)arg1;
- (int)addOrSubtract:(int)arg1 with:(int)arg2;
- (struct { int *x1; int x2; }*)addOrSubtractPoly:(struct { int *x1; int x2; }*)arg1 with:(struct { int *x1; int x2; }*)arg2;
- (struct { int *x1; int x2; }*)buildGenerator:(int)arg1;
- (void)clearPoly:(struct { int *x1; int x2; }*)arg1;
- (int*)coefficients:(struct { int *x1; int x2; })arg1;
- (struct { int *x1; int x2; }*)copyPoly:(struct { int *x1; int x2; }*)arg1;
- (struct { int *x1; int x2; }*)createMonomial:(int)arg1 coefficient:(int)arg2;
- (void)dealloc;
- (struct { int *x1; int x2; }*)divide:(struct { int *x1; int x2; }*)arg1 by:(struct { int *x1; int x2; }*)arg2;
- (bool)encode:(int*)arg1 length:(int)arg2 bytes:(int)arg3;
- (bool)fillPoly:(struct { int *x1; int x2; }*)arg1 coefficients:(int*)arg2 length:(int)arg3;
- (id)initReedSolomon;
- (int)inverse:(int)arg1;
- (bool)isZero:(struct { int *x1; int x2; })arg1;
- (int)multiply:(int)arg1 with:(int)arg2;
- (struct { int *x1; int x2; }*)multiplyByMonomial:(struct { int *x1; int x2; }*)arg1 degree:(int)arg2 coefficient:(int)arg3;
- (struct { int *x1; int x2; }*)multiplyPoly:(struct { int *x1; int x2; }*)arg1 with:(struct { int *x1; int x2; }*)arg2;
- (int)polyCoefficient:(struct { int *x1; int x2; }*)arg1 degree:(int)arg2;

@end
