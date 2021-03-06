/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFriendsNearbyTableViewDataSource.h>

@protocol FBFriendsNearbyTableViewDelegate;
@class FBUserSession, NSMutableArray, FBFNTableViewDataSourceHelper, FBFNSearchDataController, NSString, FIGFriendsNearbyExperimentationParams, FBScenePath;

@interface FBFNTableViewSearchDataSource : NSObject <FBFriendsNearbyTableViewDataSource> {

	FBUserSession* _session;
	NSMutableArray* _sectionArray;
	FBFNTableViewDataSourceHelper* _dataSourceHelper;
	FBFNSearchDataController* _searchController;
	BOOL _loading;
	NSString* _searchText;
	double _lastTimeStamp;
	FIGFriendsNearbyExperimentationParams* _figExperimentationParams;
	id<FBFriendsNearbyTableViewDelegate> _tableViewDelegate;
	FBScenePath* _scenePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBTableViewDataSourceDelegateTransitioning> delegate; 
-(void)reloadInTableView:(id)arg1 section:(long long)arg2 ;
-(id)entitiesInSection:(long long)arg1 ;
-(id)titleForEntityCardsInSection:(long long)arg1 ;
-(id)displaySurfaceSourceIdInSection:(long long)arg1 ;
-(void)loadMoreInTableView:(id)arg1 section:(long long)arg2 ;
-(id)initWithSession:(id)arg1 tableViewDelegate:(id)arg2 scenePath:(id)arg3 experimentationParams:(id)arg4 ;
-(void)loadWithSearchText:(id)arg1 tableView:(id)arg2 section:(long long)arg3 ;
-(void)_addNearbyFriendsList:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end

