/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTableViewController.h>

@class FBUserSession, FBEntityFetcher, FBMemPage, NSArray, FBItemContentSummaryConfig;

@interface FBEntityCardTVAiringsTableViewController : FBTableViewController {

	FBUserSession* _session;
	FBEntityFetcher* _fetcher;
	FBMemPage* _page;
	NSArray* _airings;
	FBItemContentSummaryConfig* _summaryConfig;

}
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)cellIdentifierAtIndexPath:(id)arg1 ;
-(id)initWithPage:(id)arg1 session:(id)arg2 ;
-(void)_sendRequest;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)newCellWithIdentifier:(id)arg1 ;
-(void)_handleResponseContent:(id)arg1 error:(id)arg2 ;
-(id)_titleForRow:(long long)arg1 ;
-(id)_episodeLineForRow:(long long)arg1 ;
-(id)_airingStartTimeForRow:(long long)arg1 ;
-(BOOL)_validateRow:(long long)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

