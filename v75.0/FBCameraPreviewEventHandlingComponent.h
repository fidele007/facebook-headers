/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBCameraGestureRecognizerEvent, FBCameraGenericEvent;
@interface FBCameraPreviewEventHandlingComponent : CKCompositeComponent {

	id<FBCameraGestureRecognizerEvent> _viewFinderTapEvent;
	id<FBCameraGestureRecognizerEvent> _viewFinderDoubleTapEvent;
	id<FBCameraGestureRecognizerEvent> _pinchEvent;
	id<FBCameraGenericEvent> _previewWillAppearEvent;
	id<FBCameraGenericEvent> _previewWillDisappearEvent;

}
+(id)newWithPermissionsState:(long long)arg1 captureState:(unsigned long long)arg2 captureManager:(id)arg3 appearanceProvider:(id)arg4 viewFinderAnnouncer:(id)arg5 viewFinderTapEvent:(id)arg6 viewFinderDoubleTapEvent:(id)arg7 pinchEvent:(id)arg8 previewWillAppearEvent:(id)arg9 previewWillDisappearEvent:(id)arg10 startupDestinationManager:(id)arg11 ;
-(void)viewFinderDidTap:(id)arg1 recognizer:(id)arg2 ;
-(void)viewFinderDidDoubleTap:(id)arg1 recognizer:(id)arg2 ;
-(void)viewFinderDidPinch:(id)arg1 recognizer:(id)arg2 ;
-(void)previewWillAppear:(id)arg1 ;
-(void)previewWillDisappear:(id)arg1 ;
@end

