/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBGroupsInviteDataSourceDelegate.h>
#import <Facebook/FBGroupCreationFlowCoordinatorDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class FBUserSession, FBGroupsInviteDataSource, FBMemPerson, FBItemView_DEPRECATED, UIButton, FBGroupCreationFlowCoordinator, FBGroupCreationConfig, FBGroupsLogger, NSString;

@interface FBGroupsInviteViewController : UITableViewController <FBGroupsInviteDataSourceDelegate, FBGroupCreationFlowCoordinatorDelegate, UIAlertViewDelegate> {

	FBUserSession* _session;
	FBGroupsInviteDataSource* _dataSource;
	FBMemPerson* _invitee;
	BOOL _shouldDismissOnAlertConfirmation;
	FBItemView_DEPRECATED* _createGroupButtonView;
	UIButton* _createGroupButton;
	FBGroupCreationFlowCoordinator* _groupCreationFlowCoordinator;
	FBGroupCreationConfig* _creationConfig;
	BOOL _isRequestingToAddMember;
	FBGroupsLogger* _logger;
	NSString* _entryPoint;
	BOOL _everSelectedGroups;
	BOOL _creationAttempted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)_didTapCancel;
-(void)_didTapDone;
-(void)creationCancelled:(BOOL)arg1 ;
-(void)creationCompleted:(id)arg1 ;
-(id)initWithSession:(id)arg1 invitee:(id)arg2 entryPoint:(id)arg3 config:(id)arg4 ;
-(void)groupsInviteDataSourceDataUpdated;
-(void)_createGroupButtonTapped:(id)arg1 ;
-(void)_finishedAddToGroups:(long long)arg1 errorCount:(long long)arg2 requiresAdminApproval:(BOOL)arg3 groupName:(id)arg4 errorSample:(id)arg5 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
