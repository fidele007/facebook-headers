/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>

@class FBLinkCoverResourceBundle, FBNativeArticleLinkCoverComponent;

@interface FBNativeArticleLinkCoverComponentController : CKComponentController {

	FBLinkCoverResourceBundle* _currentBundle;
	long long _state;

}

@property (nonatomic,readonly) FBNativeArticleLinkCoverComponent * component; 
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
-(void)didMount;
-(void)didUnmount;
-(void)willMount;
-(void)_beginProgressiveRendering;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
@end
