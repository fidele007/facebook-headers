/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageTabBarDelegate.h>
#import <Facebook/FBPageBadgeCountListener.h>

@protocol FBPageBadgeCountManagerProtocol, FBPageTabBarControllerDelegate;
@class FBMemPage, NSString, FBUserSession, FBPageTabBarItem, FBPageTabBar;

@interface FBPageTabBarController : NSObject <FBPageTabBarDelegate, FBPageBadgeCountListener> {

	FBMemPage* _page;
	NSString* _analyticsUUID;
	FBUserSession* _userSession;
	FBPageTabBarItem* _publicTabBarItem;
	FBPageTabBarItem* _activityTabBarItem;
	FBPageTabBarItem* _insightsTabBarItem;
	NSString* _actionSource;
	id<FBPageBadgeCountManagerProtocol> _badgeCountManager;
	BOOL _useCommsHubBadgeCount;
	FBPageTabBarItem* _currentTabBarItem;
	FBPageTabBar* _tabBar;
	id<FBPageTabBarControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) FBPageTabBarItem * currentTabBarItem;                     //@synthesize currentTabBarItem=_currentTabBarItem - In the implementation block
@property (nonatomic,retain) FBPageTabBar * tabBar;                                           //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageTabBarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useCommsHubBadgeCount;                                      //@synthesize useCommsHubBadgeCount=_useCommsHubBadgeCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pageAdminBadgeCountManager:(id)arg1 countDidChangeForPageFBID:(id)arg2 type:(int)arg3 count:(long long)arg4 ;
-(id)initWithPage:(id)arg1 delegate:(id)arg2 badgeCountManager:(id)arg3 analyticsUUID:(id)arg4 userSession:(id)arg5 actionSource:(id)arg6 useCardDesign:(BOOL)arg7 ;
-(void)setUseCommsHubBadgeCount:(BOOL)arg1 ;
-(void)pageTabBar:(id)arg1 didSelectItem:(id)arg2 ;
-(void)_setupTabBar:(BOOL)arg1 ;
-(void)setCurrentTabBarItem:(FBPageTabBarItem *)arg1 ;
-(void)_logVisitTabWithEvent:(id)arg1 ;
-(unsigned long long)_activitiesTabBadgeCount;
-(FBPageTabBarItem *)currentTabBarItem;
-(BOOL)useCommsHubBadgeCount;
-(void)setDelegate:(id<FBPageTabBarControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPageTabBarControllerDelegate>)delegate;
-(FBPageTabBar *)tabBar;
-(void)setTabBar:(FBPageTabBar *)arg1 ;
@end

