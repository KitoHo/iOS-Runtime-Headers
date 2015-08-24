/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADArcToPathElement : OADPathElement {
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mAngleLength;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mSemiaxes;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mStartAngle;
}

- (id).cxx_construct;
- (struct OADAdjustCoord { BOOL x1; int x2; })angleLength;
- (id)initWithSemiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg1 startAngle:(struct OADAdjustCoord { BOOL x1; int x2; })arg2 angleLength:(struct OADAdjustCoord { BOOL x1; int x2; })arg3;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })semiaxes;
- (struct OADAdjustCoord { BOOL x1; int x2; })startAngle;

@end
