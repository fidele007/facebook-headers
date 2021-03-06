/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageSectionsEditViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol FBNavigationCoordinator, FBPageAdminBarControllerDelegate;
@class FBMemPage, FBPageSession, UIViewController, FBPageSectionsEditViewController, NSArray, FBPageEditAnalyticsLogger, NSString, FBPageTabAdminSettingsView;

@interface FBPageAdminBarController : NSObject <FBPageSectionsEditViewControllerDelegate, UIActionSheetDelegate> {

	FBMemPage* _page;
	FBPageSession* _pageSession;
	UIViewController* _presentingVC;
	FBPageSectionsEditViewController* _editVC;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSArray* _actions;
	FBPageEditAnalyticsLogger* _pageEditLogger;
	NSString* _tabType;
	FBPageTabAdminSettingsView* _adminBar;
	id<FBPageAdminBarControllerDelegate> _adminBarControllerDelegate;

}

@property (nonatomic,copy) NSString * tabType;                                                                    //@synthesize tabType=_tabType - In the implementation block
@property (assign,nonatomic,__weak) FBPageTabAdminSettingsView * adminBar;                                        //@synthesize adminBar=_adminBar - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageAdminBarControllerDelegate> adminBarControllerDelegate;              //@synthesize adminBarControllerDelegate=_adminBarControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)tabType;
-(void)setTabType:(NSString *)arg1 ;
-(void)didUpdateTabOrder;
-(void)didUpdatePageCTA;
-(void)didUpdateTemplate;
-(void)didAddTabToPage;
-(void)_showAlertWithTitle:(id)arg1 description:(id)arg2 ;
-(void)showActionsListFromView:(id)arg1 ;
-(void)_fetchAdminSettingsActions;
-(void)setActionsArray:(id)arg1 ;
-(void)_handleAdminActionsMutationFailure:(id)arg1 ;
-(FBPageTabAdminSettingsView *)adminBar;
-(void)presentTabActionsActionSheet;
-(void)_shareTabLink:(id)arg1 ;
-(void)_copyTabLink:(id)arg1 ;
-(void)_showEditPage;
-(void)_hideTab;
-(void)_handleHideTabMutationSuccess;
-(void)_handleHideTabMutationFailure;
-(void)tabRemoveCompleted;
-(void)tabAndActionsUpdated;
-(id<FBPageAdminBarControllerDelegate>)adminBarControllerDelegate;
-(id)initWithPage:(id)arg1 session:(id)arg2 presentingVC:(id)arg3 navigationCoordinator:(id)arg4 ;
-(void)setAdminBar:(FBPageTabAdminSettingsView *)arg1 ;
-(void)setAdminBarControllerDelegate:(id<FBPageAdminBarControllerDelegate>)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

