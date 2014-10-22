/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <InfoDiagramCablingAnchorDelegate>, CAGradientLayer, CAShapeLayer;

@interface InfoDiagramCablingLayer : CALayer {
    boolisCompactWidth;
    boolswapCabling;
    CAShapeLayer *broadbandToWANInnerLineLayer;
    CAShapeLayer *broadbandToWANOuterLineLayer;
    <InfoDiagramCablingAnchorDelegate> *diagramAnchorPointDelegate;
    CAGradientLayer *internetGradientLayer;
    CAShapeLayer *internetInnerLineLayer;
    CAShapeLayer *internetOuterLineLayer;
    CAShapeLayer *swapArcArrowLayer;
    CAShapeLayer *swapArcLineLayer;
}

@property(retain) CAShapeLayer * broadbandToWANInnerLineLayer;
@property(retain) CAShapeLayer * broadbandToWANOuterLineLayer;
@property <InfoDiagramCablingAnchorDelegate> * diagramAnchorPointDelegate;
@property(retain) CAGradientLayer * internetGradientLayer;
@property(retain) CAShapeLayer * internetInnerLineLayer;
@property(retain) CAShapeLayer * internetOuterLineLayer;
@property bool isCompactWidth;
@property(retain) CAShapeLayer * swapArcArrowLayer;
@property(retain) CAShapeLayer * swapArcLineLayer;
@property bool swapCabling;

- (id)broadbandToWANInnerLineLayer;
- (id)broadbandToWANOuterLineLayer;
- (void)commonInit;
- (void)createPathForSublayer:(id)arg1;
- (void)dealloc;
- (id)diagramAnchorPointDelegate;
- (id)initNoWANLinkFirstFrame;
- (id)initNoWANLinkLastFrame;
- (id)internetGradientLayer;
- (id)internetInnerLineLayer;
- (id)internetOuterLineLayer;
- (bool)isCompactWidth;
- (void)layoutSublayers;
- (void)setBroadbandToWANInnerLineLayer:(id)arg1;
- (void)setBroadbandToWANOuterLineLayer:(id)arg1;
- (void)setDiagramAnchorPointDelegate:(id)arg1;
- (void)setInternetGradientLayer:(id)arg1;
- (void)setInternetInnerLineLayer:(id)arg1;
- (void)setInternetOuterLineLayer:(id)arg1;
- (void)setIsCompactWidth:(bool)arg1;
- (void)setSwapArcArrowLayer:(id)arg1;
- (void)setSwapArcLineLayer:(id)arg1;
- (void)setSwapCabling:(bool)arg1;
- (id)swapArcArrowLayer;
- (id)swapArcLineLayer;
- (bool)swapCabling;

@end
