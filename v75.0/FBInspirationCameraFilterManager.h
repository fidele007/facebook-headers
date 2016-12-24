/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCCMSQRDFilterDelegate.h>
#import <Facebook/FBInspirationCameraComponentModelChangedListener.h>

@protocol FBCCLogger;
@class NSOperationQueue, FBCaptureCoordinator, FBCCPostCaptureCoordinator, FBInspirationCameraCapturedAsset, FBCaptureCoordinatorFilter, FBInspirationCameraComponentModelManager, FBCameraFramePerformanceLogger, FBInspirationCameraFilterBugReporter, NSString;

@interface FBInspirationCameraFilterManager : NSObject <FBCCMSQRDFilterDelegate, FBInspirationCameraComponentModelChangedListener> {

	NSOperationQueue* _coordinatorQueue;
	FBCaptureCoordinator* _captureCoordinator;
	FBCCPostCaptureCoordinator* _postCaptureCoordinator;
	long long _cameraState;
	FBInspirationCameraCapturedAsset* _capturedAsset;
	FBCaptureCoordinatorFilter* _currentPreCaptureFilter;
	FBCaptureCoordinatorFilter* _currentPostCaptureFilter;
	FBCaptureCoordinatorFilter* _doodleFilter;
	FBInspirationCameraComponentModelManager* _cameraModelManager;
	long long _maskFaceDetectionState;
	FBCameraFramePerformanceLogger* _framePerformanceLogger;
	FBInspirationCameraFilterBugReporter* _bugReporter;
	id<FBCCLogger> _captureLogger;
	id<FBCCLogger> _postCaptureLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_captureManager;
-(id)initWithCameraModelManager:(id)arg1 captureCoordinator:(id)arg2 captureLogger:(id)arg3 framePerformanceLogger:(id)arg4 postCaptureCoordinator:(id)arg5 postCaptureLogger:(id)arg6 ;
-(void)inspirationCameraComponentModelChangedFromPreviousModel:(id)arg1 toCurrentModel:(id)arg2 ;
-(void)_initPostCaptureCoordinatorWithIdentityFilter;
-(void)_initPostCaptureCoordinatorWithIdentityFilterImpl:(/*^block*/id)arg1 ;
-(void)_didInsertPostCaptureEffectFilter:(id)arg1 ;
-(void)_insertEffectFilterToCoordinatorsWithName:(id)arg1 config:(id)arg2 loggingExtras:(id)arg3 ;
-(void)_insertDoodleFilterToToPostCaptureCoordinatorsWithConfig:(id)arg1 ;
-(void)_insertDoodleFilterToToPostCaptureCoordinatorsWithConfigImpl:(id)arg1 onComplete:(/*^block*/id)arg2 ;
-(void)_didInsertPostCaptureDoodleFilter:(id)arg1 ;
-(void)_insertEffectFilterToCoordinatorsWithNameImpl:(id)arg1 config:(id)arg2 loggingExtras:(id)arg3 onComplete:(/*^block*/id)arg4 ;
-(void)_didInsertPreCaptureFilter:(id)arg1 loggingExtras:(id)arg2 ;
-(void)_insertEffectFilterToPostCaptureCoordinatorWithName:(id)arg1 config:(id)arg2 loggingExtras:(id)arg3 dispatchGroup:(id)arg4 ;
-(void)_insertEffectFilterToPreCaptureCoordinatorWithName:(id)arg1 config:(id)arg2 loggingExtras:(id)arg3 dispatchGroup:(id)arg4 ;
-(void)_didRemovePreCaptureFilter:(id)arg1 ;
-(id)_msqrdFilterController;
-(void)_didRemovePostCaptureFilter:(id)arg1 ;
-(void)_insertDoodleFilter;
-(void)_clearDoodleFilter;
-(void)_insertIdentityFilter;
-(void)_insertBasicAdjustmentFilterForSwipeableFrameAsset:(id)arg1 loggingExtras:(id)arg2 ;
-(void)_insertFrameFilterForSwipeableFrameAsset:(id)arg1 animationDirection:(unsigned long long)arg2 ;
-(void)_insertMaskFilterForSwipeableMask:(id)arg1 loggingExtras:(id)arg2 ;
-(void)_insertParticleEffectFilterForSwipeableParticleEffect:(id)arg1 loggingExtras:(id)arg2 ;
-(void)_insertShaderFilterForSwipeableShaderFilterAsset:(id)arg1 loggingExtras:(id)arg2 ;
-(void)_insertStyleTransferFilterForStyleTransferAsset:(id)arg1 loggingExtras:(id)arg2 ;
-(void)msqrdFilterController:(id)arg1 didChangeFaceDetectionState:(unsigned long long)arg2 ;
-(void)msqrdFilterControllerFailedToConfigureFaceTracker:(id)arg1 ;
-(void)dealloc;
@end

