/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBGroupsInfoViewConfig;
@class FBUserSession, FBMemGroup, NSString, FBGroupDownloadRequestProvider, FBTransientViewStateManager;

@interface FBGroupNotificationsSettingsViewController : UITableViewController <UIGestureRecognizerDelegate> {

	FBUserSession* _session;
	FBMemGroup* _group;
	NSString* _groupID;
	id<FBGroupsInfoViewConfig> _config;
	FBGroupDownloadRequestProvider* _downloadProvider;
	FBTransientViewStateManager* _viewStateManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(void)_groupModelUpdated:(id)arg1 ;
-(void)_loadGroup;
-(id)_spacerViewWithHeight:(double)arg1 ;
-(id)_effectivePossiblePushSubscriptionLevelEdges;
-(id)_tableView:(id)arg1 cellForPostSettingsRowAtIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 cellForPushSettingsRowAtIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 cellForRequestSettingsRowAtIndexPath:(id)arg2 ;
-(id)_footerStringForSection:(long long)arg1 ;
-(double)_tableView:(id)arg1 heightForSettingsRowAtIndexPath:(id)arg2 label:(id)arg3 subtitle:(id)arg4 isChecked:(BOOL)arg5 ;
-(id)_tableView:(id)arg1 cellForSettingsRowAtIndexPath:(id)arg2 label:(id)arg3 subtitle:(id)arg4 isChecked:(BOOL)arg5 ;
-(void)_toggleMemberRequestSetting:(id)arg1 ;
-(void)_updatePushSubscriptionToValidSetting;
-(id)_requestNotificationSettingFooterString;
-(BOOL)_isValidPushSubscriptionLevelType:(id)arg1 ;
-(id)initWithGroupID:(id)arg1 groupName:(id)arg2 session:(id)arg3 viewConfig:(id)arg4 ;
-(id)_backgroundViewWithBorder;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

