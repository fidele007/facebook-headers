/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, CALayer, UIImage, UILabel;

@interface FBCameraLivePreviewView : UIView {

	UIView* _cancelOverlayView;
	BOOL _enableVideo;
	UIImageView* _freezeImageView;
	UIView* _overlayView;
	BOOL _resizePreviewLayer;
	double _transitionProgress;
	BOOL _showInstructionLabelAtBottom;
	double _freezeImageRotationAngle;
	CALayer* _livePreviewLayer;
	UIImage* _freezeImage;
	UILabel* _captureInstructionsLabel;
	UILabel* _cancelSendHelpLabel;

}

@property (nonatomic,retain) CALayer * livePreviewLayer;                        //@synthesize livePreviewLayer=_livePreviewLayer - In the implementation block
@property (nonatomic,readonly) UIView * cancelOverlayView;                      //@synthesize cancelOverlayView=_cancelOverlayView - In the implementation block
@property (nonatomic,retain) UIImage * freezeImage;                             //@synthesize freezeImage=_freezeImage - In the implementation block
@property (nonatomic,readonly) UILabel * captureInstructionsLabel;              //@synthesize captureInstructionsLabel=_captureInstructionsLabel - In the implementation block
@property (nonatomic,readonly) UILabel * cancelSendHelpLabel;                   //@synthesize cancelSendHelpLabel=_cancelSendHelpLabel - In the implementation block
-(void)_updateLabelVisibility;
-(id)initWithFrame:(CGRect)arg1 enableVideo:(BOOL)arg2 overlayView:(id)arg3 resizePreviewLayer:(BOOL)arg4 showInstructionLabelAtBottom:(BOOL)arg5 ;
-(void)setFreezeImage:(UIImage *)arg1 ;
-(void)setLivePreviewLayer:(CALayer *)arg1 ;
-(void)setPreviewRotationAngle:(double)arg1 ;
-(void)setFreezeImageRotationAngle:(double)arg1 ;
-(CALayer *)livePreviewLayer;
-(UIView *)cancelOverlayView;
-(UIImage *)freezeImage;
-(UILabel *)captureInstructionsLabel;
-(UILabel *)cancelSendHelpLabel;
-(void)layoutSubviews;
-(void)setTransitionProgress:(double)arg1 ;
@end

