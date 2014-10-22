/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand {
}

@property(copy) NSNumber * getRoute;

+ (id)getNavigationStatus;
+ (id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)getRoute;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setGetRoute:(id)arg1;

@end
