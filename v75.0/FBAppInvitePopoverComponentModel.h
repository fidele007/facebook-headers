/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemApplicationRequest;

@interface FBAppInvitePopoverComponentModel : NSObject {

	BOOL _isApplicationInstalled;
	FBMemApplicationRequest* _invite;

}

@property (nonatomic,readonly) FBMemApplicationRequest * invite;              //@synthesize invite=_invite - In the implementation block
@property (nonatomic,readonly) BOOL isApplicationInstalled;                   //@synthesize isApplicationInstalled=_isApplicationInstalled - In the implementation block
-(BOOL)isApplicationInstalled;
-(id)initWithInvite:(id)arg1 isApplicationInstalled:(BOOL)arg2 ;
-(FBMemApplicationRequest *)invite;
@end

