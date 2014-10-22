/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class <CECInterfaceDelegate>, NSDictionary;

@interface CECInterface : CoreRCInterface {
    struct CECFrame { 
        unsigned char blocks[16]; 
        unsigned int length : 5; 
        unsigned int reserved : 3; 
    unsigned short _addressMask;
    <CECInterfaceDelegate> *_delegate;
    } _lastReceivedFrame;
    bool_promiscMode;
}

@property(readonly) unsigned short addressMask;
@property <CECInterfaceDelegate> * delegate;
@property(readonly) bool isValid;
@property(readonly) struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; } lastReceivedFrame;
@property(readonly) bool promiscMode;
@property(readonly) NSDictionary * properties;

- (unsigned short)addressMask;
- (bool)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3;
- (id)delegate;
- (bool)errorIsNack:(id)arg1;
- (bool)isValid;
- (struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })lastReceivedFrame;
- (bool)pingTo:(unsigned char)arg1 acknowledged:(bool*)arg2 error:(id*)arg3;
- (bool)promiscMode;
- (id)properties;
- (void)receivedFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1;
- (bool)sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1 error:(id*)arg2;
- (bool)sendFrame:(struct CECFrame { unsigned char x1[16]; unsigned int x2 : 5; unsigned int x3 : 3; })arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (bool)sendMessage:(id)arg1 error:(id*)arg2;
- (bool)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3;
- (bool)setAddressMask:(unsigned short)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setPromiscMode:(bool)arg1 error:(id*)arg2;

@end
