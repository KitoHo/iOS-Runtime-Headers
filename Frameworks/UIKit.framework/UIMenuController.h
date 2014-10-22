/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    long long _arrowDirection;
    } _targetRect;
}

@property long long arrowDirection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuFrame;
@property(copy) NSArray * menuItems;
@property(getter=isMenuVisible) bool menuVisible;
@property(readonly) Class superclass;

+ (id)sharedMenuController;

- (bool)_menuHidden;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (bool)_updateAnimated:(bool)arg1 checkVisible:(bool)arg2;
- (void)_windowWillRotate:(id)arg1;
- (long long)arrowDirection;
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)isMenuVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuFrame;
- (id)menuItems;
- (void)setArrowDirection:(long long)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setMenuVisible:(bool)arg1 animated:(bool)arg2;
- (void)setMenuVisible:(bool)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)update;

@end
