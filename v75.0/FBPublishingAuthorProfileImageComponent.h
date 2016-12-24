/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUserSession, FBMemFeedback, CKComponent;

@interface FBPublishingAuthorProfileImageComponent : CKCompositeComponent {

	FBUserSession* _session;
	FBMemFeedback* _feedback;
	CKComponent* _imageComponent;

}

@property (nonatomic,readonly) FBUserSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMemFeedback * feedback;                  //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) CKComponent * imageComponent;              //@synthesize imageComponent=_imageComponent - In the implementation block
+(id)newWithFeedback:(id)arg1 scenePath:(id)arg2 userSession:(id)arg3 size:(const CKComponentSize*)arg4 ;
+(id)initialState;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(CKComponent *)imageComponent;
-(FBMemFeedback *)feedback;
-(FBUserSession *)session;
@end

