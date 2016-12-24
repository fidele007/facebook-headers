/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewController.h>

@class FBUserSession, FBMemPage, NSArray, FBPageNotificationSubscriptionsViewController, FBConsistentLookasideCacheObservationHandle;

@interface FBPageSubscriptionsViewController : FBTableViewController {

	FBUserSession* _session;
	FBMemPage* _page;
	NSArray* _sections;
	NSArray* _notificationSettingsKeys;
	FBPageNotificationSubscriptionsViewController* _pageNotificationSubscriptionsViewController;
	FBConsistentLookasideCacheObservationHandle* _pageNotificationSettingsCLCHandle;

}
-(BOOL)fb_showNavBarSearchField;
-(id)initWithSession:(id)arg1 page:(id)arg2 ;
-(void)_didUpdateNotificationStatus:(id)arg1 ;
-(int)settingsTypeForSections:(long long)arg1 ;
-(id)_getNotificationKeyFromIndexPath:(id)arg1 ;
-(id)_getCellTitleForSettingsKey:(id)arg1 ;
-(void)_handleNotificationStatusChange:(id)arg1 ;
-(id)pageNotificationSubscriptionsViewController;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(CGSize)popoverContentSize;
@end

