/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBNotificationsSettingsDataSourceListener.h>

@class FBComponentTableViewDataSource, FBNotificationsSettingsDataSource, FBNotificationsOptionSelectionHandler, FBNotificationsSettingsComponentsAdapter, UITableView, UIView, NSString;

@interface FBNotificationsSettingsViewController : UIViewController <FBNotificationsSettingsDataSourceListener> {

	FBComponentTableViewDataSource* _tableViewDataSource;
	FBNotificationsSettingsDataSource* _settingsDataSource;
	FBNotificationsOptionSelectionHandler* _selectionHandler;
	FBNotificationsSettingsComponentsAdapter* _componentsAdapter;
	UITableView* _tableView;
	UIView* _loadingView;
	NSString* _titleSummary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)setLoadingViewHidden:(BOOL)arg1 ;
-(void)notificationsSettingsDataSource:(id)arg1 didLoadOptionSets:(id)arg2 ;
-(void)notificationsSettingsDataSource:(id)arg1 didFailLoadingOptionSetsWithError:(id)arg2 ;
-(void)notificationsSettingsDataSource:(id)arg1 didUpdateOptionSet:(id)arg2 atIndex:(long long)arg3 ;
-(void)_logSettingsLaunchEvent;
-(id)initWithSettingsDataSource:(id)arg1 optionsModificationService:(id)arg2 title:(id)arg3 session:(id)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
