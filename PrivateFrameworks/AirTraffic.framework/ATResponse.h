/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@class NSError;

@interface ATResponse : ATMessage <NSSecureCoding> {
    NSError *_error;
    bool_partial;
}

@property(retain) NSError * error;
@property(getter=isPartial) bool partial;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ATPMessage;
- (id)ATPMessageWithPayloadData:(id)arg1;
- (id)additionalDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithATPMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPartial;
- (void)setError:(id)arg1;
- (void)setPartial:(bool)arg1;

@end
