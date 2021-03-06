/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator;
@class FBNuxController, FBUserSession;

@interface FBVideoAutoplayNuxController : NSObject {

	FBNuxController* _nuxController;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;

}
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 ;
-(BOOL)_smartAutoplayIsEnabled;
-(void)_showAutoplayNUX:(id)arg1 ;
-(void)_logNuxEventWithPreviousSetting:(long long)arg1 currentSetting:(long long)arg2 previousSettingIsNotCached:(BOOL)arg3 currentSettingIsNotCached:(BOOL)arg4 ;
-(void)_handleAutoplayNuxButtonTapped:(BOOL)arg1 ;
-(void)showNuxInViewIfNeeded:(id)arg1 ;
@end

