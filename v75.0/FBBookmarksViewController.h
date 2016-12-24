/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBBookmarksActionSheetControllerDelegate.h>
#import <Facebook/FBBookmarksDownloadManagerDelegate.h>
#import <Facebook/FBBookmarksNavigationHandlerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@class FBBookmarksActionSheetController, FBBookmarksDownloadManager, FBBookmarksUnreadCountManager, FBBookmarksCLCHandler, FBBookmarksNavigationHandler, FBScenePath, FBTimer, FBUserSession, FBNuxController, NSArray, NSMutableDictionary, NSMutableSet, UITableView, UIActivityIndicatorView, FBBookmarksRedesignExperimentContext, FBBookmarksContainerView, FBViewMarginCalculator, FBAdsManagerDeepLinkingController, NSIndexPath, NSString;

@interface FBBookmarksViewController : UIViewController <FBBookmarksActionSheetControllerDelegate, FBBookmarksDownloadManagerDelegate, FBBookmarksNavigationHandlerDelegate, UITableViewDataSource, UITableViewDelegate, FBAccessibilityInvalidationEventsListener> {

	BOOL _nuxShown;
	FBBookmarksActionSheetController* _actionSheetController;
	FBBookmarksDownloadManager* _bookmarksDownloadManager;
	FBBookmarksUnreadCountManager* _unreadCountManager;
	FBBookmarksCLCHandler* _clcHandler;
	FBBookmarksNavigationHandler* _navigationHandler;
	FBScenePath* _scenePath;
	FBTimer* _nuxTimer;
	FBTimer* _collapseTimer;
	FBUserSession* _session;
	FBNuxController* _addFavoritesNuxController;
	NSArray* _downloaderSections;
	long long _favoriteDeleteCount;
	NSMutableDictionary* _headerViews;
	NSMutableDictionary* _bookmarkToHandleMap;
	NSMutableSet* _expandedSectionIndices;
	UITableView* _tableView;
	UIActivityIndicatorView* _spinner;
	FBBookmarksRedesignExperimentContext* _bookmarksRedesignExperimentContext;
	FBBookmarksContainerView* _containerView;
	FBViewMarginCalculator* _viewMarginCalculator;
	unsigned long long _cellCardStyle;
	unsigned long long _sectionBeingEdited;
	FBAdsManagerDeepLinkingController* _adsManagerDeepLinkingController;
	NSIndexPath* _maxIndexPathSeen;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)didReceiveAccessibilityInvalidation;
-(BOOL)fb_enableChatBarButton;
-(void)bookmarksDownloadManager:(id)arg1 didLoadBookmarkSections:(id)arg2 fromCache:(BOOL)arg3 ;
-(void)didNavigateToBookmark:(id)arg1 indexPath:(id)arg2 navigationHandler:(id)arg3 ;
-(void)handleHardcodedBookmark:(id)arg1 atIndexPath:(id)arg2 tappedView:(id)arg3 ;
-(id)_downloaderSectionAtIndex:(long long)arg1 ;
-(id)_tableViewBookmarkAtIndexPath:(id)arg1 ;
-(void)_deselectSelectedRow;
-(void)_collapseAllSections;
-(void)_bookmarkWasUpdated:(id)arg1 ;
-(void)_openAddFavoritesView;
-(void)_expandSectionAtIndex:(long long)arg1 ;
-(void)_updateMaxIndexPathWithIndexPathSeen:(id)arg1 ;
-(BOOL)_indexPathIsFirstCellInSection:(id)arg1 ;
-(BOOL)_indexPathIsLastCellInSection:(id)arg1 ;
-(id)_tableView:(id)arg1 profileCellForIndexPath:(id)arg2 ;
-(id)_tableView:(id)arg1 bookmarkRowCellForIndexPath:(id)arg2 ;
-(BOOL)_isDeeplinkBookmark:(id)arg1 ;
-(void)_editTappedForView:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)_startNuxTimer;
-(void)_showNuxIfPossible;
-(void)_replaceDownloaderSectionItemsAtIndex:(long long)arg1 withItems:(id)arg2 ;
-(void)_logFavoriteDeleteCount:(id)arg1 ;
-(void)_postNotificationForBookmark:(id)arg1 ;
-(BOOL)_sectionHasSeeMoreCell:(long long)arg1 ;
-(BOOL)_tableViewHasCellAtIndexPath:(id)arg1 ;
-(void)_addEditOnlyHeadItemsForSection:(unsigned long long)arg1 ;
-(void)_removeEditOnlyHeadItemsForSection:(unsigned long long)arg1 ;
-(void)bookmarksActionSheetController:(id)arg1 tappedBookmark:(id)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)_endEditing;
@end

