/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedViewControllerRestorableState : NSObject <NSCoding> {
    NSArray *_centerAssetFrames;
    NSArray *_centerAssetUUIDs;
    NSURL *_centerSectionEntryURIRepresentation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _centerSectionFrame;
    struct CGSize { 
        float width; 
        float height; 
    } _collectionViewSize;
    NSDate *_date;
    BOOL _scrolledToNewest;
}

@property (nonatomic, copy) NSArray *centerAssetFrames;
@property (nonatomic, copy) NSArray *centerAssetUUIDs;
@property (nonatomic, copy) NSURL *centerSectionEntryURIRepresentation;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } centerSectionFrame;
@property (nonatomic) struct CGSize { float x1; float x2; } collectionViewSize;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) BOOL scrolledToNewest;

- (void).cxx_destruct;
- (id)centerAssetFrames;
- (id)centerAssetUUIDs;
- (id)centerSectionEntryURIRepresentation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })centerSectionFrame;
- (struct CGSize { float x1; float x2; })collectionViewSize;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)scrolledToNewest;
- (void)setCenterAssetFrames:(id)arg1;
- (void)setCenterAssetUUIDs:(id)arg1;
- (void)setCenterSectionEntryURIRepresentation:(id)arg1;
- (void)setCenterSectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCollectionViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDate:(id)arg1;
- (void)setScrolledToNewest:(BOOL)arg1;

@end
