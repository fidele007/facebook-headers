/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@protocol FBIntentHandler, FBGroupsBasicMemberActionSheetViewControllerDelegate;
@class UIActionSheet, NSString, FBGroupsAdminIDsDataSource, FBUserSession;

@interface FBGroupsBasicMemberActionSheetViewController : NSObject <UIActionSheetDelegate> {

	UIActionSheet* _actionSheet;
	long long _viewProfileButtonIndex;
	long long _viewPageProfileButtonIndex;
	long long _messageButtonIndex;
	long long _makeAdminIndex;
	long long _makeModeratorIndex;
	long long _removeAsAdminIndex;
	long long _removeAsModeratorIndex;
	long long _removeButtonIndex;
	long long _removeInviteButtonIndex;
	long long _sendReminderButtonIndex;
	long long _blockButtonIndex;
	long long _unblockButtonIndex;
	NSString* _groupID;
	NSString* _memberID;
	NSString* _memberName;
	id<FBIntentHandler> _intentHandler;
	FBGroupsAdminIDsDataSource* _dataSource;
	id<FBGroupsBasicMemberActionSheetViewControllerDelegate> _delegate;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBGroupsBasicMemberActionSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                             //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIntentHandler:(id)arg1 ;
-(id)initWithSession:(id)arg1 groupID:(id)arg2 ;
-(id)_getActionSheetForMemberID:(id)arg1 adminIDs:(id)arg2 moderatorIDs:(id)arg3 isPage:(BOOL)arg4 canMessage:(BOOL)arg5 ;
-(id)_getActionSheetForInviteeID:(id)arg1 canMessage:(BOOL)arg2 ;
-(void)_resetActionSheet;
-(void)leaveGroupWithGroupID:(id)arg1 ;
-(void)invalidateDataSource;
-(id)groupWithGroupID:(id)arg1 ;
-(void)_insertAddAdminActionSheetOptionIfNecessaryForIsViewerAdmin:(BOOL)arg1 isTargetAdmin:(BOOL)arg2 isViewerModerator:(BOOL)arg3 isViewerTargetMember:(BOOL)arg4 canViewerClaimAdminship:(BOOL)arg5 isArchived:(BOOL)arg6 ;
-(void)_insertAddModeratorActionSheetOptionIfNecessaryForIsViewerAdmin:(BOOL)arg1 isTargetAdmin:(BOOL)arg2 isTargetModerator:(BOOL)arg3 isViewerTargetMember:(BOOL)arg4 isArchived:(BOOL)arg5 ;
-(void)_insertRemoveAdminActionSheetOptionIfNecessaryForIsViewerAdmin:(BOOL)arg1 isTargetAdmin:(BOOL)arg2 ;
-(void)_insertRemoveModeratorActionSheetOptionIfNecessaryForIsViewerAdmin:(BOOL)arg1 isViewerModerator:(BOOL)arg2 isTargetAdmin:(BOOL)arg3 isTargetModerator:(BOOL)arg4 isViewerTargetMember:(BOOL)arg5 ;
-(void)_insertRemoveMemberActionSheetOptionIfNecessaryForIsViewerAdmin:(BOOL)arg1 isViewerModerator:(BOOL)arg2 isTargetAdmin:(BOOL)arg3 isTargetModerator:(BOOL)arg4 isViewerTargetMember:(BOOL)arg5 ;
-(void)_insertBlockMemberActionSheetOptionIfNecessaryForIsViewerAdmin:(BOOL)arg1 isViewerModerator:(BOOL)arg2 isTargetAdmin:(BOOL)arg3 isTargetModerator:(BOOL)arg4 isViewerTargetMember:(BOOL)arg5 ;
-(void)_insertViewProfileActionSheetOptionForIsPage:(BOOL)arg1 ;
-(void)_insertSendMessageActionSheetOptionIfNecessaryForIsViewerTargetMember:(BOOL)arg1 ;
-(void)_insertLeaveGroupActionSheetOptionIfNecessaryForIsViewerTargetMember:(BOOL)arg1 ;
-(void)_insertSendReminderActionSheetOptionForGroupIfNecessaryForIsViewerAdmin:(BOOL)arg1 isViewerModerator:(BOOL)arg2 isArchived:(BOOL)arg3 ;
-(void)_insertRemoveInviteOptionForGroupIfNecessaryForIsViewerAdmin:(BOOL)arg1 isViewerModerator:(BOOL)arg2 ;
-(void)showActionSheetForMemberID:(id)arg1 memberName:(id)arg2 isPage:(BOOL)arg3 canMessage:(BOOL)arg4 ;
-(void)showActionSheetForInviteeID:(id)arg1 memberName:(id)arg2 canMessage:(BOOL)arg3 ;
-(void)showActionSheetWithUnblockOptionForMemberID:(id)arg1 memberName:(id)arg2 canMessage:(BOOL)arg3 ;
-(void)setDelegate:(id<FBGroupsBasicMemberActionSheetViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBGroupsBasicMemberActionSheetViewControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end

