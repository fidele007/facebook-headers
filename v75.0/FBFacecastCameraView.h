/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, FBSurfaceView, FBVideoProcessor, FBVideoProcessorConfig, FBFacecastFlippableView, UIView, FBWebImageView, FBFacecastCameraPointOfInterestView;

@interface FBFacecastCameraView : UIView {

	CALayer* _previewLayer;
	FBSurfaceView* _previewView;
	FBVideoProcessor* _copyProcessor;
	FBVideoProcessorConfig* _copyProcessorConfig;
	CGSize _videoSize;
	atomic<FBSize> _videoBufferSize;
	long long _cameraOrientation;
	double _videoProcessorRotationRadians;
	BOOL _dimmed;
	long long _position;
	FBFacecastFlippableView* _previewContainer;
	UIView* _previewLayerContainer;
	FBWebImageView* _simulatedPreview;
	FBFacecastCameraPointOfInterestView* _pointOfInterestView;
	GLKMatrix4 _videoProcessorTransform;

}

@property (nonatomic,retain) FBFacecastFlippableView * previewContainer;                             //@synthesize previewContainer=_previewContainer - In the implementation block
@property (nonatomic,retain) UIView * previewLayerContainer;                                         //@synthesize previewLayerContainer=_previewLayerContainer - In the implementation block
@property (nonatomic,retain) FBWebImageView * simulatedPreview;                                      //@synthesize simulatedPreview=_simulatedPreview - In the implementation block
@property (assign,nonatomic) GLKMatrix4 videoProcessorTransform;                                     //@synthesize videoProcessorTransform=_videoProcessorTransform - In the implementation block
@property (nonatomic,retain) FBFacecastCameraPointOfInterestView * pointOfInterestView;              //@synthesize pointOfInterestView=_pointOfInterestView - In the implementation block
@property (assign,nonatomic) long long position;                                                     //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL canBeginFlipTransaction; 
@property (assign,nonatomic) BOOL dimmed;                                                            //@synthesize dimmed=_dimmed - In the implementation block
-(GLKMatrix4)videoProcessorTransform;
-(void)setPreviewLayerContainer:(UIView *)arg1 ;
-(UIView *)previewLayerContainer;
-(FBFacecastFlippableView *)previewContainer;
-(FBFacecastCameraPointOfInterestView *)pointOfInterestView;
-(void)setPointOfInterestView:(FBFacecastCameraPointOfInterestView *)arg1 ;
-(double)_rotationRadiansNeededForOutputVideoOrientation:(long long)arg1 ;
-(id)initWithCaptureSession:(id)arg1 orientation:(long long)arg2 videoSize:(CGSize)arg3 userSession:(id)arg4 videoPreviewLayer:(id)arg5 ;
-(BOOL)canBeginFlipTransaction;
-(void)beginFlipTransaction;
-(void)commitFlipTransactionToPosition:(long long)arg1 ;
-(void)showPointOfInterestIndicatorAtPoint:(CGPoint)arg1 ;
-(CGSize)videoBufferSize;
-(void)displayVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputVideoOrientation:(long long)arg2 ;
-(void)setPreviewContainer:(FBFacecastFlippableView *)arg1 ;
-(FBWebImageView *)simulatedPreview;
-(void)setSimulatedPreview:(FBWebImageView *)arg1 ;
-(void)setVideoProcessorTransform:(GLKMatrix4)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(BOOL)isDimmed;
-(void)setDimmed:(BOOL)arg1 ;
-(void)setCameraOrientation:(long long)arg1 ;
-(BOOL)dimmed;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
@end

