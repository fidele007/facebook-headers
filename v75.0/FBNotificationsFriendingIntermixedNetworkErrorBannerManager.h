/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedNetworkErrorBannerDelegate.h>
#import <Facebook/FBReachabilityListener.h>

@class FBFeedBannerContainerView, FBFeedBannerPresenter, FBFeedNetworkErrorBanner, FBReachabilityAnnouncer, NSString;

@interface FBNotificationsFriendingIntermixedNetworkErrorBannerManager : NSObject <FBFeedNetworkErrorBannerDelegate, FBReachabilityListener> {

	FBFeedBannerContainerView* _bannerContainer;
	FBFeedBannerPresenter* _bannerPresenter;
	FBFeedNetworkErrorBanner* _networkErrorBanner;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)initWithContainingView:(id)arg1 bannerContainerFactory:(/*^block*/id)arg2 bannerPresenterFactory:(/*^block*/id)arg3 networkErrorBannerFactory:(/*^block*/id)arg4 reachabilityAnnouncerFactory:(/*^block*/id)arg5 ;
-(id)initWithContainingView:(id)arg1 ;
-(void)dealloc;
@end

