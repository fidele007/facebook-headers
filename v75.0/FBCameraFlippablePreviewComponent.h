/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBCaptureSessionController;
@interface FBCameraFlippablePreviewComponent : CKCompositeComponent {

	long long _devicePosition;
	id<FBCaptureSessionController> _captureManager;

}
+(id)newWithDevicePosition:(long long)arg1 permissionsState:(long long)arg2 captureState:(unsigned long long)arg3 captureManager:(id)arg4 appearanceProvider:(id)arg5 viewFinderAnnouncer:(id)arg6 viewFinderTapEvent:(id)arg7 viewFinderDoubleTapEvent:(id)arg8 pinchEvent:(id)arg9 previewWillAppearEvent:(id)arg10 previewWillDisappearEvent:(id)arg11 startupDestinationManager:(id)arg12 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
@end

