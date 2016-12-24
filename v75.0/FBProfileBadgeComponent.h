/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBWebImageComponent, CKComponent, NSURL;

@interface FBProfileBadgeComponent : CKCompositeComponent {

	unsigned long long _animationStyle;
	FBWebImageComponent* _badgeImageComponent;
	CKComponent* _optOutComponent;
	NSURL* _profileBadgeURL;

}
+(id)newWithProfileBadgeURL:(id)arg1 profilePictureComponent:(id)arg2 options:(FBProfileBadgeComponentOptions)arg3 session:(id)arg4 ;
+(id)newWithProfileBadgeImageSpecifier:(id)arg1 profileBadgeURL:(id)arg2 profilePictureComponent:(id)arg3 options:(FBProfileBadgeComponentOptions)arg4 session:(id)arg5 ;
+(id)newWithProfileBadgeImageSpecifier:(id)arg1 profilePictureComponent:(id)arg2 options:(FBProfileBadgeComponentOptions)arg3 session:(id)arg4 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsOnInitialMount;
-(BOOL)shouldAnimateFromPreviousComponent:(id)arg1 ;
@end
