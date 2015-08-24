/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUMutableUserActivityContext : MPUUserActivityContext {
    NSMutableArray *_containerItems;
}

@property (nonatomic, copy) NSArray *containerItems;
@property (nonatomic) int originatorType;
@property (nonatomic) int originatorVersion;

- (void).cxx_destruct;
- (void)addContainerItem:(id)arg1;
- (id)containerItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2;
- (void)removeContainerItem:(id)arg1;
- (void)setContainerItems:(id)arg1;
- (void)setOriginatorType:(int)arg1;
- (void)setOriginatorVersion:(int)arg1;

@end
