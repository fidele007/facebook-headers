/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCameraComponentModelManager.h>
#import <Facebook/FBCameraComponentModelManagerInternal.h>

@protocol FBCaptureSessionControllerFBCaptureCameraControllerFBCapturePerformanceTrackerController, FBVideoCreativeToolsApplier;
@class CKComponentHostingView, FBCameraComponentModelChangedListenerAnnouncer, FBProfileUnifiedCameraModel, FBCameraComponentModel;

@interface FBProfileUnifiedCameraComponentModelManager : NSObject <FBCameraComponentModelManager, FBCameraComponentModelManagerInternal> {

	CKComponentHostingView* _componentHostingView;
	id<FBCaptureSessionController><FBCaptureCameraController><FBCapturePerformanceTrackerController> _captureManager;
	id<FBVideoCreativeToolsApplier> _filterHandler;
	FBCameraComponentModelChangedListenerAnnouncer* _modelChangedAnnouncer;
	FBProfileUnifiedCameraModel* _profileUnifiedCameraModel;

}

@property (nonatomic,retain) FBCameraComponentModel * baseCameraModel; 
@property (nonatomic,retain) FBCameraComponentModelChangedListenerAnnouncer * modelChangedAnnouncer;                                                       //@synthesize modelChangedAnnouncer=_modelChangedAnnouncer - In the implementation block
@property (nonatomic,retain) FBProfileUnifiedCameraModel * profileUnifiedCameraModel;                                                                      //@synthesize profileUnifiedCameraModel=_profileUnifiedCameraModel - In the implementation block
@property (nonatomic,retain) id<FBCaptureSessionController><FBCaptureCameraController><FBCapturePerformanceTrackerController> captureManager;              //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) id<FBVideoCreativeToolsApplier> filterHandler;                                                                                //@synthesize filterHandler=_filterHandler - In the implementation block
-(void)setComponentHostingView:(id)arg1 ;
-(id)initWithProfileUnifiedCameraModel:(id)arg1 ;
-(void)setCaptureManager:(id<FBCaptureSessionController><FBCaptureCameraController><FBCapturePerformanceTrackerController>)arg1 ;
-(id<FBCaptureSessionController><FBCaptureCameraController><FBCapturePerformanceTrackerController>)captureManager;
-(id<FBVideoCreativeToolsApplier>)filterHandler;
-(void)setVideoKeyFrame:(id)arg1 ;
-(void)setStickerOverlay:(id)arg1 ;
-(void)setIsLoadingFrame:(BOOL)arg1 ;
-(void)setTeamSelectionExists:(BOOL)arg1 ;
-(void)setCurrentProfilePictureThumbnailUri:(id)arg1 ;
-(void)setBaseCameraModel:(FBCameraComponentModel *)arg1 ;
-(FBCameraComponentModel *)baseCameraModel;
-(FBCameraComponentModelChangedListenerAnnouncer *)modelChangedAnnouncer;
-(void)setModelChangedAnnouncer:(FBCameraComponentModelChangedListenerAnnouncer *)arg1 ;
-(void)setFilterHandler:(id<FBVideoCreativeToolsApplier>)arg1 ;
-(void)setProfileUnifiedCameraModel:(FBProfileUnifiedCameraModel *)arg1 ;
-(FBProfileUnifiedCameraModel *)profileUnifiedCameraModel;
-(void)setTitle:(id)arg1 ;
@end

