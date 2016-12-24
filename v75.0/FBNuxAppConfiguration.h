/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSSet;

@interface FBNuxAppConfiguration : NSObject {

	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBQuickPromotionActionHandler> quickPromotionActionHandler; 
@property (nonatomic,readonly) id<FBNuxAppEventManagerDataSource> appEventManagerDataSource; 
@property (nonatomic,readonly) id<FBQuickPromotionInterstitialDataSource> quickPromotionInterstitialDataSource; 
@property (nonatomic,readonly) id<FBQuickPromotionMegaphoneDataSource> quickPromotionMegaphoneDataSource; 
@property (nonatomic,copy,readonly) NSSet * serverFetchEvents; 
@property (nonatomic,readonly) double minimumFetchInterval; 
@property (nonatomic,readonly) double expiryInterval; 
@property (nonatomic,readonly) double modalNuxImpressionCooldown; 
@property (nonatomic,readonly) double embeddedNuxActionCooldown; 
@property (nonatomic,copy,readonly) NSSet * presentedClassesToBeIgnored; 
+(id)_nuxAppConfigurationClassName;
+(BOOL)isNuxCoordinatorDisabled;
+(id)nuxPlist;
-(id<FBQuickPromotionActionHandler>)quickPromotionActionHandler;
-(id<FBNuxAppEventManagerDataSource>)appEventManagerDataSource;
-(id<FBQuickPromotionInterstitialDataSource>)quickPromotionInterstitialDataSource;
-(id<FBQuickPromotionMegaphoneDataSource>)quickPromotionMegaphoneDataSource;
-(NSSet *)serverFetchEvents;
-(double)expiryInterval;
-(NSSet *)presentedClassesToBeIgnored;
-(double)modalNuxImpressionCooldown;
-(double)embeddedNuxActionCooldown;
-(double)minimumFetchInterval;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end

