/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRService : NSObject <NSSecureCoding> {
    TRAdvertisingInfo *_advertisingInfo;
    NSString *_name;
    int _uniqueID;
}

@property (nonatomic, readonly) TRAdvertisingInfo *advertisingInfo;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int uniqueID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithName:(id)arg1 uniqueID:(int)arg2 advertisingInfo:(id)arg3;
- (id)advertisingInfo;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (int)uniqueID;

@end
