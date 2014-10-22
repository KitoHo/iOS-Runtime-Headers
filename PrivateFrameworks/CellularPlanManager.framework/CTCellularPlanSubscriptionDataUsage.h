/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@class NSString;

@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding> {
    double _dataCapacity;
    NSString *_dataCategory;
    double _dataUsed;
}

@property(readonly) double dataCapacity;
@property(readonly) NSString * dataCategory;
@property(readonly) double dataUsed;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dataCapacity;
- (id)dataCategory;
- (double)dataUsed;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 andDataUsed:(int)arg2 andDataCapacity:(int)arg3;
- (id)initWithCoder:(id)arg1;

@end
