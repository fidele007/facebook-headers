/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBAlertViewCreating;
@class FBMemConfiguration, NSString, FBExperimentManager, NSArray, FBUserSession, UIColor, FBPreferenceChangeConfirmer;

@interface FBExperimentGroupViewController : UITableViewController <UIAlertViewDelegate> {

	FBMemConfiguration* _experiment;
	NSString* _frozenExperimentGroup;
	FBExperimentManager* _experimentManager;
	NSArray* _groups;
	FBUserSession* _session;
	NSArray* _cells;
	BOOL _hasOverride;
	UIColor* _overrideColor;
	UIColor* _activeColor;
	FBPreferenceChangeConfirmer* _confirmer;
	id<FBAlertViewCreating> _alertViewCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showBackArrowButton;
-(BOOL)fb_showAuxiliaryViewController;
-(id)_displayNameForGroup:(id)arg1 ;
-(void)_selectCurrentGroup;
-(long long)_groupSectionIndex;
-(BOOL)_sectionIndexIsInformationSection:(long long)arg1 ;
-(BOOL)_sectionIndexIsOverrideSection:(long long)arg1 ;
-(BOOL)_sectionIndexIsKeySection:(long long)arg1 ;
-(void)_changeOverride:(id)arg1 ;
-(id)initWithExperiment:(id)arg1 experimentManager:(id)arg2 overrideConfirmer:(id)arg3 alertViewCreator:(id)arg4 session:(id)arg5 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
