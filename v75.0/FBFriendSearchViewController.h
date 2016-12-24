/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBFriendCenterItem.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBPeopleSearchStreamListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionEventListener.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBFriendingViewControllerLoggingProtocol.h>

@class FBUserSession, FBComponentTableViewDataSource, FBPeopleSearchStream, FBPeopleSearchDataSourceHelper, UISearchBar, UITableView, FBFriendingToolbox, FBTransientViewStateManager, FBScenePath, NSNumber, NSString;

@interface FBFriendSearchViewController : UIViewController <FBFriendCenterItem, UISearchBarDelegate, CKComponentProvider, FBPeopleSearchStreamListener, FBComponentScrollEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceSelectionEventListener, FBComponentCellAppearanceEventListener, FBFriendingViewControllerLoggingProtocol> {

	FBUserSession* _session;
	FBComponentTableViewDataSource* _dataSource;
	FBPeopleSearchStream* _peopleSearchStream;
	FBPeopleSearchDataSourceHelper* _searchResultHelper;
	UISearchBar* _searchBar;
	UITableView* _tableView;
	FBFriendingToolbox* _toolbox;
	FBTransientViewStateManager* _searchViewStateManager;
	FBScenePath* _scenePath;
	NSNumber* _searchModificationCount;
	NSString* _lastSearchedText;
	double _lastKeyboardHeight;
	unsigned long long _numberOfSearches;
	unsigned long long _numberOfSuggestionsSeenPerSearch;

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
-(void)dataSource:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(void)_didEnterBackground;
-(unsigned long long)friendCenterPreferredPresentationMethod;
-(void)finalizeLoggingForSurfaceName:(id)arg1 ;
-(void)_logAndClearNumberOfSearches;
-(void)_keyboardWillAppear:(id)arg1 ;
-(void)_removeEmptyView;
-(void)PeopleSearchStream:(id)arg1 didFinishLoadingPagedSearchResults:(id)arg2 ;
-(void)PeopleSearchStream:(id)arg1 didFailLoadingSearchResults:(id)arg2 ;
-(void)PeopleSearchStream:(id)arg1 didUpdateSearchResult:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)_customViewWithNullState:(BOOL)arg1 title:(id)arg2 subtitle:(id)arg3 height:(double)arg4 adjustToKeyboard:(BOOL)arg5 ;
-(void)_searchPeople:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
