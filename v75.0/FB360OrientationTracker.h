/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FB360OrientationTrackerDelegate;
#import <Facebook/Facebook-Structs.h>
@class FB360ViewParams, CMAttitude, CMMotionManager, NSOperationQueue;

@interface FB360OrientationTracker : NSObject {

	FB360ViewParams* _viewParams;
	CGPoint _lastPanningTranslation;
	double _lastPinchRotation;
	double _initialScale;
	BOOL _initialDevicesOrientationSet;
	BOOL _hasReportedSignificantChange;
	GLKQuaternion _initialDeviceOrientation;
	GLKVector2 _lastYawPitchChange;
	BOOL _resetDeviceAttitude;
	CMAttitude* _lastRoundAttitude;
	BOOL _allowVerticalMovement;
	BOOL _relinquishViewParameterUpdateToDelegate;
	BOOL _paused;
	id<FB360OrientationTrackerDelegate> _delegate;
	double _minHorizontalAngleInDegrees;
	double _maxHorizontalAngleInDegrees;
	double _horizontalFoV;
	double _minVerticalAngleInDegrees;
	double _maxVerticalAngleInDegrees;
	double _verticalFoV;
	double _minimumDeltaInDegreesForSignificantChange;
	double _gyroLowPassFactor;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;

}

@property (nonatomic,retain) CMMotionManager * motionManager;                                  //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * motionQueue;                                   //@synthesize motionQueue=_motionQueue - In the implementation block
@property (assign,nonatomic,__weak) id<FB360OrientationTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowVerticalMovement;                                       //@synthesize allowVerticalMovement=_allowVerticalMovement - In the implementation block
@property (assign,nonatomic) double minHorizontalAngleInDegrees;                               //@synthesize minHorizontalAngleInDegrees=_minHorizontalAngleInDegrees - In the implementation block
@property (assign,nonatomic) double maxHorizontalAngleInDegrees;                               //@synthesize maxHorizontalAngleInDegrees=_maxHorizontalAngleInDegrees - In the implementation block
@property (assign,nonatomic) double horizontalFoV;                                             //@synthesize horizontalFoV=_horizontalFoV - In the implementation block
@property (assign,nonatomic) double minVerticalAngleInDegrees;                                 //@synthesize minVerticalAngleInDegrees=_minVerticalAngleInDegrees - In the implementation block
@property (assign,nonatomic) double maxVerticalAngleInDegrees;                                 //@synthesize maxVerticalAngleInDegrees=_maxVerticalAngleInDegrees - In the implementation block
@property (assign,nonatomic) double verticalFoV;                                               //@synthesize verticalFoV=_verticalFoV - In the implementation block
@property (assign,nonatomic) BOOL relinquishViewParameterUpdateToDelegate;                     //@synthesize relinquishViewParameterUpdateToDelegate=_relinquishViewParameterUpdateToDelegate - In the implementation block
@property (assign,nonatomic) double minimumDeltaInDegreesForSignificantChange;                 //@synthesize minimumDeltaInDegreesForSignificantChange=_minimumDeltaInDegreesForSignificantChange - In the implementation block
@property (assign,nonatomic) double gyroLowPassFactor;                                         //@synthesize gyroLowPassFactor=_gyroLowPassFactor - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                      //@synthesize paused=_paused - In the implementation block
-(void)constrainCameraToBoundsAnimated;
-(void)resetSignificantTrackerMovement;
-(void)resetDeviceAttitudeAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)didPinch:(id)arg1 ;
-(id)initWithViewParams:(id)arg1 ;
-(void)setRelinquishViewParameterUpdateToDelegate:(BOOL)arg1 ;
-(void)setAllowVerticalMovement:(BOOL)arg1 ;
-(void)setMinHorizontalAngleInDegrees:(double)arg1 ;
-(void)setMaxHorizontalAngleInDegrees:(double)arg1 ;
-(void)setMinVerticalAngleInDegrees:(double)arg1 ;
-(void)setMaxVerticalAngleInDegrees:(double)arg1 ;
-(void)setHorizontalFoV:(double)arg1 ;
-(void)setVerticalFoV:(double)arg1 ;
-(void)didPan:(id)arg1 ;
-(void)_updateWithNewDeviceMotion:(id)arg1 error:(id)arg2 ;
-(void)_reorientConstrainedCameraAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_updateWithNewOrientation:(_GLKQuaternion)arg1 ;
-(_GLKVector2)_lowPassFilterYawPitch:(_GLKVector2)arg1 resetDeviceAttitude:(BOOL)arg2 ;
-(void)_handleUpdateWithDeltaCameraRollPitch:(_GLKVector2)arg1 shouldReportSignificantChange:(BOOL)arg2 ;
-(double)minimumDeltaInDegreesForSignificantChange;
-(BOOL)_shouldRestrictYaw;
-(double)minHorizontalAngleInDegrees;
-(double)horizontalFoV;
-(double)maxHorizontalAngleInDegrees;
-(double)_targetCameraValueFromCurrentValue:(double)arg1 cameraDelta:(double)arg2 minimum:(double)arg3 maximum:(double)arg4 ;
-(double)minVerticalAngleInDegrees;
-(double)verticalFoV;
-(double)maxVerticalAngleInDegrees;
-(void)_handlePanWithDelta:(CGPoint)arg1 ;
-(void)_addDecayAnimationForVelocity:(CGPoint)arg1 ;
-(BOOL)relinquishViewParameterUpdateToDelegate;
-(void)_sendOrientationChangeToTVWithX:(double)arg1 andY:(double)arg2 ;
-(void)notifyDelegateAboutNewParams;
-(CGPoint)_constrainedYawPitchFromYawPitch:(CGPoint)arg1 ;
-(void)updateForInterfaceRotation:(double)arg1 ;
-(BOOL)allowVerticalMovement;
-(void)setMinimumDeltaInDegreesForSignificantChange:(double)arg1 ;
-(double)gyroLowPassFactor;
-(void)setGyroLowPassFactor:(double)arg1 ;
-(NSOperationQueue *)motionQueue;
-(void)setMotionQueue:(NSOperationQueue *)arg1 ;
-(void)setDelegate:(id<FB360OrientationTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<FB360OrientationTrackerDelegate>)delegate;
-(void)setPaused:(BOOL)arg1 ;
-(void)didRotate:(id)arg1 ;
-(BOOL)paused;
-(void)stopMotionUpdates;
-(void)startMotionUpdates;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(CMMotionManager *)motionManager;
@end

