/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsTableSectionDetailViewDelegate.h>
#import <Facebook/FBGroupsDataSourceProtocol.h>
#import <Facebook/FBGroupsMembersDataSourceProtocol.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBGroupsMembersQueryProviding, FBIntentHandler, FBGroupsMembersDataSourceActionHandler, FBGroupsTableViewControllerProtocol, FBGroupsMembersViewConfig, FBGroupsDataSourceDelegate, FBTableViewMutating;
@class FBMemGroup, NSMutableDictionary, FBUserSession, NSString;

@interface FBGroupsAdminsDataSource : NSObject <FBGroupsTableSectionDetailViewDelegate, FBGroupsDataSourceProtocol, FBGroupsMembersDataSourceProtocol, UITableViewDataSource, UITableViewDelegate> {

	id<FBGroupsMembersQueryProviding> _queryProvider;
	NSMutableDictionary* _membersEdges;
	NSMutableDictionary* _downloadHandles;
	NSMutableDictionary* _canDownloadTails;
	NSMutableDictionary* _tailCursors;
	BOOL _inAddMemberCellGK;
	id<FBIntentHandler> _intentHandler;
	id<FBGroupsMembersDataSourceActionHandler> _actionHandler;
	id<FBGroupsTableViewControllerProtocol> _actionsTarget;
	id<FBGroupsMembersViewConfig> _config;
	id<FBGroupsDataSourceDelegate> _delegate;
	FBUserSession* _session;
	id<FBTableViewMutating> _tableViewMutator;
	FBMemGroup* _group;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBUserSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<FBGroupsDataSourceDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator;                           //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,nonatomic,__weak) id<FBGroupsTableViewControllerProtocol> actionsTarget;              //@synthesize actionsTarget=_actionsTarget - In the implementation block
@property (nonatomic,retain) id<FBGroupsMembersViewConfig> config;                                      //@synthesize config=_config - In the implementation block
@property (assign,nonatomic,__weak) FBMemGroup * group;                                                 //@synthesize group=_group - In the implementation block
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)tappedURL:(id)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)downloadData:(long long)arg1 ;
-(BOOL)isDownloadingData;
-(BOOL)supportsDownloadType:(long long)arg1 ;
-(BOOL)canDownloadTail;
-(id<FBGroupsTableViewControllerProtocol>)actionsTarget;
-(void)setActionsTarget:(id<FBGroupsTableViewControllerProtocol>)arg1 ;
-(BOOL)_isViewerAdmin:(id)arg1 ;
-(void)_removeMemberID:(id)arg1 fromSection:(unsigned long long)arg2 ;
-(unsigned long long)_effectiveSection:(unsigned long long)arg1 ;
-(void)_downloadData:(long long)arg1 section:(unsigned long long)arg2 ;
-(BOOL)_shouldRenderSection:(unsigned long long)arg1 ;
-(id)_moderatorFooterTitle;
-(id)_seeMoreCellForSection:(long long)arg1 ;
-(BOOL)_shouldShowAddMemberCell;
-(BOOL)_isAddMemberCell:(id)arg1 ;
-(id)_tableView:(id)arg1 cellForAddMemberRowAtIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 cellForMemberRowAtIndexPath:(id)arg2 ;
-(double)_tableView:(id)arg1 heightForAddMemberRowAtIndexPath:(id)arg2 ;
-(double)_tableView:(id)arg1 heightForMemberRowAtIndexPath:(id)arg2 ;
-(id)_adminEdgeForIndexPath:(id)arg1 ;
-(id)_loadMembersWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 section:(unsigned long long)arg3 ;
-(id)_adminTypeForSection:(unsigned long long)arg1 ;
-(id)_addMemberTitleForIndexPath:(id)arg1 ;
-(void)_seeMoreAdmins:(id)arg1 ;
-(void)_seeMoreModerators:(id)arg1 ;
-(id)initWithSession:(id)arg1 queryProvider:(id)arg2 intentHandler:(id)arg3 actionHandler:(id)arg4 ;
-(void)removeMemberID:(id)arg1 ;
-(BOOL)isConfirmedMemberForIndexPath:(id)arg1 ;
-(id)entityCardsInfoForIndexPath:(id)arg1 ;
-(void)setDelegate:(id<FBGroupsDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBGroupsDataSourceDelegate>)delegate;
-(id<FBGroupsMembersViewConfig>)config;
-(void)setGroup:(FBMemGroup *)arg1 ;
-(FBMemGroup *)group;
-(void)setConfig:(id<FBGroupsMembersViewConfig>)arg1 ;
-(BOOL)hasData;
-(void)cancelRequests;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end

