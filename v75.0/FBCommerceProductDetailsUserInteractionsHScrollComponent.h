/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBCommerceEventListenerAnnouncer, NSString;

@interface FBCommerceProductDetailsUserInteractionsHScrollComponent : CKCompositeComponent {

	FBCommerceEventListenerAnnouncer* _announcer;
	unsigned long long _numberOfImages;
	NSString* _productID;
	CKTypedComponentAction<> _swipeAction;

}
+(id)newWithSection:(id)arg1 context:(id)arg2 imageTapAction:(CKTypedComponentAction<>)arg3 swipeAction:(CKTypedComponentAction<>)arg4 bleedoutTarget:(Class)arg5 ;
+(id)initialState;
-(void)component:(id)arg1 scrollViewDidScroll:(id)arg2 ;
@end
