/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsTableViewController.h>
#import <Facebook/FBGroupsDataLoaderListener.h>

@protocol FBGroupsLandingEditViewControllerConfig;
@class FBGroupsLandingEditDataSource, FBGroupsDataLoader, NSString;

@interface FBMyGroupsEditViewController : FBGroupsTableViewController <FBGroupsDataLoaderListener> {

	FBGroupsLandingEditDataSource* _dataSource;
	FBGroupsDataLoader* _groupsDataLoader;
	id<FBGroupsLandingEditViewControllerConfig> _config;

}

@property (nonatomic,retain) id<FBGroupsLandingEditViewControllerConfig> config;              //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(void)dataLoader:(id)arg1 reloadDataWithError:(id)arg2 ;
-(void)dataLoader:(id)arg1 reloadGroup:(id)arg2 ;
-(void)dataLoader:(id)arg1 deleteGroup:(id)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<FBGroupsLandingEditViewControllerConfig>)config;
-(void)setConfig:(id<FBGroupsLandingEditViewControllerConfig>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

