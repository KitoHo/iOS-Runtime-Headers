/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSOrderedSet, NSString, TDPNGAsset;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _alignmentRect;
    bool_allowsMultiPassEncoding;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property(retain) NSString * alignmentRectString;
@property bool allowsMultiPassEncoding;
@property(retain) TDPNGAsset * asset;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primitiveAlignmentRect;
@property(retain) NSOrderedSet * slices;

+ (void)initialize;

- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; })_edgeMetricsForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originalRenditionSize:(struct { int x1; int x2; })arg2 newRenditionSize:(struct { int x1; int x2; })arg3;
- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (id)_sliceRectanglesForRenditionSize:(struct { int x1; int x2; })arg1;
- (id)_slicesToUseForCSI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (bool)allowsMultiPassEncoding;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)awakeFromFetch;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primitiveAlignmentRect;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAllowsMultiPassEncoding:(bool)arg1;
- (void)setPrimitiveAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
