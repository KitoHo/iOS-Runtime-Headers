/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {
    NSSet *_brailleKeys;
    NSBundle *_bundle;
    NSMutableDictionary *_displayInfoDict;
    NSArray *_eightDotCommands;
    NSArray *_sixDotCommands;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedManager;

- (id)_bundle;
- (id)_commandsFromBrailleInputMode:(int)arg1;
- (id)_eightDotCommands;
- (id)_sixDotCommands;
- (id)autorelease;
- (id)buttonNamesAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(long)arg2;
- (id)commandAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (id)commandForBrailleKey:(id)arg1;
- (void)configureWithDriverConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countForDisplayWithToken:(long)arg1;
- (void)dealloc;
- (id)driverIdentifierForDisplayWithToken:(long)arg1;
- (id)init;
- (id)inputIdentifierAtIndex:(unsigned int)arg1 forDisplayWithToken:(long)arg2;
- (id)modelIdentifierForDisplayWithToken:(long)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
