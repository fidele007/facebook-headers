/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBEventsDashboardEventCellControllerDelegate.h>
#import <Facebook/FBEventsDashboardDataSourceStateHelperDelegate.h>
#import <Facebook/FBEventsInviteViewControllerDelegate.h>
#import <Facebook/FBEventsLegacyInviteViewControllerDelegate.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBEventsDashboardDataSourceProtocol.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBEventsDashboardObjectFetcherProtocol, FBTableViewMutating, FBEventsTableViewCellControllerProtocol, FBEventsDashboardPagedEventsFetchedDataSourceDelegate;
@class FBUserSession, NSString, FBEventsDashboardSectionGroupCollection, FBEventViewAllTableViewCell, FBEventsDashboardStateMessageTableViewCell, FBEventsDashboardDataSourceStateHelper, FBMemEvent, UITableView, FBEventsDashboardViewController, FBEventAnalyticTracker;

@interface FBEventsDashboardPagedEventsFetchedDataSource : NSObject <FBEventsDashboardEventCellControllerDelegate, FBEventsDashboardDataSourceStateHelperDelegate, FBEventsInviteViewControllerDelegate, FBEventsLegacyInviteViewControllerDelegate, FBAccessibilityInvalidationEventsListener, FBEventsDashboardDataSourceProtocol, UITableViewDelegate, UITableViewDataSource> {

	FBUserSession* _session;
	NSString* _viewerId;
	FBEventsDashboardSectionGroupCollection* _eventsData;
	BOOL _showLoadMoreCell;
	id<FBEventsDashboardObjectFetcherProtocol> _fetcher;
	FBEventViewAllTableViewCell* _loadingCell;
	FBEventsDashboardStateMessageTableViewCell* _emptyCell;
	FBEventsDashboardStateMessageTableViewCell* _errorCell;
	FBEventsDashboardDataSourceStateHelper* _dataSourceHelper;
	BOOL _isBusyLoading;
	BOOL _finishedFirstLoad;
	long long _currentPageLoadOffset;
	FBMemEvent* _modalEvent;
	id<FBTableViewMutating> _mutator;
	UITableView* _tableView;
	FBEventsDashboardViewController* _viewController;
	id<FBEventsTableViewCellControllerProtocol> _eventCellController;
	BOOL _didFirstScroll;
	BOOL _enableInfiniteScroll;
	NSString* analyticsFilterName;
	long long _headerStyle;
	NSString* _errorImagePath;
	NSString* _errorMessage;
	NSString* _emptyImagePath;
	NSString* _emptyMessage;
	NSString* _loadingMessage;
	FBEventAnalyticTracker* _tracker;
	id<FBEventsDashboardPagedEventsFetchedDataSourceDelegate> _delegate;

}

@property (assign,nonatomic) long long headerStyle;                                                                  //@synthesize headerStyle=_headerStyle - In the implementation block
@property (assign,nonatomic) BOOL enableInfiniteScroll;                                                              //@synthesize enableInfiniteScroll=_enableInfiniteScroll - In the implementation block
@property (nonatomic,copy) NSString * errorImagePath;                                                                //@synthesize errorImagePath=_errorImagePath - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                                                  //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,copy) NSString * emptyImagePath;                                                                //@synthesize emptyImagePath=_emptyImagePath - In the implementation block
@property (nonatomic,copy) NSString * emptyMessage;                                                                  //@synthesize emptyMessage=_emptyMessage - In the implementation block
@property (nonatomic,copy) NSString * loadingMessage;                                                                //@synthesize loadingMessage=_loadingMessage - In the implementation block
@property (nonatomic,retain) FBEventAnalyticTracker * tracker;                                                       //@synthesize tracker=_tracker - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsDashboardPagedEventsFetchedDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * analyticsFilterName; 
+(id)getIndexPathsWithRange:(NSRange)arg1 section:(long long)arg2 ;
+(void)setEventsDashboardDataSourceTableViewCellProvider:(/*^block*/id)arg1 ;
+(void)setViewAllTableViewCellProvider:(/*^block*/id)arg1 ;
+(void)setEventsDashboardEventCellControllerProvider:(/*^block*/id)arg1 ;
+(void)setEventsDashboardEventsCellControllerClass:(Class)arg1 ;
+(void)setEventsLoadingCellHeight:(double)arg1 ;
-(void)cellController:(id)arg1 didUpdateEvent:(id)arg2 ;
-(void)cellController:(id)arg1 didRequestInvitePicker:(id)arg2 ;
-(void)cellController:(id)arg1 didRequestEditEvent:(id)arg2 ;
-(void)cellController:(id)arg1 didRequestPromoteEvent:(id)arg2 ;
-(void)inviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 withNote:(id)arg4 ;
-(void)didCancelWithInviteController:(id)arg1 forEventID:(id)arg2 ;
-(void)legacyInviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 ;
-(void)didCancelWithLegacyInviteController:(id)arg1 forEventID:(id)arg2 ;
-(void)legacyInviteController:(id)arg1 didFinishWithSelectionWithMessenger:(id)arg2 forEventID:(id)arg3 messengerShareURL:(id)arg4 ;
-(FBEventAnalyticTracker *)tracker;
-(void)setTracker:(FBEventAnalyticTracker *)arg1 ;
-(void)didReceiveFontInvalidation;
-(BOOL)enableInfiniteScroll;
-(NSString *)analyticsFilterName;
-(void)setAnalyticsFilterName:(NSString *)arg1 ;
-(void)prepareDataSourceForTable:(id)arg1 mutator:(id)arg2 viewController:(id)arg3 ;
-(void)unloadDataSourceFromTable:(id)arg1 mutator:(id)arg2 viewController:(id)arg3 ;
-(void)updateViewMode;
-(long long)getNumberOfEventsInGroupIndex:(long long)arg1 ;
-(long long)getNumberOfGroups;
-(void)_loadMore:(id)arg1 ;
-(id)_createGroupsForEvents:(id)arg1 ;
-(void)_setSectionGroups:(id)arg1 ;
-(id)_getAnalyticsLoadExtras:(id)arg1 ;
-(id)_getEventForIndexPath:(id)arg1 ;
-(id)getContentCellForIndexPath:(id)arg1 ;
-(id)_getAnalyticsPermalinkExtras:(id)arg1 ;
-(id)_getAnalyticsBasicExtras;
-(id)redesignComposerViewControllerWithEvent:(id)arg1 ;
-(void)_sendInvitesWithSelectedInvitees:(id)arg1 toEvent:(id)arg2 withNote:(id)arg3 ;
-(void)_sendLegacyInvitesWithSelectedInvitees:(id)arg1 toEvent:(id)arg2 throughMessenger:(BOOL)arg3 messengerShareURL:(id)arg4 ;
-(id)stateCellHelper:(id)arg1 cellForStateType:(long long)arg2 ;
-(double)stateCellHelper:(id)arg1 heightForStateType:(long long)arg2 ;
-(id)initWithEventsFetcher:(id)arg1 session:(id)arg2 viewerId:(id)arg3 tracker:(id)arg4 ;
-(void)setEnableInfiniteScroll:(BOOL)arg1 ;
-(NSString *)errorImagePath;
-(void)setErrorImagePath:(NSString *)arg1 ;
-(NSString *)emptyImagePath;
-(void)setEmptyImagePath:(NSString *)arg1 ;
-(NSString *)emptyMessage;
-(void)setEmptyMessage:(NSString *)arg1 ;
-(NSString *)loadingMessage;
-(void)setLoadingMessage:(NSString *)arg1 ;
-(void)setDelegate:(id<FBEventsDashboardPagedEventsFetchedDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBEventsDashboardPagedEventsFetchedDataSourceDelegate>)delegate;
-(void)loadMore;
-(long long)headerStyle;
-(void)setHeaderStyle:(long long)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
@end

