/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBSideFeedConfigurationProvider.h>

@protocol FBSideFeedConfiguration;
@class UIViewController, NSObject, FBKVOController, NSString;

@interface FBSideFeedListViewController : UIViewController <FBSideFeedConfigurationProvider> {

	UIViewController* _viewController;
	NSObject*<FBSideFeedConfiguration> _sideFeedConfiguration;
	long long _cardedLayoutStyle;
	FBKVOController* _kvoController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_useDefaultSearchText;
-(id)fb_searchContext;
-(BOOL)fb_hidesNavigationBar;
-(BOOL)fb_showBackArrowButton;
-(BOOL)fb_hideNavBarRightButton;
-(BOOL)fb_hidesTabBar;
-(id)sideFeedConfigurationForSession:(id)arg1 contactsSearch:(id)arg2 onlineStatusManager:(id)arg3 ;
-(id)sideFeedRightViewControllerKey;
-(long long)fb_cardedLayoutStyle;
-(BOOL)fb_showAuxiliaryViewController;
-(id)initWithSideFeedConfiguration:(id)arg1 viewController:(id)arg2 layout:(long long)arg3 ;
-(BOOL)fb_enableChatBarButton;
-(id)fb_searchTitleContext;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)updateTitle;
@end

