/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewController.h>
#import <Facebook/FBFriendCenterItem.h>
#import <Facebook/FBFriendableContactsDataSourceDelegate.h>
#import <Facebook/FBFriendCenterPYMKContactsDataSourceDelegate.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceSectionHeaderHandler.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentScrollEventListener.h>

@class FBUserSession, FBComponentTableViewDataSource, FBFriendableContactsDataSource, FBFriendCenterPYMKContactsDataSource, FBFriendingToolbox, FBScenePath, FBFriendableContactsDataSourceHelper, UISearchBar, NSString;

@interface FBFriendableContactsViewController : FBTableViewController <FBFriendCenterItem, FBFriendableContactsDataSourceDelegate, FBFriendCenterPYMKContactsDataSourceDelegate, CKComponentProvider, FBComponentTableViewDataSourceSelectionEventListener, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewDataSourceCellConfigProvider, UISearchBarDelegate, FBComponentTableViewDataSourceCellConfigProvider, FBComponentScrollEventListener> {

	FBUserSession* _session;
	FBComponentTableViewDataSource* _dataSource;
	FBFriendableContactsDataSource* _friendableDataSource;
	FBFriendCenterPYMKContactsDataSource* _pymkDataSource;
	FBFriendingToolbox* _toolbox;
	FBScenePath* _scenePath;
	FBFriendableContactsDataSourceHelper* _dataSourceHelper;
	UISearchBar* _searchBar;
	BOOL _hasLoadedPYMK;
	unsigned long long _initialTime;
	unsigned long long _friendableContactsCount;
	unsigned long long _PYMKContactsCount;
	unsigned long long _friendableContactsSeen;
	NSString* _requestSessionID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(id)menuItemDescription;
+(BOOL)needRecreateOnAccess;
+(id)newViewControllerWithSession:(id)arg1 ;
-(id)analyticsModule;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(id)dataSource:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)dataSource:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(BOOL)fb_automaticallyAdjustsTableViewInsets;
-(unsigned long long)friendCenterPreferredPresentationMethod;
-(void)didFailLoadingPYMKWithError:(id)arg1 ;
-(void)didUpdateSearchResults:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)didFinishLoadingPYMK:(id)arg1 ;
-(void)didRemovePYMKSuggestion:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)didUpdatePYMKSuggestion:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)didFinishLoadingFriendableContacts:(id)arg1 numberOfNew:(unsigned long long)arg2 ;
-(void)didFailLoadingFriendableContactsWithError:(id)arg1 currentLoadedContacts:(id)arg2 ;
-(void)didRemoveFriendableContact:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)didUpdateFriendableContact:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)_finishedLoadingFriendableContacts;
-(void)_logEvent:(id)arg1 extraData:(id)arg2 ;
-(void)_markAbortedForEvents;
-(void)_markStartForEvents;
-(void)_markAnimationForEvents;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)_logError:(id)arg1 ;
@end

