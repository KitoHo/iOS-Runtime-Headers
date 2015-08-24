/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRunAction : SKAction {
    SKAction *_action;
    NSString *_actionKey;
    BOOL _fired;
    BOOL _runOnSubSprite;
    NSString *_subSpriteKey;
    BOOL _waitForKeyedAction;
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;

@end
