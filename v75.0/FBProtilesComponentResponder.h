/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler;
@class FBUserSession, FBPersonTimelineTapResponder;

@interface FBProtilesComponentResponder : NSObject {

	FBUserSession* _session;
	FBPersonTimelineTapResponder* _tapResponder;
	id<FBIntentHandler> _intentHandler;
	BOOL _shouldUseUnseenCoreExperience;

}
-(void)protilesPhotosComponent:(id)arg1 didTapWithPhotosContext:(id)arg2 ;
-(id)initWithSession:(id)arg1 tapResponder:(id)arg2 intentHandler:(id)arg3 ;
-(void)protilesComponent:(id)arg1 didTapActionLink:(id)arg2 ;
-(void)protilesFriendsComponent:(id)arg1 didTapWithPerson:(id)arg2 ;
-(void)protilesFriendsComponent:(id)arg1 didTapAddingFriendButtonWithPerson:(id)arg2 ;
-(void)protilesFriendsDidTapSeeAllFriends;
-(void)protilesPhotosDidTapSeeAllPhotos;
@end
