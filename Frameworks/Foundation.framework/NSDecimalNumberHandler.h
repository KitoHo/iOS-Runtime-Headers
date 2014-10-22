/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {
    unsigned int _scale : 16;
    unsigned int _raiseOnExactness : 1;
    unsigned int _raiseOnOverflow : 1;
    unsigned int _raiseOnUnderflow : 1;
    unsigned int _raiseOnDivideByZero : 1;
    unsigned int _roundingMode : 3;
    unsigned int _unused : 9;
    void *_reserved2;
    void *_reserved;
}

+ (id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(bool)arg3 raiseOnOverflow:(bool)arg4 raiseOnUnderflow:(bool)arg5 raiseOnDivideByZero:(bool)arg6;
+ (id)defaultDecimalNumberHandler;

- (void)encodeWithCoder:(id)arg1;
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(bool)arg3 raiseOnOverflow:(bool)arg4 raiseOnUnderflow:(bool)arg5 raiseOnDivideByZero:(bool)arg6;
- (unsigned long long)roundingMode;
- (short)scale;

@end
