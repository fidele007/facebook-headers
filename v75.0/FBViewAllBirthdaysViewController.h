/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBEventsDashboardBirthdayCellControllerDelegate.h>

@class FBUserSession, FBEventsDashboardBirthdayObjectFetcher, NSArray, FBTransientViewStateManager, FBEventLiveGuestlistLoadingCell, FBEventAnalyticTracker, NSDate, NSString;

@interface FBViewAllBirthdaysViewController : UITableViewController <FBEventsDashboardBirthdayCellControllerDelegate> {

	FBUserSession* _session;
	FBEventsDashboardBirthdayObjectFetcher* _birthdayObjectFetcher;
	NSArray* _birthdaySectionGroups;
	FBTransientViewStateManager* _transientManager;
	FBEventLiveGuestlistLoadingCell* _loadingCell;
	FBEventAnalyticTracker* _tracker;
	long long _renderLocation;
	NSDate* _startDate;
	BOOL _isLoadingResults;

}

@property (assign,nonatomic) BOOL isLoadingResults;                 //@synthesize isLoadingResults=_isLoadingResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)_loadMoreBirthdays;
-(id)initWithSession:(id)arg1 tracker:(id)arg2 previouslyFetchedBirthdays:(id)arg3 startDate:(id)arg4 ;
-(id)_getAnalyticsExtras;
-(void)didTapComposerButtonForPerson:(id)arg1 ;
-(void)didTapSendMessageForPerson:(id)arg1 ;
-(void)_updateBirthdaysAndSections:(id)arg1 ;
-(void)setIsLoadingResults:(BOOL)arg1 ;
-(void)_showLoadingCellVisible:(BOOL)arg1 ;
-(void)_openGoodwillIntentTarget:(id)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isLoadingResults;
@end

