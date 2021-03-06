/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@protocol FBGroupsInfoViewConfig, FBGroupsInfoManagementDataSourceDelegate, FBTableViewMutating;
@class FBMemGroup, FBUserSession, NSDictionary, NSString;

@interface FBGroupsInfoManagementDataSource : NSObject <UITableViewDataSource> {

	FBMemGroup* _group;
	FBUserSession* _session;
	NSDictionary* _adminOptions;
	id<FBGroupsInfoViewConfig> _config;
	id<FBGroupsInfoManagementDataSourceDelegate> _delegate;
	id<FBTableViewMutating> _tableViewMutator;

}

@property (assign,nonatomic,__weak) id<FBGroupsInfoManagementDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator;                           //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(id)initWithSession:(id)arg1 group:(id)arg2 viewConfig:(id)arg3 ;
-(long long)_effectiveCountForManagementOptions:(id)arg1 ;
-(long long)_effectiveRowForManagementOption:(long long)arg1 ;
-(id)_cellForPendingRequests:(id)arg1 tableView:(id)arg2 ;
-(id)_cellForOptionSettings:(id)arg1 tableView:(id)arg2 ;
-(long long)_numberOfPendingActionsForAdminOptionAtIndexPath:(id)arg1 ;
-(id)_badgeViewForAdminOption:(long long)arg1 ;
-(BOOL)_shouldShowReportedStories:(id)arg1 ;
-(BOOL)_shouldShowPendingPosts:(id)arg1 ;
-(BOOL)_shouldShowPendingMembers:(id)arg1 ;
-(BOOL)_shouldShowGroupMemberCompanies:(id)arg1 ;
-(BOOL)_shouldShowActivityLog:(id)arg1 ;
-(void)setDelegate:(id<FBGroupsInfoManagementDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBGroupsInfoManagementDataSourceDelegate>)delegate;
-(void)updateGroup:(id)arg1 ;
@end

