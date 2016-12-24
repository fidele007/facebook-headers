/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>

@class UITableView, FBUserSession, NSArray, UISearchDisplayController, NSString;

@interface FBGateKeepersViewController : UITableViewController <UITableViewDelegate, UISearchDisplayDelegate> {

	UITableView* _tableView;
	FBUserSession* _session;
	NSArray* _sortedGateKeeperKeys;
	NSArray* _filteredGateKeeperKeys;
	UISearchDisplayController* _searchDisplayController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(void)_filterGKs;
-(id)initWithSession:(id)arg1 title:(id)arg2 ;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
@end

