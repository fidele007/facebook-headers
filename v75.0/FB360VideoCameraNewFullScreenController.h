/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FB360VideoCameraController.h>

@interface FB360VideoCameraNewFullScreenController : FB360VideoCameraController {

	GLKQuaternion _inverseSensorQuaternion;
	float _slerpPitchAdjustStart;
	float _slerpPitchAdjustEnd;
	float _slerpYawAdjustStart;
	float _slerpYawAdjustEnd;
	float _yawDrag;
	float _yawAdjust;
	float _pitchDrag;
	float _pitchAdjust;

}
-(void)setInitialViewportWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDefaultOffsetWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)setDirectionWithYaw:(float)arg1 pitch:(float)arg2 ;
-(void)updateSensor:(GLKQuaternion)arg1 ;
-(void)updateDrag:(float)arg1 dy:(float)arg2 ;
-(void)updateSlerp:(float)arg1 ;
-(GLKMatrix4)generateViewMatrix;
-(void)_applyRotationWithYaw:(float)arg1 pitch:(float)arg2 ;
-(id)init;
@end

