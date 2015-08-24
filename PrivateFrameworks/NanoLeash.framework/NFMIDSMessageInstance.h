/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
 */

@interface NFMIDSMessageInstance : NSObject {
    id /* block */ _retryAction;
    int _retryCount;
    double _retryInterval;
}

@property (nonatomic, copy) id /* block */ retryAction;
@property (nonatomic) int retryCount;
@property (nonatomic) double retryInterval;

+ (id)newMessageInstanceWithAction:(id /* block */)arg1 retryCount:(int)arg2 retryInterval:(double)arg3;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)retryAction;
- (int)retryCount;
- (double)retryInterval;
- (void)setRetryAction:(id /* block */)arg1;
- (void)setRetryCount:(int)arg1;
- (void)setRetryInterval:(double)arg1;

@end
