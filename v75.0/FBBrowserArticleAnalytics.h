/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSURL;

@interface FBBrowserArticleAnalytics : NSObject {

	unsigned long long _articleChainingID;
	NSDate* _startTime;
	BOOL _loggedTTI;
	BOOL _isBackgrounded;
	NSURL* _userURL;
	BOOL _hasSecondaryNavigation;

}
-(void)_logEvent:(id)arg1 ;
-(void)logBrowserOpenedWithURL:(id)arg1 ;
-(void)logBlockingResourcesLoadedWithURL:(id)arg1 ;
-(void)logDidEnterBackground;
-(void)logDidEnterForeground;
-(void)logBrowserDismissed;
-(void)setHasSecondaryNavigation;
-(id)initWithSession:(id)arg1 ;
@end

