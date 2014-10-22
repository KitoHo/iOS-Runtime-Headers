/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKQuantity, HKQuantityType;

@interface HKQuantitySample : HKSample {
    HKQuantity *_quantity;
}

@property(readonly) HKQuantity * quantity;
@property(readonly) HKQuantityType * quantityType;

+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setQuantity:(id)arg1;
- (id)_validateConfiguration;
- (id)_valueDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantity;
- (id)quantityType;

@end
