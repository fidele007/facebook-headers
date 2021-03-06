/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEmbeddedTabConfiguration.h>

@class FBEmbeddedTabBarListControllerListenerAnnouncer;

@interface FBEmbeddedTabBarListConfiguration : FBEmbeddedTabConfiguration {

	BOOL _hasPTR;
	BOOL _prefetchTabsData;
	FBEmbeddedTabBarListControllerListenerAnnouncer* _tabBarAnnouncer;

}

@property (assign,nonatomic) BOOL hasPTR;                                                                    //@synthesize hasPTR=_hasPTR - In the implementation block
@property (nonatomic,retain) FBEmbeddedTabBarListControllerListenerAnnouncer * tabBarAnnouncer;              //@synthesize tabBarAnnouncer=_tabBarAnnouncer - In the implementation block
@property (assign,nonatomic) BOOL prefetchTabsData;                                                          //@synthesize prefetchTabsData=_prefetchTabsData - In the implementation block
+(id)configurationWithBlock:(/*^block*/id)arg1 ;
+(id)defaultConfiguration;
-(void)setHasPTR:(BOOL)arg1 ;
-(void)setTabBarAnnouncer:(FBEmbeddedTabBarListControllerListenerAnnouncer *)arg1 ;
-(void)setPrefetchTabsData:(BOOL)arg1 ;
-(BOOL)hasPTR;
-(FBEmbeddedTabBarListControllerListenerAnnouncer *)tabBarAnnouncer;
-(BOOL)prefetchTabsData;
@end

