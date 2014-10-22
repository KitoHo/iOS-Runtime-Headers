/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity {
    NSString *_builtinActivityType;
    SLComposeViewController *_socialComposeViewController;
}

@property(copy) NSString * builtinActivityType;
@property(retain) SLComposeViewController * socialComposeViewController;

+ (long long)activityCategory;

- (bool)_canBeExcludedByActivityViewController:(id)arg1;
- (void)_cleanup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (id)activityType;
- (id)activityViewController;
- (id)builtinActivityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithActivityType:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setBuiltinActivityType:(id)arg1;
- (void)setSocialComposeViewController:(id)arg1;
- (id)socialComposeViewController;

@end
