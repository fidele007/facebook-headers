/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGroupsAbstractPagedDataViewController.h>
#import <Facebook/FBGroupsDataSourceDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/THAdminsEmptyStateViewDelegate.h>
#import <Facebook/FBAvatarPickerControllerDelegate.h>
#import <Facebook/FBGroupsMembersDataSourceActionHandler.h>

@protocol FBIntentHandler, FBGroupsMembersViewConfig, FBGroupsMemberPickerProviderProtocol, FBGroupsMembersDataSourceProtocolFBGroupsDataSourceProtocolUITableViewDelegate, FBGroupsMembersQueryProviding, FBGroupsMembersViewControllerDelegate;
@class NSIndexPath, FBSearchBar, FBUserSession, FBConsistentLookasideCacheObservationHandle, FBContentInsetTracker, UIView, FBGroupsAdminsEmptyStateView, NSString, FBNuxController, UITableViewCell, FBMemGroup;

@interface FBGroupsMembersViewController : FBGroupsAbstractPagedDataViewController <FBGroupsDataSourceDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, THAdminsEmptyStateViewDelegate, FBAvatarPickerControllerDelegate, FBGroupsMembersDataSourceActionHandler> {

	NSIndexPath* _selectedIndexPath;
	id<FBIntentHandler> _intentHandler;
	FBSearchBar* _searchBar;
	FBUserSession* _session;
	FBConsistentLookasideCacheObservationHandle* _groupObservationHandle;
	FBContentInsetTracker* _contentInsetTracker;
	UIView* _searchBarWrapper;
	FBGroupsAdminsEmptyStateView* _adminsEmptyStateView;
	int _viewMode;
	id<FBGroupsMembersViewConfig> _config;
	id<FBGroupsMemberPickerProviderProtocol> _pickerProvider;
	id<FBGroupsMembersDataSourceProtocol><FBGroupsDataSourceProtocol><UITableViewDelegate> _dataSource;
	id<FBGroupsMembersDataSourceProtocol><FBGroupsDataSourceProtocol><UITableViewDelegate> _searchDataSource;
	NSString* _groupID;
	id<FBGroupsMembersQueryProviding> _queryProvider;
	unsigned long long _state;
	unsigned long long _avatarPickerForAction;
	FBNuxController* _nuxController;
	UITableViewCell* _multiTierAdminNuxCell;
	/*^block*/id _actionSheetCallback;
	id<FBGroupsMembersViewControllerDelegate> _delegate;
	FBMemGroup* _group;

}

@property (assign,nonatomic,__weak) id<FBGroupsMembersViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBMemGroup * group;                                                     //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(void)_groupModelUpdated:(id)arg1 ;
-(BOOL)isMemberBioEnabled;
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(void)dataSource:(id)arg1 didEndDownloadForType:(long long)arg2 error:(id)arg3 ;
-(void)membersDataSourceDidSelectAddMemberCellForAdminType:(id)arg1 ;
-(void)membersDataSourceDidSelectMember:(id)arg1 forIndexPath:(id)arg2 ;
-(void)actionSheetDidDismiss:(id)arg1 ;
-(void)openViewerMemberInfoPage;
-(id)initWithSession:(id)arg1 groupID:(id)arg2 queryProvider:(id)arg3 intentHandler:(id)arg4 viewMode:(int)arg5 pickerProvider:(id)arg6 viewConfig:(id)arg7 ;
-(void)updateDataSourceForGroupMembershipAction:(unsigned long long)arg1 person:(id)arg2 ;
-(void)membersDataSourceShowMoreActions:(id)arg1 didDismissActionSheet:(/*^block*/id)arg2 ;
-(void)_setupEmptyStateForViewStateManager;
-(void)_setupAdminEducationTooltipIfEligible;
-(void)_memberSearchUpdated:(id)arg1 ;
-(void)_reloadDataSource:(id)arg1 ;
-(void)_updateEmptyStateForViewStateManager;
-(void)setupSearchBar;
-(void)showActionSheetForMember:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_openAvatarPickerControllerWithTitle:(id)arg1 ;
-(void)showMoreActionsActionSheetForMemberWhenBioIsEnabled:(id)arg1 ;
-(void)_suggestAdmin:(id)arg1 ;
-(void)_addAdmin:(id)arg1 ;
-(void)_suggestAdminSuccess:(id)arg1 ;
-(void)_suggestAdminFailure:(id)arg1 ;
-(void)didTapOnMakeAdminButton;
-(void)didTapOnSuggestAdminButton;
-(CGSize)_tableViewContentSize:(id)arg1 ;
-(void)setDelegate:(id<FBGroupsMembersViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id<FBGroupsMembersViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_setState:(unsigned long long)arg1 ;
-(void)setGroup:(FBMemGroup *)arg1 ;
-(FBMemGroup *)group;
-(void)_updateTitle;
@end

