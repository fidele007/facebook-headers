/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBCameraCaptureEvent;
@interface FBCameraTapCaptureButtonComponent : CKCompositeComponent {

	unsigned long long _captureState;
	id<FBCameraCaptureEvent> _captureEvent;

}
+(id)newWithAppearanceProvider:(id)arg1 captureEvent:(id)arg2 captureState:(unsigned long long)arg3 enabled:(BOOL)arg4 overridingAction:(CKTypedComponentAction<>)arg5 ;
-(void)didTapCaptureButton;
@end
