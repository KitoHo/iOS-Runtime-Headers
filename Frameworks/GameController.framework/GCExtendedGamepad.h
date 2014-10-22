/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class GCController, GCControllerButtonInput, GCControllerDirectionPad;

@interface GCExtendedGamepad : NSObject {
}

@property(readonly) GCControllerButtonInput * buttonA;
@property(readonly) GCControllerButtonInput * buttonB;
@property(readonly) GCControllerButtonInput * buttonX;
@property(readonly) GCControllerButtonInput * buttonY;
@property(readonly) GCController * controller;
@property(readonly) GCControllerDirectionPad * dpad;
@property(readonly) GCControllerButtonInput * leftShoulder;
@property(readonly) GCControllerDirectionPad * leftThumbstick;
@property(readonly) GCControllerButtonInput * leftTrigger;
@property(readonly) GCControllerButtonInput * rightShoulder;
@property(readonly) GCControllerDirectionPad * rightThumbstick;
@property(readonly) GCControllerButtonInput * rightTrigger;
@property(copy) id valueChangedHandler;

+ (bool)supportsUSBInterfaceProtocol:(unsigned char)arg1;

- (id)button0;
- (id)button1;
- (id)button2;
- (id)button3;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (void)didChangeValueForElement:(id)arg1;
- (id)dpad;
- (id)initWithController:(id)arg1;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)leftShoulder;
- (id)leftThumbstick;
- (id)leftTrigger;
- (id)rightShoulder;
- (id)rightThumbstick;
- (id)rightTrigger;
- (id)saveSnapshot;
- (void)setButton:(id)arg1 pressed:(bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;

@end
