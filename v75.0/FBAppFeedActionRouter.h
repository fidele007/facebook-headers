/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, UIViewController, FBAppFeedEventListenerAnnouncer;

@interface FBAppFeedActionRouter : NSObject {

	FBUserSession* _session;
	UIViewController* _viewController;
	FBAppFeedEventListenerAnnouncer* _eventAnnouncer;

}
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(id)initWithSession:(id)arg1 viewController:(id)arg2 ;
-(void)openSponsorable:(id)arg1 ;
-(void)presentAdInfoForSponsorable:(id)arg1 ;
-(void)learnMoreAboutSponsorable:(id)arg1 ;
-(void)toggleUsefulForSponsorable:(id)arg1 ;
-(void)markSponsorable:(id)arg1 useful:(BOOL)arg2 ;
-(BOOL)isSponsorableUseful:(id)arg1 ;
-(void)hideSponsorable:(id)arg1 withParentUnit:(id)arg2 ;
-(void)hideAllSponsorable:(id)arg1 withParentUnit:(id)arg2 ;
-(void)openAdInfoForSponsorable:(id)arg1 ;
@end

