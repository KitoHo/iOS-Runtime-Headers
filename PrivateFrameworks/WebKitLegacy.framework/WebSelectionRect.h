/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebSelectionRect : NSObject <NSCopying> {
    BOOL m_containsEnd;
    BOOL m_containsStart;
    BOOL m_isFirstOnLine;
    BOOL m_isHorizontal;
    BOOL m_isInFixedPosition;
    BOOL m_isLastOnLine;
    BOOL m_isLineBreak;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_rect;
    int m_writingDirection;
}

@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL isFirstOnLine;
@property (nonatomic) BOOL isHorizontal;
@property (nonatomic) BOOL isInFixedPosition;
@property (nonatomic) BOOL isLastOnLine;
@property (nonatomic) BOOL isLineBreak;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rect;
@property (nonatomic) int writingDirection;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })endEdge:(id)arg1;
+ (id)selectionRect;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })startEdge:(id)arg1;

- (BOOL)containsEnd;
- (BOOL)containsStart;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (BOOL)isFirstOnLine;
- (BOOL)isHorizontal;
- (BOOL)isInFixedPosition;
- (BOOL)isLastOnLine;
- (BOOL)isLineBreak;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(BOOL)arg1;
- (void)setContainsStart:(BOOL)arg1;
- (void)setIsFirstOnLine:(BOOL)arg1;
- (void)setIsHorizontal:(BOOL)arg1;
- (void)setIsInFixedPosition:(BOOL)arg1;
- (void)setIsLastOnLine:(BOOL)arg1;
- (void)setIsLineBreak:(BOOL)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setWritingDirection:(int)arg1;
- (int)writingDirection;

@end
