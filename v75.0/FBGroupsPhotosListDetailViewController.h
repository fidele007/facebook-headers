/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FIGTabsComponentListener.h>

@protocol FBGraphQLConnectionSyncStoreProtocol;
@class FBUserSession, FBMemGroup, FIGTabsComponentHostingView, UIView, FBMemAlbumsViewController, FBPhotosCollageInsetsTrackingViewController, NSString;

@interface FBGroupsPhotosListDetailViewController : UIViewController <FIGTabsComponentListener> {

	FBUserSession* _session;
	FBMemGroup* _group;
	id<FBGraphQLConnectionSyncStoreProtocol> _mediaStore;
	FIGTabsComponentHostingView* _tabBarHostingView;
	UIView* _contentView;
	FBMemAlbumsViewController* _albumsViewController;
	FBPhotosCollageInsetsTrackingViewController* _groupPhotosViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)_initializeViewControllers;
-(void)_setupTabBar;
-(void)_switchToIndex:(long long)arg1 ;
-(id)_getTabsData;
-(void)didSelectTabWithIndex:(long long)arg1 ;
-(id)initWithSession:(id)arg1 group:(id)arg2 mediaStore:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

