/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemPhoto;

@interface FBReactionPageAspectRatioPhotoComponent : CKCompositeComponent {

	FBMemPhoto* _photo;
	CKTypedComponentAction<> _photoTapAction;

}
+(id)newWithReactionContext:(id)arg1 photo:(id)arg2 aspectRatio:(double)arg3 size:(const CKComponentSize*)arg4 largePhoto:(BOOL)arg5 photoTapAction:(CKTypedComponentAction<>)arg6 ;
-(void)photoTapped;
@end

