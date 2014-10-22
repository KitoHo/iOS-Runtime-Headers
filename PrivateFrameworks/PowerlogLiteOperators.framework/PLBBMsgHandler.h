/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSData, NSDate, NSNumber, PLAgent;

@interface PLBBMsgHandler : NSObject {
    PLAgent *_agent;
    NSDate *_apTimestamp;
    NSDate *_calibratedTimestamp;
    NSDate *_date;
    NSData *_rawData;
    NSNumber *_seqNum;
    unsigned int _ticksInGPSONState;
    unsigned int _ticksInGoodState;
    double _timeCalibration;
    NSDate *_timestamp;
}

@property(retain) PLAgent * agent;
@property(retain,readonly) NSDate * apTimestamp;
@property(retain,readonly) NSDate * calibratedTimestamp;
@property(retain) NSDate * date;
@property(retain) NSData * rawData;
@property(retain) NSNumber * seqNum;
@property(readonly) unsigned int ticksInGPSONState;
@property(readonly) unsigned int ticksInGoodState;
@property double timeCalibration;
@property(retain,readonly) NSDate * timestamp;

+ (id)getMsgHandler;

- (void).cxx_destruct;
- (id)agent;
- (id)apTimestamp;
- (id)calibratedTimestamp;
- (id)date;
- (id)decodeMsgHeader;
- (void)handleMsg:(id)arg1 forAgent:(id)arg2;
- (id)init;
- (id)rawData;
- (void)registerWithHandlerAs:(id)arg1 forType:(unsigned long long)arg2;
- (id)seqNum;
- (void)setAgent:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setRawData:(id)arg1;
- (void)setSeqNum:(id)arg1;
- (void)setTimeCalibration:(double)arg1;
- (unsigned int)ticksInGPSONState;
- (unsigned int)ticksInGoodState;
- (double)timeCalibration;
- (id)timestamp;

@end
