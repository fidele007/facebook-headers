/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class FBUserSession, FBMemReactionAcornSportsContentSettings, NSString, NSArray, UITableView, NSMutableSet;

@interface FBReactionSportsContentSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	FBUserSession* _session;
	FBMemReactionAcornSportsContentSettings* _contentSettings;
	NSString* _unitTypeToken;
	NSArray* _subscribedTeams;
	NSArray* _suggestedTeams;
	NSArray* _whitelistedLeagues;
	BOOL _hideSubscribeSection;
	BOOL _pushEnabled;
	BOOL _desiredValueForPushEnabled;
	long long _suggestedTeamCount;
	UITableView* _tableView;
	NSMutableSet* _desiredSubscribedTeamIDs;
	NSString* _title;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_titleForSection:(unsigned long long)arg1 ;
+(id)_headerCellForTableView:(id)arg1 sectionIndex:(unsigned long long)arg2 ;
+(UIEdgeInsets)_edgeInsets;
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(id)initWithSession:(id)arg1 contentSettings:(id)arg2 followedTeams:(id)arg3 suggestedTeams:(id)arg4 whitelistedLeagues:(id)arg5 title:(id)arg6 ;
-(void)saveButtonTapped;
-(void)_savePendingChanges;
-(BOOL)_isTeamRowWithIndexPath:(id)arg1 ;
-(void)_toggleItemCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_openLeaguePickerVCFromTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_teamCellForTableView:(id)arg1 teamItem:(id)arg2 indexPath:(id)arg3 ;
-(id)_footerCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_switchCellForPushNotifsForTablView:(id)arg1 indexPath:(id)arg2 ;
-(void)_togglePushEnabled;
-(void)_updatePushEnabledStateWithSuccessBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)_dismiss;
-(void)cancelButtonTapped;
@end

