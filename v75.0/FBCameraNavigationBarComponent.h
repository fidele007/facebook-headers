/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBCameraGenericEvent;
@interface FBCameraNavigationBarComponent : CKCompositeComponent {

	id<FBCameraGenericEvent> _closeEvent;
	id<FBCameraGenericEvent> _switchCameraEvent;
	id<FBCameraGenericEvent> _flashPickerToggleEvent;
	id<FBCameraGenericEvent> _toggleLightModeEvent;

}
+(id)newWithTitleComponent:(id)arg1 flashPickerButtonState:(long long)arg2 topInset:(double)arg3 angle:(double)arg4 closeEvent:(id)arg5 flashPickerToggleEvent:(id)arg6 switchCameraEvent:(id)arg7 lowLightModeButtonState:(long long)arg8 toggleLightModeEvent:(id)arg9 ;
-(void)cameraSwitchButtonDidTap;
-(void)closeButtonDidTap;
-(void)lightModeButtonDidTap;
-(void)flashButtonDidtap;
@end

