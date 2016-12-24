/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBNavigationCoordinator;
@class FBEventAnalyticTracker, FBUserSession, UIViewController;

@interface FBEventsBirthdayDashboardViewController : UIViewController {

	FBEventAnalyticTracker* _tracker;
	FBUserSession* _session;
	UIViewController* _birthdayViewController;
	id<FBNavigationCoordinator> _navigationCoordinator;

}
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hideNavBarRightButton;
-(id)initWithTracker:(id)arg1 session:(id)arg2 ;
-(void)_createViewControllerForBirthdayDashboard;
-(id)_createViewControllerForResponse:(id)arg1 error:(id)arg2 isLoading:(BOOL)arg3 ;
-(void)_loadInternalBirthdayViewController;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
