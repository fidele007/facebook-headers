/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol FBEventsDashboardObjectFetcherProtocol;
@class NSArray, FBUserSession, NSString, FBEventAnalyticTracker;

@interface FBEventsDiscoveryListViewController : UITableViewController {

	NSArray* _events;
	id<FBEventsDashboardObjectFetcherProtocol> _fetcher;
	FBUserSession* _session;
	NSString* _viewerId;
	long long _listType;
	NSString* _cutType;
	FBEventAnalyticTracker* _tracker;

}
-(BOOL)fb_showNavBarSearchField;
-(id)initWithFetcher:(id)arg1 session:(id)arg2 viewerId:(id)arg3 listType:(long long)arg4 cutType:(id)arg5 tracker:(id)arg6 ;
-(void)_loadMore;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

