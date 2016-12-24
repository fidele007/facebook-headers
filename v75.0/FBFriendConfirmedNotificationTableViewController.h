/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBPYMKStreamListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>

@protocol FBPYMKStreamProtocol;
@class NSArray, FBComponentTableViewDataSource, FBFriendingToolbox, FBPullToRefreshView, FBScenePath, FBUserSession, UITableView, FBFriendConfirmedNotificationTableViewSectionHelper, NSString;

@interface FBFriendConfirmedNotificationTableViewController : UIViewController <CKComponentProvider, FBComponentTableViewDataSourceSelectionEventListener, FBPullToRefreshViewDelegate, FBComponentScrollEventListener, FBPYMKStreamListener, FBComponentTableViewDataSourceCellConfigProvider> {

	NSArray* _confirmedNotificationsFriends;
	FBComponentTableViewDataSource* _dataSource;
	FBFriendingToolbox* _toolbox;
	FBPullToRefreshView* _pullToRefreshView;
	FBScenePath* _scenePath;
	FBUserSession* _session;
	UITableView* _tableView;
	FBFriendConfirmedNotificationTableViewSectionHelper* _dataSourceHelper;
	BOOL _shouldShowPYMK;
	id<FBPYMKStreamProtocol> _pymkStream;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(BOOL)fb_showNavBarSearchField;
-(void)PYMKStream:(id)arg1 didFinishedLoadingSuggestions:(id)arg2 andNumberOfNew:(unsigned long long)arg3 ;
-(void)PYMKStream:(id)arg1 didFailLoadingWithError:(id)arg2 andCurrentSuggestions:(id)arg3 ;
-(void)PYMKStream:(id)arg1 didUpdateSuggestion:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)PYMKStream:(id)arg1 didRemoveSuggestion:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(BOOL)fb_automaticallyAdjustsTableViewInsets;
-(id)initWithSession:(id)arg1 WithConfirmedNotificationsFriends:(id)arg2 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidScrollToTop:(FBScrollViewState)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

