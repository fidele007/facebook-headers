/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCustomizablePullToRefreshSettingsDelegate.h>
#import <Facebook/FBAppService.h>

@class FBUserSession, FBCustomizablePullToRefreshExperimentContext, FBCustomizablePullToRefreshSettingsUpdateManager, FBPullToRefreshView, FBKeyframesAnimationCustomizedContentPresenter, NSString;

@interface FBCustomizablePullToRefreshSettingsFetchService : NSObject <FBCustomizablePullToRefreshSettingsDelegate, FBAppService> {

	FBUserSession* _session;
	FBCustomizablePullToRefreshExperimentContext* _context;
	FBCustomizablePullToRefreshSettingsUpdateManager* _updateManager;
	FBPullToRefreshView* _pullToRefreshView;
	FBKeyframesAnimationCustomizedContentPresenter* _presenter;
	BOOL _initializedFirstPullToRefresh;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)_didFinishEnteringForegroundAndIsNowIdle;
-(void)_presentNewPullToRefreshSettings:(id)arg1 ;
-(void)_prepareForPullToRefreshView;
-(id)_exposePullToRefreshView;
-(void)pullToRefreshSettingsDidChange:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

