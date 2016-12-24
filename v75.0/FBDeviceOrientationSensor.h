/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDeviceOrientationSensorDelegate;
@interface FBDeviceOrientationSensor : NSObject {

	long long _deviceOrientation;
	BOOL _detectingDeviceOrientation;
	id<FBDeviceOrientationSensorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBDeviceOrientationSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long deviceOrientation;                                      //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
+(void)_registerOrientationNotificationObserver:(id)arg1 withCallbackSelector:(SEL)arg2 ;
+(void)_unregisterOrientationNotificationObserver:(id)arg1 ;
-(void)beginDetectingDeviceOrientation:(BOOL)arg1 ;
-(void)stopDetectingDeviceOrientation;
-(void)_updateForOrientation:(long long)arg1 ;
-(void)_notifyDelegateOfOrientation;
-(void)setDelegate:(id<FBDeviceOrientationSensorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBDeviceOrientationSensorDelegate>)delegate;
-(long long)deviceOrientation;
-(void)_didRotate:(id)arg1 ;
@end

