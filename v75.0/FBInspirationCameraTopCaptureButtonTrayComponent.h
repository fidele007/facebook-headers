/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBInspirationToolbox, FBInspirationCameraComponentModel, CKComponent;

@interface FBInspirationCameraTopCaptureButtonTrayComponent : CKCompositeComponent {

	FBInspirationToolbox* _toolbox;
	FBInspirationCameraComponentModel* _model;
	CKComponent* _buttonComponent;

}
+(id)newWithModel:(id)arg1 toolbox:(id)arg2 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)newsFeedButtonDidTap;
@end
