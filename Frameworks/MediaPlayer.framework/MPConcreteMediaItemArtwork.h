/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPArtworkCatalog;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _bounds;
    MPArtworkCatalog *_catalog;
}

@property(readonly) MPArtworkCatalog * artworkCatalog;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)imageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithArtworkCatalog:(id)arg1;

@end
