/* Generated by RuntimeBrowser
   Image: /usr/lib/libtzupdate.dylib
 */

@interface TZPreferencesController : NSObject

@property (nonatomic, readonly) int loggingLevel;
@property (nonatomic, readonly) BOOL updatesEnabled;

+ (id)sharedPreferencesController;

- (id)init;
- (int)loggingLevel;
- (void)preferencesChanged:(id)arg1;
- (BOOL)updatesEnabled;

@end
