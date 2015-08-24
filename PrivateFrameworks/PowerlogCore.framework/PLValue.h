/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLValue : NSObject {
    short _formatter;
    NSString *_unit;
    id _value;
}

@property short formatter;
@property (readonly) NSNumberFormatter *numberFormatter;
@property (nonatomic, retain) NSString *unit;
@property (nonatomic, retain) id value;

+ (id)formattedStringForDate:(id)arg1;
+ (BOOL)isFormater:(short)arg1 validForObject:(id)arg2;
+ (void)resetTimestampFormaterTimezone;
+ (id)valueWithBool:(BOOL)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithDate:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithDouble:(double)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithLong:(long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithLongLong:(long long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithNumber:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithString:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithTimeIntervalSince1970:(double)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithUnsignedLong:(unsigned long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithUnsignedLongLong:(unsigned long long)arg1 withUnit:(id)arg2 withFormat:(short)arg3;
+ (id)valueWithValue:(id)arg1 withUnit:(id)arg2 withFormat:(short)arg3;

- (void).cxx_destruct;
- (BOOL)boolValue;
- (int)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (double)doubleValue;
- (short)formatter;
- (id)init;
- (long long)longLongValue;
- (long)longValue;
- (id)numberFormatter;
- (void)setFormatter:(short)arg1;
- (void)setUnit:(id)arg1;
- (void)setValue:(id)arg1;
- (double)timeIntervalSince1970;
- (id)unit;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long)unsignedLongValue;
- (id)value;

@end
