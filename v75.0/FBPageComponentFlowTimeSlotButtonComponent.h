/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemPagesPlatformTimeSlot;

@interface FBPageComponentFlowTimeSlotButtonComponent : CKCompositeComponent {

	FBMemPagesPlatformTimeSlot* _timeSlot;
	CKTypedComponentAction<> _didTapAction;

}
+(id)timeSlotButtonForTimeSlot:(id)arg1 ;
+(id)newWithTimeSlot:(id)arg1 didTapAction:(CKTypedComponentAction<>)arg2 edgeInsets:(UIEdgeInsets)arg3 ;
-(void)didTapButton;
@end
