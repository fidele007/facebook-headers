/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <SceneKit/SCNView.h>

@protocol MQCameraConfigProtocol;
@class SCNPlane, SCNNode, MQDisplaceRenderer, MQSkinSmoother, SCNMaterial, MQEffectBase;

@interface MQView3D : SCNView {

	SCNPlane* videoPlane;
	SCNNode* videoNode;
	double videoPlaneWidth;
	double videoPlaneHeight;
	SCNMatrix4 projection;
	double cameraFocal;
	SCNMatrix4 convertMatrix;
	MQDisplaceRenderer* _displace;
	MQSkinSmoother* _skinSmoother;
	SCNNode* _container;
	SCNNode* _videoPlaneSpace;
	SCNNode* _centerContainer;
	SCNNode* _cameraNode;
	SCNMaterial* _videoMaterial;
	SCNMaterial* _videoColorMultiplyMaterial;
	SCNMaterial* _saturationMaterial;
	SCNMaterial* _videoGrayScaleNoiseMaterial;
	SCNMaterial* _videoGrayScaleMaterial;
	SCNMaterial* _videoInvertMaterial;
	SCNMaterial* _videoMaskMaterial;
	SCNMaterial* _videoDisplaceMaterial;
	SCNMaterial* _videoNightVisionMaterial;
	SCNMaterial* _videoLUTMaterial;
	long long _projectionScaleMode;
	id<MQCameraConfigProtocol> _cameraSettings;
	MQEffectBase* _currentEffect;
	MQEffectBase* _effect;

}

@property (nonatomic,retain) MQEffectBase * effect;                                  //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) MQDisplaceRenderer * displace;                          //@synthesize displace=_displace - In the implementation block
@property (nonatomic,retain) MQSkinSmoother * skinSmoother;                          //@synthesize skinSmoother=_skinSmoother - In the implementation block
@property (nonatomic,retain) SCNNode * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) SCNNode * videoPlaneSpace;                              //@synthesize videoPlaneSpace=_videoPlaneSpace - In the implementation block
@property (nonatomic,retain) SCNNode * centerContainer;                              //@synthesize centerContainer=_centerContainer - In the implementation block
@property (nonatomic,retain) SCNNode * cameraNode;                                   //@synthesize cameraNode=_cameraNode - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoMaterial;                            //@synthesize videoMaterial=_videoMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoColorMultiplyMaterial;               //@synthesize videoColorMultiplyMaterial=_videoColorMultiplyMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * saturationMaterial;                       //@synthesize saturationMaterial=_saturationMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoGrayScaleNoiseMaterial;              //@synthesize videoGrayScaleNoiseMaterial=_videoGrayScaleNoiseMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoGrayScaleMaterial;                   //@synthesize videoGrayScaleMaterial=_videoGrayScaleMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoInvertMaterial;                      //@synthesize videoInvertMaterial=_videoInvertMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoMaskMaterial;                        //@synthesize videoMaskMaterial=_videoMaskMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoDisplaceMaterial;                    //@synthesize videoDisplaceMaterial=_videoDisplaceMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoNightVisionMaterial;                 //@synthesize videoNightVisionMaterial=_videoNightVisionMaterial - In the implementation block
@property (nonatomic,retain) SCNMaterial * videoLUTMaterial;                         //@synthesize videoLUTMaterial=_videoLUTMaterial - In the implementation block
@property (assign,nonatomic) long long projectionScaleMode;                          //@synthesize projectionScaleMode=_projectionScaleMode - In the implementation block
@property (nonatomic,retain) id<MQCameraConfigProtocol> cameraSettings;              //@synthesize cameraSettings=_cameraSettings - In the implementation block
@property (nonatomic,retain) MQEffectBase * currentEffect;                           //@synthesize currentEffect=_currentEffect - In the implementation block
-(id)customVideoMaterials;
-(SCNNode *)videoPlaneSpace;
-(void)setVideoPlaneSpace:(SCNNode *)arg1 ;
-(SCNNode *)centerContainer;
-(void)setCenterContainer:(SCNNode *)arg1 ;
-(void)updateProjection;
-(void)initCamera;
-(SCNMaterial *)videoDisplaceMaterial;
-(SCNMaterial *)videoNightVisionMaterial;
-(SCNMaterial *)videoLUTMaterial;
-(void)hideContainer;
-(void)showContainer;
-(BOOL)closeMouth:(id)arg1 isHighPoly:(BOOL)arg2 ;
-(void)drawFaces:(id)arg1 numDetectedFaces:(long long)arg2 ;
-(void)setVideoDisplaceMaterial:(SCNMaterial *)arg1 ;
-(void)setVideoNightVisionMaterial:(SCNMaterial *)arg1 ;
-(void)setVideoLUTMaterial:(SCNMaterial *)arg1 ;
-(long long)projectionScaleMode;
-(void)setProjectionScaleMode:(long long)arg1 ;
-(MQEffectBase *)currentEffect;
-(void)postConstruct;
-(void)setVideoMaterial:(SCNMaterial *)arg1 ;
-(void)setVideoGrayScaleNoiseMaterial:(SCNMaterial *)arg1 ;
-(void)setVideoGrayScaleMaterial:(SCNMaterial *)arg1 ;
-(void)setSaturationMaterial:(SCNMaterial *)arg1 ;
-(void)setVideoInvertMaterial:(SCNMaterial *)arg1 ;
-(void)setVideoColorMultiplyMaterial:(SCNMaterial *)arg1 ;
-(void)setVideoMaskMaterial:(SCNMaterial *)arg1 ;
-(void)updateVideoMaterial;
-(SCNMaterial *)videoMaskMaterial;
-(SCNMaterial *)videoColorMultiplyMaterial;
-(SCNMaterial *)saturationMaterial;
-(SCNMaterial *)videoGrayScaleNoiseMaterial;
-(SCNMaterial *)videoGrayScaleMaterial;
-(SCNMaterial *)videoInvertMaterial;
-(SCNMaterial *)videoMaterial;
-(void)onEnterFrame:(double)arg1 ;
-(void)drawFace:(id)arg1 ;
-(void)setDisplace:(MQDisplaceRenderer *)arg1 ;
-(void)setSkinSmoother:(MQSkinSmoother *)arg1 ;
-(id<MQCameraConfigProtocol>)cameraSettings;
-(MQDisplaceRenderer *)displace;
-(MQSkinSmoother *)skinSmoother;
-(void)setCameraSettings:(id<MQCameraConfigProtocol>)arg1 ;
-(void)setCurrentEffect:(MQEffectBase *)arg1 ;
-(SCNNode *)container;
-(void)setContainer:(SCNNode *)arg1 ;
-(void)setEffect:(MQEffectBase *)arg1 ;
-(MQEffectBase *)effect;
-(SCNNode *)cameraNode;
-(void)setCameraNode:(SCNNode *)arg1 ;
@end

