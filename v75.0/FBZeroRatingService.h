/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAppService.h>

@class FBUserSession, ZRApplicationState, ZRTokenRefreshCoordinator, FBZeroRatedNetworkActivityCoordinator, ZRBannerDataCache, ZRHeaderRequestCoordinator, NSString;

@interface FBZeroRatingService : NSObject <FBAppService> {

	FBUserSession* _session;
	ZRApplicationState* _zrApplicationState;
	ZRTokenRefreshCoordinator* _zrTokenRefreshCoordinator;
	FBZeroRatedNetworkActivityCoordinator* _zrNetworkActivityCoordinator;
	ZRBannerDataCache* _zrBannerDataCache;
	ZRHeaderRequestCoordinator* _zrHeaderRequestCoordinator;

}

@property (nonatomic,retain) ZRApplicationState * zrApplicationState;                                           //@synthesize zrApplicationState=_zrApplicationState - In the implementation block
@property (nonatomic,retain) ZRTokenRefreshCoordinator * zrTokenRefreshCoordinator;                             //@synthesize zrTokenRefreshCoordinator=_zrTokenRefreshCoordinator - In the implementation block
@property (nonatomic,retain) FBZeroRatedNetworkActivityCoordinator * zrNetworkActivityCoordinator;              //@synthesize zrNetworkActivityCoordinator=_zrNetworkActivityCoordinator - In the implementation block
@property (nonatomic,retain) ZRBannerDataCache * zrBannerDataCache;                                             //@synthesize zrBannerDataCache=_zrBannerDataCache - In the implementation block
@property (nonatomic,retain) ZRHeaderRequestCoordinator * zrHeaderRequestCoordinator;                           //@synthesize zrHeaderRequestCoordinator=_zrHeaderRequestCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)signalAppServiceToHandleInitialSessionIdle_DEPRECATED;
-(ZRApplicationState *)zrApplicationState;
-(void)setZrApplicationState:(ZRApplicationState *)arg1 ;
-(void)setZrTokenRefreshCoordinator:(ZRTokenRefreshCoordinator *)arg1 ;
-(void)setZrBannerDataCache:(ZRBannerDataCache *)arg1 ;
-(void)setZrNetworkActivityCoordinator:(FBZeroRatedNetworkActivityCoordinator *)arg1 ;
-(void)setZrHeaderRequestCoordinator:(ZRHeaderRequestCoordinator *)arg1 ;
-(ZRTokenRefreshCoordinator *)zrTokenRefreshCoordinator;
-(FBZeroRatedNetworkActivityCoordinator *)zrNetworkActivityCoordinator;
-(ZRBannerDataCache *)zrBannerDataCache;
-(ZRHeaderRequestCoordinator *)zrHeaderRequestCoordinator;
-(id)initWithSession:(id)arg1 ;
@end

