/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBPrivacyCheckupPageViewControllerDelegate.h>

@protocol FBPrivacyCheckupViewControllerDelegate;
@class FBUserSession, UIPageViewController, NSArray, FBBarButtonItem, FBPrivacyCheckupNetworkController, NSNumber, NSString;

@interface FBPrivacyCheckupViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, FBPresentableViewController, FBPrivacyCheckupPageViewControllerDelegate> {

	FBUserSession* _session;
	UIPageViewController* _pageViewController;
	NSArray* _checkupPageControllers;
	FBBarButtonItem* _cancelButton;
	FBBarButtonItem* _backButton;
	FBBarButtonItem* _nextButton;
	FBBarButtonItem* _doneButton;
	FBPrivacyCheckupNetworkController* _networkController;
	NSNumber* _sessionID;
	id<FBPrivacyCheckupViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<FBPrivacyCheckupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(BOOL)fb_showNavBarSearchField;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)_didTapCancel;
-(void)_navigateToNextPage;
-(void)_didTapDone;
-(void)_appWillResign;
-(void)pageViewController:(id)arg1 didEnqueueRequestData:(id)arg2 ;
-(void)_navigateToPreviousPage;
-(void)_createPageControllers;
-(void)_navigateWithDirection:(long long)arg1 ;
-(void)_didTransitionToViewControllersWithEvent:(id)arg1 ;
-(void)_updateNavigationForPageViewController:(id)arg1 currentController:(id)arg2 ;
-(id)initWithSession:(id)arg1 forSessionID:(id)arg2 ;
-(void)setDelegate:(id<FBPrivacyCheckupViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPrivacyCheckupViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
@end

