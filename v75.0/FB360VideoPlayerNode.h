/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBVideoNodeDelegate.h>
#import <Facebook/FB360VideoModelviewPerspectiveProvider.h>
#import <Facebook/FBNA360MediaCameraControllerDelegate.h>

@protocol FBVideoEntityProtocol, FB360VideoPlayerNodeDelegate;
@class UITapGestureRecognizer, FBVideoNode, FBMultiresolutionImageNode, FBNA360MediaCameraController, NSDate, FB360VideoEngagementLogger, NSString;

@interface FB360VideoPlayerNode : ASDisplayNode <FBVideoNodeDelegate, FB360VideoModelviewPerspectiveProvider, FBNA360MediaCameraControllerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	id<FBVideoEntityProtocol> _videoEntity;
	FBVideoNode* _videoNode;
	FBMultiresolutionImageNode* _previewImageNode;
	FBNA360MediaCameraController* _cameraController;
	NSDate* _lastPanningTime;
	GLKQuaternion _significantMovementReferenceOrientation;
	id<FB360VideoPlayerNodeDelegate> _delegate;
	double _preferredHeading;
	double _preferredPitch;
	double _preferredFovy;
	CGSize _expandedSize;

}

@property (assign,nonatomic,__weak) id<FB360VideoPlayerNodeDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProvider> videoLoggingDataProvider; 
@property (nonatomic,readonly) FB360VideoEngagementLogger * videoEngagementLogger; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) BOOL isStalled; 
@property (assign,nonatomic) BOOL motionEnabled; 
@property (assign,nonatomic) CGSize expandedSize;                                                            //@synthesize expandedSize=_expandedSize - In the implementation block
@property (nonatomic,readonly) double heading; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double fovy; 
@property (nonatomic,readonly) double fovx; 
@property (nonatomic,readonly) double zoomScale; 
@property (assign,nonatomic) double preferredHeading;                                                        //@synthesize preferredHeading=_preferredHeading - In the implementation block
@property (assign,nonatomic) double preferredPitch;                                                          //@synthesize preferredPitch=_preferredPitch - In the implementation block
@property (assign,nonatomic) double preferredFovy;                                                           //@synthesize preferredFovy=_preferredFovy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadDataForVideo:(id)arg1 hd:(BOOL)arg2 session:(id)arg3 ;
-(void)_staticInitialize;
-(void)videoNodeDidDisplayPreviewImage:(id)arg1 ;
-(void)videoNode:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)videoNode:(id)arg1 didUpdateLoadedDuration:(double)arg2 ;
-(void)videoNodeDidPlayToEnd:(id)arg1 ;
-(void)videoNode:(id)arg1 didUpdateStallState:(BOOL)arg2 ;
-(void)videoNodeDidStartPlayback:(id)arg1 ;
-(id<FBVideoPlaybackLoggingDataProvider>)videoLoggingDataProvider;
-(void)fadeAudioOutWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)fadeAudioInWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)reorientAnimated:(BOOL)arg1 ;
-(double)fovy;
-(void)resetZoomScaleAnimated:(BOOL)arg1 ;
-(void)_didTapVideo:(id)arg1 ;
-(FB360VideoEngagementLogger *)videoEngagementLogger;
-(void)_fadePreviewImageToAlpha:(double)arg1 ;
-(void)setPreferredFovy:(double)arg1 ;
-(void)_didRenderVideoFrame;
-(double)fovY;
-(CGRect)visibleRegion;
-(id)lastPanningTime;
-(void)cameraControllerDidBeginPanGesture:(id)arg1 ;
-(void)cameraController:(id)arg1 didPanWithAngularDelta:(CGPoint)arg2 ;
-(void)cameraController:(id)arg1 didFinishPanningWithVelocity:(CGPoint)arg2 ;
-(void)cameraControllerDidBeginPinchGesture:(id)arg1 ;
-(void)cameraController:(id)arg1 didPinchWithZoomDelta:(double)arg2 ;
-(void)cameraControllerDidFinishPinching:(id)arg1 ;
-(id)initWithVideoEntity:(id)arg1 loopingStyle:(long long)arg2 session:(id)arg3 videoLoggingDataProvider:(id)arg4 ;
-(double)fovx;
-(double)preferredHeading;
-(void)setPreferredHeading:(double)arg1 ;
-(double)preferredPitch;
-(void)setPreferredPitch:(double)arg1 ;
-(double)preferredFovy;
-(void)setDelegate:(id<FB360VideoPlayerNodeDelegate>)arg1 ;
-(void)dealloc;
-(id<FB360VideoPlayerNodeDelegate>)delegate;
-(double)duration;
-(void)invalidate;
-(double)zoomScale;
-(void)layout;
-(void)pause;
-(double)heading;
-(double)pitch;
-(GLKMatrix4)modelviewMatrix;
-(void)seekToTime:(double)arg1 ;
-(void)didLoad;
-(BOOL)motionEnabled;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(double)currentTime;
-(void)setExpandedSize:(CGSize)arg1 ;
-(CGSize)expandedSize;
-(BOOL)isStalled;
-(void)play;
-(BOOL)isPlaying;
-(GLKVector3)eulerAngles;
@end

