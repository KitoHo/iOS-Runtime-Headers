/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
 */

@class NSNumber, NSString;

@interface LTEAudioDevice : NSObject {
    NSNumber *_deviceID;
    NSString *_deviceName;
    bool_inputAvailable;
    bool_isLineIn;
    bool_outputAvailable;
}

@property(readonly) NSNumber * deviceID;
@property(readonly) NSString * deviceName;
@property(readonly) bool inputAvailable;
@property(readonly) bool outputAvailable;

- (void)createName;
- (void)createNameForScope:(unsigned int)arg1;
- (void)dealloc;
- (id)deviceID;
- (id)deviceName;
- (unsigned long long)hash;
- (id)initWithDeviceID:(id)arg1;
- (bool)inputAvailable;
- (bool)isEqual:(id)arg1;
- (bool)isSomethingConnectedToJack;
- (bool)isStreamAvailableForScope:(unsigned int)arg1;
- (bool)isValidDevice;
- (bool)isValidInputDevice;
- (bool)outputAvailable;

@end
