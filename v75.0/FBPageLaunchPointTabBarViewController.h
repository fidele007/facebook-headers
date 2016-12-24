/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPageTabBarDelegate.h>

@protocol FBPageLaunchPointTabBarControllerDelegate;
@class FBPageTabBarItem, FBPageTabBar, NSString;

@interface FBPageLaunchPointTabBarViewController : UIViewController <FBPageTabBarDelegate> {

	FBPageTabBarItem* _homeTabBarItem;
	FBPageTabBarItem* _discoverTabBarItem;
	FBPageTabBarItem* _feedTabBarItem;
	FBPageTabBar* _tabBar;
	id<FBPageLaunchPointTabBarControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBPageTabBar * tabBar;                                                    //@synthesize tabBar=_tabBar - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageLaunchPointTabBarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupTabBar;
-(void)pageTabBar:(id)arg1 didSelectItem:(id)arg2 ;
-(void)setDelegate:(id<FBPageLaunchPointTabBarControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPageLaunchPointTabBarControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(FBPageTabBar *)tabBar;
@end

