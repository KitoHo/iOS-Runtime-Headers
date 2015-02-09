/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMDCharacteristic, NSData;

@interface HMDCharacteristicWriteRequestTuple : NSObject {
    NSData *_authorizationData;
    HMDCharacteristic *_characteristic;
    id _value;
}

@property(readonly) NSData * authorizationData;
@property(readonly) HMDCharacteristic * characteristic;
@property(readonly) id value;

+ (id)tupleWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3;

- (void).cxx_destruct;
- (id)authorizationData;
- (id)characteristic;
- (id)value;

@end
