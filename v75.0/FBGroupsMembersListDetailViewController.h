/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSegmentedContainerViewController.h>
#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <Facebook/FBGroupsMembersViewControllerDelegate.h>
#import <Facebook/FBGroupsBasicMemberActionSheetViewControllerDelegate.h>
#import <Facebook/FBGroupsSuggestedMembersPickerDelegate.h>

@protocol FBIntentHandler, FBGroupsMemberPickerProviderProtocol, FBGroupsMembersViewConfig, FBGroupsMembersQueryProviding, FBGroupsPreAddMemberHandling, FBGroupsMembersListDetailViewControllerDelegate;
@class FBUserSession, FBConsistentLookasideCacheObservationHandle, FBMemGroup, FBGroupsMembersViewController, FBGroupsBasicMemberActionSheetViewController, NSString, FBGroupDownloadRequestProvider;

@interface FBGroupsMembersListDetailViewController : FBSegmentedContainerViewController <FBAvatarPickerControllerDelegate, FBGroupsMembersViewControllerDelegate, FBGroupsBasicMemberActionSheetViewControllerDelegate, FBGroupsSuggestedMembersPickerDelegate> {

	FBUserSession* _session;
	FBConsistentLookasideCacheObservationHandle* _groupObservationHandle;
	FBMemGroup* _group;
	id<FBIntentHandler> _intentHandler;
	FBGroupsMembersViewController* _allMembersController;
	FBGroupsMembersViewController* _adminsController;
	FBGroupsMembersViewController* _blockedUsersController;
	FBGroupsBasicMemberActionSheetViewController* _memberActionSheetController;
	id<FBGroupsMemberPickerProviderProtocol> _pickerProvider;
	id<FBGroupsMembersViewConfig> _config;
	NSString* _groupID;
	id<FBGroupsMembersQueryProviding> _queryProvider;
	FBGroupDownloadRequestProvider* _downloadProvider;
	Class _moduleConfiguration;
	id<FBGroupsPreAddMemberHandling> _confirmationHandler;
	id<FBGroupsMembersListDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGroupsMembersListDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)groupsSuggestedMembersPickerController:(id)arg1 didSelectAvatars:(id)arg2 emails:(id)arg3 ;
-(void)groupsSuggestedMembersPickerControllerDidCancel:(id)arg1 ;
-(void)groupsSuggestedMembersPickerControllerDidChangeSelection:(id)arg1 ;
-(id)initWithSession:(id)arg1 groupID:(id)arg2 queryProvider:(id)arg3 memberActionSheetController:(id)arg4 intentHandler:(id)arg5 config:(id)arg6 pickerProvider:(id)arg7 moduleConfiguration:(Class)arg8 ;
-(void)_groupModelUpdated:(id)arg1 ;
-(void)_initializeViewControllers;
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(BOOL)shouldUpdateTitle;
-(BOOL)shouldUpdateRightBarButtonItem;
-(void)actionSheetReadyForDisplay:(id)arg1 ;
-(void)didAddAdmin:(id)arg1 ;
-(void)didRemoveAdmin:(id)arg1 ;
-(void)didRemoveMember:(id)arg1 ;
-(void)didBlockMember:(id)arg1 ;
-(void)didUnblockMember:(id)arg1 ;
-(void)didSendReminder:(id)arg1 ;
-(void)didRemoveInvite:(id)arg1 ;
-(void)actionSheetDidDismiss:(id)arg1 ;
-(void)_loadGroup;
-(void)_membershipChanged:(id)arg1 mutation:(unsigned long long)arg2 ;
-(void)membershipChanged:(id)arg1 mutation:(unsigned long long)arg2 ;
-(void)_groupMembersRequestCompletion:(id)arg1 selectedMembers:(id)arg2 selectedEmails:(id)arg3 payload:(id)arg4 ;
-(void)_failedMemberQueryBlock:(id)arg1 selectedMembers:(id)arg2 ;
-(void)_showMemberPickerViewWithInitialSelection:(id)arg1 ;
-(void)_setBlockedMembersTabVisibility;
-(void)_setViewControllers;
-(void)showActionSheetForMember:(id)arg1 forViewMode:(int)arg2 ;
-(void)showActionSheetForInvitee:(id)arg1 ;
-(void)viewerAdminStatusChanged;
-(BOOL)shouldUpdateLeftBarButtonItem;
-(void)setDelegate:(id<FBGroupsMembersListDetailViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBGroupsMembersListDetailViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_updateUI;
-(void)_addButtonPressed:(id)arg1 ;
@end

