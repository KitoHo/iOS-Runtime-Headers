/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface ATSocket : NSObject <NSSecureCoding> {
    NSMutableArray *_delegates;
    int _descriptor;
    NSObject<OS_dispatch_queue> *_queue;
    long long _socketMode;
    NSObject<OS_dispatch_source> *_source;
    unsigned long long _suggestedBufferSize;
    id _userInfo;
}

@property int descriptor;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property long long socketMode;
@property unsigned long long suggestedBufferSize;
@property(retain) id userInfo;

+ (id)createBoundPair:(id[2])arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (void)close;
- (void)closeDescriptor;
- (int)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isOpen;
- (void)notifyHasDataAvailable:(id)arg1;
- (void)notifySocketDidClose;
- (bool)open;
- (id)queue;
- (int)recv:(char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)removeDelegate:(id)arg1;
- (int)send:(const char *)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3 error:(id*)arg4;
- (void)setDescriptor:(int)arg1;
- (void)setSocketMode:(long long)arg1;
- (void)setSuggestedBufferSize:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (long long)socketMode;
- (unsigned long long)suggestedBufferSize;
- (id)userInfo;
- (bool)writeAllData:(id)arg1 error:(id*)arg2;
- (void)writeData:(id)arg1 withCompletion:(id)arg2;

@end
