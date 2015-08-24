/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@interface NARWorkspaceInfo : NSObject <NSSecureCoding> {
    NSUUID *_UUID;
    NSArray *_applications;
    NSNumber *_sequenceNumber;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, readonly) NSArray *applications;
@property (nonatomic, readonly) NSNumber *sequenceNumber;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)applications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApplications:(id)arg1 UUID:(id)arg2 sequenceNumber:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)sequenceNumber;

@end
